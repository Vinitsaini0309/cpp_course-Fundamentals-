#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


// BASSE CLASS
class Tea {

    protected:
    string Teaname;
    int servings;
    public:
    Tea(string name , int serve ):Teaname(name) , servings(serve){
    cout<< "Tea constructor called" << Teaname << endl;
    }

    virtual void brew() const {
        cout << "brewing" << Teaname << "with generic method" << endl;
    }
    virtual void serve() const {
        cout << "serving" << servings << " cup of tea with generic method" << endl;
    }

    virtual ~Tea(){
        cout << "Tea destructor called for " << Teaname  << endl;
    }
};

class GreenTea : public Tea
{

public:
  GreenTea(int serve): Tea("Green Tea" , serve){
    cout<< " Green Tea constructor called"<<endl;
  }

  void brew() const override{
    cout<< "Brewing"<< Teaname << "by stepping green tea leaves" << endl;

  }

  ~GreenTea(){
    cout<< "Green tea destructor called"<< endl;
  }

   
};

class Masalachai : public Tea {

    public:
    Masalachai(int serve): Tea("masala Tea" , serve ){
        cout<< "masala chai constructor called"<< endl;
    }

    void brew() const override final {
    cout<< "Brewing"<< Teaname << "by stepping green tea leaves" << endl;


}

~Masalachai(){
    cout << "masala chai destructor called"<<endl;
}
};

// class spicyMasalaTea : Masalachai {
  
//     public :
//     void brew() const overrride
// {    cout<< "Brewing"<< Teaname << "by stepping green tea leaves" << endl;
// }

// };


int main(){

    Tea* tea1 = new GreenTea(2);
Tea* tea2 = new Masalachai(5);
tea1->brew();
tea1->serve();

tea2->brew();
tea2->serve();

delete tea1;
delete tea2;


    return 0;
}