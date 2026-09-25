class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        for (char x : s) {
            count[x - 'a']++;
        }
        for (char x : t) {
            count[x - 'a']--;
            if (count[x - 'a'] < 0) return false;
        }

        for (char x = 'a'; x <= 'z'; x++) {
            if (count[x - 'a']) return false;
        }
        return true;
    }
};
