#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
const int mod = 1e9 + 7;
const int N = 100005, M=22;
void solve(){
    int i,j,k,n,m,ans=0,cnt=0,sum=0;
        cin>>n;
        if(n==1){cout<<1<<endl;return;}
        if(n==2 || n==3)
        {cout<<"NO SOLUTION"<<endl;}
        
        else if(n%2==0)
        {
            for(i=n-1;i>0;i-=2)
                cout<<i<<" ";
            for(i=n;i>0;i-=2)
                cout<<i<<" ";
        }
        else if(n%2!=0)
        {
             for(i=n-1;i>0;i-=2)
                cout<<i<<" ";
            for(i=n;i>0;i-=2)
                cout<<i<<" ";
        }
}
void init() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}
int32_t main(){
    init();
        {
            // int t;
            // cin>>t;
            // while(t--)
            solve();
        }
    }