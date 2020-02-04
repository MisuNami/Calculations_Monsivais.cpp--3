// Christian Monsivais COSC 1436 IDE: Repl.it tool this is a program to work with the various arithmetic operators in C++ and conditions


#include <iostream>
#include <cmath>

using namespace std;


int main() 
{
 // Declare and initilized

double number1 = 0.0;
double number2 = 0.0;

int number3 = 0;
int number4 = 0;


// input 

cout <<" Please enter your first number: ";
cin >> number1;


cout <<"Please enter your second number: ";
cin >> number2;
while (number2 == 0) // Validate that number is not a 0
{
  cout <<"Division by 0 not permitted in math\n";
cout << "Please enter your second number: ";
cin >> number2;
 } 

cout <<"Please enter your third number: ";
cin >> number3;

cout <<"Please enter your fourth number: ";
cin >> number4;
while (number4 == 0) // Validate that number is not a 0
{
  cout <<"Division by 0 not permitted in math\n";
cout << "Please enter your fourth number: ";
cin >> number4;
 } 

// Process

double addition = number1 + number2;
double subtraction = number1 - number2;
double multiplication = number1 * number2;
double division = number1 / number2;
int modolus = number3 % number4;

//output

cout <<"\naddition of number1 and number2 =" << addition << endl;
cout <<"\nsubtraction of number1 and number2 = " << subtraction << endl;
cout <<"\nmultiplication of number1 and number2 = " << multiplication << endl;
cout <<"\ndivision of number1 and number2 = " << division << endl;
cout <<"\nmodolus of number3 and number4 = " << modolus << endl;


  return 0;
}