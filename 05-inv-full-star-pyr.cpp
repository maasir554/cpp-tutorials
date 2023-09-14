#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size: ";cin>>n;

    for(int row = 1; row <= n; row++){
        //for initial spacing:
        for(int col = 1; col <= row - 1; col++){
            cout << " ";
        }
        //for stars
        for(int col = 1; col <= n - row + 1; col++){
            cout << "* ";
        }

        cout<<endl;
    }
    
    return 0;
}

// Mohammad Maasir | 01 September 2023, 10:45:51
