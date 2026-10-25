#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<math.h>
#include<set>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    //set<long long int>st;
    for(int I=0;I<n;I++)
    {
      cin>>v[I];
      //st.insert(v[I]);
    }
    int flag=0;
    for(int I=0;I<n;I++)
    {
       flag=0;
        for(int j=I;j>0; j--)
        {
          if(I==0)
          {
            break;
          }
           else if(v[j]>v[j-1])
          {
            cout<<j<<endl;
            flag=1;
            break;
          }
          
        }
        if(flag==0)
          cout<<0<<endl;
    }

       
      
        
 return 0;
 
 
}