#include <iostream>
#include <vector>
using namespace std;

long getSum(vector<int> array) {
    long sum = 0;
    for (int i = 0; i < array.size(); i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getSum(array) << endl;
    return 0;
}