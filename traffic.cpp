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

        read(x);
        read(n);
        multiset<ll> st1;
        set<ll> st;
        st.insert(0);
        st.insert(x);
        forne(i, n)
        {
            ll a;
            cin >> a;
            // cout << a << endl;

            auto it1 = st.upper_bound(a);
            // cout << *it1 << endl;
            it1--;
            auto it2 = it1;
            it1++;
            ll ans = max(*it1 - a, a - *it2);
            // cout << *it1 << " " << *it2 << endl;

            if (st1.find(*it1 - *it2) != st1.end())
            {
                st1.erase(st1.find(*it1 - *it2));
            }
            st1.insert(*it1 - a);
            st1.insert(a - *it2);

            // cout << ans << endl;
            st.insert(a);

            auto it4 = st1.end();

            it4--;
            cout << *it4 << " ";
        }
    }

    return 0;
}
