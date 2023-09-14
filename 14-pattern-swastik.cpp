#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter the size of one hand: "; cin >> n ; cout << endl;
    for (int row = 1; row < 2*n; row++){
        for (int col = 1; col < 2*n; col++){
            if (row == 1){
                if (col == 1 | col >= n){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
            else if (row > 1 & row < n){
                if (col == n | col == 1){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            else if (row == n){
                cout << "* ";
            }
            else if (row > n & row < 2*n-1){
                if(col==n | col == 2*n - 1){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }

            }
            else{
                if(col >=n+1 & col < 2*n - 1){
                    cout << "  ";
                }
                else {
                    cout << "* ";
                }
            }

        }
        cout << endl;
    }
    return 0;
}

// Mohammad Maasir | 03 September 2023, 16:38:11 
