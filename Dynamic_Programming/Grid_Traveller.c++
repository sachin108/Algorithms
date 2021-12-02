#include<iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
long GridTraveller(long x, long y, map<string, long> memo, map<string, long>::iterator itr);
int main(int argc, char const *argv[])
{
    map<string, long> memo;
    map<string, long>:: iterator itr;
    long x,y;
    cin>>x>>y;
    cout<<GridTraveller(x,y,memo,itr);
    return 0;
}
long GridTraveller(long x, long y, map<string, long> memo, map<string, long>::iterator itr){
    string key=x+","+y;
    itr=memo.find(key);
    if(itr!=memo.end()){
        return memo[key];
    }
    if(x==1 && y==1)
        return 1;
    if(x==0 || y==0)
        return 0;
    memo[key]=GridTraveller(x-1,y,memo,itr)+GridTraveller(x,y-1,memo,itr);
    return memo[key];
}