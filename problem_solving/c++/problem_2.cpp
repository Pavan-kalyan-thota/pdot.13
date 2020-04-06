#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //there are many eays but i do the fastest one
    int res_arr[n];
    for(int i=0;i<n;i++){
        if((i-d)>=0){
            res_arr[i-d] = arr[i];
        }else{
            res_arr[i+n-d] = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<res_arr[i]<<" ";
    }
    return 0;
}