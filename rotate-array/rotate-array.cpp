class Solution {
public:
int h=0;
void reverse(vector<int>& nums, int low, int high)
{
    while(low<high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}
    void rotate(vector<int>& nums, int k) 
    {   
        if(nums.size()==1||nums.size()==k)
            nums;
        if(nums.size()>k)
        {
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0, nums.size()-1-k);
        reverse(nums, 0, nums.size()-1);
        }
        if(nums.size()<k)
        {
           h=k % nums.size();
           reverse(nums,nums.size()-h,nums.size()-1);
        reverse(nums,0, nums.size()-1-h);
        reverse(nums, 0, nums.size()-1);
           
        }
    }
    
};