#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int *ar = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int m;
    cin >> m;

    int *updated_arr = new int[m];

    for (int i = 0; i < n; i++)
    {
        updated_arr[i] = ar[i];
    }

    delete[] ar;

    for (int i = n; i < m; i++)
    {
        cin >> updated_arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << updated_arr[i] << " ";
    }
    cout << endl;
}