#include <iostream>
using namespace std;

void printDigits(int N) {
    while (N > 0) {
        cout << N % 10 << endl;

        N /= 10;
    }
}

int main(){
    int x;

    cout << "Enter an integer: ";cin >> x;
    
    cout << "the digits are: \n";printDigits(x);
    
    return 0;
}

// Mohammad Maasir | 10 sep 2023 | 00:09
