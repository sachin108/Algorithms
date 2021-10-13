#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int searching(vector<int> v, int key, int start, int end);
int main() {
    vector<int> Array={122,3,14,61,41,78,51,90,73,21,11,18,19,13,123,145};
    int key=1200;
    int x=searching(Array, key, 0, Array.size()-1);
    if(x!=-1)
        cout<<"Key found at "<<x;
    else
        cout<<"Key doesn't exist";
    return 0;
}

int searching(vector<int> v, int key, int start, int end){
    if(v[start]==key)
        return start;
    if(v[end]==key)
        return end;
    if(start==end || start>end)
        return -1;
    return searching(v, key, ++start, --end);
}
