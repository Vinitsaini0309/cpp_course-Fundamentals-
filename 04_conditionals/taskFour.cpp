#include<iostream>
#include<string.h>
using namespace std;

int main(){
 
    int TeaNo;
    double price;
    cout<< "Select YOur Tea:"<<endl;
    cout<< "1 , Green Tea"<< endl;
cout<< "2, Black Tea"<<endl;
cout<< "3, Masala Chai"<<endl;
cout<< "4, Rajwaadi Chai"<<endl;
    cout<<"Enter Tea NO. You Wanted :"<< endl;
  cin>> TeaNo;
    switch (TeaNo)
    {
    case 1:
        cout<<"you selected Green Tea"<<endl;
        price = 2.0;
        break;
        case 2:
        cout<< "you selected Black Tea"<<endl;
    price = 3.0;
    break;
    case 3:
    cout<< "you selected Masala Chai"<<endl;
    price = 5.0;
    break;
    case 4 :
    cout<<"you selected Rajwaadi Chai"<<endl;
    price = 10.00;
    break;

    default:
    price = 0;
    cout<<"Enter A Valid No"<<endl;
    
    }
    cout<< price<<endl;
    return 0;

}
