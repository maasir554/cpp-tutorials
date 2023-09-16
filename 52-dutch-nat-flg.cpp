#include <iostream>
using namespace std;

void printDutchNationalFlag(int arr[], int size){
    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;
    for (int i = 0; i < size; i++){
        switch (arr[i])
        {
        case 0:
            zero_count++;
            break;
        case 1:
            one_count++;
        case 2:
            two_count++;
        default:
            break;
        }
    }
    int idx = 0;
    while (zero_count--)
    {
        arr[idx] = 0;
        idx++;
    }
    while (one_count--){
        arr[idx] = 1;
        idx++;
    }
    while (two_count--)
    {
        arr[idx] = 2;
        idx++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return;
}

int main(){
    int brr[] = {2,0,0,1,2,0,1,0,1,2,0,1,0,2,0,2,2};
    int sz = 17;
    printDutchNationalFlag(brr, sz);
    return 0;
}

// 17 sep 2023 | 1:30
