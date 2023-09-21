#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
if (!*stack)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
free(*stack);
exit(EXIT_FAILURE);
}
else
{
temp = (*stack)->next;
free(*stack);
if (temp)
temp->prev = NULL;
*stack = temp;
}
}
