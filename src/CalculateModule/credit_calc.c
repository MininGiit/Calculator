#include "credit_calc.h"
// Функция для расчета ежемесячного платежа по аннуитетному плану
long double calculate_annuity_payment(long double credit_amount, int term,
                                      long double rate) {
  long double monthly_rate = rate / 12 / 100;
  long double temp = pow(1 + monthly_rate, term);
  return credit_amount * (monthly_rate * temp) / (temp - 1);
}

// Функция для расчета ежемесячного платежа по дифференцированному плану
long double calculate_differentiated_payment(long double credit_amount,
                                             int term, long double rate,
                                             int month) {
  long double monthly_rate = rate / 12 / 100;
  long double principal_payment = credit_amount / term;
  long double interest_payment =
      (credit_amount - (principal_payment * (month - 1))) * monthly_rate;
  return principal_payment + interest_payment;
}

// Функция для расчета общей выплаты по кредиту
long double calculate_total_payment(long double monthly_payment, int term) {
  return monthly_payment * term;
}

// Функция для расчета переплаты по кредиту
long double calculate_overpayment(long double total_payment,
                                  long double loan_amount) {
  return total_payment - loan_amount;
}
