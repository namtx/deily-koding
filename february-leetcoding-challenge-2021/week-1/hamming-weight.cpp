#include <iostream>
#include <vector>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while (n) {
            if ((n&1) == 1) { // indicate that the most right bit is 1 or not
                c++;
            }
            n = n>>1; // remove the most right bit
        }

        return c;
    }
};
