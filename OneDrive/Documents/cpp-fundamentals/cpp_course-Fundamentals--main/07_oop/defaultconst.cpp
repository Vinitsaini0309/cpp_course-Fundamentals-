#include<iostream>
#include<vector>
using namespace std;



class Chai{

public: 
string Teaname;
int servings;
vector<string> ingridients ;

Chai(){

    cout<< "constructor called"<< endl;
    Teaname = "Unknown Tea";
    servings = 5;
    ingridients  =  {"water" , "Milk" , "Sugar"};
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

Chai DefaultChai;
DefaultChai.displaychai();
    return 0;
}