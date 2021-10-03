#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Binary_search(vector<int> v, int key, int start, int last);

int main() {
    vector<int> Array={122,3,14,61,41,78,51,90,73,21,11,18,19,13,123,145};
    sort(Array.begin(),Array.end());
    int key=78;
    int index=Binary_search(Array, key, 0, Array.size()-1);
    if(index!=-1)
        cout<<"Key found at "<<index;
    else
        cout<<"key doesn't exist";
    return 0;
}

int Binary_search(vector<int> v, int key, int start, int last){
    if(start>last)
        return -1;
    int mid=start+(last-start)/2;
    if(v[mid]==key)
        return mid;
    else if(key>v[mid])
        return Binary_search(v, key, mid+1, last);
    else 
        return Binary_search(v, key, start, mid-1);
}