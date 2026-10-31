#include<iostream>
#include<vector>
using namespace std;

class chai {
    public:
    string teaname;
    int servings;
    vector<string> ingridients;

    // Deligating constructor

    chai(string name): chai(name , 2 , {"water" , "sugar"}){}



    // main constructor
    chai(string name , int serve , vector<string> ingri){

        teaname = name;
        servings  = serve;
        ingridients = ingri;

        cout<< "Main constructor called";

    }
    void displaychai(){
    cout<< "Tea Name: "<<teaname <<endl;
    cout<<" Servings :" << servings<<endl;
    cout<<"ingridients :";

    for(string ing : ingridients ){
        cout<< ing<<" "<<endl;

    }


}

};









int main(){

    chai quickchai("Quick chai");
    quickchai.displaychai();
    return 0;

}