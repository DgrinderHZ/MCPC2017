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
#define loopi(i, a, n) for(int i = a; i < n; i++)
#define endl "\n"
#define all(v) v.begin(), v.end()


typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

bool preced (ll i,ll j) { return (i>j); }

ll ss, sx; /// sizes

bool check(string s, string x, vll occ, ll d){

    for(ll t = 0,i = 0; t < ss-d; t++, i++){
        bool ans = true;
        loopi(j, 0, sx){
            int f = count(s.begin()+t, s.begin()+t+d, x[j]);
            if(f != occ[j]) ans = false;
        }
        if(ans) return ans;
    }

    return false;
}

ll BS(string s, string x){
    ll l = sx, r = ss;
    ll ans = -1;
    vll occ(sx, 0);
    /// count occurrences
    loop(sx){
        occ[i] = count(all(x), x[i]);
    }

    while(l <= r){
        ll mid = (l+r)/2; /// k

        if(check(s, x, occ, mid)) {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  #endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;
  cin >> t; cin.ignore();
  while(t--){
    string s, x;
    getline(cin, s);
    getline(cin, x);
    sx = x.size();
    ss = s.size();
    cout << BS(s, x) << endl;
  }

  return 0;
}
