#include <iostream>

using namespace std;

template <class T1, class T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b)
    {
        first = a;
        second = b;
    }

    void show()
    {
        cout << "Перше число: " << first << endl;
        cout << "Друге число: " << second << endl;
    }
};

int main()
{
    Pair<int, double> p1(10, 5.7);
    Pair<float, int> p2(3.14f, 25);

    cout << "Пара 1:" << endl;
    p1.show();

    cout << endl;

    cout << "Пара 2:" << endl;
    p2.show();

    return 0;
}