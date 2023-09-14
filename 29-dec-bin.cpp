#include <iostream>
using namespace std;

// Manually converet decimal to binary.

int DecToBin(int N) {
    int multiplyer = 1; // fot arranging digits. like : 1*(once digit) + 10*(tens digit) + ...
    
    int finalBin = 0; // final output
    
     // loop for continuous division by 2 , to find remainders and making finalBin number using the digits:
    while (N >=1){     
        int digit = N % 2; // getting the binARY DIGIT.

        N /= 2;  // N = N/2 for next iteration

        finalBin += digit * multiplyer; // NUMBER = ONCE*1 TENS*10 THOUSANDS*1000 + ...

        multiplyer *= 10; // 1 10 10 1000 ...
    }

    return finalBin;
}

int main(){
    int dec;

    cout << "Enter the decimal number: "; cin >> dec;
    
    cout << "The binary value of the decimal number " << dec << " is: " << DecToBin(dec) ;
    
    return 0;
}

// Mohammad Maasir | 9 September 2023 | 12:24 - 12:44 
