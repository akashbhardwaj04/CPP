#include<iostream>
using namespace std;

int convert(int n) {
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *=2;
    x /= 2;

    while(x>0) {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int main() {

    int n;
    cin >> n;

    cout << convert(n);

    return 0;
}