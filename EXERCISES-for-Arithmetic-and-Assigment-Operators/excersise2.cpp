#include <iostream>

using namespace std;

int main()
{
    double user_celcius;
    double farenheit_sol;

    cout << "Enter degrees in celcius: ";
    cin >> user_celcius;

    farenheit_sol = user_celcius * 33.8;

    cout << user_celcius << " is " << farenheit_sol << " degrees farenheit" << endl;

}
