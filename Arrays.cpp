#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr_temp;
    getline(cin, arr_temp);
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}

