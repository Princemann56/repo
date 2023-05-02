class Solution {
public:
    int count=0;
    int maximum=0;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            count++;
            if(nums[i]==0)
            {
               maximum=max(maximum, count);
               count=0;
            }
        }
        return max(maximum,count);
    }
};