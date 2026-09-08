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

vi chimps;

int lower(int h){
    int l = 0, r = sz(chimps) - 1, ans = r + 1;

    while (l <= r){
        int mid = (l + r) / 2;
        if (chimps[mid] >= h) {
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    
    if (ans - 1 < 0) return -1;
    return ans - 1;
    
}

int higher(int h){

    int l = 0, r = sz(chimps) - 1, ans = -1;

    while (l <= r){
        int mid = (l + r) / 2;
        if (chimps[mid] > h) {
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    
    if (ans == -1) return -1;
    return ans;
}

signed main(){
    int n, t, h;

    cin >> n;
    for (int i = 0; i < n; i++){
        int val; cin >> val;
        chimps.PB(val);
    }

    cin >> t;

    while (t > 0){
        cin >> h;
        int high = higher(h);
        int low = lower(h);
        if (low == -1) cout << 'X' << ' ';
        else cout << chimps[low] << ' ';
        if (high == -1) cout << 'X' << '\n';
        else cout << chimps[high] << '\n';
        t--;
    }
    

}