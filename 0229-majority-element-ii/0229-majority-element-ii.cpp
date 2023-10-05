class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el1 = INT_MIN,el2 = INT_MIN;
        int c1 = 0,c2 = 0;
        for(int i=0;i<n;i++){
            if(el1==nums[i]){
                c1++;
            }
            else if(el2==nums[i]){
                c2++;
            }
            else if(c1 == 0){
                el1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0){
                el2 = nums[i];
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> v;
        c1 = 0, c2 = 0;
        for(int i=0;i<n;i++){
            if(el1==nums[i]){
                c1++;
            }
            if(el2==nums[i]){
                c2++;
            }
        }
        int mini = (int)(n/3) + 1;
        if(c1>=mini){
            v.push_back(el1);
        }
        if(c2>=mini){
            v.push_back(el2);
        }
        sort(v.begin(),v.end());
        return v;
    }
};