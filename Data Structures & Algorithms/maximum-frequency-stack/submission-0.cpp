class FreqStack {
public:

    unordered_map<int,int> freq;
    unordered_map<int , stack<int>>group;
    
    int maxfreq = 0;

    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        int f = freq[val];
        group[f].push(val);
        maxfreq = max(maxfreq,f);

    }
    
    int pop() {
        int val = group[maxfreq].top();
        group[maxfreq].pop();
        freq[val]--;
        if(group[maxfreq].empty()){
            maxfreq--;
        }
        return val ;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */