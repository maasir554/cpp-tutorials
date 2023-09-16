#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size){
    int oneCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] == 1) oneCount++;
        if (arr[i] == 0) zeroCount++;
    }
    int idx = 0;
    while(zeroCount--){ // this loop will stop when zeroCount becomes 0;
        arr[idx] = 0;
        idx++;
    }
    while (oneCount--)
    {
        arr[idx] = 1;
        idx++;
    }

    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    
}

int main(){
    int brr[] = {1,0,1,0,1,0,1,1,1,0,0,1,1};
    sortZeroOne(brr, 13);
    return 0;
}