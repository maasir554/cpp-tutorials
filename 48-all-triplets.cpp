#include <iostream>
#include <stdio.h>
using namespace std;

void printAllTriplets(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            for (int k = 1; k < size; k++){
                printf("(%d, %d, %d) ",arr[i],arr[j],arr[k]);
            }
        }
        cout << endl;
    }

    return;
}

int main() {
    int brr[3] = {1,2,3};
    printAllTriplets(brr,3);
    return 0;
}