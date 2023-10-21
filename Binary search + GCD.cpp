#include <bits/stdc++.h>
#define nl "\n"
#define nn cout << "NO\n"
#define yy cout << "YES\n"
#define ss " "
#define pb push_back
#define ll long long
#define ull unsigned long long
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a / gcd(a,b)) * b)
#define pii pair<int,int>
#define pll pair<long long,long long>
#define sz(v) (int)v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define as   sort(arr,arr+n)
 //p.insert(i, k) loop er vitr er i
using namespace std;
bool cm(ll a, ll b)
{
   return (gcd(a,b)==1);
}

void solve(ll n)
{
  ll mid = n/2;
  for(int i=mid;i>=1;i++)
  {
        if(cm(i,n-i)==1)
        {
         cout<<i<<" "<<n-i<<" "<<1 <<nl;
         break;
        }
  }



}

int main(void)
{
    FIO;
    ll t;
    cin >> t;
   while (t--) {
      ll n;
      cin>>n;
        solve(n-1);
    }
    return 0;
}
// explained code padho

