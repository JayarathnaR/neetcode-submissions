class Solution {
public:
    string simplifyPath(string path) {
        stack <string> st;

        string current = "";
        for(char c : path){
            if(c =='/'){
                if(current == ""|| current =="."){
                    
                }
                else if(current == ".."){
                    if(!st.empty()){
                        st.pop();
                    }
                }

                else{
                    st.push(current);
                }

                current = "";
            }
            else{
            current += c;
            }
        }

        if(current == ".."){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(current != "" && current != "."){
            st.push(current);
        }
        
        
        string ans = "";
        while(!st.empty()){
            ans = "/"+st.top()+ans;
            st.pop();
        }

        if(ans == ""){
            return "/";
        }

        return ans;

    }
};