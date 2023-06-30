class Solution {
public:
    string getPermutation(int n, int k) {
        string str="";
        for(int i=0; i<n; i++)
        str = str + to_string(i+1);
        if(k==1)
        return str;
        else
        {
            for(int i=1; i<k; i++)
            next_permutation(str.begin(), str.end());
            return str;
        }
    }
};