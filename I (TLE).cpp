#include <vector>
#include <iostream>
#include <set>
#include <string.h>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)


typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;


int main ()
{
  //#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  //#endif // ONLINE_JUDGE

  cin.tie(0);
  cin.sync_with_stdio(0);

  int  t;
  double n, k;
  cin >> t;
  while(t--){
    cin >> n >> k;
    double all = 0;
    for(ll i=1; i <= n; i++) if(i != k) {
        if(i < k) all += (int)((k-1)/(k-i));
        else all += (int)((n-k)/(i-k));
    }
    cout << all/(n-1) << "\n";
  }


  return 0;
}
