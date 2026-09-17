class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string> str;

        int num = 0;
        string curr ="";

        for(char c :s){
            if(isdigit(c)){
                 num = num*10 + (c-'0');
            }
            else if(c=='['){
                nums.push(num);
                str.push(curr);

                num =0;
                curr = ""; 
            }

            else if(c==']'){
                int repeat = nums.top();
                nums.pop();

                string prev = str.top();
                str.pop();

                for(int i =0 ; i<repeat ; i++){
                    prev += curr;
                }

                curr =prev;
            }

            else{
                curr += c;
            }
        }
        return curr;
    }
};