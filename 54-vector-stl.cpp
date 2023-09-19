#include <iostream>
#include <vector>
using namespace std;

void myPrinter(vector<int> v){
    int size = v.size(); // That's how we get size of a vector object in c++.
    cout << "Vector Array: [ ";
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << "]";
    cout << endl;
    cout << "Size: " << size << " | Capacity: " << v.capacity() << endl;
    (size > 0) ? (cout << "Front element: " << v.front()) : cout << ""; // or v[0] 
    (size > 0) ? (cout << " | Back element: " << v.back()) : cout << ""; // or v[size - 1]
    cout << "\n--------------------\n";
    return;
}

// vector is dynamically sized array in c++.
// it can increase / shrink its size dynamically as we add / remove elements in it.
// it doubles its capacity, everytime its full, and we push a new element in it.


int main(){
    vector<int> myVector; //no need to specify the size. only specify the type of elements.
    myVector.push_back(10);myVector.push_back(20);myVector.push_back(50);
    myPrinter(myVector);

    // for deleting the last element:
    myVector.pop_back();
    myPrinter(myVector);
    
    // for deleting all the elements of vector: 
    myVector.clear();
    myPrinter(myVector);

    // For-Each method of printing a vector :
    vector<int> vec2 = {1,5,9,11,64};
    
    cout << "Second vector: ";
    
    for(auto elem : vec2){
        cout << elem << " ";
    }
    cout << "\n--------------------------\n";

    // for initializing a vector with initial size and default value for each item:

    vector<int> vec3(10,108);
    myPrinter(vec3);
    
    return 0;
}
