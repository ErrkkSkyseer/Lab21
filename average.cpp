#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        cout << "Please input numbers to find average.";
        return 1;
    }

    int sum = 0;

    for (int i = 0; i < argc - 1; i++)
        sum += atoi(argv[i + 1]);

    double agv = (double)sum / (double)(argc - 1);

    cout << "---------------------------------" << endl;
    cout << "Average of " << (argc - 1) << " numbers = " << agv << endl;
    cout << "---------------------------------" << endl;

    return 0;
}
