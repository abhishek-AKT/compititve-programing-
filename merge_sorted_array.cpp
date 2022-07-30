#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        while(arr1[i] == 0){
            i++;
        }
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    // copy first element 

    while(i<n){
        arr3[k++] = arr1[i++];
    }

    // copy kardo remaing array ke dusre element ko 

    while(j<m){
        arr3[k++] = arr2[j++];
    }

    while(k<n){
        arr1[k] = arr3[k];
        k++;
    }
}
void transfer(int arr1[],int n,int arr3[]){
    int i=0,k=0;
    while(i<n){
        arr1[i] = arr3[k];
        i++;
        k++;
    }
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[6] = {1,3,5,0,0,0};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};
    merge(arr1,5,arr2,3,arr3);
    transfer(arr1,6,arr3);
    print(arr3,6);
    return 0;
}