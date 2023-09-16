#include <iostream>
using namespace std;

int getUniqueElement(int arr[], int size){
    // this will work only when there is one unique element in the entire array.
    int uniqueElem = 0;
    for(int i = 0; i < size; i++){
        uniqueElem ^= arr[i];
    }
    return uniqueElem;
}

int main(){
    int arr[] = {1,2,2,1,9,5,6,6,5};
    cout << "Unique Elerment is: " << getUniqueElement(arr,9) ; 
    return 0;
}