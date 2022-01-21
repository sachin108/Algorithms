#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> getSubsequneces(string str){
    if(str==""){
        vector<string> empty;
        empty.push_back("");
        return empty;
    }
    string prefix=str.substr(0,1);
    string rem=str.substr(1);
    vector<string> v=getSubsequneces(rem);
    vector<string> subsequences;
    for(string i:v){
        subsequences.push_back(i);
        subsequences.push_back(prefix+i);
    }
    return subsequences;
}
int main(int argc, char const *argv[]){
    string str;
    vector<string> v;
    cin>>str;
    v=getSubsequneces(str);
    for(string i:v){
        cout<<i<<endl;
    }
    return 0;
}
