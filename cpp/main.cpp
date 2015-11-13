#include <iostream>
#include <cmath>
#include <vector>
#define ll long long

using namespace std;


void getPrimes(ll int n) {
    vector<bool> isPrime(n + 1);
    isPrime[2] = true;
    isPrime[3] = true;
    
    for (ll int i = 5; i <= n; i++) {
        isPrime[i] = false;
    }
    
    ll int lim = ceil(sqrt(n));
    
    for (ll int x = 1; x <= lim; x++) {
        for (ll int y = 1; y <= lim; y++) {
            ll int num = (4 * x * x + y * y);
            
            if (num <= n && (num % 12 == 1 || num % 12 == 5)) {
                isPrime[num] = true;
            }
            
            num = (3 * x * x + y * y);
            
            if (num <= n && (num % 12 == 7)) {
                isPrime[num] = true;
            }

            if (x > y) {
                num = (3 * x * x - y * y);
                if (num <= n && (num % 12 == 11))
                {
                    isPrime[num] = true;
                }
            }
        }
    }
    
    for (ll int i = 5; i <= lim; i++) {
        if (isPrime[i]) {
            for (ll int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    /*
    output of the prime numbers

    for (ll int i = 2; i <= n; i++) {
         if (isPrime[i]) {
             cout << i << "\n";
         }
    }
    */
}

int main() {
    ll int n;
    n = 10000000;
    getPrimes(n);
    return 0;
}
