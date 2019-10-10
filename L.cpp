#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(ll i = 0; i < n; i++)
#define loopi(i, a, n) for(ll i = a; i < n; i++)
#define endl "\n"
#define all(v) v.begin(), v.end()


typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

bool preced (ll i,ll j) { return (i>j); }

int nCk(ll k, ll n){
	if(n == k || k==0) return 1;
	if(k>n) return 0;
	return nCk(k-1,n-1) + nCk(k,n-1);
}

ll binomialCoeff(ll n, ll k)
{
    int res = 1;
    if(k>n) return 0;
    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

ll countV(string s){
    int ans = 0;
    loop(s.size()){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i') ans++;
        if(s[i] == 'o' || s[i] == 'u') ans++;
    }
    return ans;
}

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;
  cin >> t; //cin.ignore();
  while(t--){
    ll n;
    cin >> n; cin.ignore();
    vector<string> s(n);
    vll vowels(n, 0);
    ll ans = 0;
    loop(n){
        getline(cin, s[i]);
        vowels[i] = countV(s[i]);
        for(int j = i-1; j >= 0; j--) if(vowels[i] == vowels[j])
            ans++;
    }
    cout << ans <<endl;
  }
  return 0;
}
