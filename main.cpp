/*
PIC 10A Homework 4, randomwalk.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/28/2022
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int x = 0;
    int y = 0;
    bool hitBoundary = false; //this is a flag variable.
    bool atOrigin = false; //this is a flag variable.
    srand(time(0)); //srand has to be outside while in order to get random #s.
    while (!hitBoundary && !atOrigin) { //this is the same as both having to be false (just simplified version).
        int random = rand() % 4 + 1;
        if (random == 1) {
            x = x - 1;
            cout << setw(10) << left << "Left" << "(" << x << "," << y << ")" << endl;
        } else if (random == 2) {
            x = x + 1;
            cout << setw(10) << left << "Right" << "(" << x << "," << y << ")" << endl;
        } else if (random == 3) {
            y = y - 1;
            cout << setw(10) << left << "Down" << "(" << x << "," << y << ")" << endl;
        } else if (random == 4) {
            y = y + 1;
            cout << setw(10) << left << "Up" << "(" << x << "," << y << ")" << endl;
        }
        //checks hitBoundary and atOrigin condition
        hitBoundary = x <= -5 || x >= 5 || y <= -5 || y >= 5;
        atOrigin = x == 0 && y == 0;
    }  //ends while loop.
    if (hitBoundary) //same thing as hitBoundary == true (just simplified version) -- prints out boundary or origin based on condition.
    {
        cout << "Hit Boundary!";
    }
    else
    {
        cout << "Back to origin!";
    }
    return 0;
}//clos
