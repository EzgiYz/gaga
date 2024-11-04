#include <iostream>
using namespace std;
 
 int main(){ 
 float a;
 cout << "Enter a number: " << endl;
 cin >> a;
 char operation;
 cout << "Enter an operation('+','-','*','/'): " << endl;
 cin >> operation;
 float b;
 cout << "Enter a number: " << endl;
 cin >> b;
 
  switch(opreation){
  case '+': 
  cout << a << '+' << b << '=' << a + b ;
  break;
  case '-':
  cout << a << '-' << b << '=' << a - b ;
  break;
  case '*':
  cout << a << '*' << b << '=' << a * b;
  break;
  case '/': 
  cout << a << '/' << b << '=' << a / b;
   if (b==0){
   cout << " ERROR....!;
   }
   break;
   default :
   cout << "ERROR....!;
   break;}
   }
   
