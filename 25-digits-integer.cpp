#include <iostream>
using namespace std;

void digiPrinter (int N) {
    int tempNum = N; // isko baar baar 10 sei divide krna hi isliye temp naam diya hai.

    for (int i = 10; i < N*10; i *= 10){
        int minuser = tempNum / 10; // isko minus krna hai isliye minus-er naam diya hai
        // int type hai isliye `minuser` divide honey k baad *truncate* ho jayega.

        int digit = tempNum - minuser*10; // truncate honey k baad 10 se phir multiply kra hai
        // kyu multiply kra, uske liye thoda sa dimaag dodaao.

        cout << digit << endl;

        tempNum = minuser; 
    }

}

int main(){
    int NUM;

    cout << "Enter the number whose digits you want to print: ";cin >> NUM;

    digiPrinter(NUM);

    return 0;
}

// Mohammad Maasir | 8 September | 12:04
