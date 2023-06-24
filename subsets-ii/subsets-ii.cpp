class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       int n = nums.size(), p = 1 << n;
       sort(nums.begin(),nums.end());
        vector<vector<int>> subs(p);
        vector<vector<int>> ans;
        map<vector<int>,int> mp;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i>>j) & (1!=0)) {
                    subs[i].push_back(nums[j]);
                }
            }
        }

        for(auto i : subs)
        mp[i]++;
        for(auto i :  mp)
        ans.push_back(i.first);

        return ans;

        
    }
};