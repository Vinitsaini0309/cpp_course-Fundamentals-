#include<iostream>
using namespace std;
#include<vector>


class chai{
public:
    string Teaname;
    int servings;
    vector<string> ingridients; // list of ingridients foe tea its an string array

// member functions

void displaychai(){
    cout<< "Tea Name: "<< Teaname <<endl;
    cout<<" Servings :" << servings<<endl;
    cout<<"ingridients :";

    for(string ing : ingridients ){
        cout<< ing<<" "<<endl;

    }

}

};


int main(){
 chai chaiOne;
 chaiOne.Teaname = "leamon Tea";
 chaiOne.servings = 2;
 chaiOne.ingridients = {"Water" , "Tea leaves" , "Sugar"};
 chaiOne.displaychai(); 

 chai chaiTwo;
 chaiTwo.Teaname  = "Masala Chai";
 chaiTwo.servings = 3;
 chaiTwo.ingridients = {"water" , "Milk" , "Tea" , "Ginger"};
 chaiTwo.displaychai();
    return 0;
}
