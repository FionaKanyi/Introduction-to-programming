//Data string to output personal details
#include <iostream>
using namespace std;

int main()
{
    cout <<"Capturing string data type and limitations of cin>> \n";
    string myName1,myName2,myFavmeal,myFavmovie;
    cout <<"Input your first name :\n ";
    getline(cin,myName1);
    cout <<"Input your last name :\n ";
    getline(cin,myName2);
    cout <<"Input your Favourite meal :\n ";
    getline(cin,myFavmeal);
    cout <<"Input your Favourite movie :\n ";
    getline(cin,myFavmovie);
    cout <<"\n\n";
    cout <<"Hey,Your name is :" <<myName1<<myName2;
    cout <<"Youlove to eat :" <<myFavmeal;
    cout <<"You love watching :" <<myFavmovie;
    
    return 0;
}
