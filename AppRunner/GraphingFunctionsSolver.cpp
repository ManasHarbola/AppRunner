#include <iostream>
#include <math.h>
#include "mainb.h"
using namespace std;

void gfc()
{
    cout << "\n" << "Would you like me to give the ordered\n";
    cout << "pairs of a linear or quadratic function\n";
    cout << "(type in 'l' or 'q' respectively)?\n";
    cout << "If you don't want to use this program, type in 'Exit' or 'exit'.\n\n";
    string reply;
    cin >> reply;
    if (reply == "l"){
        cout << "Would you like me to solve for 1, 3, or\n";
        cout << "5 ordered pairs?\n";
        int reply2;
        cin >> reply2;
            if (reply2 == 1){
            cout << "First, type in your slope value (m).\n";
            cout << "Enter the numerator: \n";
            double numo;
            cin >> numo;
            cout << "Enter the denominator: \n";
            double deno;
            cin >> deno;
            double m = (numo/deno);
            cin.ignore();
            cout << "Enter your y-intercept (b).\n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Here is the ordered pair: \n"
             << "(1," << (m*1+b) << ")\n"
             << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }
    }


            else if (reply2 == 3){
            cout << "First, type in your slope value (m).\n";
            cout << "Enter the numerator: \n";
            double numo;
            cin >> numo;
            cout << "Enter the denominator: \n";
            double deno;
            cin >> deno;
            double m = (numo/deno);
            cin.ignore();
            cout << "Enter your y-intercept (b).\n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Here is the ordered pairs: \n"
                 << "(-1," << (m*-1+b) << ")\n"
                 << "(0," << b << ")\n"
                 << "(1," << (m*1+b) << ")\n"
                 << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }
            }
            else if (reply2 == 5){
            cout << "First, type in your slope value (m).\n";
            cout << "Enter the numerator: \n";
            double numo;
            cin >> numo;
            cout << "Enter the denominator: \n";
            double deno;
            cin >> deno;
            double m = (numo/deno);
            cin.ignore();
            cout << "Enter your y-intercept (b).\n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Here is the ordered pairs: \n"
                 << "(-2," << (m*-2+b) << ")\n"
                 << "(-1," << (m*-1+b) << ")\n"
                 << "(0," << b << ")\n"
                 << "(1," << (m*1+b) << ")\n"
                 << "(2," << (m*2+b) << ")\n"
                 << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }
            }
            else if (reply2 != 1 or reply2 != 3 or reply2 != 5){
                cout << "I think you have made a mistake.\n"
                     << "Rerunning program....\n";
                     gfc();

            }
    }

    else if (reply == "q"){
        cout << "Would you like me to solve for 1, 3, or\n";
        cout << "5 ordered pairs?\n";
        int reply2;
        cin >> reply2;
            if (reply2 == 1){
            cout << "First, type in the value of the variable, 'a': \n";
            cout << "Enter the numerator: \n";
            double numo_1;
            cin >> numo_1;
            cout << "Enter the denominator: \n";
            double deno_1;
            cin >> deno_1;
            double a = (numo_1/deno_1);
            cin.ignore();
            cout << "Next, type in value of the variable, 'b': \n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Enter your y-intercept (c).\n";
            cout << "Enter the numerator: \n";
            double numo_3;
            cin >> numo_3;
            cout << "Enter the denominator: \n";
            double deno_3;
            cin >> deno_3;
            double c = (numo_3/deno_3);
            cin.ignore();
            cout << "Here is the ordered pair: \n"
             << "(1," << (a*(1^2) + b*1 + c ) << ")\n"
             << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }

                }
        else if (reply2 == 3){

            cout << "First, type in the value of the variable, 'a': \n";
            cout << "Enter the numerator: \n";
            double numo_1;
            cin >> numo_1;
            cout << "Enter the denominator: \n";
            double deno_1;
            cin >> deno_1;
            double a = (numo_1/deno_1);
            cin.ignore();
            cout << "Next, type in value of the variable, 'b': \n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Enter your y-intercept (c).\n";
            cout << "Enter the numerator: \n";
            double numo_3;
            cin >> numo_3;
            cout << "Enter the denominator: \n";
            double deno_3;
            cin >> deno_3;
            double c = (numo_3/deno_3);
            cin.ignore();
            cout << "Here are the ordered pairs: \n"
             << "(-1," << (a*((-1)^2) + b*-1 + c) << ")\n"
             << "(0," << c << ")\n"
             << "(1," << (a*(1^2) + b*1 + c ) << ")\n"
             << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }
                }

            else if (reply2 == 5){
            cout << "First, type in the value of the variable, 'a': \n";
            cout << "Enter the numerator: \n";
            double numo_1;
            cin >> numo_1;
            cout << "Enter the denominator: \n";
            double deno_1;
            cin >> deno_1;
            double a = (numo_1/deno_1);
            cin.ignore();
            cout << "Next, type in value of the variable, 'b': \n";
            cout << "Enter the numerator: \n";
            double numo_2;
            cin >> numo_2;
            cout << "Enter the denominator: \n";
            double deno_2;
            cin >> deno_2;
            double b = (numo_2/deno_2);
            cin.ignore();
            cout << "Enter your y-intercept (c).\n";
            cout << "Enter the numerator: \n";
            double numo_3;
            cin >> numo_3;
            cout << "Enter the denominator: \n";
            double deno_3;
            cin >> deno_3;
            double c = (numo_3/deno_3);
            cin.ignore();
            cout << "Here are the ordered pairs: \n"
             << "(-2," << (a*((-2)^2) + b*-2 + c) << ")\n"
             << "(-1," << (a*((-1)^2) + b*-1 + c) << ")\n"
             << "(0," << c << ")\n"
             << "(1," << (a*(1^2) + b*1 + c) << ")\n"
             << "(2," << (a*(2^2) + b*2 + c) << ")\n"
             << "Would you like to rerun this program (Y/n)?\n";
            string rerun;
            cin >> rerun;
            if (rerun == "Y" or rerun == "y"){
                gfc();
            }
            else if (rerun == "N" or rerun == "n"){
                mainb();
            }
             }
            else if (reply2 < 1 or reply2 > 5){
                 cout << "I think you have made a mistake.\n"
                      << "Rerunning program....\n\n";
                      gfc();
            }
    }
    else if (reply == "Exit" or reply == "exit"){
        mainb();
    }
    else if (reply != "l" or reply != "q"){
            cout << "I think you have made a mistake.\n"
                 << "Rerunning program....\n\n";
                 gfc();
    }
}
