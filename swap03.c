#include "monty.h"

/**
 * swap - adds the top two elements of the stack.
 * @stack: stack head
 * @line_number: line number
 * Return: no return
*/
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *val;
int tmp = 0;
val = *stack;
if (val == NULL || val->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free(*stack);
exit(EXIT_FAILURE);
}
else
{
tmp = val->n;
val->n = val->next->n;
val->next->n = tmp;
}
}
