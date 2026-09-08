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
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++){
            if (arr[i] == -1) arr[i] = 1;
            if (arr[i] == 1) break;
        }
        for (int i = n - 1; i >= 0; i--){
            if (arr[i] == -1) arr[i] = 1;
            if (arr[i] == 1) break;
        }
        for (int i = 0; i < n; i++){
            if (arr[i] == -1) arr[i] = 0;
            cout << arr[i] << ' ';
        }

        cout << '\n';
        t--;
    }
    

}