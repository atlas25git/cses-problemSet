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
        string s[8];
        for(int i=0;i<8;i++)cin>>s[i];
        int p[8];
        iota(p,p+8,0);
        do{
            bool ok=1;
            for(int i=0;i<8;i++)
                ok&=s[i][p[i]]=='_';
        }while(next_permutation(p,p+8));
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
            int t;
            cin>>t;
            while(t--)
            solve();
        }
    }