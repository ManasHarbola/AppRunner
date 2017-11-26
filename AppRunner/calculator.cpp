#include "std_lib_facilities.h"
#include <math.h>
#include "mainb.h"
using namespace std;

void calculator()
{
    cout << "Choose one of the following: \n"
         << "1: Add two numbers\n"
         << "2: Subtract two numbers\n"
         << "3: Multiply two numbers\n"
         << "4: Divide two numbers\n"
         << "5: Raise a number to a power\n"
         << "6: Find the square root of a number\n"
         << "7: Find the factorial of a number\n"
         << "8: Exit this program\n\n";
    int reply2;
    cin >> reply2;
    if (reply2 == 1){
        cout << "You have chosen two add two numbers.\n"
             << "Enter your first number: \n\n";
             double first;
             cin >> first;
             cout << "Enter your second number: \n\n";
             double second;
             cin >> second;
             cout << "Your answer is " << (first + second) << " .\n";
             cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 2){
        cout << "You have chosen to subtract two numbers.\n"
             << "Enter you first number: \n\n";
             double first;
             cin >> first;
             cout << "Enter your second number: \n\n";
             double second;
             cin >> second;
             cout << "Your answer is " << (first - second) << " .\n";
             cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 3){
        cout << "You have chosen to multiply two numbers.\n"
             << "Enter your first number: \n\n";
             double first;
             cin >> first;
             cout << "Enter your second number: \n\n";
             double second;
             cin >> second;
             cout << "Your answer is " << (first * second) << " .\n";
             cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 4){
        cout << "You have chosen to divide two numbers.\n"
             << "Enter your first number: \n\n";
             double first;
             cin >> first;
             cout << "Enter your second number: \n\n";
             double second;
             cin >> second;
             cout << "Your answer is " << (first / second) << " .\n";
             cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 5){
        cout << "You have chosen to raise a number to a power\n"
             << "Enter you base number: \n\n";
             double base;
             cin >> base;
        cout << "Enter your exponent: \n\n";
             double expo;
             cin >> expo;
        cout << "Your answer is " << (pow(base, expo)) << " .\n";
        cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 6){
        cout << "You have chosen to find the square root of a number\n"
             << "Enter your number: \n\n";
             double num;
             cin >> num;
        cout << "Your answer is " << (sqrt(num)) << " .\n";
        cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 7){
        int num,i,fac;
    cout << "You have chosen to find the factorial of a number\n";
    cout << "Enter your number: " << endl;
    cin >> fac;
    num=1;
    for(i=1;i<=fac;i++)
    {
        num*=i;
    }
    cout << "Your answer is " << num << " .\n";
    cout << "Would you like to use the calculator again (Y/n)?\n";
             string rerun;
             cin >> rerun;
             if (rerun == "Y" or rerun == "y"){
                calculator();
             }
             else if (rerun == "N" or rerun == "n"){
                mainb();
             }
    }
    else if (reply2 == 8){
        mainb();
    }
    else {
        cout << "Error, rerunning program....\n\n";
        mainb();
    }













}


