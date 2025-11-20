#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "\t\t\tMy Almighty Formula Solver\n\n";
    cout << "How many sets do you want to calculate? ";
    cin >> n;

    double a[n], b[n], c[n];

    cout << "\nEnter the values of a, b, and c for each set:\n\n";
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

    cout << "\n================================================================================================================================================\n";
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
    cout << "================================================================================================================================================\n";

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
                 << setw(20) << "Real roots";
        }
        else if (D == 0)
        {
            double r = -b[i] / (2 * a[i]);
            cout << setw(30) << r
                 << setw(30) << r
                 << setw(20) << "Equal roots";
        }
        else
        {
            double real = -b[i] / (2 * a[i]);
            double imag = sqrt(-D) / (2 * a[i]);
            cout << setw(20) << real << " + " << imag << "i"
                 << setw(30) << real << " - " << imag << "i"
                 << setw(20) << "Complex roots";
        }

        cout << "Omowu George Omajuwa  25/18097\n";
    }

    cout << "================================================================================================================================================\n";

    return 0;
}
