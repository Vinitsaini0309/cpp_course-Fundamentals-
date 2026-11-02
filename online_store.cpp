#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<map>
#include<ctime>
#include<unordered_set>
#include<unordered_map>


using namespace std;

struct Products {
int productID;
string name;
string category;


};
struct order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;

};

int main() {
vector <Products> products = {
    {101 , "laptop" , "Electronics"},
     {102 , "smartphone" , "Electronics"},
      {103 , "Cofee Maker" , "Kitchen"},
       {104 , "Hearables" , "Electronics"},
        {105 , "Blender" , "Kitchen"},
         {106 , "SmartT.v." , "Home"},

};
deque<string> recentCustomers = {"C001" , "C002" , "C003"};
recentCustomers.push_back("C004");
recentCustomers.push_front("C005");
list<order> orderHistory;

orderHistory.push_back({1 , 101 , 1 ,  "C001" , time(0)});
orderHistory.push_back({2 , 102 , 1 ,  "C002" , time(0)});
orderHistory.push_back({3 , 104 , 5 ,  "C003" , time(0)});
orderHistory.push_back({4 , 105 , 1 ,  "C005" , time(0)});

set<string> categories;

for (const auto &product : products)
{
 
    categories.insert(product.category);

}

// MAP ALWAYS CONTAINS A KEY VALUE PAIR

 map<int , int> productStock = {
    {101, 10},
    {102, 20},
    {103, 50},
    {104, 80},
    {105, 65},

 };

 multimap<string, order> customerOrders;
 for(const auto &order :orderHistory){
    customerOrders.insert({order.customerID , order});
 }

 unordered_map< string , string> customerData  = {
    {"C001" , "ALICE"},
    {"C002" , "VINIT SAINI"},
    {"C003" , "HARISH JYANI"},
    {"C004" , "SARWAN PRAJAPAT"},
    {"C004" , "BHAWANI SINGH"},
 };

 unordered_set<int> uniqueproducIDS;

 for(const auto &product : products){

    uniqueproducIDS.insert(product.productID);
 }


return 0;



}