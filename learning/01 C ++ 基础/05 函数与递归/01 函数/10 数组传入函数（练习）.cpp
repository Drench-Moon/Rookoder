#include <iostream>
using namespace std;

template <int N>
void func(int (&arr)[N]) {

    for (int i = 0; i < N; i++) {
        int mindex = i;
        for (int j = i + 1; j < N; ++j){
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        if (i != mindex) {
            int temp = arr[i];
            arr[i] = arr[mindex];
            arr[mindex] = temp;
        }
    }
    for (int i : arr) {
        cout << i << " " ;
    }
}
using namespace std;
int main()
{
    int arr[5];
    for (int &i : arr) {
        cin >> i;
    }
    func(arr);
    cout << endl;
    for (int &i : arr) {
        cout << i << " ";
    }

    return 0;
}