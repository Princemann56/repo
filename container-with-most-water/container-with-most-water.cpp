class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0; 
        int n= height.size();
        int start= 0;
        int end= n-1;
        while(start<end)
        {
            if(height[start]>height[end])
            {
                ans= max(ans, (end-start)*height[end]);
                end--;
            }
            else 
            {
                ans=max(ans,(end-start)*height[start]);
                start++;
            }
        }
        return ans;
    }
};