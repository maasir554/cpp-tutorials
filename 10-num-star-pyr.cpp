#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter number of lines to output: "; cin >> n;
    cout << endl;
    for (int row = 1; row <= n; row++ ){
        //initial stars:
        for (int col = 1; col <= n - row; col++){
            cout << "* ";
        }
        //for numbers + stars:
        for (int col = 1; col <= (2*row - 1); col++){
            if ( col % 2 != 0 ) {
                cout << row << " ";
            } 
            
            else {
                cout << "* ";
            }
        }
        //ending stars:  stars:
        for (int col = 1; col <= n - row; col++){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}

// Mohammad Maasir, 2nd September, 2023 18:29
