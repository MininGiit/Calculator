#include "test_smart_calc.h"

START_TEST(test_1) {
  long double credit_amount = 1000000;
  int term = 12;
  long double rate = 20;
  long double payment = 92634.5;
  long double total = 1111614.12;
  long double overpayment = 111614.12;
  long double payment_test =
      calculate_annuity_payment(credit_amount, term, rate);
  long double total_test = calculate_total_payment(payment_test, term);
  long double overpayment_test =
      calculate_overpayment(total_test, credit_amount);
  ck_assert_ldouble_eq_tol(payment, payment_test, EPS_C);
  ck_assert_ldouble_eq_tol(total, total_test, EPS_C);
  ck_assert_ldouble_eq_tol(overpayment, overpayment_test, EPS_C);
}
END_TEST

START_TEST(test_2) {
  long double credit_amount = 10000000;
  int term = 12;
  long double rate = 15.7;
  long double payment = 905889.52;
  long double total = 10870674.24;
  long double overpayment = 870674.24;
  ;
  long double payment_test =
      calculate_annuity_payment(credit_amount, term, rate);
  long double total_test = calculate_total_payment(payment_test, term);
  long double overpayment_test =
      calculate_overpayment(total_test, credit_amount);
  ck_assert_ldouble_eq_tol(payment, payment_test, EPS_C);
  ck_assert_ldouble_eq_tol(total, total_test, EPS_C);
  ck_assert_ldouble_eq_tol(overpayment, overpayment_test, EPS_C);
}
END_TEST

START_TEST(test_3) {
  long double credit_amount = 2000000;
  int term = 7;
  long double rate = 10.4;
  long double total = 2069333.33;
  long double overpayment = 69333.33;
  long double payments[7] = {303047.62, 300571.43, 298095.24, 295619.05,
                             293142.86, 290666.67, 288190.48};
  long double total_test = 0;
  for (int month = 1; month <= term; month++) {
    long double payment_test =
        calculate_differentiated_payment(credit_amount, term, rate, month);
    total_test += payment_test;
    ck_assert_ldouble_eq_tol(payments[month - 1], payment_test, EPS_C);
  }
  long double overpayment_test =
      calculate_overpayment(total_test, credit_amount);
  ck_assert_ldouble_eq_tol(total, total_test, EPS_C);
  ck_assert_ldouble_eq_tol(overpayment, overpayment_test, EPS_C);
}
END_TEST

Suite *test_credit_calc() {
  Suite *s = suite_create("credit calc");
  TCase *tc_1 = tcase_create("tests");
  tcase_add_test(tc_1, test_1);
  tcase_add_test(tc_1, test_2);
  tcase_add_test(tc_1, test_3);
  suite_add_tcase(s, tc_1);
  return s;
}