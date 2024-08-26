#include "test_smart_calc.h"

int main() {
  int failed = 0;

  Suite *s21_matrix_tests[] = {test_calculate(), test_credit_calc(), NULL};
  for (int i = 0; s21_matrix_tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_matrix_tests[i]);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("________________    FAILED: %d    ________________\n", failed);
  return failed == 0 ? 0 : 1;
}
