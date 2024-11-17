#include <iostream>

using namespace std;

/**
 * Converts a decimal number to its binary representation.
 * 
 * The function takes a single decimal number as argument and
 * returns its binary representation as an integer.
 * 
 * For example, decToBinary(50) returns 110010.
 * 
 * @param decNum The decimal number to convert.
 * @return The binary representation of the number as an integer.
 */
int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int main () {

    cout << decToBinary(50) << endl;


    return 0;
}