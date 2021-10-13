#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Binary_search(vector<int> v, int key, int start, int last);

int main() {
    vector<int> Array={122,3,14,61,41,78,51,90,73,21,11,18,19,13,123,145};
    sort(Array.begin(),Array.end());
    int key=123;
    int index=Binary_search(Array, key, 0, Array.size()-1);
    if(index!=-1)
        cout<<"Key found at "<<index;
    else
        cout<<"key doesn't exist";
    return 0;
}

int Binary_search(vector<int> v, int key, int start, int last){
    while(!(start>last)){
        int mid=(last+start)/2;
        if(v[mid]==key)
            return mid;
        else if(v[mid]>key){
            last=mid-1;
        }
        else if(v[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}