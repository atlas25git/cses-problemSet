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
    cout<<"yesa";
    int i,j,k,n,m,ans=0,cnt=0,sum=0;
        const int mxN=2e5;
        int a[mxN],b[mxN];

        cin>>n>>m>>k;
        //cout<<n<<m<<k;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        for(i=0,j=0;i<n;i++)
        {
            while(j<m && b[j]<a[i]-k)
                j++;
            if(j<m && b[j]<=a[i]+k)
                ans++,j++;

        }
        cout<<ans;

}
void init() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
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