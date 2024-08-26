#ifndef S21_SC_TEST_H
#define S21_SC_TEST_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "../CalculateModule/credit_calc.h"
#include "../CalculateModule/polish_notation.h"
#define EPS 1e-7
#define EPS_C 1e-1

Suite *test_calculate(void);
Suite *test_credit_calc(void);

#endif
