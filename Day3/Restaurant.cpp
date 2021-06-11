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

// bool sortbycol(vector<int>& v1,vector<int>& v2)
// {
//     return v1[1]<v2[1];
// }

void solve(){
    int i,j,k,n,m,ans=0,cnt=0,sum=0;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(2,0));
    for(int i=0;i<n;i++)
        cin>>v[i][1]>>v[i][0];

    sort(v.begin(),v.end());
    //for(auto x: v)cout<<x[0]<<" "<<x[1]<<"\n";
    m=0;
    for(auto w:v)
    {
        if(w[1]>=m)
        {
            ans++;
            m=w[0];
        }

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
            // int t;
            // cin>>t;
            // while(t--)
            solve();
        }
    }