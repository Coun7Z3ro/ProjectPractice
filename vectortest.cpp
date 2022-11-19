#include "iostream"
#include "vector"
#include "cstdlib"
using namespace std;

int main ()
{
    vector <int> data(5);

    for (int i = 0; i < 5; i++)
    {
        data[i] = rand()%10;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << endl;
    }
    for (int i = 4; i >= 0; i--)
    {
        cout << data[i] << endl;
    }
}
