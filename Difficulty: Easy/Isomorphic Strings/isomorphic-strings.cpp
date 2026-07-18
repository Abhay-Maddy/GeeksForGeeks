class Solution {
public:
    bool areIsomorphic(string &s1, string &s2) {

        if (s1.length() != s2.length())
            return false;

        map<char, char> mp1, mp2;

        for (int i = 0; i < s1.length(); i++) {

            if (mp1.count(s1[i]) && mp1[s1[i]] != s2[i])
                return false;

            if (mp2.count(s2[i]) && mp2[s2[i]] != s1[i])
                return false;

            mp1[s1[i]] = s2[i];
            mp2[s2[i]] = s1[i];
        }

        return true;
    }
};