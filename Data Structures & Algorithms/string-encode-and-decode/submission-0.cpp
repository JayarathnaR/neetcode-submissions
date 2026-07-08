class Solution {
public:

    string encode(vector<string>& strs) {

        if(strs.empty()){
            return "";
        }
        string encoded = "";
        for(string str:strs){
           encoded += to_string(str.size());
           encoded += ",";
        }
        encoded.pop_back();

        encoded += "#";
        for(string str:strs){
            encoded += str;
        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<string> result;
        vector<int> length;

        if(s.empty()){
            return {};
        }
        int hash = s.find('#');
        
        string num ="";

        for(int i =0 ; i<hash ; i++){
            if(s[i]==','){
                length.push_back(stoi(num));
                num ="";
            }
            else{
                num += s[i];
            }                
        }
        length.push_back(stoi(num));
       
        int pos = hash +1;
        for(int x:length){
        result.push_back(s.substr(pos,x));
        pos += x;

        }

        return result;



    }
};
