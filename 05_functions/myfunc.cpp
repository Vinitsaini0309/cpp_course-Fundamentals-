#include<iostream>
using namespace std;


int CheckTemp(int temprature){

    return temprature;

}

void servechai(int cups );

void makechai(){
    cout<< "Boiling water , adding tea leaves , straing....."<<endl;
}

// Default parameter

void servechai(string Teatype = "Masala Chai"){
    cout<< "serving "<<Teatype<<endl;
}

int main(){

//   int  tempValue = CheckTemp(47);
//   cout<<tempValue<<endl;
//   makechai();
//   servechai(3); 
servechai();
    return 0;
}

void servechai(int cups){
    cout<< "Serving"<<" "<< cups << " of Chai"<< endl;
}
void servechai(int cups , int tealeaves){}