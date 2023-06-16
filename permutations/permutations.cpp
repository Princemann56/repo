class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> answer;

        permutation(nums, 0, answer);
        return answer;
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