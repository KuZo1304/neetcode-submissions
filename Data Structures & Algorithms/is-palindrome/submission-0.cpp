class Solution {
    string filter(string s) {
        string res;
        for (auto x : s) {
            if (isalnum(x)) {
                res += tolower(x);
            }
        }
        return res;
    }
public:
    bool isPalindrome(string s) {
        string s_fil = filter(s);
        string t_fil = s_fil;
        reverse(t_fil.begin(), t_fil.end());
        return (s_fil == t_fil);
    }
};
