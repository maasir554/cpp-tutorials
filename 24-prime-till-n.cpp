#include <iostream>
using namespace std;

// Function to check if a number is PRIME or not:
bool checkPrime(int N){
    for (int i = 2; i <= N; i++){
        if (N%i == 0 && i != N){
            return false;

            break;
        }

        else if (i == N - 1 || N == 2){
            return true;

            break;
        }
    }

    if(N == 1){
        return false; // 1 is neither prime not composite.
    }

}

// Function to print all the prime numbers from 2 to N;
void primePrinter(int N){
    for (int i = 2 ; i <= N; i++) {
        if(checkPrime(i)){
            cout << i << endl;
        }
    }
}

int main(){
    int N;

    cout << "Enter till what value we have to print primes: "; cin >> N;
    
    primePrinter(N);

    return 0;
}

// Mohammad Maasir | 8 September 2023 |11:42 
