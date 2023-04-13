class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int idx=0;
       vector<vector<int>> result;
      
       
         sort(intervals.begin(), intervals.end());
       
       for(int i=1; i<intervals.size(); i++)
       {
           if(intervals[idx][1]>= intervals[i][0])
           {
               intervals[idx][1]=max(intervals[i][1],intervals[idx][1]);
               
           }
           else
           {   
               idx++;
               intervals[idx]=intervals[i];
               
           }
       }
       for(int i=0; i<=idx; i++)
       {
          result.push_back(intervals[i]);
       }
       return(result);
    }
};