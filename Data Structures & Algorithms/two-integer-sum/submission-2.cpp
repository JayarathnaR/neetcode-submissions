class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mpp;
        for(int i =0 ; i<nums.size(); i++){
            // mpp.insert({nums[i]=i});
            mpp[nums[i]] = i;
        }
        for(int i =0 ; i<nums.size(); i++){
            int need = target - nums[i];
            if(mpp.count(need) && mpp[need]!=i){
                return{min(mpp[need],i), max(mpp[need],i)};
            }
        }
        
    return{};
    }
};
