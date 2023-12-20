class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flips = 0;
        int XOR = start^goal;
        while(XOR){
            if(XOR&1){
                flips++;
            }
            XOR>>=1;
        }
        return flips;
    }
};