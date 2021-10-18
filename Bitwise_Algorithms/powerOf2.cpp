// in power of 2 only one bit is set
#include<iostream>
using namespace std;
bool powerOf2(int number);
int main(int argc, const char** argv) {
    int n;
    cout<<"enter a number ";
    cin>>n;
    if(powerOf2(n)){
        cout<<"yes, "<<n<<" is power of 2";
    }
    return 0;
}
bool powerOf2(int number){
    int setBits=0;
    while(number>0){
        number = number & (number-1);
        ++setBits;
    }
    return setBits==1;
    /**
     * or we can use
     *  (number!=0 and number & (number - 1)==0 
    */
}
