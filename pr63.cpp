#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46}, {"Kishlay", 78},{"Rohan", 89}, {"Rohit", 57}, {"Sachin", 53} } );
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}