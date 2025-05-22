#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int rolls = 3600;
    int counts[11] = {0};

    srand(time(0));

    for (int i = 0; i < rolls; i++) {
        int roll1 = rand() % 6 + 1;
        int roll2 = rand() % 6 + 1;
        int sum = roll1 + roll2;
        counts[sum - 2]++;
    }

    cout << "Summation:" << endl;
    for (int i = 2; i <= 12; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Occurrence:" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << counts[i] << " ";
    }
    cout << endl;

    cout << "Percentage:" << endl;
    for (int i = 0; i <= 10; i++) {
        double percentage = 100.0 * counts[i] / rolls;
        cout << static_cast<int>(percentage) << " ";
    }
    cout << endl;

    double expected_percentage = 100.0 / 6;
    double actual_percentage = 100.0 * counts[5] / rolls;
    cout << "Approximately one-sixth(0.166 or 16.66%) of all the rolls should be 7" << endl;
    cout << "In this case: " << static_cast<int>(actual_percentage) << "%" << endl;

    if (actual_percentage < expected_percentage * 0.9 || actual_percentage > expected_percentage * 1.1) {
        cout << "The rolling is not reasonable." << endl;
    } else {
        cout << "The rolling is reasonable." << endl;
    }

    return 0;
}

