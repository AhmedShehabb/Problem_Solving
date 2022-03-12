#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int i=1 , k , r , price ;
   cin>>k>>r;
   while(true){
    price = k * i ;
    if (price%10 == 0){
        cout<<i<<endl;
        break;
    }
    else if (price%10 - r ==0){
        cout<<i<<endl;
        break;
    }
    else {
        i++;
    }
   }
    return 0 ;
}
