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
        int p[8];bool b[15];
        iota(p,p+8,0);
        do{
            bool ok=1;
            for(i=0;i<8;i++)
            //we've stored input in a strings array
                ok&=s[i][p[i]]=='.';
            memset(b,0,15);
            for(i=0;i<8;i++)
            {
                if(b[i+p[i]])
                    ok=0;
                b[i+p[i]]=1;
            }
            memset(b,0,15);
            for(i=0;i<8;i++)
            {
                if(b[i+7-p[i]])
                    ok=0;
                b[i+7-p[i]]=1;
            }
            ans+=ok;
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
            // int t;
            // cin>>t;
            // while(t--)
            solve();
        }
    }