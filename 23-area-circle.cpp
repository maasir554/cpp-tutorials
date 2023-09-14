#include <iostream>
using namespace std;

float ArCir(float r){
    float PIE = 3.1459;
    
    return PIE * r * r;
}

int main(){
    float radius;
    
    cout << "Enter the radius of the circle: ";cin >> radius;
    
    cout << "The Area of the circle is: " << ArCir(radius);
    
    return 0;
}

// Mohammad Maasir | 8 September 2023 | 11:26
