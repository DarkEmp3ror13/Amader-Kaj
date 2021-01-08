# include <iostream>
#include<math.h>
using namespace std;
int main()
{
    char op;
    int num1, num2;
    cout << "Enter operator either + or - or * or / or % or ^: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        case '%':
            cout << num1%num2;
            break;
        case '^':
            cout <<  pow(num1,0.5);
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}