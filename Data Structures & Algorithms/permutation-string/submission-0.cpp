class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();

        int left =0;

        vector<int>count1(26,0);
        vector<int>count2(26,0);

        if(n>s2.size()){
            return false;
        }

        for(char c:s1){
            count1[c-'a']++;
        }

        for(int right =0 ; right<s2.size();right++){

            int windowSize = right - left +1;
            
            count2[s2[right]-'a']++;
        
            while(windowSize > n){
                count2[s2[left]-'a']--;
                left++;
                windowSize = right - left +1;
            }

            if(count1 == count2){
                return true;
            }

        }
        return false;
    }
};
