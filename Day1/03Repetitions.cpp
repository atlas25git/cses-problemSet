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
    int i,j,k,n,m,ans=0,cnt=1,sum=0;
        string s;
        cin>>s;
        for(int i=0;s[i];i++)
        {
            if(i!=s.size()-1 && s[i]==s[i+1])
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else cnt=1;
        }
        cout<<(ans>1?ans:1);
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