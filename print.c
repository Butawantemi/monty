#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @head: stack head
 * @counter: current the line number.
 * Return: no return
*/
void pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(command.file);
free(command.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
