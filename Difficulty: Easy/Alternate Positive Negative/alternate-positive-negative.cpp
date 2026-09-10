class Solution {
  public:
    void rearrange(vector<int> &arr) {
        
        vector<int> pos, neg;
        
        for (int x : arr) {
            if (x >= 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }
        
        int j = 0, k =0;
        int i = 0;
        while(i < arr.size()){
            if(k < pos.size()) arr[i++] = pos[k++];
            if(j < neg.size()) arr[i++] = neg[j++];
        }
        
        
    }
};