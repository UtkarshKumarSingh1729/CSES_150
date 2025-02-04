#include <iostream>
#include <string>
using namespace std;

long long compute_base(int d, long long k) {
    if (d == 1) return 1;
    long long base = 1;
    for (int i = 1; i < d; ++i) {
        long long next_base = base * 10;
        if (next_base > k / (9LL * d) || next_base < base) {
            return -1;
        }
        base = next_base;
    }
    return base;
}

char find_digit(long long k) {
    int d = 1;
    while (true) {
        long long base = compute_base(d, k);
        if (base == -1) break;
        long long current_block = 9LL * base * d;
        if (current_block < 0) break;
        if (k > current_block) {
            k -= current_block;
            d++;
        } else {
            break;
        }
    }
    long long number_base = 1;
    for (int i = 1; i < d; ++i) {
        number_base *= 10;
    }
    long long number = number_base + (k - 1) / d;
    int digit_index = (k - 1) % d;
    string s = to_string(number);
    return s[digit_index];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        cout << find_digit(k) << '\n';
    }
    return 0;
}