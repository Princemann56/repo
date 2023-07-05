class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        int k=1;
        int j=0;
        int result=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            k--;
            while(k<0)
            {
                if(nums[j]==0)
                k++;
                j++;
            }
         result = max(result, i-j);
        }

        return result;
    }
};