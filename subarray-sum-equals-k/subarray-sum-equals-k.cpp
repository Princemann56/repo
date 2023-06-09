class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> m;
        int sum =0;
        int res=0;
        m[0]=1;
        for(int i=0; i<n; i++)
        {
           sum= sum + nums[i];
           int diff = sum-k;

           if(m.find(diff)!= m.end())
           res= res + m[diff];

           m[sum]++;

           
        }
        return res;
    }
};