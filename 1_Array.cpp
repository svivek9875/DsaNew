#include <iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void fillArray(int *arr, int i,int n,int val){

    //Base Case
    if(i==n){
        printArray(arr,n);
        return;
    }

    // Rec case

    arr[i]=val;
    fillArray(arr,i+1,n,val+1);

    //backtracking step
    arr[i] = -1*arr[i];
}


int main(){

    int n;
    cin>>n;

    int arr[100] = {0};
 
    fillArray(arr,0,n,1);
    printArray(arr,n);
}
