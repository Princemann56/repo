class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;

        for(int i=0;i<nums.size();i++){
            auto it=numsMap.find(target-nums[i]);

            if(it!=numsMap.end()) return {i, it->second};
            numsMap.insert({nums[i], i});
        }
        return {-1, -1};
    }
};