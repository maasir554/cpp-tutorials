#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout<< "Enter the size: "; cin>> n;
    cout<<endl;
    
    for (int row = 1; row <= n; row++){
        for (int col = 1; col <= n - row + 1; col++){
            if (row == 1) {
         
                cout<<col<<" ";      
            }
         
            else{
                if (col == 1 || col == n - row + 1){
         
                    cout<<col<<" ";
                } 

                else{
                    cout<<"  ";
                }
            }
        }
         cout<<endl;
    }
    return 0;
}

// Mohammad Maasir | 01 September 2023, 12:41:23
