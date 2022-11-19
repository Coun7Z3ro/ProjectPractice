#include "iostream"
using namespace std;

int sum (int a, int b);
int sum (int a, int b, int c);
int sum (int a, int b, int c, int d);


int main()
{
    int a, b, c, d, ans;
    cin >> a >> b >> c >> d;
    if (a*b*c*d != 0)
    {
        ans = sum (a, b, c, d);
    }
    else if (a*b*c != 0)
    {
        ans = sum (a, b, c);
    }
    else
    {
        ans = sum (a, b);
    }

    cout << "Summa: " << ans << endl;
}

int sum (int a, int b)
{
    return (a+b);
}

int sum (int a, int b, int c)
{
    return (a+b+c);
}

int sum (int a, int b, int c, int d)
{
    return (a+b+c+d);
}
