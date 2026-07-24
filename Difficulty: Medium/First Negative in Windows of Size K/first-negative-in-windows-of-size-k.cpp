class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> deq;
        vector<int> ans;
        for(int i = 0; i < k; i++){
            if(arr[i] < 0){
                deq.push_back(i);
            }
        }
        
        if(deq.size() != 0){
            ans.push_back(arr[deq.front()]);
        }else{
            ans.push_back(0);
        }
        
        for(int i = k; i < arr.size(); i++){
            
            if(!deq.empty() && i - deq.front() >= k){
                deq.pop_front();
            }
            
            if(arr[i] < 0){
                deq.push_back(i);
            }
            
            if(deq.size() != 0){
                ans.push_back(arr[deq.front()]);
            }else{
                ans.push_back(0);
            }
            
            
        }

        return ans;
    }
};