#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size[1-26]: "; cin >> n;

    for (int row = 0; row <= n; row++){
        for(int col = 0; col < row; col++){
            char ch = 65 + col;
            
            cout<<ch;
        }

        for(int col=row-2;col>=0;col--){
           char ch = 65+col;

            cout<<ch;
        } 

        cout<<endl;
    }
    
    return 0;
}

// Mohammad Maasir | 31 August 2023, 22:51:35
