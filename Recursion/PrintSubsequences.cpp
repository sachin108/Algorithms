#include<iostream>
#include<string>
using namespace std;
void printSubsequences(string que, string ans){
    if(que==""){
        cout<<ans<<" ";
        return;
    }
    string pre=que.substr(0,1);
    string rem=que.substr(1);
    
    printSubsequences(rem, ans+pre);
    printSubsequences(rem, ans+"");
}
int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    printSubsequences(str, "");
    return 0;
}
