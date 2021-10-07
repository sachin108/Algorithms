#include<iostream>
#include<vector>
using namespace std;
void generate(string i, int open, int close);
vector<string> parentheses;
int main(){
    int n;
    cin>>n;
    printf("all valid pairs that can be generated using %d opening and %d closing parentheses",n,n);
    generate("",n,n);
    for(string i: parentheses){
        cout<<i<<"  ";
    }
    return 0;
}
void generate(string i, int open, int close){
    if(open==0 && close==0){
        cout<<i<<endl;
        parentheses.push_back(i);
        return;
    }
    if(open!=0){
        generate(i+"(", open-1, close);
    }
    if(close>open){
        generate(i+")", open, close-1); 
    }
}