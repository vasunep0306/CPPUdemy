#include <iostream>

using namespace std;

int main()
{
    double get_inch;
    double converted_answer;


    //Get the number of inches from the user
    cout << "Enter the number of inches: " << endl;
    cin >> get_inch;

    converted_answer = get_inch * 2.54;

    cout << get_inch << " inches is " << converted_answer << " centimeters."<< endl;

    return 0;
}
