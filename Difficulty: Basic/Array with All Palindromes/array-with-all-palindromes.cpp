class Solution {
  public:
    bool isPalindrome(int a){
        vector<int> arr;
        
        while(a){
            arr.push_back(a%10);
            a /= 10;
        }
        
        int s = 0;
        int e = arr.size() - 1;
        
        while(s <= e){
            if(arr[s++] != arr[e--]) return false;
        }
        
        return true;
    }
    
    bool isPalinArray(vector<int> &arr) {
        
        for(int i = 0; i < arr.size(); i++){
            if(!isPalindrome(arr[i])) return false;
        }
        
        return true;
    }
};