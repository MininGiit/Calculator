#ifndef STRUCTS_H
#define STRUCTS_H
#include <stdio.h>
#include <stdlib.h>

typedef struct data_t {
  int type;
  double value;
} data_t;

typedef struct Node {
  struct Node* next;
  struct data_t data;
} Node;

typedef struct Stack {
  Node* top;
} Stack;

Stack* create_stack();
void remove_stack(Stack* stack);
int is_empty_s(Stack* stack);
void push(Stack* stack, data_t value);
data_t pop(Stack* stack);
data_t peek(Stack* stack);
void print_stack(Stack* stack);

typedef struct Queue {
  struct Node* front;
  struct Node* rear;
} Queue;

Queue* create_queue();
void remove_queue(Queue* queue);
int is_empty_q(Queue* queue);
void enqueue(Queue* queue, data_t item);
data_t dequeue(Queue* queue);
int peek_q(Queue* queue);
void print_queue(Queue* queue);

#endif