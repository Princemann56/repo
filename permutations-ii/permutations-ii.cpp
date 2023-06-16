
class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> answer;
        vector<vector<int>> answer2;
        map<vector<int>, int> mp;
        permutation(nums, 0, answer);
        for(auto i: answer)
        mp[i]++;

        for(auto i:mp)
        answer2.push_back(i.first);
        return answer2;
    }

    void permutation(vector<int> &nums, int pos, vector<vector<int>> &answer)
    {
        if (pos >= nums.size())
        {

            answer.push_back(nums);
            return;
        }

        for (int i = pos; i < nums.size(); i++)
        {
            swap(nums[pos], nums[i]);
            permutation(nums, pos + 1, answer);
            swap(nums[pos], nums[i]);
        }
    }
};