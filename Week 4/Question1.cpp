/*

        Divide and Conquer Method

        Inversion :-->  i<j , So a[i] > a[j]

*/

#include<iostream>

using namespace std;

void mergeOfArrays(int arr[], int low, int mid, int high){
    int i = low , j = mid + 1, index = low; int temp[100], k; 
    while ((i<= mid) && (j<=high))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }else{
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=high)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }else{
        while(i<=mid){
            temp[index] = a[i];
            i++;
            index++;
        }
    }
    for(k = low; k<index; k++){
        a[k] = temp[k];
    }
    
}


