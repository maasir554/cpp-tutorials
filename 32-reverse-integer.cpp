#include <iostream>
using namespace std;

int RevInt(int N) {
    // For dealing with -ve integers:
    bool isNeg = false;
    
    if (N < 0){
        N = -N;
        isNeg = true;
    }
    // Now the actual code: 
    int multiplyer;

    int ans = 0;
    // Multipluer will go from max value to 10. eg: 1000 100 10 1
    // the follopwing will find its max value
    for (int i = 1; ;i *= 10){
        if(N / i == 0){
            multiplyer = i / 10 ; // suppose N = 9785, then. N/10000 = 0, but for multiplyer, we would take 1000.
            
            break;
        }
    }
    // for making the reversed integer
    while (N >0){
        int digit = N % 10;
        
        ans += digit * multiplyer;
        
        multiplyer /= 10;
        
        N /= 10;
    }
    
    // OUPPUT:
    if (isNeg) {
        return -ans;
    }
    
    else {
        return ans;
    }
}

int main (){
    int num;

    cout << "Enter an integer: "; cin >> num;
    
    cout << "The reversed integer is: " << RevInt(num); 
    
    return 0;
}

// Mohammad Maasir | 9 sep 2023 | 19:45 
