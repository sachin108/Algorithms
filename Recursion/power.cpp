#include<vector>
#include<iostream>
using namespace std;
int power(int number, int exponent);
int main(int argc, char const *argv[])
{
    int number, exponent;
    cin>>number>>exponent;
    cout<<power(number, exponent);
    return 0;
}
int power(int number, int exponent){
    if(exponent==0){
        return 1;
    }
    return number*power(number, exponent-1);
}