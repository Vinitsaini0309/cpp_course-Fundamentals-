#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
#include<numeric>


using namespace std;

struct Employ
{
    
int id;
string name;
double salary;

};

void displayemploy(const Employ& emp){

cout<< "ID = " << emp.id << "Name = " << emp.name << "Salary = " <<emp.salary<< endl;

}




int main(){

    vector<Employ> employees = {

        {101 , "Vinit" , 10000},
        {102 , "Sarwan" , 7000},
        {103 , "bhawani" , 7500},
        {104 , "harish" , 9000}
    } ;
    sort(employees.begin() , employees.end() , [](const Employ& e1 ,const Employ e2 ){
        return e1.salary > e2.salary;
    });

    cout<< "Employees sorted by salary -> Highest to lowest"<< endl;
for_each(employees.begin() , employees.end() , displayemploy);
vector<Employ> HighEarner;

copy_if(
    employees.begin() ,
     employees.end() , 
     back_inserter(HighEarner) , 
     [](const Employ& e){
        return e.salary > 7000 ;
     });
cout << "Employees who are High Earners\n";
 for_each(employees.begin() , employees.end() , displayemploy);

   double totalsalray = accumulate(employees.begin() , employees.end() , 
 0.0 , [](double sum , const Employ& e ){
    return sum + e.salary;
 }
);

double AverageSalary = totalsalray/ employees.size();

  auto Highestpaid = max_element(employees.begin() , employees.end() , [](const Employ& e1 , const Employ& e2)
{
    return e1.salary < e2.salary;
});

    return 0;
}