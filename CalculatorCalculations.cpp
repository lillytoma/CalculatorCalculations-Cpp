#include <iostream>
#include <cmath>

using namespace std;
float z;

void choices(){
    cout << "Menu" << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "5: Exit" << endl;
    cout << "         " << endl;
}

float addition(float x, float y){
    z = x + y;
    return z; 
}

float subtraction(float x, float y){
    z = x - y;
    return z;
}

float multiplication(float x, float y){
    z = x * y;
    return z;
}

float divison(float x, float y){
    z = x / y;
    return z;
}


int main()
{
    float x,y;
    int choice;
    do{
        choices();
        cin >> choice;
        
        switch(choice){
            
        case 1:
            cout << "Enter numbers: ";
            cin >> x >> y;
            cout << "Sum is " << addition(x,y) << endl;
            cout << " " << endl;
            break;
            
        case 2:
            cout << "Enter numbers: ";
            cin >> x >> y;
            cout << "Difference is " << subtraction(x,y) << endl;
            cout << " " << endl;
            break;
            
        case 3:
            cout << "Enter numbers: ";
            cin >> x >> y;
            cout << "Product is " << multiplication(x,y) << endl;
            cout << " " << endl;
            break;
            
        case 4:
            cout << "Enter numbers: ";
            cin >> x >> y;
            cout << "Quotient is " << divison(x,y) << endl;
            cout << " " << endl;
            break;
            
        case 5:
            cout << "Goodbye!";
            cout << " " << endl;
            break;
            
        }

        
    }while (choice != 5);

    return 0;
}
