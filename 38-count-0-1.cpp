#include <iostream>
using namespace std;

void CountZeroOne(int arr[], int size){
    int count_zero = 0;
    int count_one = 0;
    for (int i = 1; i < size; i++){
        if(arr[i] == 0){
            count_zero ++;
        }
        else if (arr[i] == 1) {
            count_one++;
        }
    }
    cout << "no. of 0's: " << count_zero << endl;
    cout << "no. of 1's: " << count_one << endl;
    return;
}

int main(){
    int arr1[] = {12, 1, 75, 1, 19, 0, 5, 0, 1};
    CountZeroOne(arr1, 9);
    return 0;
}

// 14 sep 23 | 23:16
