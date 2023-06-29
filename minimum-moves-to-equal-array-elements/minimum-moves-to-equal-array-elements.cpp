class Solution {
public:
    int minMoves(vector<int>& nums)
     {
        
        int n=nums.size();
        int minimum= nums[0];
        int sum= nums[0];
        for(int i=1; i<n; i++)
        {
            minimum= min(minimum, nums[i]);
            sum= sum + nums[i];
        }
       return (sum- minimum * n);
     }
      

};