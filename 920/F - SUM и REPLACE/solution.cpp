#include <bits/stdc++.h>
 
#define pb push_back
#define int long long
#define F first
#define S second
#define clr clear()
#define sz size()
#define str string
#define pf push_front
#define endl "
"
#define M 5005
#define N 1000005
#define set(a) fixed << setprecision(a)
#define all(s) s.begin(),s.end()
#define ppb pop_back()
#define ppf pop_front()
#define ios_base ios_base::sync_with_stdio(false); cin.tie(NULL);
 
using namespace std;
  
int T = 1;
 
const int inf = 1e18+7;
 
 
void freopen(string s) { freopen((s + ".in").c_str(), "r", stdin); freopen((s + ".out").c_str(), "w", stdout);}
int lcm(int a,int b){return (a / __gcd(a, b)) * b;};
int binpow(int a,int n,int MOD = 1e9+7){if(n==0)return 1;else if(n%2==1)return ((binpow(a,n-1,MOD)%MOD)*a)%MOD;else{int b = binpow(a,n/2,MOD)%MOD;return (b*b)%MOD;}}
int nceil(int a,int b){return (a+b-1)/b;};
bool isbig(char x){return x >= 65 && x <= 90;}
bool issmall(char x){return x >= 97 && x <= 122;}
 
int t[4*N];
int a[N];
int tx[N*4];
int f[5050001];
void update(int l,int r,int tl,int tr,int v){
    if(tl > r || tr < l || tx[v] <= 2)return;
    if(tl==tr){
        t[v] = f[t[v]];
        tx[v] = t[v];
        return;
    }
    int tm = (tl+tr)/2;
    update(l,r,tl,tm,v+v);
    update(l,r,tm+1,tr,v+v+1);
    t[v] = t[v+v]+t[v+v+1];
    tx[v] = max(tx[v+v],tx[v+v+1]);
}
void build(int tl,int tr,int v){
    if(tl==tr){
        t[v] = a[tl];
        tx[v] = a[tl];
        return;
    }
    int tm = (tl+tr)/2;
    build(tl,tm,v+v);
    build(tm+1,tr,v+v+1);
    t[v] = t[v+v]+t[v+v+1];
    tx[v] = max(tx[v+v],tx[v+v+1]);
}
int get(int l,int r,int tl,int tr,int v){
    if(tl > r || tr < l)return 0;
    if(l <= tl && tr <= r){
        return t[v];
    }
    int tm = (tl+tr)/2;
    return get(l,r,tl,tm,v+v)+get(l,r,tm+1,tr,v+v+1);
}
void solve(){
    int zzz = 5e6+50000;
    for(int i=1;i <= zzz;i++){
        for(int j=i;j <= zzz;j+=i){
            f[j]++;
        }
    }
    int n,q;
    cin >> n >> q;
    for(int i=1;i <= n;i++){
        cin >> a[i];
    }
    build(1,n,1);
    for(int i=1;i <= q;i++){
        int z;
        cin >> z;
        if(z==1){
            int l,r;
            cin >> l >> r;
            update(l,r,1,n,1);
        }
        else{
            int l,r;
            cin >> l >> r;
            cout << get(l,r,1,n,1) << endl;
        }
    }
}
// Makhich Yerkek 
main() {
   ios_base;
//   cin >> T;//ne zabyd steret
//   freopen("");
    // for(int i=1;i <= T;i++){
    //     // cout << "Case " << i << ": ";
    //     solve();
    // }
   solve();
}