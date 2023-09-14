#include <iostream>
using namespace std;

float Cels(float ferin){
    // Ajeeb sa behaviour:
    // if we write celsius = (5/9)*(ferin - 32), we always get 0;
    float celsius = (ferin - 32) * 5 / 9;
    return celsius;
}

int main(){
    float dF;
    cout << "Enter temperature in degree Ferinheat: "; cin >> dF;
    cout << "Given temperature in degree Celsius is: " << Cels(dF);
    return 0;
}

// Mohammad Maasir | 9 September 2023 | 1:13 - 1:19
