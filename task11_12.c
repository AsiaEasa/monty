#include "monty.h"
/**
 * handle_pchar - prints the ASCII value of a number
 * @buff: pointer to the top of the stack
 * @l_num: the index of the current line
 *
 */
void handle_pchar(stack_t **buff, unsigned int l_num)
{
	int a_s;

	if (buff == NULL || *buff == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l_num);
		handle_exit(buff);
	}

	a_s = (*buff)->n;

	if (a_s < 0 || a_s > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l_num);
		handle_exit(buff);
	}
<<<<<<< HEAD
	putchar(ascii);
	putchar('\n');
=======
	_putchar(a_s);
	_putchar('\n');
>>>>>>> 62ee410987287cc766aa0f89185092adb40c634b
}

/**
 * handle_pstr - print string starting a top of stack
 * @buff: linked list for stack
 * @l_num: line number opcode occurs on
 */
void handle_pstr(stack_t **buff, __attribute__ ((unused))unsigned int l_num)
{
	stack_t *step;
	int a_s;

	if (buff == NULL || *buff == NULL)
	{
		printf("\n");
		return;
	}
	step = *buff;

	while (step != NULL)
	{
		a_s = step->n;
		if (a_s <= 0 || a_s > 127)
			break;
<<<<<<< HEAD
		putchar(ascii);
=======
		_putchar(a_s);
>>>>>>> 62ee410987287cc766aa0f89185092adb40c634b
		step = step->next;
	}
	putchar('\n');
}
