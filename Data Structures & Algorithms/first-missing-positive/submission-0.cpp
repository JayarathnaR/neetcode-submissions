class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=1 ; ; i++){
            if(st.count(i)==0){
                return i;
            }
        }
        
    }
};