class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        int carry=0;
       sort(nums.begin(), nums.end());
        int x= n/2;
        int sum2=0;
        for(int i=0; i<n; i++)
        {
            sum2 = sum2 + abs(nums[x]-nums[i]);
        }
        return sum2-carry;
    }
};