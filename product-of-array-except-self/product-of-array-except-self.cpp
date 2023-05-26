

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
        vector<int> output(3*nums.size());
        output[0]=1;
        output[2*nums.size()-1]=1;
        for(int i=1; i<nums.size(); i++)
        {
            output[i]=nums[i-1]*output[i-1];
        }
        for(int i=(2*nums.size()-2); i>=nums.size(); i--)
        {
            output[i]=output[i+1]*nums[i+1-nums.size()];
        }
        for(int i=(2*nums.size()); i<(3*nums.size()); i++)
        {
            output[i]=output[i-2*nums.size()]*output[i-nums.size()];
        }
        output.erase(output.begin(), output.end()-nums.size());
        return output;
    }
};