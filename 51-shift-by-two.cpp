#include <iostream>
using namespace std;

void shiftByTwo(int arr[],int size){
    int lst = arr[size - 1];
    int slst = arr[size - 2];
    for (int i = size - 1; i > 1; i--){
        arr[i] = arr[ i - 2];
    } 
    arr[0] = slst;
    arr[1] = lst;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return;
}

int main(){
    int brr[] = {10,20,30,40,50,60};
    shiftByTwo(brr, 6);
    return 0;
}