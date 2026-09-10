#include<iostream>
#include<string>

using namespace std;
 
int main(){
string userTea;
int teaquantity;

cout<<"Enter tea name:"<<endl;
getline(cin , userTea);
//cin>> userTea;

cout<<"How many cups of "<< userTea<<" would you like to have...?";
cin>>teaquantity;
cout<<userTea<<endl;
cout<<teaquantity;


return 0;
}