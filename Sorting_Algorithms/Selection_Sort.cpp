#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,10> Array={12,3,14,61,41,78,51,90,73,21};
    int length_of_array=Array.size();

    // sorting 
    for (int i = 0; i < length_of_array-1; i++){
        int minimun=Array[i];
        for (int j = i+1; j < length_of_array; j++){
            if(Array[j]<minimun){
                int temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
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
    find minimun from unsorted array and swap with 0 Index
    then 1 index
    then 2 .... and so on
*/