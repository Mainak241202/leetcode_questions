class Solution {
public:
    bool findDigit(int num){
        int n = num;
        while(n>0){
            int dig = n%10;
            if(dig==0) return false;
            if((num%dig)!=0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(findDigit(i)){
                v.push_back(i);
            }
        }
        return v;
    }
};