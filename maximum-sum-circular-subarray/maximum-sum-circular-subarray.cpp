class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int x;
         if(nums.size()==1)
         return nums[0];
        else
        {
        int res1=nums[0];
        int maxending=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            maxending= max(maxending+nums[i], nums[i]);
            if(maxending>res1)
            res1= maxending;
        }
        if(res1<0)
        return res1;
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum=sum+nums[i];
        }
         for(int i=0; i<nums.size(); i++)
         {
             nums[i]=-nums[i];
         }
        int res2=nums[0];
        int maxending2=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            maxending2= max(maxending2+nums[i], nums[i]);
            if(maxending2>res2)
            res2= maxending2;
        }
        
        int res=sum+res2;

        x= max(res1,res);
        }
        return x;
    }
};