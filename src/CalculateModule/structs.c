#include "structs.h"

Stack* create_stack() {
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->top = NULL;
  return stack;
}

void remove_stack(Stack* stack) {
  while (!is_empty_s(stack)) {
    Node* temp = stack->top;
    stack->top = temp->next;
    free(temp);
  }
  free(stack);
}

int is_empty_s(Stack* stack) { return stack->top == NULL; }

void push(Stack* stack, data_t data) {
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = stack->top;
  stack->top = new_node;
}

data_t pop(Stack* stack) {
  data_t item = {-1, 0};
  if (!is_empty_s(stack)) {
    Node* temp = stack->top;
    item = temp->data;
    stack->top = temp->next;
    free(temp);
  }
  return item;
}

data_t peek(Stack* stack) {
  data_t item = {-1, 0};
  if (!is_empty_s(stack)) item = stack->top->data;
  return item;
}

Queue* create_queue() {
  Queue* queue = (Queue*)malloc(sizeof(Queue));
  queue->front = NULL;
  queue->rear = NULL;
  return queue;
}

void remove_queue(Queue* queue) {
  while (!is_empty_q(queue)) {
    Node* temp = queue->front;
    queue->front = temp->next;
    free(temp);
    if (queue->front == NULL) {
      queue->rear = NULL;
    }
  }
  free(queue);
}

int is_empty_q(Queue* queue) { return queue->front == NULL; }

void enqueue(Queue* queue, data_t item) {
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->data = item;
  new_node->next = NULL;
  if (is_empty_q(queue)) {
    queue->front = new_node;
    queue->rear = new_node;
  } else {
    queue->rear->next = new_node;
    queue->rear = new_node;
  }
}

data_t dequeue(Queue* queue) {
  data_t item = {-1, 0};
  if (!is_empty_q(queue)) {
    Node* temp = queue->front;
    item.type = temp->data.type;
    item.value = temp->data.value;
    queue->front = temp->next;
    free(temp);
    if (queue->front == NULL) {
      queue->rear = NULL;
    }
  }
  return item;
}