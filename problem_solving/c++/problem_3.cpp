#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int lr=0,rl=0;
    for(int i=0;i<n;i++){
        lr += a[i][i];
        rl += a[i][n-i-1];
    }
    cout<<abs(lr-rl);
    return 0;
}
