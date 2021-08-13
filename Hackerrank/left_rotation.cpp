//Time complexity- O(n*d) where n is size of array
#include <iostream>
using namespace std;
void func(int *v, int size)
{
    int temp = v[0];
    for (int i = 0; i < size - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[size - 1] = temp;
    return;
}
int main()
{
    int *v = nullptr;
    int d, size;
    cin >> size >> d;
    v = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    while (d--)
    {
        func(v, size);
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    delete[] v;
    return 0;
}
//[1,2,3,4,5]
//[2,3,4,5,1]
//[3,4,5,1,2]
//temp=arr[0];
//arr[0]=arr[1] arr[1]=arr[2] arr[2]=arr[3] arr[3]=arr[4] arr[4]=temp;
