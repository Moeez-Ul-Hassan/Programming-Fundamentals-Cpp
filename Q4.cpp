#include <iostream>
using namespace std;
int main ()
{
    int rows;
    cout << "enter the number of rows: ";
    cin >> rows;
    int i = 1, j = 1, k = 1;
    while (i <= rows)
    {
        j = rows;
        while (j > i)
        {
            cout << " ";
            j--;
        }
        cout << "#";
        k = 1;
        while (k < (i - 1) * 2)
        {
            cout << " ";
            k++;
        }
        if (i == 1) {
            cout << endl;
        }
        else {
            cout << "#" << endl;
        }
        i++;
    }

    i=rows-1;j=1;k=1;
    while (i>=1)
    {
        j=rows;
        while (j>i)
        {
            cout<<" ";
            j--;
        }
        cout<<"*";
        k=1;
        while (k<(i-1)*2)
        {
            cout<<" ";
            k++;
        }
        if(i==1){
            cout<<endl;
        }
        else{
            cout<<"*"<<endl;
        }
        i--;
    }
    system("pause");
    return 0;
}