#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> v);
int main(){
    vector<int> v={1,2,3,1,14,3,2,4,57,3,4,1,2,14};
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
// there should be only one unique element in Array

//time comlexity= O(n) 
//space comlexity= O(1) 