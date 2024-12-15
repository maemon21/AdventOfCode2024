#include <bits/stdc++.h>
using namespace std;

/* alias*/
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vs = vector<string>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;
using vvs = vector<vs>;
using vvb = vector<vb>;
using vvvi = vector<vvi>;
using vvvl = vector<vvl>;
using vvvd = vector<vvd>;
using vvvs = vector<vvs>;
using vvvb = vector<vvb>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using psl = pair<string, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vpsl = vector<psl>;
using ql = queue<ll>;
using qpll = queue<pll>;
using qpsl = queue<psl>;
using tlll = tuple<ll, ll, ll>;
using tsll = tuple<string, ll, ll>;
using vtlll = vector<tlll>;
using vtsll = vector<tsll>;
using qtlll = queue<tlll>;
using qtsll = queue<tsll>;
using si = set<int>;
using sl = set<ll>;
using sd = set<double>;
using ss = set<string>;
using mii = map<int, int>;
using mll = map<ll, ll>;
using msl = map<string, ll>;
using mls = map<ll, string>;

/* define short */
#define _overload5(a, b, c, d, e, name, ...) name
#define _overload4(a, b, c, d, name, ...) name
#define _overload3(a, b, c, name, ...) name
#define _rep0(n) for (ll i = 0; i < (ll)(n); ++i)
#define _rep1(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define _rep2(i, a, b) for (ll i = (ll)(a); i < (ll)(b); ++i)
#define _rep3(i, a, b, c) for (ll i = (ll)(a); i < (ll)(b); i += (ll)(c))
#define rep(...) _overload4(__VA_ARGS__, _rep3, _rep2, _rep1, _rep0)(__VA_ARGS__)
#define rrep1(n) for (ll i = (n) - 1; i >= 0; i--)
#define rrep2(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define rrep3(i, a, b) for (ll i = (b) - 1; i >= (a); i--)
#define rrep4(i, a, b, c) for (ll i = (a) + ((b) - (a) - 1) / (c) * (c); i >= (a); i -= c)
#define rrep(...) _overload4(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define join(a, b) a.insert(a.end(), ALL(b))
#define vsort(a) sort(all(a))
#define sz(x) (ll)(x).size()
#define pcnt(x) __builtin_popcountll(x)
#define eb emplace_back
#define fi first
#define se second

/* const */
const int INF = INT_MAX / 2;
const ll LINF = 1LL << 60;
const int dx4[]{1, 0, -1, 0, 0};
const int dy4[]{0, 1, 0, -1, 0};
const int dx8[]{1, 1, 0, -1, -1, -1, 0, 1, 0};
const int dy8[]{0, 1, 1, 1, 0, -1, -1, -1, 0};
const char PASSAGE = '.';
const char WALL = '#';
const double PI = 3.1415926535;
const string YES = "Yes";
const string NO = "No";
const ll MOD = 1e5;
// const int MOD = 998244353;

/* func */
template <class T>
inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <class T>
inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
inline void yes() { cout << YES << endl; }
inline void no() { cout << NO << endl; }
template <class T>
inline void out(T a) { cout << a << endl; }
template <class T>
inline void vout(T a, bool b)
{
    rep(i, sz(a))
    {
        cout << a[i];
        b ? cout << " " : cout << endl;
    }
    if (b)
        cout << endl;
}

/* debug */
// 標準エラー出力を含む提出はrejectされる場合もあるので注意
#define debug(x) cerr << "\033[33m(line:" << __LINE__ << ") " << #x << ": " << x << "\033[m" << endl;

// ###########################
//  Main
// ###########################

int main(void)
{
    ll n;
    cin >> n;

    vl a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    ll ans;

    cout << ans << endl;

    return 0;
}
