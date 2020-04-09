#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> st;
    for(int i=0;i<s.length();i++){
        if((!st.empty()) && s[i]==st.back()){
            st.pop_back();
        }else{
            st.push_back(s[i]);
        }
    }
    if(st.empty()){
        cout<<"Empty String";
    }else{
        for(int i=0;i<st.size();i++){
            cout<<st[i];
        }
    }
    return 0;
}