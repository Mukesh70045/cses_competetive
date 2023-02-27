#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (ll i = 0; i < n; i++)
#define forn(i, n) for (ll i = 1; i < n; i++)
#define forne(i, n) for (ll i = 1; i <= n; i++)
#define revn(i, n) for (ll i = n - 1; i >= 0; i--)
#define sortl(v) sort(v.begin(), v.end())
#define reversal(v) reverse(v.begin(), v.end())
#define countset(n) __builtin_popcountll(n)
#define maxelement(v) *max_element(v.begin(), v.end())
#define minelement(v) *min_element(v.begin(), v.end())
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define ff first
#define ss second
#define pb push_back
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vl vector<ll>
#define vpl vector<pll>
#define vpi vector<pii>
#define vvl vector<vl>
#define vb vector<bool>
#define vs vector<string>
#define py cout << "YES";
#define pm cout << "-1";
#define pn cout << "NO";
#define nl cout << "\n";
#define mpl map<ll, ll>
#define umpl unordered_map<ll, ll>
#define f(map) for (auto it : map)
#define read(n) \
    ll n;       \
    cin >> n;
const int inf = 1e9 + 7;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll test = 1;
    // cin >> test;

    while (test--)
    {
        ll i, j, a, b, c, d, f, cnt, ans, res, print;
        read(n);
        set<ll> st;
        ans = 0ll;
        vl v(n);
        loop(i, n)
        {
            cin >> v[i];
        }
        ll p = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x = v[i];
            if (st.find(x) != st.end())
            {

                while (v[p] != x)
                {
                    st.erase(v[p]);
                    p++;
                }
                p = p + 1;
                st.erase(x);
                st.insert(x);
            }
            else
            {
                st.insert(x);
                ll size = st.size();
                ans = max(ans, size);
            }
        }
        ll size = st.size();
        ans = max(ans, size);

        cout << ans << endl;
    }

    return 0;
}
