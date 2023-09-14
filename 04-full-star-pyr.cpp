#include <iostream>
using namespace std;

int main(){
    int n; 

    cout << "Enter size: "; cin >> n;

    for (int row = 0; row < n; row++){
        //for white spaces:
        for (int col = 0; col < n - row - 1; col++){
            cout << " ";
        }
        // for the stars *
        for (int col = 0; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// Mohammad Maasir | 01 September 2023, 10:28:21
