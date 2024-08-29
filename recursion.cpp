#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 0)
        return 1;

    return n * fact(n - 1);
}

void reverseString(string s, int idx)
{
    if (idx >= s.length())
        return;

    reverseString(s, idx + 1);
    cout << s[idx];
}

int main()
{
    int n = 5;
    // cout << fact(n);
    reverseString("abc", 0);

    return 0;
}
