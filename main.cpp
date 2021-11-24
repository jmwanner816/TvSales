#include <iostream>

using namespace std;

int main()
{
    const double twentyFourTV = 124.00;
    const double thirtyTwoTV = 180.00;
    const double fortyEightTV = 420.00;
    const double tax = 0.075;
    int tvSelection;
    double total = 0;
    char userCont = 'y';

    while (userCont == 'y')
    {
    cout << "Which TV do you want? Enter 1 for 24 inch, 2 for 32 inch, or 3 for 48 inch." << endl;
    cin >> tvSelection;

    if (tvSelection == 1)
    {
        total += twentyFourTV + (twentyFourTV*tax);
    }
    else if (tvSelection == 2)
    {
        total += thirtyTwoTV + (thirtyTwoTV*tax);
    }
    else if (tvSelection == 3)
    {
        total =+ fortyEightTV + (fortyEightTV*tax);
    }
    else
    {
        cout << "You did not enter a valid option";
    }
    }
        cout << "To add a TV, please enter y";
        cin >> userCont;
        cout << "Your total is $:" << total;

    return 0;
}

