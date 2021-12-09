#include<iostream>
using namespace std;
int count_Primes(int n);
int main() {
  int number;
  cin>>number;
  int x=count_Primes(number);
  cout<<x;
  return 0;
}
int count_Primes(int n){
  if(n==0)
    return 0;
  bool array[n];// default value is false
  for (int i = 2; i*i <=n; ++i){
    if(!array[i]){
      for (int j = i; (j*i) < n; ++j){
        array[i*j]=true;
        }
      }
    }
    int primes=-2;
    for(bool i:array){
      if(!i){
        ++primes;
    }
  }
  return primes;
}
