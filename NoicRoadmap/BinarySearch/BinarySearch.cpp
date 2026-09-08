#include <bits/stdc++.h>
using namespace std;

#define int long long
#define sz(v) (int)v.size()
#define PB push_back
#define PP pop_back

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef priority_queue <ii, vector<ii>, greater<ii>> pq_min;

const int maxn = 1e5+10;

int N, Q;
int m[maxn];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> Q;

    for (int i = 1; i <= N; i++)
        cin >> m[i];
    
    while (Q > 0){
        int l = 1, r = N, ans = -1;
        int x; cin >> x;
        while (l <= r){
            int mid = (l + r) / 2;
            if (m[mid] == x){
                ans = mid - 1;
                r = mid - 1;
            } else if (m[mid] > x) {
                r = mid - 1;
            } else l = mid + 1;

        }
        cout << ans << '\n';
        Q--;
    }
    


}