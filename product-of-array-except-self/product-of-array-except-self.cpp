class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftm(nums.size());
        vector<int> rightm(nums.size());
        vector<int> output(nums.size());
        leftm[0]=1;
        rightm[nums.size()-1]=1;
        for(int i=1; i<nums.size(); i++)
        {
            leftm[i]=nums[i-1]*leftm[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--)
        {
            rightm[i]=rightm[i+1]*nums[i+1];
        }
        for(int i=0; i<nums.size(); i++)
        {
            output[i]=leftm[i]*rightm[i];
        }
        return output;
    }
};