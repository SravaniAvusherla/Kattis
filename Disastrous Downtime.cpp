#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    vector <long int> request;
    cin >> n >> k;
    for (int i=0; i <n; i++)
    {
        long int input;
        cin >> input;
        request.push_back(input);
    }
    sort(request.begin(), request.end());
    
    int max_pending_req = -1;
    int j=0;
    
    for (int i=0; i <n; i++)
    {
        int min_req = n-i;
        while (j<n)
        {
            if (request[j]-request[i]>=1000)
            {
                min_req = j-i;
                break;
            }
            j++;
        }
        max_pending_req = max(max_pending_req, min_req);
        if (j==n)
            break;
    }
    if (max_pending_req%k)
        cout << (max_pending_req/k)+1;
    else
        cout << max_pending_req/k;
    
    return 0;
}
