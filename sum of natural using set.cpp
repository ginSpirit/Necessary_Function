#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define e "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()

const long long MOD = 1e9+7;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    //sum of the natural number using set;
    int n; cin >> n;
    set<int>v;
    for (int i=1; i<=n; i++) {
        v.insert(i);
    }
    long long sum = 0;
    for (int i=1; i<=n; i++) {
        auto it = lower_bound(v.begin(), v.end(), i);
        sum+=*it;
    }
    cout << sum << endl;
    // time complexity of this code : O(n logn)
    return (EXIT_SUCCESS);
}
