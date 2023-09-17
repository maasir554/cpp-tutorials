#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter size of the array: "; cin >> N;
    int *arr1 = new int[N]; // Syntax for an array with a size N.

    cout << "Enter the elements:\n";
    for ( int i = 0; i < N; i++){
        cin >> arr1[i]; 
    }

    
    cout << "the array is:\n";
    
    for (int i = 0; i < N; i++){
        cout << arr1[i] << " ";
    }

    return 0;
}

// but the size once specified, can not be changed. fow that, we have to use vector.
// 17 sep 23 | 13:07
