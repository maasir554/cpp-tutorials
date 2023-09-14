#include <iostream>
using namespace std;

int main () {
    int n;

    cout<<"entrer the length: ";cin>>n;

    for (int row=0;row<n;row++){
        for(int column=0;column<=row;column++){
            if(column!=row){
                cout<<row+1<<"*";
            }
            
            else{
                cout<<row+1;
            }
        }
        
        cout<<endl;
    }
    return 0;
}

// Mohammad Maasir | 31 August 2023, 22:27:38
