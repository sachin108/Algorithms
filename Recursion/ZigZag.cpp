#include<iostream>
using namespace std;
void pattern(int i){
    if(i==0)
        return;
    cout<<i<<"  ";  //pre
    pattern(i-1);
    cout<<i<<" ";   //in
    pattern(i-1);
    cout<<i<<" ";   //post
}
int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

/*
pattern like-
-->211121112
-->32111211121112111211123
*/