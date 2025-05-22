#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int n = rand() % 6 + 5;

    double x_step = 71.0 / (n - 1);

    cout << n << " Equally spaced bin." << endl;
    for (int i = 0; i < n; i++)
    {
        double x = i * x_step;
        double sin_x = sin(x * M_PI / 180.0);
        cout << "sin(" << x << "): " << sin_x << endl;
    }
    return 0;
}

