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
  if(first<last){
    int mid=(first+last)/2;
    mergeSort(array, first, mid);
    mergeSort(array, mid+1, last);
    merge(array, first, mid, last);
  }
}

void merge(int array[], int first, int middle, int last){
  int firstArraySize=middle-first+1;
  int secondArraySize=last-middle;
  int FirstArray[firstArraySize], SecondArray[secondArraySize];
  for (int i = 0; i < firstArraySize; i++) {
    FirstArray[i]=array[first+i];
  }
  for (int i = 0; i < secondArraySize; i++) {
    SecondArray[i]=array[middle+1+i];
  }
  int i=0, j=0, k=first;

  while (i<firstArraySize && j<secondArraySize) {
    if(FirstArray[i]<=SecondArray[j]){
      array[k]=FirstArray[i];
      ++i;
    }
    else{
      array[k]=SecondArray[j];
      ++j;
    }
    ++k;
  }
  while (i<firstArraySize) {
    array[k]=FirstArray[i];
    ++k; ++i;
  }
  while (j<secondArraySize) {
    array[k]=SecondArray[j];
    ++k; ++j;
  }
}
