#include <iostream>
using namespace std; 

int main(){
    int arr1[5];
    cout << "Enter eements one by one \n";

    for (int i = 0; i < 5; i++ ){
        cout << "enter number of index " << i << ": ";cin >> arr1[i];
    }
    cout << "the elements of array are: \n";
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    } 
    cout << endl;

    cout << "The doubles of all items are:\n";

    for (int i = 0; i < 5; i++){
        cout << arr1[i] * 2 << " ";
    }
    cout << endl;

    // To define an array manually :-
    
    int arr2[] = {1,56,89,136};

    for (int i = 0; i < 4 ; i++){
        cout << arr2[i] << endl;
    }
    return 0;
}