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



void check(vll a, ll d){
    do{
        bool can = true;
        loopi(i, 1, (ll)a.size()){
            string f(to_string(a[i-1])), s(to_string(a[i]));
            ll lf = atoi(f.substr(s.size()-d+1).c_str());
            ll ls = atoi(s.substr(0, d-1).c_str());
             ///cout << lf << " " << ls <<endl;
            if(ls != lf){
                can = false;
                break;
            }
        }

        if(can){
            cout << "Connected\n";
            loop((ll)a.size()){
                cout << a[i] << " ";
            }
            cout <<endl;
            return;
        }

    }while(next_permutation(a.begin(), a.end()));

    cout << "Not Connected\n";
    return;
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
    ll n, d;
    cin >> n >> d;
    vll a(n);
    loop(n) cin >> a[i];

    check(a, d);
  }

  return 0;
}
