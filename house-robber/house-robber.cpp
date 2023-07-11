class Solution {
public:
int function(int index, vector<int> &nums, vector<int> &dp)
{
    if(index==0)
     return nums[index];
    if(index<0)
    return 0;
    if(dp[index]!=-1)
    return  dp[index];
    int pick= function(index-2,nums, dp) + nums[index];
    int notpick= function(index-1,nums, dp);
    
    return  dp[index]= max(pick, notpick);
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n,-1);
        return  function(n-1,nums, dp);
    }
};