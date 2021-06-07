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
        string s;
        cin>>s;
        int c[26]={},c1=0;
        for(char d:s)
        ++c[d-'A'];
        for(int i=0;i<26;++i)
            c1+=c[i]&1;
        
        if(c1>1){
            cout<<"NO SOLUTION";return ;
        }
        string t;
        for(int i=0;i<26;i++)
            if(c[i]&1^1)
                for(int j=0;j<c[i]/2;j++)
                t+=(char)('A'+i);
        cout<<t;
        for(int i=0;i<26;i++)
            if(c[i]&1)
                for(int j=0;j<c[i];++j)
                    t+=(char)('A'+i);
        reverse(t.begin(),t.end());
        cout<<t;
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