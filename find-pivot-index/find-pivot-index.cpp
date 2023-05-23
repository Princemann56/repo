class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        left[0]=0;
        right[nums.size()-1]=0;
        int sum=0;
        int sum2=0;
        for(int i=1; i<nums.size(); i++)
        {
            sum=sum+nums[i-1];
            left[i]=sum;
        }
        for(int i=nums.size()-2; i>=0; i--)
        {
            sum2=sum2+nums[i+1];
            right[i]=sum2;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(left[i]==right[i])
            return i;
        }
        return -1;

    }
};