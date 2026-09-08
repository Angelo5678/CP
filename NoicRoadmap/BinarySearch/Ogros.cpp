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

vi strips(100000), points(100000);

signed main(){
    int n, m;
    
    cin >> n >> m;

    for (int i = 1; i < n; i++)
        cin >> strips[i];

    for (int i = 0; i < n; i++)
        cin >> points[i];

    for (int i = 0; i < m; i++){
        int o; cin >> o;
        
        int r = n, l = 1, ans = points[n - 1];
        while (l <= r){
            
            int mid = (l + r) / 2;

            if (strips[mid] > o){
                ans = points[mid - 1];
                r = mid - 1;
            } else l = mid + 1;
        }
        
        cout << ans << ' ';
    }
}