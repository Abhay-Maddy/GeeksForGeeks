class Solution {
public:
    double medianOf2(vector<int>& a, vector<int>& b) {

        for (int i = 0; i < b.size(); i++) {
            a.push_back(b[i]);
        }

        sort(a.begin(), a.end());

        double ans;

        if (a.size() % 2 == 0) {
            ans = (a[a.size() / 2] + a[(a.size() / 2) - 1]) / 2.0;
        } else {
            ans = a[a.size() / 2];
        }

        return ans;
    }
};