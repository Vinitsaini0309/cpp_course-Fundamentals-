#include<iostream>
#include<string>
#include<vector>
using namespace std;


class chai {
    private:
    int servings ;
    string chainame;
     public:
     chai(string name , int ser): chainame(name) , servings(ser){}

     friend bool compareservings( const chai &chai1 ,  const chai &chai2);

     void display(){
        cout << "teaname:"<< chainame <<endl;
     }



};

bool compareservings(const chai &chai1 , const chai &chai2){
    return chai1.servings > chai2.servings;
}




int main(){
chai masalachaia("masala chai" , 67);
chai gingerchai("ginger chai" , 7);
masalachaia.display();
gingerchai.display();
if(compareservings(masalachaia , gingerchai)){
    cout<<"masala chai is having more servings"<<endl;

}
else{
    cout<<"ginger chai is having more servings"<<endl;
}
    return 0;

}


