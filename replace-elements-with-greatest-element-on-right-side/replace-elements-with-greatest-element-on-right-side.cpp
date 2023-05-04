class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int arr2[arr.size()];
        arr2[arr.size()-1]= arr[arr.size()-1];
        int cmax=arr2[arr.size()-1];
        for(int i=arr.size()-2; i>=0; i--)
        {  
          cmax=max(cmax,arr[i]);
           arr2[i]=cmax;
        }
        arr[arr.size()-1]=-1;
        for(int i=0; i<arr.size()-1; i++)
        {
          arr[i]=arr2[i+1];
        }

        return arr;
    }
};