#include<iostream>
using namespace std;


 
   int* preparechaiorders(int cups){

    int* orders = new int [cups];

    for (int  i = 0; i < cups; i++)
    {
       orders[i] = (i+1)*10;

    }
    return orders;
   }
    
   int main(){

     int cups = 5;
    
int* chaiOrder = preparechaiorders(cups);
for (int  i = 0; i < cups; i++)
{
    cout<< "cups:"<< i+1 <<"has"<< chaiOrder[i] << "ml"<<"\n";
}
delete[] chaiOrder;

return 0;
   }