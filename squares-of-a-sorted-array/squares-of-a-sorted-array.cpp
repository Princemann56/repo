class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left;
        int right;
        vector<int> output(nums.size());
        left=0;
         right= nums.size()-1;
         for(int k=nums.size()-1;k>=0; k--)
         {
             if(abs(nums[right])>abs(nums[left]))
            {
                output[k]=nums[right]*nums[right];
                right--;
            }
            else
            {
                output[k]=nums[left]*nums[left];
                left++;
            }
         }
         return output;;
    }
};