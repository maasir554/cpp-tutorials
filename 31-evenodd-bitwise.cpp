#include <iostream>
using namespace std;

bool isOdd(int numb){
    // using bitwise AND operator.
    // ODD numbers always have 1 at the end of their binary, and even have 0.
    return (numb & 1) ;
}

int main(){
    int N;

    
    cout << "Enter an integer: " ; cin >> N;
    if (isOdd(N)){
        cout << "given number is ODD";
    }

    else {
        cout << "given number is EVEN";
    }
}

// Mohammad Maasir | 9 sep 2023 | 14:31
