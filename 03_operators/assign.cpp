#include<iostream>
using namespace std;


int main(){
  int Teabags;

  cout<< "Enter no of Teabags :" << endl;
  cin>> Teabags;

if (Teabags < 10)
{
    cout<< "Extra bags are asigned" << endl;
    Teabags +=5;
    cout << Teabags << endl;

}
else{
    cout<< Teabags <<endl;

}


    return 0;
}