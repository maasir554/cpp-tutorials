#include <iostream>
using namespace std;

void shiftByOne(int arr[], int size){
    int last = arr[size-1];
    for(int i = size; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return;
}

int main (){
    int brr[] = {70,80,90,100,110,120};
    shiftByOne(brr, 6);
    return 0;
}