#ifndef VARIADIC
#define VARIADIC

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct print
 *
 * @c: The operator
 * @f: The function associated
 */

typedef struct op
{
        char *c;
        void (*f)();
} prt;

#endif
