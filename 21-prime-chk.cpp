#include <iostream>
using namespace std;

void CheckPrime(int N){
    for (int i = 2; i <= N; i++){
        if (N % i == 0 && i != N){
            cout << "No, " << N << " is NOT prime. It is divisible by " << i <<".";

            break;
        }
        else if (i == N - 1 || i == N){
            cout << "Yes, " <<N<<" is PRIME!";
            
            break;
        }
    }
}

int main(){
    int num1;
    cout << "Enter the number: "; cin >> num1;
    CheckPrime(num1);
    return 0;
}

// Mohammad Maasir
// 9th September, 2023 | 00:26
