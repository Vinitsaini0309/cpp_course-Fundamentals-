#include<iostream>

using namespace std;

int main(){

    int Teacups ;
    double pricepercup = 10.95 , totalPrice  , Discount;
    cout<< "Enter no of cups :"<< endl;
    cin>>Teacups;
    if (Teacups >20)
    {
        Discount  = 0.20;
    }else if( Teacups > 10 && Teacups<= 20)
    {
        Discount = 0.10;
    }
    else{
        Discount = 0;
    }

    totalPrice = Teacups*pricepercup-(Teacups*pricepercup*Discount);
    cout<< totalPrice<<endl;

    return 0;

}