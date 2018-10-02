#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for ( int i =0; i < n ; i++ ) {
        cin >> array[i];
    }
    /* 
        I would say that you should write code in some order and it would be better if you take input diractly in array.
        It would be waste of memory if you use string for taking input. 
        Apart from that you are just printing in reverse order that's not revesing of array.(that's printing array in
        reverse form.)
    */
    
    /*
    string arr_temp;
    getline(cin, arr_temp);
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    */
    for(int i=n-1;i>=0;i--)
        cout<<array[i]<<" ";
    cout<<endl;

    return 0;
}

