#include<iostream>
#include<string.h>
using namespace std;

int main(){
int Teacups;
string UserRole;
cout<< "Enter your Role :" <<endl;
cin>> UserRole;
cout<< "Enter cupcount:" <<endl;
cin>> Teacups;
if (UserRole == "student" || Teacups >15)
{
    cout<< "User is Eligible For Discount" <<endl;

}else{
    cout<< "Not Eligible For Discount" <<endl;

}


    return 0;

}