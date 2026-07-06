class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n/2;
    
        sort(nums.begin(), nums.end());
        int cnt =1;
        for(int i = 1; i<n ; i++){
            if(nums[i]==nums[i-1]){
                cnt ++;
               if(cnt> maj){
                return nums[i];
               }
            }
            else{
                cnt = 1;                                                    
            }
        }
        return nums[0];
    }
};