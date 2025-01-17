// Resistance is Everything.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*I did a bunch of stuff that may or may not be good code, but i wanted to help ease myself back into this by pushing 
myself. I look foward to learning how to do this better throughout the semester!
*/

#include <iostream>
#include <string>
#include <thread>
#include <chrono> 
using namespace std;
double r1;
double r2;
int test;
int closeprgm = 0;
double seriesf;
double x;
double y;
double bigcircut;
double bigcircut2;
string YN;

int main()
{
    do {
        //Introduction
        cout << "Hello! Welcome to Jack's Resistor Calculation Program!\n";
        /*I put in a wait command, couldn't think of a better way to do it. Because I didn't
        like it when everything just kind of burst on to the screen */
        this_thread::sleep_for(chrono::milliseconds(500));

        Start:
        do {
            cout << "\nPlease enter in two values for this resistance calculation...\n";
            this_thread::sleep_for(chrono::milliseconds(500));
            do {
                
                cout << "Value 1: ";
                cin >> r1;
                //checks if value is positive/accepatble this is the only way i could figure out how to do it without it looping
                if (cin.fail()) {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "\nThe number you entered is invalid, please enter a different number...\n";
                }
                else if (r1 <= 0) {
                    cout << "\nThe number you entered is invalid, please enter a different number...\n";
                }
                else;
                    
       
            } while (r1 <= 0);

            do {
                cout << "Value 2: ";
                cin >> r2;
                if (cin.fail()) {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "\nThe number you entered is invalid, please enter a different number...\n";
                }
                else if (r2 <= 0) {        
                    cout << "\nThe number you entered is invalid, please enter a different number...\n";
                }
                else;
            } while (r2 <= 0);


            cout << "\nThank you! The values you entered where " << r1 << " and " << r2 << " ohms!";

            bool user_continue = false;
            do {
                cout << "\nAre these values acceptable?\n(Y/N): ";
                cin >> YN;
                if (cin.fail()) {
                    cin.clear(); cin.ignore(512, '\n');
                    cout << "\nYou did not answer with a valid response.";
                }
                else if (YN == "N" || YN == "n" || YN == "no" || YN == "No" || YN == "NO") {
                    user_continue = true;
                    break;
                }
                else if (YN != "Y" && YN != "y" && YN != "yes" && YN != "Yes" && YN != "YES") {
                    cout << "\nYou did not answer with a valid response.";
                }
            } while (YN != "Y" && YN != "y" && YN != "yes" && YN != "Yes" && YN != "YES");
            cout << "Understood.";
            if (user_continue == false) {
                test = 0;
                break;
            }

        } while (test == 0);

        cout << "\nCalculating...";

        seriesf = (r1 + r2);
        cout << "\nIf the resistors where place in series, it would be " << seriesf << " ohms.";

       
        x = (1 / r1);
        y = (1 / r2);
        bigcircut = (x + y);
        bigcircut2 = (1 / bigcircut);
        cout << "\nIf the resistors where place in parallel, it would be " << bigcircut2 << " ohms.";
        this_thread::sleep_for(chrono::milliseconds(500));
       


        do {
            cout << "\nWould you like to use the program again? \n(Y/N): ";
            cin >> YN;

            if (YN == "Y" || YN == "y" || YN == "yes" || YN == "Yes" || YN == "YES") {
                cout << "Restarting program...";
                break;
            }
            else if (YN == "N" || YN == "n" || YN == "no" || YN == "No" || YN == "NO") {
                cout << "stopping program...";
                cout << "\nGoodbye.";
                closeprgm = 1;
                break;
            }
            else if (cin.fail()) {
                cin.clear(); cin.ignore(512, '\n');
                cout << "\nYou did not answer with a valid response.\n";
            }
            else {
                cout << "\nYou did not answer with a valid response.\n";
            }

        } while (1);


    } while (closeprgm != 1);
    return 0;
}
