class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int> merge;
        int i = 0;
        int j = 0;
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                merge.push_back(a[i++]);
            }else{
                merge.push_back(b[j++]);
            }
        }
        
        while(i < a.size()){
            merge.push_back(a[i++]);
        }
        
        while(j < b.size()){
            merge.push_back(b[j++]);
        }
        
        i = 0;
        for(int k = 0; k < a.size(); k++){
            a[k] = merge[i++];
        }
        for(int k = 0; k < b.size(); k++){
            b[k] = merge[i++];
        }
        return;
    }
};