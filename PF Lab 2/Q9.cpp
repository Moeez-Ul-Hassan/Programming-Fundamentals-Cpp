#include<iostream>
using namespace std;
int main()

{
    int i = 1, j, rows;
    char ch;

    cout << "Enter Right Triangle Star Pattern Row = ";
    cin >> rows;

    cout << "Enter Symbol for Right Triangle Pattern = ";
    cin >> ch;

    cout << "Right Angled Triangle Star Pattern\n";

    while (i <= rows)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    
}
