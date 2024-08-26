#include "polish_notation.h"

int is_part_of_number(char c) { return isdigit(c) || c == '.'; }

int is_function(char c) {
  return (c == SIN || c == COS || c == TAN || c == ACOS || c == ASIN ||
          c == ATAN || c == SQRT || c == LN || c == LOG);
}

int priority(int c) {
  int res;
  if (c == '(')
    res = 0;
  else if (c == '+' || c == '-')
    res = 1;
  else if (c == '*' || c == '/' || c == MOD)
    res = 2;
  else if (c == UNM || c == '^')
    res = 3;
  else
    res = 4;
  return res;
}

int is_operator(char c) {
  return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == MOD ||
         c == UNM;
}
// int is_left_associative(char c) {
//     return c == '+' || c == '-' || c == '*' || c == '/' || c == MOD;
// }

void get_tokens(char* str, Queue* queue_tokens) {
  int err = 0;
  int i = 0;
  int prev_token = '(';
  while (str[i] != '\0' && err == 0) {
    char ch = str[i];
    data_t d = {-1, 0};
    int j = 0;
    if (isdigit(ch)) {
      while (is_part_of_number(str[i + j])) j++;
      double value = 0;
      sscanf(str + i, "%lf", &value);
      d.type = NUM;
      d.value = value;
    } else if (memcmp(str + i, "mod", 3) == 0)
      d.type = MOD;
    else if (memcmp(str + i, "sin", 3) == 0)
      d.type = SIN;
    else if (memcmp(str + i, "cos", 3) == 0)
      d.type = COS;
    else if (memcmp(str + i, "tan", 3) == 0)
      d.type = TAN;
    else if (memcmp(str + i, "acos", 4) == 0)
      d.type = ACOS;
    else if (memcmp(str + i, "asin", 4) == 0)
      d.type = ASIN;
    else if (memcmp(str + i, "atan", 4) == 0)
      d.type = ATAN;
    else if (memcmp(str + i, "sqrt", 4) == 0)
      d.type = SQRT;
    else if (memcmp(str + i, "ln", 2) == 0)
      d.type = LN;
    else if (memcmp(str + i, "log", 2) == 0)
      d.type = LOG;
    else if (is_operator(ch) || ch == '(' || ch == ')') {
      d.type = ch;
      if (ch == '-')
        if (prev_token == '(' || is_operator(prev_token)) d.type = UNM;
    }

    else if (ch == 'x')
      d.type = ch;

    if (d.type == MOD || d.type == SIN || d.type == COS || d.type == TAN ||
        d.type == LOG)
      i += 3;
    else if (is_operator(ch) || ch == '(' || ch == ')' || ch == ' ' ||
             ch == 'x')
      ++i;
    else if (d.type == ACOS || d.type == ATAN || d.type == ASIN ||
             d.type == SQRT)
      i += 4;
    else if (d.type == LN)
      i += 2;
    else if (d.type == NUM)
      i += j;
    else
      err = 1;

    if (ch != ' ' && !err) enqueue(queue_tokens, d);
    prev_token = d.type;
  }
}

int infix_to_rpn(Queue* input_q, Queue* output_q) {
  Stack* stack = create_stack();
  int err = 0;
  int miss_num_err = 1;
  while (!is_empty_q(input_q) && !err) {
    data_t token = dequeue(input_q);
    int type = token.type;
    if (type == NUM || type == 'x') {
      enqueue(output_q, token);
      miss_num_err = 0;
    } else if (type == '(' || is_function(type))
      push(stack, token);  // добавитбь проверку идут ли скобки после функции
    else if (type == ')') {
      while (!is_empty_s(stack) && peek(stack).type != '(') {
        enqueue(output_q, pop(stack));
      }
      if (is_empty_s(stack))
        err = 1;
      else
        pop(stack);
    } else {
      while (!is_empty_s(stack) && priority(peek(stack).type) >= priority(type))
        enqueue(output_q, pop(stack));
      push(stack, token);
    }
  }
  if (peek(stack).type == '(') err = 1;
  while (!is_empty_s(stack) && !err) {
    if (peek(stack).type == '(') err = 1;
    enqueue(output_q, pop(stack));
  }
  remove_stack(stack);
  return err || miss_num_err;
}

double calc_op(int op, double a, double b) {
  double res = 0;
  if (op == '+')
    res = a + b;
  else if (op == '-')
    res = a - b;
  else if (op == '/')
    res = a / b;
  else if (op == '*')
    res = a * b;
  else if (op == '^')
    res = pow(a, b);
  else if (op == MOD)
    res = fmod(a, b);
  return res;
}

double calc_func(int func, double x) {
  double res = 0;
  if (func == SIN)
    res = sin(x);
  else if (func == COS)
    res = cos(x);
  else if (func == TAN)
    res = tan(x);
  else if (func == ASIN)
    res = asin(x);
  else if (func == ACOS)
    res = acos(x);
  else if (func == ATAN)
    res = atan(x);
  else if (func == SQRT)
    res = sqrt(x);
  else if (func == LN)
    res = log(x);
  else if (func == LOG)
    res = log10(x);
  return res;
}

double calc_rpn(Queue* rpn, double x) {
  Stack* stack = create_stack();
  while (!is_empty_q(rpn)) {
    data_t token = dequeue(rpn);
    int type = token.type;
    double a, b;
    data_t result = {NUM, 211};
    //        printf("val_queue: %lf\n", token.value);
    if (type == NUM)
      push(stack, token);
    else if (type == 'x') {
      token.value = x;
      token.type = NUM;
      push(stack, token);
    } else if (type == UNM) {
      result.value = -pop(stack).value;
      push(stack, result);
    } else if (is_operator(type)) {
      b = pop(stack).value;
      a = pop(stack).value;
      result.value = calc_op(type, a, b);
      //            printf("result: %lf %lf %lf\n", result.value, a, b);
      push(stack, result);
    } else if (is_function(type)) {
      a = pop(stack).value;
      result.value = calc_func(type, a);
      push(stack, result);
    }
  }
  double result = pop(stack).value;
  remove_stack(stack);
  return result;
};

int calculate(char* str, double* result, double x) {
  *result = 0;
  Queue* queue = create_queue();
  get_tokens(str, queue);
  Queue* rpn = create_queue();
  int err = infix_to_rpn(queue, rpn);
  if (err == 0) {
    *result = calc_rpn(rpn, x);
  }
  remove_queue(queue);
  remove_queue(rpn);
  return err;
}

// Побежим по токенам:
//      если оператор:
//          то после него обязательно число или скобка
//      если функция:
//          то после неё обязательно скобка;
// перед операторами обязательно числа или скобка
// перед скобками обязательно не число
