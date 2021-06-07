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
        if(n*(n+1)/2%2){
            cout<<"NO";
            return;
        }
        vector<int> v1,v2;
        j=0;
        if(n%4)
            j=3;
        else j=4;
        for(int i=0;i<(n-1)/4;i++)
        {
            v1.pb(4*i+1+j);
            v1.pb(4*i+4+j);
            v2.pb(4*i+2+j);
            v2.pb(4*i+3+j);
        }
        if(n%4){
            v1.pb(1);
            v1.pb(2);
            v2.pb(3);
        }else{
            v1.pb(1);
            v1.pb(4);
            v2.pb(3);
            v2.pb(2);
        }
        cout<<"YES\n";
        cout<<v1.size()<<"\n";
        for(int i:v1)cout<<i<<" ";
        cout<<endl;
        //cout<<"YES\n";
        cout<<v2.size()<<"\n";
        for(int i:v2)cout<<i<<" ";
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