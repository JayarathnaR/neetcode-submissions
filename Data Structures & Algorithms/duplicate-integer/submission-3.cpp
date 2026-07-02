class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if(nums.size()==0) return false;
    for(int i =0 ; i<nums.size()-1 ; i++){
        if(nums[i+1]==nums[i]){
            return true;
        }
        
    }
    return false;
    
   }
};