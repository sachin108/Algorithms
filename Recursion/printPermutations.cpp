#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutations(string str, string pm, int n){
    if(str.size()==0){
        cout<<pm<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        string ch=str.substr(i,1);
        string rem=str.substr(0,i)+str.substr(i+1);
        permutations(rem,pm+ch,rem.size());
    }
}
int main(int argc, char const *argv[]){
    string str;
    cin>>str;
    permutations(str, "", str.size());
    return 0;
}
