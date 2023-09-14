#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of lines to output: "; cin >> n; cout << endl;
    int i = 1;
    for(int row = 1; row <= n; row++){
        for (int col = 1; col<= row; col ++){
            cout << i << " "; 
            i++;
        }
        cout << endl;
    }
    return 0;
}

// Mohammad Maasir | 02 September 2023, 18:42:49
