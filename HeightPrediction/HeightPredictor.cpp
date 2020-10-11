#include <iostream>
#include <string>
using namespace std;

int main() {
     
    int i = 0;
    do {
    double mom;
    double dad;
    string boygirl;
   
    
    
    cout <<" \n\nWELCOME TO THE C++ HEIGHT PREDICTION PROGRAM";
    cout <<"\n\n INPUT GENDER TO BEGIN boy/girl: ";
    cin >> boygirl;
   
    cout <<"How tall is your mother in inches: ";
    cin >> mom;
    cout <<"How tall is your father in inches: ";
    cin >> dad;
    
    if (boygirl == "boy") {
        cout <<"Your estimated height is " << (mom *13/12 + dad) / 2 << " inches.";
    }
    
    else if (boygirl == "girl") {
        cout <<"Your estimated height is " << (dad+12/13 + mom) / 2 <<" inches.";
    }


    
    ++i;
    }while (i < 10);
    
}
