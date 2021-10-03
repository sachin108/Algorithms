#include<iostream>
using namespace std;
void mergeSort(int array[], int first, int last);
void merge(int array[], int first, int middle, int last);

int main(){
    int array[]={122,3,14,61,41,78,51,90,73,21};
    int len=sizeof(array)/sizeof(array[0]);
    mergeSort(array, 0, len-1);
    for(int i:array){
        cout<<i<<"  ";
    }
    return 0;
}

void mergeSort(int array[], int first, int last){
    if(first>=last)
    return;
    int middle=first+(last-first)/2;
    mergeSort(array, first, middle);
    mergeSort(array, middle+1, last);
    merge(array, first, middle, last);
}

void merge(int array[], int first, int middle, int last){
    int i=first, j=middle+1, k=first;
    while(i<=middle && j<=last){
        if(array[i]<=array[j]){
            int temp=array[k];
            array[k]=array[j];
            array[j]=temp;
            ++j;
        }
        else{
            int temp=array[k];
            array[k]=array[i];
            array[i]=temp;
            ++i;
        }
        ++k;
    }
    while(i<=middle){
            int temp=array[k];
            array[k]=array[i];
            array[i]=temp;
            ++k;    ++i;
    }
    while(j<=last){
            int temp=array[k];
            array[k]=array[j];
            array[j]=temp;
            ++k;    ++j;
    }
}