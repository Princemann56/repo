class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
    int n=matrix.size();//number of rows
    int m=matrix[0].size();// number of columns
    vector<vector<int>> ans;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
            v.push_back(matrix[j][i]);
        ans.push_back(v);
    }
    return ans;


    }
};