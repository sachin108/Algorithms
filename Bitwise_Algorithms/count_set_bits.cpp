//Brian Kernighan’s Algorithm
#include<iostream>
using namespace std;
int number_of_setBits(int number);
int main(int argc, const char** argv) {
    int n;
    cout<<"enter a number";
    cin>>n;
    int number_of_set_bits=number_of_setBits(n);
    cout<<"number of set bits in "<<n<<" = "<<number_of_set_bits;
    return 0;
}
int number_of_setBits(int number){
    int setBits=0;
    while(number>0){
        number = number & (number-1);
        ++setBits;
    }
    return setBits;
}

/**
 * Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 
 * for example :
 * 10 in binary is 00001010 
 * 9 in binary is 00001001 
 * 8 in binary is 00001000 
 * 7 in binary is 00000111 
So if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. 
If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 
The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer. 
*/