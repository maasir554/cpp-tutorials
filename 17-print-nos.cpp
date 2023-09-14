#include <iostream>
using namespace std;

void printNos(int N){
    for (int i = 1; i <= N; i++ ) {
        cout << i << endl;
    }
}

int main(){
    int a;

    cout << "Enter a number: ";cin >> a; cout << endl;
    
    printNos(a);
}

// Mohammad Maasir | 7 September 2023
