#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> v, int key, int start, int end);
int findPivot(vector<int> v, int start, int end);
int search(vector<int> v, int key, int start, int end);
int  main(){
    vector<int> v={45,63,72,88,91,99,10,25,27,33,39};
    int key=33;
    int index=binarySearch(v, key, 0, v.size()-1);
    cout<<"found element at index "<<index;
    return 0;
}

int binarySearch(vector<int> v, int key, int start, int end){ 
    int index=-1;   
    int pivot=findPivot(v, start, end);
    if(pivot==-1){
        // array is not rotated
        int index=search(v, key, start, end);
        return index;
    }
    if(v[pivot]==key)
        return pivot;
    index=search(v, key, start,pivot-1);
    if(index!=-1){
        return index;
    }
    return search(v, key, pivot+1, end);
}

int findPivot(vector<int> v,int start, int end){
    if(start<end){
        int mid= start+(end-start)/2;
        if(start<mid && (v[mid]>v[mid+1])){
            return mid;
        }
        if(end>mid && (v[mid-1]>v[mid])){
            return mid-1;
        }
        if(v[mid+1]>=v[mid]){
            return findPivot(v, mid, end);
        }
        return findPivot(v, start, mid-1);
    }
    else{
        return -1;
    }
}

int search(vector<int> v, int key, int start, int end){
    if(end>start){
        int mid=start+(end-start)/2;
        if(v[mid]==key)
            return mid;
        if(v[mid]<key)
            return search(v, key, mid+1, end);
        if(v[mid]>key)
            return search(v, key, start, mid-1);        
    }
}