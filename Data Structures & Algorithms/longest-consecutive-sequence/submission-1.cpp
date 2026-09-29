class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> myset(nums.begin(), nums.end());

        int result = 0;
        for (int& num : nums) {
            if ((num != INT_MIN) and (myset.find(num - 1) != myset.end())) {
                continue;
            }

            int curr = num;
            int chain = 1;

            while ((curr != INT_MAX) and (myset.find(curr+1) != myset.end())) {
                curr++;
                chain++;
            }

            result = max(result, chain);

        }

        return result;

    }
};
