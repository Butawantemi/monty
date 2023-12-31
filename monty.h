#ifndef MONTY_H_
#define MONTY_H_

#define _GNU_SOURCE
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct command_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  command_t;
extern command_t command;
void clean_stack(stack_t **stack);
char *reallocate(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t read_stdin(char **lineptr, int fd);
char *clean_line(char *content);
void push(stack_t **head, unsigned int line_number);
void pall(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
int execute(char *content, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void pop(stack_t **head, unsigned int count);
void swap(stack_t **head, unsigned int count);
void rotr(stack_t **head, __attribute__((unused)) unsigned int count);
void addNode(stack_t **head, int n);
void addQueue(stack_t **head, int n);
void queue(stack_t **head, unsigned int count);
#endif
