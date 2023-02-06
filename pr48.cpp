#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    return 0;
}
