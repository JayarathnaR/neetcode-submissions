class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string refer = strs[0];

        for (int i = 0; i < refer.length(); i++) {
            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].length() || refer[i] != strs[j][i]) {
                    return refer.substr(0, i);
                }

            }
        }

        return refer;
    }
};