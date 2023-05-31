class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        int n = nums.size();
        int close;
        int high = INT_MAX;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            int start = i + 1;
            int end = n - 1;

            
            while (start < end)
            {
                int sum = nums[start] + nums[end] + nums[i];

                if (sum == target)
                    return target;
                else
                {

                    if (sum < target)
                        start++;
                    else

                        end--;
                }

                if (high > abs(sum - target))
                {
                    high = abs(sum - target);
                    close = sum;
                }
            }
        }

        return close;
    }
};