#include<iostream>
#include<array>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    array<int,16> Array={122,3,14,61,41,78,51,90,73,21,11,18,19,13,123,145};
    int length_of_array=Array.size();
    sort(Array.begin(), Array.end());
    int m=sqrt(length_of_array);    // number of elements to be skipped
    // searching 
    int key=78;
    for(int i=0; i<length_of_array;){
        if(key>=Array[i] && key<=Array[i+m]){
            for(int j=i; j<i+m; ++j){
                if(key==Array[j]){
                    cout<<"Key found at index "<<j;
                    return 0;
                }
            }
        }
        i+=m;
    }
    cout<<"Key doesn't exist";
    return 0;
}
/*
    Array must be sorted-
    idea is to skip elements and find a range in which key can exists
    optimal number of elements to be skipped = sqrt(n);
    where n= size of array
    Time Complexity : O(√n) 
        between Linear and binary search
*/