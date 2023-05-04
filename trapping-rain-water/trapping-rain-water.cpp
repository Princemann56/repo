class Solution {
public:

    int trap(vector<int>& height) {
        int lefth[height.size()];
        int righth[height.size()];
        lefth[0]=height[0];
        righth[height.size()-1]=height[height.size()-1];
        int sum=0;
        for(int i=1; i<height.size(); i++)
        {
           lefth[i]=max(height[i], lefth[i-1]);
        }
        for(int i=height.size()-2; i>=0; i--)
        {
           righth[i]=max(height[i], righth[i+1]);
        }
        for(int i=0; i<height.size(); i++)
        {
            sum=sum+min(righth[i], lefth[i])-height[i];
        }
         return sum;

    }
};