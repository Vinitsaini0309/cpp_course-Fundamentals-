#include<iostream>
#include<vector>
using namespace std;

class Chai{

public: 
string* Teaname;
int servings;
vector<string> ingridients ;

Chai(string name , int count ,vector<string> ingrid ){

    cout<< " parameterized constructor called"<< endl;
    Teaname =  new string(name);
    servings = count;
    ingridients  = ingrid;
};

void displaychai(){
    cout<< "Tea Name: "<< *Teaname <<endl;
    cout<<" Servings :" << servings<<endl;
    cout<<"ingridients :";

    for(string ing : ingridients ){
        cout<< ing<<" "<<endl;

    }


}

Chai( const Chai& Other ){
Teaname = new string(*Other.Teaname);
servings = Other.servings;
ingridients = Other.ingridients;
}

~Chai(){
    delete Teaname;
    cout<< "Deconstructor called"<< endl;
}
};

int main(){

Chai lemontea("Lemon tea" , 4 , {"water" , "Milk" , "sugar"});
lemontea.displaychai();

// Copied chai
Chai copiedchai = lemontea;
copiedchai.displaychai();
*lemontea.Teaname = "Modifies Lemon Tea ";
cout<< "lemon tea------------" << endl;
lemontea.displaychai();
cout<< "copied tea-------------"<< endl;
copiedchai.displaychai();
Chai copythree = lemontea;
copythree.displaychai();


    return 0;
}





