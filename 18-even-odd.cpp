#include <iostream>
using namespace std;

void chkEvenOdd(int num) {
    
    // below is the "ternary operator" , which is basically, an if-else block.
    // condition ? command1 : command2
    // if condition is true, command1 will operate, if false, command2 will operate.
    num%2==0 ? cout << "Even number" : cout << "Odd number";
    return;
}

int main() {
    int N;
    cout << "Enter the number: ";cin >> N;
    chkEvenOdd(N);
    return 0;
}

// Mohammad Maasir | 07 September 2023, 21:33:50
