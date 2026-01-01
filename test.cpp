#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

/* ===============================
   LOAN CALCULATOR
   =============================== */
double calculateMonthlyLoan(double amount, double rate, int months) {
    return (amount * rate) / months;
}

double calculateSavings(double monthly, int months) {
    return monthly * months;
}

cout << "anea suliqi" << endl;
return 0;