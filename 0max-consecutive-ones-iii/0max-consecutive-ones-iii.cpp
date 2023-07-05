class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
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
            result= max(result, i-j+1);
        }
        return result;
    }
};