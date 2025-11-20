#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "\t\t\tSimple Truth Table\n\n";
    cout << "How many input sets do you want? ";
    cin >> n;

    int A[100], B[100];
    for (int i = 0; i < n; i++)
    {
        cout << "\nRow " << i+1 << ":\n";

        cout << "A (0 or 1): ";
        cin >> A[i];
        while (A[i] < 0 || A[i] > 1)
        {
            cout << "Invalid. Enter 0 or 1: ";
            cin >> A[i];
        }

        cout << "B (0 or 1): ";
        cin >> B[i];
        while (B[i] < 0 || B[i] > 1)
        {
            cout << "Invalid. Enter 0 or 1: ";
            cin >> B[i];
        }
    }

    cout << "\nA\tB\t!A\t!B\tA||B\tA&&B\n";
    cout << "-------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t" << B[i] << "\t" << !A[i] << "\t" << !B[i] << "\t" << (A[i] || B[i]) << "\t" << (A[i] && B[i]) << "\n";
    }

    cout << "-------------------------------------------\n";
}
