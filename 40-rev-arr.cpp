#include <iostream>
using namespace std;

void ReverseArr (int arr[], int size) {
	int revArr[size];
	for (int i = 0; i < size ; i++){
		revArr[size - i - 1] = arr[i];
	}
	cout << "The reversed array is: ";
	for (int i = 0; i < size; i++) cout << revArr[i] << " ";
	cout << endl;
	return;
}

// we can also use the swap method:

void SwapRevArr(int arr[], int size){

	int left = 0 ; 
	int right = size - 1;
	while(left <= right){

		swap(arr[left],arr[right]);

		left++; right--;	
	}
	for (int i = 0; i < size; i++) cout << arr[i] << " ";

	cout << endl;

	return;
}


int main(){
	int brr[6] = {56, 78, 90, 345, 1287, 3};
	
	ReverseArr(brr,6);

	SwapRevArr(brr,6);

	return 0;
}
