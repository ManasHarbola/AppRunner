#include <iostream>
#include <ctime> // Needed for the true randomization
#include <cstdlib>
#include "mainb.h"
using namespace std;

void coinflip()
{
	int xRan;
	srand( time(0)); // This will ensure a really randomized number by help of time.

	xRan=rand()%20+1; // Randomizing the number between 1-15.
	if (xRan == 1 or xRan == 3 or xRan == 5 or xRan == 7 or xRan == 9 or xRan == 11 or xRan == 13 or xRan == 15 or xRan == 17 or xRan == 19){
        cout << "The coin shows HEADS.\n"
             << "Would you like to 'flip' the coin again (Y/n)?\n";
        char a;
        cin >> a;
        if (a == 'Y' or a == 'y'){
            coinflip();
        }
        else if (a == 'N' or a == 'n'){
            mainb();
        }
	}
	else if (xRan == 2 or xRan == 4 or xRan == 6 or xRan == 8 or xRan == 10 or xRan == 12 or xRan == 14 or xRan == 16 or xRan == 18 or xRan == 20){
        cout << "The coin shows TAILS\n"
             << "Would you like to 'flip' the coin again (Y/n)?\n";
        char a;
        cin >> a;
        if (a == 'Y' or a == 'y'){
            coinflip();
        }
        else if (a == 'N' or a == 'n'){
            mainb();
        }

	}

}

