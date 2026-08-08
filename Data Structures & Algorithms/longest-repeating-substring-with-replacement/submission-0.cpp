class Solution {
public:
    int characterReplacement(string s, int k) {
       
        int left = 0;
        int maxFreq = 0 ;
        int maxLength = 0; 
        unordered_map<char , int> freq;

        for(int right = 0 ; right< s.size(); right++){
            freq[s[right]]++;

            maxFreq = max(maxFreq , freq[s[right]]);
            int windowLength = right - left +1;
            int replacement = windowLength - maxFreq;

            while(replacement>k){
                freq[s[left]]--;
                left++;

                windowLength = right - left + 1;
                replacement = windowLength - maxFreq;
            }
            maxLength = max(maxLength , right - left +1);
        }

    return maxLength;
    }
};
