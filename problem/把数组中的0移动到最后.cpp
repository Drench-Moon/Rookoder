#include <iostream>
#include <vector>
using namespace std;
int main() {
    int nums[] = {0};

    int newnums[size(nums)];
    int * p = nums;
    for (int i = 0; i < size(nums); i++){
        newnums[i] = nums[i];
    }

    int j = 0;
    int m = 0;

    for (; j < size(nums); j++){
        if (p[j] != 0){
            newnums[m] = p[j];
            m ++;

        }
    }
    for (int k = m; k < j; k ++){
        newnums[k] = 0;
    }

    for (int i = 0; i < size(newnums); i++) {
        cout << newnums[i] << endl;
    }
    return 0;
}