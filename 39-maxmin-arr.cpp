#include <iostream>
#include <limits.h> // for accessing INT_MIN and INT_MAX 
using namespace std;

int MaxArr(int arr[], int length){
    int maxNum = INT_MIN;
    for (int i = 0; i < length; i++){
        if (arr[i] > maxNum) maxNum = arr[i];
    }
    return maxNum;
}

int MinArr(int arr[], int length){
    int minNum = INT_MAX;
    for (int i = 0; i < length; i++ ){
        if (arr[i] < minNum) minNum = arr[i]; // shortened if(){} syntax!
    }
    return minNum;
}

int main(){
   int arr1[] = {6, 89, 90, 50, 45, -8, 779,90};
   cout << "Max number is: " << MaxArr(arr1, 8) << endl;
   cout << "Minimum number is: " << MinArr(arr1, 8) << endl;
   return 0;
}

// 14 sep 23 | 23:37