#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
void tc(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        cout<<n+1-x<<' ';
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while(t--)
        tc();
    return 0;
}