/*       Counting sort          */

#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t>0){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];   // Taking Array Input
        }
        


        int count=0;
        for(int i=0;i<n;i++){
            char element = arr[i];
            for(int j=0;j<n;j++){
                if(element == arr[i]){
                    count++;
                }
            }
            
        }

        t--;
    }
}