#include <iostream>
using namespace std;
int main()
{
    int age;

    cin >> age;

    if ((age >= 18) && (age <= 60))
    {
        cout << "Eligible";
    }
    else
        cout << "Not Eligible";
    return 0;
}