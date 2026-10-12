#include<iostream>
using namespace std;

int hellochai(){

}

int main(){

    // Lamda
     auto preparedchai = [](int cups){
cout<< "preparing "<< cups <<" cups of tea" << endl;
    };

    preparedchai(5);

    return 0;
}