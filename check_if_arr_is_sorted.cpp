#include<iostream>
using namespace std;

bool sort(int arr[], int n, int i){
    if(i==n){
        return true;
    }
    if(arr[i-1]>arr[i]){
        return false;
    }
    else{
        return sort(arr,n,i+1);
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,7,4,5};
    cout<<sort(arr,n,1);
    return 0;
}
