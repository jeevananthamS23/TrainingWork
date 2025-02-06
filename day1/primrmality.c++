#include <iostream>
using namespace std;
int main()
{
    int n, res = 0;

    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            res = 1;
        break;
    }
    if (res == 1)
        cout << "it was not a prime number";
    else
        cout << "it was a primenumber";

    return 0;
}