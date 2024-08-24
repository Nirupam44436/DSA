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

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<i<<" is the index";
        }
    }
}