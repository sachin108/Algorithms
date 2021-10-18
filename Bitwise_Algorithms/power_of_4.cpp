#include<iostream>
#include<vector>
using namespace std;
int count_unsets(int number);
int count_sets(int number);
bool powerOf4(int number){
    if(count_sets(number)==1 && count_unsets(number)%2==0)
        return true;
    return false;
}
int main(int argc, const char** argv) {
    long long n;
    cout<<"enter a number ";
    cin>>n;
    if(powerOf4(n))
        cout<<n<<" is a power of 4";
    return 0;
}
int count_unsets(int number){
    int count=0;
    while(number!=0){
        if((number & 1)==0){
            ++count;
        }
        number =number>>1;
    }
    return count;
}
int count_sets(int number){
   if(number!=0 && (number & (number-1))==0) 
        return 1;
   return 0;
}

    /**
     * it checks whether the number is power of 2 or not bcz 
     * number whose power is 2 has only one set bit
     * and in power of 4 number if set bit = 1
     * and number of unset bits in power of 4 is even 
    */