#include<iostream>
#include<array>
using namespace std;
int main() {
    array<int,16> Array={122,3,14,61,41,78,51,90,73,21,11,18,19,13,123,145};
    int length_of_array=Array.size();

    // searching 
    int key=21;
    for(int i=0, j=length_of_array-1;i<length_of_array/2,j>=length_of_array/2;i++,j--){
        if(Array[i]==key){
            cout<<"Found the key at "<<i<<" index";
            break;
        }
        if(Array[j]==key){
            cout<<"Found the key at "<<j<<" index";
            break;
        }
    }
    return 0;
}
