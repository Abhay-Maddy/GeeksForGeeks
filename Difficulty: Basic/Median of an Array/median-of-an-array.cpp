class Solution {
  public:
    double findMedian(vector<int> &arr) {
        
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
        double ans;
        
        if(n % 2 == 0){
            n /= 2;
            ans = (arr[n] + arr[n - 1]) / 2.0;
        }
        else{
            n /= 2;
            ans = arr[n];
        }
        return ans;
    }
};