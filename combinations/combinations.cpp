class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=0; i<n; i++)
        nums[i]=i+1;
        int p = 1 << n;
      
        vector<vector<int>> subs(p);
        vector<vector<int>> ans;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i>>j) & (1!=0)) {
                    subs[i].push_back(nums[j]);
                }
            }
        }

        for(int i=0; i<p; i++)
        {
            if(subs[i].size()==k)
            ans.push_back(subs[i]);
        }
        return ans;
    }
};