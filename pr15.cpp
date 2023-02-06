#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;
    cout<<"The sum of 6, 7, 8 is "<<sum(6, 7, 8)<<endl;
    cout<<"The volume of cuboid of 6, 7, 8 is "<<volume(6, 7, 8)<<endl;
    cout<<"The volume of cylinder of radius 5 and height 6 is "<<volume(5,6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}
