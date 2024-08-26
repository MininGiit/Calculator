#ifndef PN_H
#define PN_H
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define NUM 0
#define MOD 'm'
#define SIN 's'
#define COS 'c'
#define TAN 't'
#define ACOS 'a'
#define ASIN 'A'
#define ATAN 'T'
#define SQRT 'S'
#define LN 'l'
#define LOG 'L'
#define UNM 'u'
#define ERR 0

void get_tokens(char* str, Queue* queue_tokens);
int is_part_of_number(char c);
int is_operator(char c);
int infix_to_rpn(Queue* input_q, Queue* output_q);
int priority(int c);
double calc_func(int func, double x);
double calc_op(int op, double a, double b);
double calc_rpn(Queue* rpn, double x);
int calculate(char* str, double* result, double x);
#endif
