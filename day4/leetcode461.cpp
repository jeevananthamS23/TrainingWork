#include<bitset>

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> binary(x);
        cout<<binary;
        bitset<32>binary1(y);
        int c=0;
        for(int i=0;i<32;i++){
            if(binary[i]!=binary1[i])
            c++;
        }

        return c;
    }
};