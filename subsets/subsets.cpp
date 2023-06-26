class Solution {
public:
    vector<vector<int>> ans;
    void printsub(vector<int> &nums,  int index, vector<int> v)
    {
        if(index==nums.size())
        {
            ans.push_back(v);
           return;
        }
        
       
        printsub(nums,index+1,v);
         v.push_back(nums[index]);
        
        printsub(nums, index+1,v);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();
        vector<int> v;
        printsub(nums,0,v);
        return ans;
    }
};