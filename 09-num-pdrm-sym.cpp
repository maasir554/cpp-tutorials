#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of lines to output: ";cin >> n;
    cout << endl;
    for (int row = 1; row <= n; row++){
        
        //initial spaces:
        for (int col = 1; col <= n - row; col++){
            cout << "  ";
        }
        //increasing numbers:
        for (int col = 1; col <= row; col++ ){
            cout << col << " ";
        }
        //decreaasing numbers:
        for (int i = row - 1;i >= 1; i--){
            cout << i << " ";
        } 
        cout << endl;
    }

    return 0;
}

// Mohammad Maasir | 02 September 2023, 17:41:51
