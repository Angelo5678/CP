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

signed main(){
    int t;

    cin >> t;

    while (t > 0){
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int mx = n / k;
        vi farms(mx);
        for (int i = 0; i < sz(s); i++){
            if (s[i] == '0' && farms[i / k] == 0){
                mx--;
                farms[i / k] = 1;
            }
        }
        cout << mx << '\n';
        t--;
    }
    

}