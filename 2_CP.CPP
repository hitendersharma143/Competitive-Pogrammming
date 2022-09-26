#include <iostream>
using namespace std;
void Product(int a[], int b[], int n)
{
    int i, j, p;
    for (i = 0; i < n; i++)
    {
        p = 1;
        for (j = 0; j < n; j++)
        {
            if (j != i)
                p = p * a[j];
        }
        b[i] =p;
    }
}
int main()
{
    int a, i;
    cout << "Enter a numbers\n";
    cin >> a;
    int nums[a];
    int answer[a];
    for (i = 0; i < a; i++)
    {
        cin >> nums[i];
    }
    cout << "you entered" << endl;
    for (i = 0; i < a; i++)
    {
        cout << nums[i] << " ";
    }
    Product(nums, answer, a);
    cout<<endl;
    for (i = 0; i < a; i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}