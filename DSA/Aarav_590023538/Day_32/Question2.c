#include <stdio.h>
#include <stdlib.h>

// Copy From One Stack To Another
void init(struct Stack *s);
int isEmpty(struct Stack *s);
void push(struct Stack *s, int value);
int pop(struct Stack *s);
int peek(struct Stack *s);
void copyStack(struct Stack *original, struct Stack *copy);
void display(struct Stack *s);
