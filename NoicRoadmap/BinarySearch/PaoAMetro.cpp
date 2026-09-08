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

int N, M;
int m[maxn];


bool slices(int x){
    int res = 0;
    for (int i = 1; i <= M; i++){
        res += (m[i] / x);
    }
    return (res >= N);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;

    for (int i = 1; i <= M; i++){
        cin >> m[i];
    }

    int l = 1, r = 10000, ans;


    while (l <= r){
        int mid = (l + r) / 2;
        if (slices(mid)) {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    
    cout << ans;

}