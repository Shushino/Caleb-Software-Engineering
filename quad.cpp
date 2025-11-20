#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int n = 10;
    double a[n], b[n], c[n];

    cout << "\t\t\tMy Almighty Formula Solver\n\n";
    cout << "Enter values for 10 sets of (a, b, c):\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Set " << i + 1 << ":\n";
        cout << "a: ";
        cin >> a[i];
        cout << "b: ";
        cin >> b[i];
        cout << "c: ";
        cin >> c[i];
        cout << endl;
    }

    cout << "\n====================================================================================================================================================================\n";
    cout << left
         << setw(5) << "Set"
         << setw(8) << "a"
         << setw(8) << "b"
         << setw(8) << "c"
         << setw(15) << "Discriminant"
         << setw(30) << "Root 1"
         << setw(30) << "Root 2"
         << setw(20) << "Nature of Roots"
         << "Name and Matric no\n";
    cout << "====================================================================================================================================================================\n";

    for (int i = 0; i < n; i++)
    {
        double D = (b[i] * b[i]) - (4 * a[i] * c[i]);
        cout << left << setw(5) << (i + 1)
             << setw(8) << a[i]
             << setw(8) << b[i]
             << setw(8) << c[i]
             << setw(15) << D;

        if (D > 0)
        {
            double r1 = (-b[i] + sqrt(D)) / (2 * a[i]);
            double r2 = (-b[i] - sqrt(D)) / (2 * a[i]);
            cout << setw(30) << r1
                 << setw(30) << r2
                 << setw(20) << "Real Roots";
        }
        else if (D == 0)
        {
            double r = -b[i] / (2 * a[i]);
            cout << setw(30) << r
                 << setw(30) << r
                 << setw(20) << "Equal Roots";
        }
        else
        {
            double real = -b[i] / (2 * a[i]);
            double imag = sqrt(-D) / (2 * a[i]);
            string root1 = to_string(real) + " + " + to_string(imag) + "i";
            string root2 = to_string(real) + " - " + to_string(imag) + "i";

            cout << setw(30) << root1
                 << setw(30) << root2
                 << setw(20) << "Complex Roots";
        }

        cout << "Omowu George Omajuwa  25/18097\n";
    }

    cout << "====================================================================================================================================================================\n";

    return 0;
}
