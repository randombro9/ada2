#include <stdio.h>

void merge(int A[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while(i<=mid && j<=high){
        if(A[i] <A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }

    }
     while(i<=mid){
            B[k] = A[i];
            i++;
            k++;
        }
        while(j<=high){
            B[k] = A[j];
            j++;
            k++;
        }
       
    for(int i=low;i<=high;i++){
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low,int high){
int mid;
if(high>low){
     mid=(low+high)/2;
    mergeSort(A, low,mid);
    mergeSort(A,mid+1,high);
    merge(A,low,mid,high);
}
}




int main(){
    
    int arr[] = {23,556,1,10,2,556,21,234,1000,7};
    mergeSort(arr,0,9);

    for(int k=0;k<10;k++){
        printf("%d\n", arr[k]);
    }

    return 0;
}
