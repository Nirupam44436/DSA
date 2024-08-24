#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,key; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter key"<<endl;
    cin>>key;

    int start,end,mid;
    start = 0;
    end = n;
    mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] < key){
            start = mid+1;
            mid = (start+end)/2;
        }
        else if(arr[mid] > key){
            end = mid-1;
            mid = (start+end)/2;
        }
        else{
            cout<<mid<<" is the index of key";
            break;
        }
    }
    return 0;
}