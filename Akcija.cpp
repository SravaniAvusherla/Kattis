#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    vector<int> books;
    
    for(int i=0; i<n ;i++) {
        int price;
        cin >> price;
        books.push_back(price);
    }
    
    sort(books.rbegin(), books.rend());
    
    int cost = 0;
    
    for(int j=0; j<books.size(); j++) {
        if(j % 3 != 2) {
            cost += books[j];
        }
    }
        
      cout << cost << endl;  
        
    }
    
