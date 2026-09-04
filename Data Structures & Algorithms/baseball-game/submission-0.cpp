class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>record;
        int sum;
        int doub;
        for(int i =0 ; i<operations.size();i++){
            if(operations[i]!="+"&& operations[i]!="D" && operations[i]!="C"){
                record.push(stoi(operations[i]));
            }
            else if(operations[i]=="+"){
                int first = record.top();
                record.pop();
                int sec = record.top();
                record.push(first);
                record.push(first+sec);
            }
            else if(operations[i]=="D"){
                doub = record.top()*2;
                record.push(doub);
            }
            else if(operations[i]=="C"){
                record.pop();
            }
            
        }
        int total =0;
        while(!record.empty()){
            total += record.top();
            record.pop();
        }
        return total;
    }
};