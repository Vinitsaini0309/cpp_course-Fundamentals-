#include<iostream>
#include<vector>
using namespace std;


class Chai{

public: 
string Teaname;
int servings;
vector<string> ingridients ;

Chai(string name , int count ,vector<string> ingrid ){

    cout<< " parameterized constructor called"<< endl;
    Teaname = name;
    servings = count;
    ingridients  = ingrid;
};

void displaychai(){
    cout<< "Tea Name: "<< Teaname <<endl;
    cout<<" Servings :" << servings<<endl;
    cout<<"ingridients :";

    for(string ing : ingridients ){
        cout<< ing<<" "<<endl;

    }


};
};

int main(){

Chai lemontea("Lemon tea" , 4 , {"water" , "Milk" , "sugar"});
lemontea.displaychai();
    return 0;
}


