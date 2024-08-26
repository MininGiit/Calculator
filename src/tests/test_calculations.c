#include "test_smart_calc.h"

START_TEST(test_1) {
  char *str = "1+-2*3 + 6.3 mod 2";
  double result = 1.0 + -2.0 * 3.0 + fmod(6.3, 2);
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_double_eq_tol(result, test_result, EPS);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_2) {
  char *str = "(1.0-2.0)*3.0 + sin(3.0*sqrt(8)+ 8)";
  double result = (1.0 - 2.0) * 3.0 + sin(3.0 * sqrt(8) + 8);
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_double_eq_tol(result, test_result, EPS);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_3) {
  char *str = "2^((1.0+2.0)*3.0 + sin(3.0*sqrt(8)+ 8)) + ln(log(23))*atan(8)";
  double result = pow(2, (1.0 + 2.0) * 3.0 + sin(3.0 * sqrt(8.0) + 8.0)) +
                  log(log10(23.0)) * atan(8.0);
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_double_eq_tol(result, test_result, EPS);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_4) {
  char *str = "2^(((1.0+2.0)*3.0 + sin(3.0*sqrt(8)+ 8)) + ln(ln(23))*atan(8)";
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(test_5) {
  char *str = "2 + 3.0)";
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(test_6) {
  char *str = "sin 2";
  double result = sin(2);
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 0);
  ck_assert_double_eq_tol(result, test_result, EPS);
}
END_TEST

START_TEST(test_7) {
  char *str = "(1 + 2 + scn(30))";
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(test_8) {
  char *str = "(1 + 2 + scn(30))";
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 1);
}
END_TEST

START_TEST(test_9) {
  char *str = "(sin)";
  double test_result;
  int err = calculate(str, &test_result, 0);
  ck_assert_int_eq(err, 1);
}
END_TEST

Suite *test_calculate() {
  Suite *s = suite_create("smart calc");
  TCase *tc_1 = tcase_create("tests");
  tcase_add_test(tc_1, test_1);
  tcase_add_test(tc_1, test_2);
  tcase_add_test(tc_1, test_3);
  tcase_add_test(tc_1, test_4);
  tcase_add_test(tc_1, test_5);
  tcase_add_test(tc_1, test_6);
  tcase_add_test(tc_1, test_7);
  tcase_add_test(tc_1, test_8);
  tcase_add_test(tc_1, test_9);

  suite_add_tcase(s, tc_1);

  return s;
}