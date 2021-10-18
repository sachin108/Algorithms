#include<iostream>
using namespace std;
bool opposite_signs(int x, int y){
    return ((x^y)<0);
}
int main(int argc, const char** argv) {
    int x, y;
    cout<<"enter any two numbers\n";
    cin>>x>>y;

    if(opposite_signs(x, y))
        cout<<"yes numbrs have opposite signs";
    return 0;
}
/*
Let the given integers be x and y. 
The sign bit is 1 in negative numbers, and 0 in positive numbers. 
The XOR of x and y will have the sign bit as 1 
iff they have opposite sign. In other words, XOR of x and y will be 
negative number number iff x and y have opposite signs. 
*/