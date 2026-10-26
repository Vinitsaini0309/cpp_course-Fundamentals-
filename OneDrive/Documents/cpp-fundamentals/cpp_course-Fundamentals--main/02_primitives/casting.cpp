#include <iostream>

using namespace std;

int main(){

    float teaprice = 15.299;
    int roundteaprice = (int) teaprice;

    int teaQuantity = 2;
    double Totalprice = teaprice*teaQuantity;

    cout<< Totalprice <<endl;

    return 0;
}