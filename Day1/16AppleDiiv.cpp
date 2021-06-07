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
    int i1,j1,k,n,m,ans=0,cnt=0,sum=0;
       
        int p[20];
        cin>>n;
        for(int i=0;i<n;i++)cin>>p[i],sum+=p[i];
        for(int i=0;i<1<<n;i++)
        {
            int cs=0;
            for(int j=0;j<n;j++)
                if(i>>j&1)
                    cs+=p[j];
                if(cs<=sum/2)
                    ans=max(ans,cs);
        }
        cout<<sum-2*ans;
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