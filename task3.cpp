#include <iostream>

using namespace std;

template <typename T>
void findInRange(T arr[], int size, T min, T max)
{
    cout << "Елементи в діапазоні [" << min << "; " << max << "]: ";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= min && arr[i] <= max)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    int a[] = {1, 5, 8, 12, 20, 25};
    int n1 = sizeof(a) / sizeof(a[0]);

    double b[] = {1.5, 3.2, 5.8, 7.1, 9.9};
    int n2 = sizeof(b) / sizeof(b[0]);

    findInRange(a, n1, 5, 20);
    findInRange(b, n2, 2.0, 8.0);

    return 0;
}