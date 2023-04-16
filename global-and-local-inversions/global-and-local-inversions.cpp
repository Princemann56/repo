class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0);
        for(int i=0; i<nums.size(); i++)
            if(abs(nums[i]-i)>1) return false;
         return true;
    }
};