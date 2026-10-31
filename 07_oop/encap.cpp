#include<iostream>
#include<vector>
using namespace std;

class BankAccount {

    private:
    string accountno;
    double Balance;
    public:

    BankAccount(string AccNum , double Bal){
        accountno = AccNum;
        Balance = Bal;
    }

    double getBalance() const {
return Balance;
    }
      
    void Deposit(double Ammount){
if (Ammount > 0)
{
    Balance =+ Ammount;
}
else{
    cout<<"INVALID AMMOUNT";
}
    }

void withdraw(double ammount){
if(ammount <= Balance && ammount > 0 ){
    Balance =+ ammount;

}
else{
    cout<<"INVALID WITHDRAWEN AMMOUNT"<<endl;
}

}

    };







int main(){

    BankAccount myaccount("2224980000145" , 5500);
    myaccount.getBalance();
    myaccount.Deposit(200);
    myaccount.withdraw(150);

    return 0;
}