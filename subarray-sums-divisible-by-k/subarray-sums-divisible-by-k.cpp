class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        map<int, int> m;
        int sum = 0,res = 0;
        m[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum= sum + nums[i];
            int rem = 0;
             (sum >= 0) ? rem = sum % k : rem = (k + (sum % k)) % k;
            // if (sum >= 0)
            // rem = sum % k; 
            // else if (sum < 0)
            //     rem = (k + (sum % k)) % k;
            if (m.find(rem) != m.end())
                res= res +  m[rem];
            m[rem]++;
        }

        return res;
    }
};