class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        int mod = n + 1;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int index = (nums[i] % mod) - 1;
            nums[index] = nums[index] + mod;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] / mod == 2) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};