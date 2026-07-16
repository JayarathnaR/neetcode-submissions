class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt =0 ;
        int prefix =0 ;
        unordered_map<int,int>freq ;
        freq[0]=1;
        for(int num: nums){
            prefix += num;
            if(freq.find(prefix -k)!= freq.end()){
                cnt += freq[prefix-k];
            }

            freq[prefix]++ ;

        }
        

    return cnt;
    }
};