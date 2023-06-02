class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
         set<vector<int>> s;
        
        if (nums.size() < 4)
        {
            return {};
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int start= j+1; 
                int end= n-1;
                
                while(start<end)
                {
                   long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[start];
                    sum += nums[end];
                    if(sum>target)
                    end--;
                    else if(sum<target)
                    start++;
                    else
                    {
                       s.insert({nums[i], nums[j], nums[start], nums[end]});
                       start++;
                       end--;
                }
            }
        }
       
    }
    for(auto i : s)
            output.push_back(i);
        return output;}

};