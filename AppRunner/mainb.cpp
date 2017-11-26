#include <iostream>
#include <math.h>
#include "calculator.h"
#include "gfc.h"
#include "mainb.h"
#include "coinflip.h"
using namespace std;

void mainb()
{
    cout << "Choose one of the applications by typing in its number:\n\n\n"
         << "1: Calculator Application\n\n"
         << "2: Graphing Functions Calculator\n\n"
         << "3: Heads or Tails Coin Flipper Program\n\n"
         << "4: Exit AppRunner\n\n\n";
    char re;
    cin >> re;
    if (re == '1'){
        calc();

    }
    else if (re == '2'){
        gfc();
    }
    else if (re == '3'){
        coinflip();
    }
    else if (re == '4'){
      return;
    }
    else{
        cout << "Error, incorrect answer\n"
             << "Rerunning program....\n\n";
                mainb();

    }
}

