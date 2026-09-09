class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        stack <int> st;
        for( int s : asteroids){
            while(!st.empty()&& st.top()>0 && s<0){
                if(abs(st.top())<abs(s)){
                    st.pop();
                }
                else if(abs(st.top())==abs(s)){
                    st.pop();
                    s=0;
                    break;
                }
                else if(abs(st.top())>abs(s)){
                    s = 0;
                    break;
                }

            }
            if(s!=0){
                st.push(s);
            }
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};