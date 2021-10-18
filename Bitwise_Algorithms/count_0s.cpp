
#include<iostream>
using namespace std;
int number_of_unsetBits(int number);
int main(int argc, const char** argv) {
    int n;
    cout<<"enter a number ";
    cin>>n;
    int number_of_unset_bits=number_of_unsetBits(n);
    cout<<"number of unset bits in "<<n<<" = "<<number_of_unset_bits;
    return 0;
}
int number_of_unsetBits(int number){
    int unsetBits=0;
    while(number!=0){
        if((number & 1) == 0)
            ++unsetBits;
        number = number>>1; // right shift 1 bit in number until number will become 0 
    }
    return unsetBits;
}

