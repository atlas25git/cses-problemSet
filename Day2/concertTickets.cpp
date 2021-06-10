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
        
        cin>>n>>m;
        set<array<int,2>>s;
        for(i=0;i<n;i++){
            int a;
            cin>>a;
            s.insert({a,i});
        }
        for(i=0;i<m;i++)
        {
            int t;cin>>t;
            auto it=s.lower_bound({t+1,0});
            if(it==s.begin())
                cout<<"-1\n";
            else{
                --it;
                cout<<(*it)[0]<<"\n";
                s.erase(it);

            }
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