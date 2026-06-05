#ifndef _GLIBCXX_NO_ASSERT 
#include <cassert> 
#endif 
#include <cctype> 
#include <cerrno> 
#include <cfloat> 
#include <ciso646> 
#include <climits> 
#include <clocale> 
#include <cmath> 
#include <csetjmp> 
#include <csignal> 
#include <cstdarg> 
#include <cstddef> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
  
#if __cplusplus >= 201103L 
#include <ccomplex> 
#include <cfenv> 
#include <cinttypes> 
#include <cstdalign> 
#include <cstdbool> 
#include <cstdint> 
#include <ctgmath> 
#include <cwchar> 
#include <cwctype> 
#endif 
  
// C++ 
#include <algorithm> 
#include <bitset> 
#include <complex> 
#include <deque> 
#include <exception> 
#include <fstream> 
#include <functional> 
#include <iomanip> 
#include <ios> 
#include <iosfwd> 
#include <iostream> 
#include <istream> 
#include <iterator> 
#include <limits> 
#include <list> 
#include <locale> 
#include <map> 
#include <memory> 
#include <new> 
#include <numeric> 
#include <ostream> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <stdexcept> 
#include <streambuf> 
#include <string> 
#include <typeinfo> 
#include <utility> 
#include <valarray> 
#include <vector> 
  
#if __cplusplus >= 201103L 
#include <array> 
#include <atomic> 
#include <chrono> 
#include <condition_variable> 
#include <forward_list> 
#include <future> 
#include <initializer_list> 
#include <mutex> 
#include <random> 
#include <ratio> 
#include <regex> 
#include <scoped_allocator> 
#include <system_error> 
#include <thread> 
#include <tuple> 
#include <typeindex> 
#include <type_traits> 
#include <unordered_map> 
#include <unordered_set> 
#endif
 
#define pb push_back
#define ll long long
#define int ll
#define ld long double
#define F first
#define S second
#define clr clear()
#define sz size()
#define str string
#define pf push_front
#define endl "
"
#define set(a) fixed << setprecision(a)
#define bg begin()
#define end end()
#define ppb pop_back()
#define ppf pop_front()
#define ios_base ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define YES cout << "YES"
#define NO cout << "NO"
#define Yes cout << "Yes"
#define No cout << "No"
 
using namespace std;
  
int T = 1;
 
const long long inf = 1e18+7;
const int mod = 1e9+7;
const int N = 200005;
const int M = 1000005;
ll dx[9] = {inf,0,0,-1,1,-1,1,-1,1};
ll dy[9] = {inf,-1,1,0,0,1,-1,-1,1};
 
 
void freopen(string s) { freopen((s + ".in").c_str(), "r", stdin); freopen((s + ".out").c_str(), "w", stdout);}
int lcm(int a,int b){return (a*b / __gcd(a, b));};
ll binpow(ll a,ll n,ll MOD = 1e9+7){if(n==0)return 1;else if(n%2==1)return ((binpow(a,n-1,MOD)%MOD)*a)%MOD;else{ll b = binpow(a,n/2,MOD)%MOD;return (b*b)%MOD;}}
int nceil(int a,int b){return (a+b-1)/b;};
bool isbig(char x){return x >= 65 && x <= 90;}
bool issmall(char x){return x >= 97 && x <= 122;}
int sumof(int x){return ((x*(x+1))/2);}
 
int a[N];
vector <pair < pair <int,int>, pair <int,int> >> vp;
int cnt[M];
int anss[M];
int ans = 0;
void add(int pos){
      ans-=(cnt[a[pos]]*cnt[a[pos]]*a[pos]);
      cnt[a[pos]]++;
      ans+=(cnt[a[pos]]*cnt[a[pos]]*a[pos]);
}
void del(int pos){
   ans-=(cnt[a[pos]]*cnt[a[pos]]*a[pos]);
   --cnt[a[pos]];
   ans+=(cnt[a[pos]]*cnt[a[pos]]*a[pos]);
}
void solve(){
   int n,m;
   cin >> n >> m;    
   for(int i=1;i <= n;i++){
      cin >> a[i];
   }
   int k = sqrt(n);
   for(int i=1;i <= m;i++){
      int l,r;
      cin >> l >> r;
      vp.pb({{l/k,r},{i,l}});
   }
    sort(vp.begin(),vp.end);
    int L = 1,R = 1;
    add(1);
   for(int i=0;i < vp.sz;i++){
      int l = vp[i].S.S,r = vp[i].F.S;
      while(L > l)add(--L);
      while(L < l)del(L++);
      while(R > r)del(R--);
      while(R < r)add(++R);
      anss[vp[i].S.F] = ans;
   }
   for (int i = 1; i <= m; ++i){
      cout << anss[i] << endl;
   }
}
 
main() {
   ios_base;
   //setlocale(LC_ALL, "Russian");
//   cin >> T;//ne zabyd steret
//   freopen("");
    for(int i=1;i <= T;i++){
        // cout << "Case " << i << ": ";
        solve();
        if(T > 1)cout << endl;
    }
//    cout << "
Time elapsed: " << double(clock()) / CLOCKS_PER_SEC << " s.
";
}
 
// miras ne molodes