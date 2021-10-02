#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,10> Array={12,3,14,61,41,78,51,90,73,21};
    int length_of_array=Array.size();

    // sorting 
    for (int i = 0; i < length_of_array; i++){
        bool flag=true;
        for (int j = 1; j < length_of_array-i; j++)
        {
            if(Array[j-1]>Array[j]){
                int temp=Array[j];
                Array[j]=Array[j-1];
                Array[j-1]=temp;
                flag=false;
            }
        }
        //to break the loop if there is no swap(if there is no swap then it means array is sorted)
        if(flag)
            break;
    }
    for(auto i : Array)
    {
        cout<<i<<"  ";
    }
    return 0;
}
/*
   1st swap- compare 2 adjacent elements(if i-1 is greater than i .. swap them) then largest elememt will be at last index
   2nd swap- compare 2 adjacent elements then second largest elememt will be at second last index
    so on....
*/