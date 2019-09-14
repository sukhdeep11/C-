#include <iostream>
using namespace std;

int digital_sum(int number)
{
    int sum = 0;
    while (number > 0)
    {

        int rem = number % 10;

        sum = sum + rem;

        number = number / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    cout << digital_sum(n);
    return 0;
}
