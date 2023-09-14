#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter size: "; cin >> n;

    for (int row = 1; row <= n + 1; row++){
        for (int col = 1; col <= row; col++){
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--){
        for (int col = 1; col <= i; col++ ){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}

//it will output (2*n + 1) lines always.
// Mohammad Maasir, 2nd September, 2023, 18:41
