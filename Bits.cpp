#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned long long ull;

ull getBits(ull n) {
    ull  bits = 0;
    while(n > 0) {
        if(n % 2 == 1) {
            bits++ ;
        }
        n >>= 1;
    }
    return bits;
}

int main()
{
    ull n;
    cin >> n;
    
    
    
    for(ull i = 0; i < n; i++) {
        ull test_num;
        cin >> test_num;
        ull maxBits = 0;
        while(test_num > 0) {
            maxBits = max(maxBits, getBits(test_num));
            test_num /= 10;
        }
        cout << maxBits << endl;
    }
}
