#include<iostream>
using namespace std;
int sum(int n) {
    if (n == 1) return 1;
    return sum(n - 1) + n;
}
int main() {
    int n;
    do {
        cout << "n : ";
        cin >> n;
    } while (n <= 0);
    cout << "Sum = " << sum(n)<<endl;
    system("pause");
    return 0;
}