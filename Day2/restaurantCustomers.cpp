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
    //cout<<"solve\n";
    int i,j,k,n,m,ans=0,cnt=0,sum=0;
        
        cin>>n;
        set<array<int,2>> s;
        for(i=0;i<n;i++)
        {
            cin>>j>>k;
            s.insert({2*j,1});
            s.insert({2*k+1,-1});
        }
        for(array<int,2> a:s)
        {
            cnt+=a[1];
            ans=max(cnt,ans);
        }
    cout<<ans;
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
            //cout<<"init\n";
            // int t;
            // cin>>t;
            // while(t--)
            solve();
        }
    }