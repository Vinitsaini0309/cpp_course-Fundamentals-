#include<iostream>
using namespace std;

int main(){
int chaisales[3][4] = {
    {25,30,35,40,},
    {45,50,55,60},
    {65,60,70,75}
};
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
       cout<< chaisales[i][j]<<"\t";
    }
    cout<<"\n";
}

    return 0;

}