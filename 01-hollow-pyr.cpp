#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <=n ; i++){
        //initial spacing:

        for (int k = 1; k <= n - i ; k++){
            cout << " ";
        }
        //Main Body: 
        
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        } 
        cout << endl;
    }

    return 0;
}

// Mohammad Maasir | 31 August 2023, 22:09:29
