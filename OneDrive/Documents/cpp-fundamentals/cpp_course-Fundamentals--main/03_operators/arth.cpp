#include<iostream>
using namespace std;

int main(){
int Teacups ;
double Price , TotalPrice;

cout<< "Enter no of cups"<<endl;
cin>>Teacups;
cout<< "Enter price per Tea cup"<<endl;
cin>>Price;
TotalPrice = Teacups*Price;
if (150 <= TotalPrice)
{
    TotalPrice = TotalPrice-(TotalPrice*5)/100;
    cout<< TotalPrice <<endl;

}
else{
    cout<<TotalPrice<<endl;

}

    return 0;
}