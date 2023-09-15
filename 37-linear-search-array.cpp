#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++ ){
        if (arr[i] == target){
            return true; // loop and will end if this happens. 
        }
    }
    return false;
}


int main(){
    int arr1[] = {1, 89, 65, 79, 10, 49, 47};
    int size = 7;
    int numToFind;
    cout << "Enter the number to find: "; cin >> numToFind; 
    
    if (LinearSearch(arr1,size,numToFind)){
        cout << "Found Successfully!";
    }
    else{
        cout<<"NOT found.";
    }

    return 0;
}