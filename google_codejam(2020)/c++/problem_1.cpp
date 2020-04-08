#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    for(int i=1;i<=c;i++){
        int n;
        cin>>n;
        int m[n][n],mt[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mt[j][i] = m[i][j];
            }
        }
        int r_count=0;
        int c_count=0;
        int trace = 0;
        for(int i=0;i<n;i++){
            trace += m[i][i];
            for(int k=1;k<=n;k++){
                int count=0;
                for(int j=0;j<n;j++){
                    if(m[i][j]==k){
                        count++;
                    }
                    if(count>1){
                        break;
                    }
                }
                if(count>1){
                    r_count++;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int k=1;k<=n;k++){
                int count=0;
                for(int j=0;j<n;j++){
                    if(mt[i][j]==k){
                        count++;
                    }
                    if(count>1){
                        break;
                    }
                }
                if(count>1){
                    c_count++;
                    break;
                }
            }
        }
        cout<<"Case #"<<i<<": "<<trace<<" "<<r_count<<" "<<c_count<<"\n";
    }
    return 0;
}
