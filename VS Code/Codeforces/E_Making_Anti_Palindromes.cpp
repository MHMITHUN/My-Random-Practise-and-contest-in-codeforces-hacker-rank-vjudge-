//try hard try hard try hard...got 20 error ...this is last time i submit work please
//last 1 min submission ....
//errrorrrrrrrrrrrr getting errorrrrrrrrrrrrr :( :( :(
#include <bits/stdc++.h> 
using namespace std; 
 
void solve(){ 
   
  int n; 
  cin>>n; 
  string s; 
  cin>>s; 
 
  vector<int> mhm(26,0),mhm2(26,0); 
 
  for(int i =0;i<n/2;i++){ 
    if(s[i] == s[n-i-1]) 
      mhm[s[i] - 'a']++; 
  } 
 
  for(int i =0;i<n;i++){ 
      mhm2[s[i] - 'a']++; 
  } 
 
  int mita = 0,mxx = 0,mxx2 = 0; 
 
  for(int i : mhm){ 
    mita += i; 
    mxx = max(mxx, i); 
  } 
 
  for(int i : mhm2){ 
    mxx2 = max(mxx2, i); 
  } 
 
 
  if(mxx2 > n/2 || (n&1)){ 
    cout<<"-1\n"; 
    return; 
  }else{ 
    if(mxx > mita - mxx){ 
      cout<< mxx <<"\n"; 
    }else{ 
      cout<< mita/2 + (mita&1) <<"\n"; 
    } 
 
 
  } 
  
} 
  
int main(){ 
    long long int m; 
    cin>>m; 
     
      while(m--){ 
       solve(); 
     } 
 
     return 0; 
  
}