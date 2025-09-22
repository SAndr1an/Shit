#include <iostream>
#include <Windows.h>
#include "Class.h"

using namespace std;

LogicResults Calculate(bool p, bool q) {
    LogicResults r;
    r.conj = p && q;
    r.disj = p || q;
    r.xor_ = p ^ q;
    r.impl_pq = (!p) || q;
    r.impl_qp = (!q) || p;
    r.equiv = (p == q);
    return r;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool p, q;
    LogicResults r;
    bool conj, disj, xor_, impl_pq,
        impl_qp, equiv;

    while (true) {
        cout << "Введіть значення p (1 - True, 0 - False): ";
        cin >> p;
        cout << "Введіть значення q (1 - True, 0 - False): ";
        cin >> q;

        r = Calculate(p, q);

        conj = p && q;          // кон’юнкція
        disj = p || q;          // диз’юнкція
        xor_ = p ^ q;           // альтернативне "або"
        impl_pq = (!p) || q;    // імплікація p -> q
        impl_qp = (!q) || p;    // імплікація q -> p
        equiv = (p == q);       // еквівалентність

        cout << "p AND q = " << conj << endl;
        cout << "p OR q = " << disj << endl;
        cout << "p XOR q = " << xor_ << endl;
        cout << "p -> q = " << impl_pq << endl;
        cout << "q -> p = " << impl_qp << endl;
        cout << "p ~ q = " << equiv << endl;
    }

    return 0;
}