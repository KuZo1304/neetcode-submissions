class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> buckets;
        for (string str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            buckets[temp].push_back(str);
        }

        for (auto item : buckets) {
            result.push_back(item.second);
        }

        return result;
    }
};
