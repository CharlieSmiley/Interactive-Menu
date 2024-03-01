//
//Program Title: Interactive Menu
//Project File: Project_07.cpp
//Name: Charlie Smiley
//Course Section: CPE-211-02
//Lab Section: 1
//Due Date: 10/19/21
//
#include <iostream>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    //Random # generator setup
    int seed;
    cout << "enter in the seed (interger > 0) for the number generator: ";
    cin >> seed;
    cout << seed << endl;

    void pmenu(void)
    {
        cout << string(24,"*") << endl;
        cout << string(5,"*") << " Menu Options " << string(5,"*") << endl;
        cout << "1) Approximate PI" << endl;
        cout << "2) Flip a fair coin" << endl;
        cout << "3) Toss a fair 5-sided die" << endl;
        cout << "4) Exit" << endl << endl;
    }

    //Interger Test
    void itest(int a)
    {
        int a;
        while (a < 0 || a > 4)
        cout << string(15,"*") << " Invalid Integer " << string(15,"*") << endl;
        cout << "==> Invalid integer entered." << endl;
        cout << "==> Please try again. . ." << endl;
        cout << string(47,"*") << endl << endl;
        cin.clear();

        cout << "Enter your choice: ";
        cin >> a;
        cout << a << endl << endl;
    }

    //Calculate PI
    void PI()
    {
        cout << "Monte Carlo Method for finding PI has been selected" << endl << endl;

        double float a = 0;
        double float b;
        cout << "Number of iterations: ";
        cin >> b;
        cout << b << endl << endl;
        
        //Monte Carlo Method
        while (a != b)
        {
            double float x = double(rand())/double(RAND_MAX);
            double float y = double(rand())/double(RAND_MAX);
            double float cp = 0; //circle points
            double float sp = 0; //square points
            double float mc = (x*x)+(y*y); //monte carlo calc

            if (mc <= 1)
            {
                ++cp;
            }
            else
            {
                ++sp;
            }

            ++a;
        }

        double float e = (4*cp)/sp;
        cout << string(10,"*") << " Option 1: Calculating PI " << string(10,"*") << endl;
        cout << "For " << b << " iterations, pi is about " << fixed << setprecision(7) << e << endl;
        cout << string(46,"*") << endl << endl;
    }

    //Flip a coin
    void Fcoin()
    {
        cout << "Flipping of a fair coin has been selected" << endl << endl;
        double float a;
        cout << "How many flips of the coin? ";
        cin >> a;
        cout << a << endl << endl;

        //Coin Flip Calc
    }

    //Intializing the Menu
    do
    {
        pmenu(); // Calling Menu Function

        // User Choosing Menu Opition
        int pm;
        cout << "Enter your choice: ";
        cin >> pm;
        cout << pm << endl << endl;

        itest(pm);

        while (itest.fail(pm))
        {
            cout << string(14,"*") << " Invalid Character " << string(14,"*") << endl;
            cout << "==> Invalid character(s) entered." << endl;
            cout << "==> Please try again. . ." << endl;
            cout << string(47,"*") << endl << endl;
            cin.clear();

            cout << "Enter your choice: ";
            cin >> pm;
            cout << pm << endl << endl;
            itest(pm);
        }

        
    
    } while (pm != 4)
    
    
    
    
    return 0
}
