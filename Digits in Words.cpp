#include <iostream>
using namespace std;
char word[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
int display(int n)
{
    int digits[10];
    int dc = 0;
    do
    {
        digits[dc] = n % 10;
        n = n / 10;
        dc++;
    } while (n != 0);
    for (int i = dc - 1; i >= 0; i--)
        cout << word[digits[i]] << " ";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    display(n);
    return 0;
}