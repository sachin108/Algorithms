#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,10> Array={122,3,14,61,41,78,51,90,73,21};
    int length_of_array=Array.size();

    // sorting 
    for (int i = 0; i < length_of_array-1; i++){
        for(int j=i+1; j>=0; j--){
            if(Array[j-1]>Array[j]){
                int temp=Array[j];
                Array[j]=Array[j-1];
                Array[j-1]=temp;
            }
        }
    }
    for(auto i : Array)
    {
        cout<<i<<"  ";
    }
    return 0;
}
/*
    divide array into sorted and unsorted
    compare current element with elemets of sorted array and insert at specific position
    and also shift the elements to create space for current element + to fill the void created by
    current element
*/