/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/contest/1722/problem/C



#include <bits/stdc++.h>

typedef long long ll;
const int BUFFER = 1 << 18;

struct ostream {
    char buffer[BUFFER], *pos = buffer, *end = buffer + BUFFER;
    ~ostream() { flush(); }
    void flush() { fwrite(buffer, 1, pos - buffer, stdout), pos = buffer; }
    void put(char ch) {
        if (pos == end)
            flush();
        *(pos++) = ch;
    }
    template <typename V>
    void put(V num) {
        if (num)
            put(num / 10), put((char)(num % 10 + '0'));
    }
    template <typename V>
    void putNum(V num) {
        if (num < 0)
            put('-'), put(-num);
        else if (num == 0)
            put('0');
        else
            put(num);
    }
    ostream &operator<<(char s) { return put(s), *this; }
    ostream &operator<<(const char *s) {
        while (*s)
            put(*(s++));
        return *this;
    }
    ostream &operator<<(int num) { return putNum(num), *this; }
    ostream &operator<<(unsigned num) { return putNum(num), *this; }
    ostream &operator<<(ll num) { return putNum(num), *this; }
} cout;

struct istream
{
    char buffer[BUFFER], *pos = buffer, *end = buffer;
    int get() {
        if (pos == end) {
            end = buffer + fread(buffer, 1, BUFFER, stdin), pos = buffer;
            if (pos == end)
                return 0;
        }
        return *(pos++);
    }
    template <typename V>
    void getNum(V &num) {
        int sign = 0, ch, done = 0;
        num = 0;
        while (ch = get())
            if (ch == '-')
                sign = 1;
            else if ('-' < ch)
                num = 10 * num + ch - '0', done = 1;
            else if (done)
                break;
        if (sign)
            num = -num;
    }
    istream &operator>>(char &ch) {
        while ((ch = get()) <= ' ')
            ;
        return *this;
    }
    istream &operator>>(int &num) { return getNum(num), *this; }
    istream &operator>>(unsigned &num) { return getNum(num), *this; }
    istream &operator>>(ll &num) { return getNum(num), *this; }
} cin;

#ifdef LOCAL
#include "debug.h"
#else
#define log(...) 9
#endif

void testCase() {
    int n;
    cin >> n;

    std::unordered_map<int, int> data;
    for (int i = 0; i < n; i++) {
        int hash = 0;
        for (int j = 0; j < 3; j++) {
            char ch;
            cin >> ch;
            hash = hash * 26 + ch - 'a';
        }
        data[hash] |= 1;
    }
    for (int i = 0; i < n; i++) {
        int hash = 0;
        for (int j = 0; j < 3; j++) {
            char ch;
            cin >> ch;
            hash = hash * 26 + ch - 'a';
        }
        data[hash] |= 2;
    }
    for (int i = 0; i < n; i++) {
        int hash = 0;
        for (int j = 0; j < 3; j++) {
            char ch;
            cin >> ch;
            hash = hash * 26 + ch - 'a';
        }
        data[hash] |= 4;
    }

    int ans0 = 0, ans1 = 0, ans2 = 0;
    for (auto &it : data) {
        if (it.second == 1)
            ans0 += 3;
        if (it.second == 2)
            ans1 += 3;
        if (it.second == 4)
            ans2 += 3;
        if (it.second == 3)
            ans0++, ans1++;
        if (it.second == 5)
            ans0++, ans2++;
        if (it.second == 6)
            ans1++, ans2++;
    }

    cout << ans0 << ' ' << ans1 << ' ' << ans2 << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        log("Testcase", i), testCase();
    return 0;
}
