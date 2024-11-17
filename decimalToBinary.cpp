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

/**
 * Converts a binary number to its decimal representation.
 * 
 * The function takes a binary number (represented as an integer)
 * and returns its decimal equivalent.
 * 
 * For example, binaryToDec(110010) returns 50.
 * 
 * @param binNum The binary number to convert.
 * @return The decimal representation of the binary number.
 */
int binaryToDec(int binNum) {
    int ans = 0, pow = 1;

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += (rem * pow);
        
        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main () {

    cout << decToBinary(50) << endl;

    cout << binaryToDec(110010) << endl;


    return 0;
}