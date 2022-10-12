#include <iostream>

using namespace std;

class calculator{
    public:
     int num1;
     int num2;
     int result;
     int getvalue(int number1, int number2){
        num1 = number1;
        num2 = number2;
     }
    
        int add(){
        result = num1 + num2;
        return result;
     }
        int substract(){
        result = num1 - num2;
        return result;
    }
        int multiply(){
        result = num1 * num2;
        return result;
    }
        int divide(){
        result = num1 / num2;
        return result;
    }
};

string banner(){
    cout << "-------------------------------------------------------------" << endl;
    cout << "-                                                           -" << endl;
    cout << "-                       Calculator                          -" << endl;
    cout << "-                                                           -" << endl;
    cout << "-------------------------------------------------------------\n" << endl;
}
int menu(){
    int select;
    cout << "1.) Add" << endl;
    cout << "2.) Substract" << endl;
    cout << "3.) Multiply" << endl;
    cout << "4.) Divide" << endl;
    cout << "5.) Exit" << endl;
    cout << "\nSelect From the Options: ";
    cin >> select;
    switch (select)
    {
    case 1:
        select=1;
        break;
    case 2:
        select=2;
        break;
    case 3:
        select=3;
        break;
    case 4:
        select=4;
        break;
    default:
        exit(0);
    }
    return select;
}


int main(){
    int number1, number2;
    calculator cal;
    banner();
    int op = menu();
    cout << "\nEnter the First Number: ";
    cin >> number1;
    cout << "Enter the Second Number: ";
    cin >> number2;
    cal.getvalue(number1, number2);
    switch (op)
    {
    case 1:
        cout << "\nAnswer is " << cal.add() << endl;
        system("PAUSE");
        break;
    case 2:
        cout << "\nAnswer is " << cal.substract() << endl;
        system("PAUSE");
        break;
    case 3:
        cout << "\nAnswer is " << cal.multiply() << endl;
        system("PAUSE");
        break;
    case 4:
        cout << "\nAnswer is " << cal.divide() << endl;
        system("PAUSE");
        break;
    default:
        break;
    }
    return 0;
}