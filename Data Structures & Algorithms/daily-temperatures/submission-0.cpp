class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> result(temp.size(),0);
        stack<int> st;
        for(int i =0 ; i<temp.size();i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                
                while( !st.empty() && temp[i] > temp[st.top()]){ 
                  int x= st.top();
                    st.pop();
                    result[x]=i-x;
                }
                st.push(i);
            }
        }
        return result;
    }
};
 