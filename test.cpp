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

double interest ( double principal,double rate){
    return principal* rate;
} 
cout << "rezultati" << endl;

cout << "tuana kadriu" << endl;
cout << "anea suliqi" << endl;
return 0;