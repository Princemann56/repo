class Solution {
public:
    int normalsubarray(vector<int>& nums)
    {
        int res1=nums[0];
        int maxending=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            maxending= max(maxending+nums[i], nums[i]);
            if(maxending>res1)
            res1= maxending;
        }
        return res1;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int x;
         if(nums.size()==1)
         return nums[0];
        else
        {  int maxsubarray=normalsubarray(nums);
            if(maxsubarray<0)
            return maxsubarray;
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum=sum+nums[i];
        }
         for(int i=0; i<nums.size(); i++)
         {
             nums[i]=-nums[i];
         }
        int circular=normalsubarray(nums);
        
        int res=sum+circular;

        x= max(maxsubarray,res);
        }
        return x;
    }
};