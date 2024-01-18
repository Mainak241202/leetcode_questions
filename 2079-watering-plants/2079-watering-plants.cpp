class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int steps=0,cap = capacity;
        for(int i=0;i<n;i++){
            if(cap>=plants[i]){
                steps++;
                cap-=plants[i];
            }
            else{
                cap = capacity;
                cap-=plants[i];
                steps+=(2*i+1);
            }
        }
        return steps;
    }
};
