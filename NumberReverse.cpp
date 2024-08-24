#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int m = 0;
    while(n>0){
        int ld = n%10;
        m = m*10 + ld;
        n = n/10;
    }

    cout<<m;
    return 0;
}