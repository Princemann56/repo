class Solution {
public:
    bool canJump(vector<int>& nums) {
       int far=nums[0];
        
       for(int i=0; i<nums.size(); i++)
       {    
           
           if(i>far)
           return false;
           far=max(far,nums[i]+i);
           if(far==nums.size()-1)
           break;
        }
      
           return true;

          
     
    }
};