class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int max_len = 0;
        int len;

        unordered_set<int> st(nums.begin(), nums.end());
        
        for(int num : st){
            if(st.count(num-1)==0){
                int current = num;
                 len = 1;

                while(st.count(current+1)){
                    current++;
                    len++;

                }
             max_len = max(max_len , len);
            }
            
        }
        return max_len;;
    }
};
