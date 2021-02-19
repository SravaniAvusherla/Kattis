#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string l;
    cin >> l;
    
    string output = string(1, l[0]);
    
    for (int i =1; i < l.size() -1; i++) 
    {
        if (l[i] == '-') {
            input += string(1, l[i+1]);
        }
    }
    
     cout << output ;
   }
