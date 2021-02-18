#include <iostream>
#include <string>

using namespace std;

const unsigned int th = 1;
const unsigned int in = 1000 * th;
const unsigned int ft = 12 * in;
const unsigned int yd = 3 * ft;
const unsigned int ch = 22 * yd;
const unsigned int fur = 10 * ch;
const unsigned int mi = 8 * fur;
const unsigned int lea = 3 * mi;

unsigned int convert_string(const string& input)
{
    if (input == "inch" || input == "in")
        return in;
    else if (input == "foot" || input == "ft")
        return ft;
    else if (input == "yard" || input == "yd")
        return yd;
    else if (input == "chain" || input == "ch")
        return ch;
    else if (input == "furlong" || input == "fur")
        return fur;
    else if (input == "mile" || input == "mi")
        return mi;
    else if (input == "league" || input == "lea")
        return lea;
    else if (input == "thou" || input == "th")
        return th;
    else
        return 0;
}

int main()
{
    unsigned int distance = 0;
    string ignore_in;
    string input_metric;
    string conv_metric;
    cin >> distance;
    cin >> input_metric;
    cin >> ignore_in;
    cin >> conv_metric;

    double result;

    if ((distance >= 1) && (distance <= 100))
    {
        double distance_th = (double)distance * convert_string(input_metric);
        unsigned int convert_metric_th = convert_string(conv_metric);
        if (convert_metric_th == 0) {
            cout << "Invalid metric to convert !!";
        }
        else {
            result = distance_th / convert_metric_th;
            cout << fixed;
            cout.precision(13);
            cout << result;
        }
    }
    
    return 0;
}

