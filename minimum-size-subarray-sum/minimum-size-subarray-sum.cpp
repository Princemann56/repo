class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int j=0;
        int sum=0;
        int length= INT_MAX;
        for(int i=0; i<n; i++)
        {
             sum= sum + nums[i];
             if(sum>=target)
             {
                
                 while(sum>=target)
                 {
                      length=min(length, i-j+1);
                     sum= sum-nums[j];
                     j++;
                 }
             }
        }
        if(length==INT_MAX)
        return 0;
        return length;
    }
};