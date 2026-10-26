#include<iostream>
using namespace std;

void pourchai(int &cups){
    cups+=5;
    cout<< "Poured cups : "<< cups <<endl;

}
int main(){
    // Call By Value
    int chaicups = 2;
    pourchai(chaicups);
    cout<< "Total cups are :"<< chaicups <<endl;
    return 0;

}