#include <bits/stdc++.h>
using namespace std;

struct Student 
{
    string name;
    int mark;
};

bool cmp(Student a, Student b) 
{
    if (a.mark != b.mark)
        return a.mark > b.mark;
    return a.name < b.name;
}

int main() 
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i].name >> arr[i].mark;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i].name << " " << arr[i].mark << endl;
    }

    return 0;
}
