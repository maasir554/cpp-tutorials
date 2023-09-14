#include <iostream>
using namespace std;

int main(){
    int n ;
    
    cout << "Enter the lingth of one wing: "; cin >> n; cout << endl;
    
    for (int row = 1; row <= (2*n - 1); row++){

        if (row <= n){

            for(int col = 1; col <= 2*n; col++){

                if (col <= row || col>= 2*n - row + 1){

                    cout << "* ";
                }
                
                else{
                    cout << "  ";
                }
            }
            
        }
        
        else{

             for(int col = 1; col <= 2*n; col++){

                if (col<= 2*n - row || col>=row + 1){

                    cout << "* ";
                }

                else{
                    cout << "  ";
                }
            }

        }
        cout << endl;
    }

    return 0;
}

// Mohammad Maasir, 2nd September, 2023 / 22:22
