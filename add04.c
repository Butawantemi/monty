#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: stack head
 * @line_number: line number
 * Return: no return
*/
void add(stack_t **stack, unsigned int line_number)
{
stack_t *val = NULL;
int sum = 0;
if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free(*stack);
exit(EXIT_FAILURE);
}
val = (*stack)->next;
sum = (*stack)->n;
sum += (*stack)->next->n;
pop(stack, line_number);
val->n = sum;
}
