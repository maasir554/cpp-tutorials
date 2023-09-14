#include <iostream>
using namespace std;

int Factorial(int N){
    int fact = 1;
    
    for (int i = 2; i <= N; i++){
        fact *= i;
    }
    
    return fact;
}

int main(){
    int n1;
    
    cout << "Kiska factorial nikalna hai?\nYaha likho: "; cin >> n1;
    
    cout << "(" << n1 << ")! = " << Factorial(n1);

    return 0;
}

// Mohammad Maasir | 8th September | 1:24
