#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    int maxPos = 0;
    int minPos = 0;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];

        if(a[i] > max)
        {
            max = a[i];
            maxPos = i;
        }

        if(a[i] < min)
        {
            min = a[i];
            minPos = i;
        }
    }
    cout << "Maximum Element = " << max << endl;
    cout << "Location of Maximum Element = " << maxPos << endl;

    cout << "Minimum Element = " << min << endl;
    cout << "Location of Minimum Element = " << minPos << endl;

    cout << "Sum of All Elements = " << sum << endl;

    return 0;
}