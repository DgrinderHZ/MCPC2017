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

  int d, a, b, t;
  int ans[3];
  cin >> t;
  while(t--){
    cin >> d >> a >> b;
    ans[0] = a*a*d;
    ans[1] = b*b*d;
    ans[2] = ans[0]+ans[1];
    sort(ans, ans+3);
    cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
  }


  return 0;
}
