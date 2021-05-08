#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N;
    cin >> M;
    int remainder_val = (M % N);
    int division_mn = (M / N);
    for (int i = 0; i < N; i++) {
       for (int j = 0; j < division_mn; j++) {
           cout << "*";
       }
       if (remainder_val > 0) {
           cout << "*";
           remainder_val--;
       }
      cout << endl;
    }
    return 0;
}
