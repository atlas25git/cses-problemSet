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
        cin>>i>>j;
        k=max(i,j);
        m = (k-1)*(k-1);
        
        if((k&1)==0)
        {   //cout<<"YY";
            if(k==j)ans=m+i;
            else ans=m+(2*k)-j;
        }
        
        else{
           
            if(k==i)ans=m+j;
            else ans=m+2*k-i;
        }
        cout<<ans<<endl;
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
            int t;
            cin>>t;
            while(t--)
            solve();
        }
    }