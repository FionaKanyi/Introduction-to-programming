// Basic string data
#include <iostream>
using namespace std;

int main()
{
    cout <<"Capturing string data type and limitations of cin>> \n";
    string myName;
    cout <<"Input your full name : ";
    cin >> myName;
    cout << "\n";
    cout <<"Hey,Your name is :" <<myName;
    //Input full name Fiona Kanyi
    //Hey, Your name is: Fiona
    return 0;
}