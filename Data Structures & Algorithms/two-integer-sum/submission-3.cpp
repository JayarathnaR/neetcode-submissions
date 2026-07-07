class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int , int> mpp;
       for(int i ; i<nums.size();i++){
        int need = target -nums[i];
        if(mpp.count(need)){
            return {mpp[need] ,i };
        }
        mpp[nums[i]]=i;
       }

    return {};
    }
};
