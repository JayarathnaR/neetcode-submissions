class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        // -------------------------
        // First Pass:
        // Find the two possible candidates
        // -------------------------
        for (int num : nums) {

            // Rule 1: Matches first candidate
            if (num == candidate1) {
                count1++;
            }

            // Rule 2: Matches second candidate
            else if (num == candidate2) {
                count2++;
            }

            // Rule 3: First candidate slot is empty
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            }

            // Rule 4: Second candidate slot is empty
            else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            }

            // Rule 5: Current number matches neither candidate
            else {
                count1--;
                count2--;
            }
        }

        // -------------------------
        // Second Pass:
        // Verify the candidates
        // -------------------------
        count1 = 0;
        count2 = 0;

        for (int num : nums) {
            if (num == candidate1)
                count1++;
            else if (num == candidate2)
                count2++;
        }

        vector<int> ans;

        if (count1 > nums.size() / 3)
            ans.push_back(candidate1);

        if (count2 > nums.size() / 3)
            ans.push_back(candidate2);

        return ans;
    }
};