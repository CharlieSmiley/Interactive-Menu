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
#include <cmath>

using namespace std;

void pmenu();
int itest(int a);
void PI();
void Fcoin();
void Rdie();

int main()
{
//Random # generator setup
int seed, pm;
cout << "enter in the seed (interger > 0) for the number generator: ";
cin >> seed;
cout << seed << endl;
//Intializing the Menu
do
{
pmenu(); // Calling Menu Function
// User Choosing Menu Opition
cout << "1. Calculate PI" << endl;
cout << "2. Flip a Coin" << endl;
cout << "3. Roll a 5-sided Dice" << endl;
cout << "4. Exit Program" << endl;
cout << "Enter your choice: ";
cin >> pm;
cout << pm << endl << endl;

itest(pm);//Integer Test

if (pm == 1)
{
PI();
}
else if (pm == 2)
{
Fcoin();
}
else if (pm == 3)
{
Rdie();
}
}while (pm != 4);

//Closing the program
cout << "Exit selected.  Exiting the program now. . ." << endl << endl;
return 0;
}

void pmenu()//Menu Function
{
cout << string(24,'*') << endl;
cout << string(5,'*') << " Menu Options " << string(5,'*') << endl;
cout << "1) Approximate PI" << endl;
cout << "2) Flip a fair coin" << endl;
cout << "3) Toss a fair 5-sided die" << endl;
cout << "4) Exit" << endl << endl;
}

int itest(int a)//Testing Users Choice
{
while (!cin)
{
cout << string(14,'*') << " Invalid Character " << string(14,'*') << endl;
cout << "==> Invalid character(s) entered." << endl;
cout << "==> Please try again. . ." << endl;
cout << string(47,'*') << endl << endl;
cin.clear();

cout << "Enter your choice: ";
cin >> a;
cout << a << endl << endl;
}

while (a <= 0 || a > 4)
{
cout << string(15,'*') << " Invalid Integer " << string(15,'*') << endl;
cout << "==> Invalid integer entered." << endl;
cout << "==> Please try again. . ." << endl;
cout << string(47,'*') << endl << endl;
cin.clear();

cout << "Enter your choice: ";
cin >> a;
cout << a << endl << endl;
}
return a;
}

void PI()//Calculating PI menu option
{
cout << "Monte Carlo Method for finding PI has been selected" << endl << endl;
double a, x, y, cp, sp, mc, e;
a = 0; //Comparison value
double b; //iterations
cout << "Number of iterations: ";
cin >> b;
cout << b << endl << endl;

//Monte Carlo Method
while (a != b)
{
x = double(rand())/double(RAND_MAX); //x_coord
y = double(rand())/double(RAND_MAX); //y_coord
cp = 0; //circle points
sp = 0; //square points
mc = (x*x)+(y*y); //monte carlo calc

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

e = (4*cp)/sp; //PI value
cout << string(10,'*') << " Option 1: Calculating PI " << string(10,'*') << endl;
cout << "For " << b << " iterations, pi is about " << fixed << setprecision(7) << e << endl;
cout << string(46,'*') << endl << endl;
}

void Fcoin()//Flip a coin menu option
{
double a, x, heads, tails, hp, tp;
a = 0; //Comparison value
cout << "Flipping of a fair coin has been selected" << endl << endl;
double b; //# of flips
cout << "How many flips of the coin? ";
cin >> b;
cout << b << endl << endl;

//Coin Flip Calc
while (a != b)
{
x = double(rand())/double(RAND_MAX); //Random Value
heads = 0; //Heads Value
tails = 0; //Tails Value
if (x <= 0.5)
{
++heads;
}
else if (x > 0.5)
{
++tails;
}
++a;
}
hp = heads/b; // heads %
tp = tails/b; // tails %
cout << string(10,'*') << " Option 2: Flipping a Coin " << string(10,'*') << endl;
cout << "For " << b << " flips of a fair coin:" << endl;
cout << "Heads percentage: " << fixed << setprecision(6) << hp << endl;
cout << "Tails percentage: " << tp << endl;
cout << string(47,'*') << endl << endl;
}

void Rdie()//Rolling a 5-sided dice menu option
{
double a, x, one, two, three, four, five, onep, twop, threep, fourp, fivep;
a = 0;
double b;
cout << "Tossing of a fair 5-sided die has been selected" << endl << endl;
cout << "How many times do you want to roll the die? ";
cin >> b;
cout << b << endl << endl;

//5-sided die calc
while(a != b)
{
x = double(rand())/double(RAND_MAX); //Random Value
one = 0; // side 1
two = 0; // side 2
three = 0; // side 3
four = 0; // side 4
five = 0; // side 5

++a;

if(x < 0.2)
{
++one;
}
else if(x <= 0.2 && x < 0.4)
{
++two;
}
else if(x <= 0.4 && x < 0.6)
{
++three;
}
else if(x <= 0.6 && x < 0.8)
{
++four;
}
else if(x <= 0.8)
{
++five;
}
}

onep = one/b; // side 1 %
twop = two/b; // side 2 %
threep = three/b; // side 3 %
fourp = four/b; // side 4 %
fivep = five/b; // side 5 %
cout << string(10,'*') << " Option 3: Tossing a Die " << string(10,'*') << endl;
cout << "For " << b << " rolls of a fair die:";
cout << "Side 1 percentage: " << onep << endl;
cout << "Side 2 percentage: " << twop << endl;
cout << "Side 3 percentage: " << threep << endl;
cout << "Side 4 percentage: " << fourp << endl;
cout << "Side 5 percentage: " << fivep << endl;
cout << string(45,'*') << endl << endl;
}
