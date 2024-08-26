#ifndef CREDIT_CALC
#define CREDIT_CALC
#include <math.h>
#include <stdio.h>

long double calculate_annuity_payment(long double credit_amount, int term,
                                      long double rate);
long double calculate_differentiated_payment(long double loan_amount, int term,
                                             long double interest_rate,
                                             int current_month);
long double calculate_total_payment(long double monthly_payment, int term);
long double calculate_overpayment(long double total_payment,
                                  long double loan_amount);
#endif