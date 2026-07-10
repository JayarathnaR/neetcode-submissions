class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul = 1;
        for(int i =0 ; i< nums.size(); i++){
            for(int j = 0 ; j< nums.size() ; j++){
                if( j ==i){
                    continue;
                }
                else{
                 mul *= nums[j];
                }
            }
            ans.push_back(mul);

            mul =1;
            
        }
        return ans;

    }
};
