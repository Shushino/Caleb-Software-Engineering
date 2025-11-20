#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int size;
    cout << "How many students do you want to input? ";
    cin >> size;
    cin.ignore(); // skip newline

    // dynamic containers
    vector<string> names(size);
    vector<string> matric(size);

    cout << "\nEnter details of " << size << " students in COS 201:\n\n";

    for (int i = 0; i < size; i++) 
    {
        // Full Name
        do 
        {
            cout << "Student " << i + 1 << " Full Name: ";
            getline(cin, names[i]);

            int j = 0;
            while (j < i && (names[i] != names[j])) 
            {
                j++;
            }

            if (j < i) 
            {
                cout << "This name already exists. Enter a different name.\n\n";
                names[i].clear();
            }
        } while (names[i].empty());

        // Matric number
        do 
        {
            cout << "Matric Number: ";
            cin >> matric[i];

            int j = 0;
            while (j < i && matric[i] != matric[j]) 
            {
                j++;
            }

            if (j < i) 
            {
                cout << "This matric number already exists. Enter a different matric number.\n\n";
                matric[i].clear();
            }
        } while (matric[i].empty());

        cin.ignore(); // skip newline before next getline
        cout << "\n";
    }

    // Display final list
    cout << "--------------------------------------------\n";
    cout << "Set of Students in COS 201:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << "Student " << i + 1 << ": " 
             << names[i] << " | Matric No: " << matric[i] << "\n";
    }
    cout << "--------------------------------------------\n";

    return 0;
}