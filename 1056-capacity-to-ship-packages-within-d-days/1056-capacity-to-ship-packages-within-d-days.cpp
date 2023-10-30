class Solution {
public:
    int findnoOfdays(vector<int> &weights,int cap){
        int days = 1,load = 0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>cap){
                days++;
                load = weights[i];
            }else{
                load+=weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int m = (low+high)/2;
            int d = findnoOfdays(weights,m);
            if(d<=days){
                high = m-1;
            }else{
                low = m+1;
            }
        }
        return low;
    }
};