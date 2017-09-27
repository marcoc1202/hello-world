/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{ 
    cout << "Please enter your name and age.";
    string c_name;
    int ageyrs;
    cin >> c_name >> ageyrs;
    cout << "Your name is\n" <<c_name<< "\nand you are\n" << ageyrs << " years old.";
    cout << "\nSo, you are " <<ageyrs*12<< " months,\n" << ageyrs*365 << " days,\n";
    cout << ageyrs*8740 << " hours, \n" ;
    cout << "or " << ageyrs*525600 << " minutes old.";
}

