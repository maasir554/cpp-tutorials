#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";cin>>n;
    //upper part
    for (int row=0;row<n;row++){
        //spacing
        for (int col=0; col<n-row-1;col++){
            cout<<" ";
        }
        //stars
        for (int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //Lower part 
    for (int row=0;row<n;row++){
        //spacing
        for (int col=0; col<row; col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// Mohammad Maasir | 01 September 2023, 11:08:23
