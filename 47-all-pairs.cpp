#include <iostream>
using namespace std;

void printAllPairs(int arr[], int size){
    for (int i = 0; i <size; i++){
        for (int j = 0; j < size; j++){
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        cout << endl;
    }
    return;
}

int main(){
    int sz;
    cout << "Enter size of array: "; cin >> sz;
    int brr[sz];
    cout << "Enter elements of the array (space separated) : ";
    for (int i = 0; i < sz; i++ ) cin >> brr[i];
    printAllPairs(brr, 3);
    return 0;
}