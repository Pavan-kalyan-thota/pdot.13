#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int c;
    cin>>c;
    for(int i=1;i<=c;i++){
        string s,res;
        int prev,pres;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(res.empty()){
                pres = s[i]-'0';
                for(int j=0;j<pres;j++){
                    res += '(';
                }
                res += s[i];
                prev = pres;
            }else{
                pres = s[i]-'0';
                if(pres==prev){
                    res += s[i];
                }else{
                    if(pres>prev){
                        for(int i=0;i<pres-prev;i++){
                            res += '(';
                        }
                        res += s[i];
                        prev = pres;
                    }else{
                        for(int i=0;i<prev-pres;i++){
                            res += ')';
                        }
                        res += s[i];
                        prev = pres;
                    }
                }
            }
        }
        for(int i=0;i<prev;i++){
            res += ")";
        }
        cout<<"Case #"<<i<<": "<<res<<"\n";
    }
    return 0;
}