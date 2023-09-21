#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
if (!*stack || !stack)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
clean_stack(stack);
exit(EXIT_FAILURE);
}
else
fprintf(stdout, "%d\n", (*stack)->n);
}

