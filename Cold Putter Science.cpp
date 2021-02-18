#include <iostream>

using namespace std;

int main()
{
    unsigned int temp;
    int count_days = 0;
    cin >> temp;
    int temp_data[temp];
    if (temp>=1 && temp<=100)
    {
        for (int i=0; i<temp; i++)
        {
            cin >> temp_data[i];
        }    
        for (int i=0; i<temp; i++)
        {
            if (temp_data[i] < 0)
                count_days++;
        } 
    cout << count_days;   
    }

    return 0;
}
