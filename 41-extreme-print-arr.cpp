#include <iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left <= right){
        cout << "left: " << arr[left] << "  |  " <<"Right: " << arr[right] << endl;
        left++;
        right--; 
    }
    return;
}


int main(){
    int drr[] = {5,7,9,0,78,6,8};
    extremePrint(drr, 7);
    return 0;

}

// 15 sep 23 | 00:43
