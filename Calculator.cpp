#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int num1,num2;
   char option;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
   cout << "Choose from following option:" << endl;
   cout << "1. Addition " << endl;
   cout << "2. Substruction " << endl;
   cout << "3. Multiplication " << endl;
   cout << "4. Divison " << endl;
   cout << "5. Reminder " << endl;
   cout << "6. Squre root " << endl;
   
   
   cin >> option;

  
   if (option == '1')
   {
   
    cout << num1+num2;
          
   }
   else if (option == '2')
   {
     cout << num1-num2;
       
      
    
   }
      else if (option == '3')
   {
      cout << num1*num2;
          
   }
      else if (option == '4')
   {
     cout << num1/num2;
          
   }
      else if (option == '5')
   {
     cout << num1%num2;
           
  }
     else if (option == '6')
   {
      cout << pow(num1,0.5);
          
  }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}
