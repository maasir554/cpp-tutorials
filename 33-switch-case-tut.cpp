// tutorial for `case` in c++
#include <iostream>
using namespace std;

int main (){
    int a, b, opr;
    
    cout << "Enter two space-separated integers: "; cin >> a >> b;
    
    cout << "Enter which operation you want perform:\n1 for add\n2 for substract\n3 for divide\n4 for multiply\n>>> ";
    
    cin >> opr;
    
    switch(opr){
        case 1 :
            cout << "The sum is: " << a + b; 
            
            break; // `break` is super IMPORTANT! it prevents below lines from operating.
        
        case 2 :
            cout << "The difference is: " << a - b;
        
            break;
        
        case 3 :
            cout << "The quotient is: " << a / b;
        
            break;
        
        case 4: 
            cout << "The product is: " << a * b;
        
            break;
        
        default : 
            cout << "Wrong Input.";
           
            return 0;
    }

    return 0;
}

// Mohammad Maasir | 9 sep 2023 | 20:02
