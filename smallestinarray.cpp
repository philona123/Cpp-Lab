#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    
    cout << “Enter size of array : “ << endl;
    
    cin >> size;
    int arr[size];
    
    cout << “Enter elements of array : “ << endl;
    
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    
    int smallest = arr[0];   // initialize smallest to arr[0]
    
    
    cout << “Smallest Element in the array : “ << endl << smallest;  // display result

    return 0;
}
