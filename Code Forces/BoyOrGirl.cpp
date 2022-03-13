#include <bits/stdc++.h>
using namespace std;
int main(){
int i , j , sum =0 ;
string x ;
cin>>x;
for(i=0;i<x.size();i++){
    if(x[i]!= '*' ){
    for(j=i+1;j<x.size();j++){
        if (x[i]==x[j]){
            x[j]='*';
        }
    }
    x[i]='*';
    sum++;
    }
}
if (sum%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
return 0 ;
