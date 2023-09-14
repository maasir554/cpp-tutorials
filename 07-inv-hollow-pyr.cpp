#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size:";cin>>n;
    for (int row=0;row<n;row++){
        //initial spacing
        for (int col=0;col<row;col++){
            cout<<" ";
        }
        //content
        for (int col=0; col<n-row;col++){
            if(col==0 || col==n-row-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// Mohammad Maasir | 01 September 2023, 11:27:16
