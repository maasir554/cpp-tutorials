#include <iostream>
using namespace std;

float KmToMile(float dist){
    float converter =  0.62137119;
    return dist * converter;
}

int main(){
    float d;
    cout << "Enter distance in Km's: "; cin >> d;
    cout << "The distance in miles is: " << KmToMile(d);
    return 0;
}

// Mohammad Maasir | 9 September 2023 | 1:03
