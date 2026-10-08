//sum of all prime numbers
#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    cout << "Enter a Number: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {

        bool prime = true;

        for (int i = 2; i < num; i++) {

            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            sum = sum + num;
        }
    }

    cout << "Sum of prime numbers = " << sum;

    return 0;
}
