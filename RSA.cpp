#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int modInverse(int e, int phi) {
    for (int d = 1; d < phi; d++) {
        if ((e * d) % phi == 1) {
            return d;
        }
    }
    return -1; }
int modExp(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}
int main() {
int p = 61, q = 53; 
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e = 17; 
    while (gcd(e, phi) != 1) {
        e++;     }
    int d = modInverse(e, phi); 
    cout << "Public Key (e, n): (" << e << ", " << n << ")" << endl;
    cout << "Private Key (d, n): (" << d << ", " << n << ")" << endl;
    int plaintext;
    cout << "Enter plaintext (as a number): ";
    cin >> plaintext;
    int ciphertext = modExp(plaintext, e, n);
    cout << "Ciphertext: " << ciphertext << endl;
    int decryptedText = modExp(ciphertext, d, n);
    cout << "Decrypted Plaintext: " << decryptedText << endl;
    return 0;
}