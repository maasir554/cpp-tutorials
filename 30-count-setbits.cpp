#include <iostream>
using namespace std;

// setbits 1 in the binary.
int count_setbits(int N){
    int csb = 0;

    while (N >= 1) {
        if(N%2 == 1) {
            csb += 1;
        }

        N /= 2;
    }

    return csb;
}

int main (){
    int num;
    
    cout << "Enter an integer: "; cin >> num;
    
    cout << "The number of setbits in the binary of " << num << " is " << count_setbits(num);
    
    return 0; 
}

// Mohammad Maasir | 9 September 2023 | about 13:00
 