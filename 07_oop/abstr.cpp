#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Tea {

    public:
     virtual void prepareingridients() = 0;     // pure virtual function
 virtual void brew() = 0;
  virtual void serve() = 0;

  void makeTea(){
prepareingridients();
brew();
serve();
  }

};


// Derived class
 class GreenTea : public Tea {

public:
void prepareingridients() override {
    cout<< " Green leaves water is ready"<<endl;

}
void brew() override {
    cout<< " Tea brewed "<<endl;

}
void serve() override {
    cout<< "Tea served" <<endl;

}



 };
 class masalaTea : public Tea {

public:
void prepareingridients() override {
    cout<< " masala  leaves and  water is ready"<<endl;

}
void brew() override {
    cout<< "  masala Tea brewed "<<endl;

}
void serve() override {
    cout<< " masala Tea served" <<endl;

}



 };





int main(){

GreenTea greentea;
masalaTea Masaltea;
greentea.makeTea();
Masaltea.makeTea();




    return 0;
}