/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;cin>>n;
    int min_value=1;
    int max_value=1e9;
    vector <int> three;
    int ans=0;
    int cnt=0;
    for( int i=0;i<n;i++){
        int a,x;
        cin>>a>>x;
        if(a==1)
        {
            max_value=max(max_value,x);
        }
        else if(a==2){
            min_value=min(min_value,x);
            
        }
        else if(a==3){
            cnt++;
        }

        
    }
    for(int i=min_value;i<max_value;i++){
        ans++;
    }
    cout<<ans-cnt<<endl;
    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }

    return 0;
}