#include<iostream>
using namespace std;
 
int main(){
int Teacups;
cout<< "No Of Teacups :"<< endl;
cin >> Teacups;

if (Teacups > 20)
{
    cout<<"Congrats You Hve Got a GOLD BADGE" <<endl;

}
else if(Teacups>10 && Teacups <=20){
cout<< "Congrats You HAve Got A SILVER BADGE" <<endl;


}
else{
    cout<< " Thank You Visit Again" << endl;

}


    return 0;
}