#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n_cases;
    cin >> n_cases;

    while(n_cases--) {
        int l, n; 
        cin >> l >> n;

        vector<int> ants(n);
        for(auto& i : ants) {
            cin >> i;
        }

        int lo = min(ants[0], l-ants[0]);
        int hi = max(ants[0], l-ants[0]);

        for(auto i : ants) {
            lo = max(lo, min(i, l-i));
            hi = max(hi, max(i, l-i));
        }

        cout << lo << " " << hi << endl;
    }
}
