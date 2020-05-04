//in the name of allah

#include <iostream>
using namespace std;

int b[100005] = {0};

int main() {
    int n, t, ans = 0, mx = 0, tans = 0; cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> b[i];
    int left = 0, right = 0;
    while (right < n) {
        tans += b[right];
        if (tans > t) {
            while (tans > t && left <= right) {
                tans -= b[left];
                left++;
            }
        }
        else {
            ans = max(ans, right - left + 1);
        }
        right++;
    }
    cout << ans << endl;
    return 0;
}
