#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> v);
int main(){
    vector<int> v={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 };
    int UniqueElement=findUnique(v);
    cout<<"the unique elemment is "<<UniqueElement;
    return 0;
}
int findUnique(vector<int> v){
    int Unique=v[0];
    vector<int>:: iterator itr;
    itr=v.begin();
    v.erase(itr);
    for(int i: v){
        Unique = Unique^i;
    }
    return Unique;
}
// it will return a number whose number of occurences in Collection are odd
//time comlexity= O(n) 
//space comlexity= O(1) 