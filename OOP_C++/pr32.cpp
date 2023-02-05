// C++ program to short the given number list
#include <iostream>
using namespace std;
class shorting
{
    int i, j, k;

public:
    void shortner(int *a, int n)
    {
        for (i = 0; i < n; i++)
        {
            for (j = (i + 1); j < n; j++)
            {
                if (a[i] > a[j])
                {
                    k = a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }
    }
};
int main()
{
    int i, n, num[50];
    shorting s;
    cout << "How many number you want to short in accending order" << endl;
    cin >> n;
    cout << "Start Entering the numbers to arrange them:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    s.shortner(num, n);
    cout << "Number after sorting them in order" << endl;
    for (i = 0; i < n; i++)
    {
        cout << num[i] << "\n"
             << endl;
    }

    return 0;
}