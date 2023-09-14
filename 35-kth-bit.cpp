#include <iostream>
using namespace std;

// funvtion that switches k'th bit (from right) to 1

int switchBit (int N, int k){
    return  N | (1<<k); // bitwise operators use karey h.
}

int main () {
    int inp ;
    int k;
    cout << "Enter an integer: "; cin >> inp;
    cout << "Enter which index number you have to shift (rightmost digit have index 1.): "; cin >> k;
    cout << "The switched number is: " << switchBit(inp,k);
    return 0;
}