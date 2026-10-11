#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int Hour;
    cout<< "Enter a no from (0-23) :"<<endl;
    cin>>Hour;

    if(Hour>8 && Hour<=18){
        cout<< "Shop is open"<<endl;


    }
    else{
        cout<< "Shop is closed"<< endl;

    }


    return 0;
}