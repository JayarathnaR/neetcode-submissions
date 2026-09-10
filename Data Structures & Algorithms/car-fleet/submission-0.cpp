class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int , int>> cars;
        stack<double>fleet;
        for(int i =0 ; i<position.size();i++){
             cars.push_back({position[i],speed[i]});
        }

        sort(cars.begin(),cars.end(),[](auto &a,auto &b){
             return a.first > b.first; 
        });
        for(auto car : cars){
            int pos = car.first;
            int spd = car.second;
            double time = (double) (target - pos) /spd ;
            if(fleet.empty() || time > fleet.top()){
                fleet.push(time);
            }
        }
        return fleet.size();
    }
};
