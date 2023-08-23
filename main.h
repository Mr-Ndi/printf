#ifndef MAIN_H
#define MAIN_H

typedef struct special
{
	char *op;
	void (*f)(int a);
} specials;

int _printf(const char *format, ...);
int (*get_special(char *s));
void op_int(int a);
void paste(char a);
void op_bin(unsigned int a);
void hex_int(unsigned int a, int alpha);
void oct_int(unsigned int a);
void un_int(unsigned int a);
void address(void *a);
void rev_str(char *str);
#endif
