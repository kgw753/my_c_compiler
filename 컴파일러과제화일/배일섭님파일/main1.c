
#include <stdio.h>
#include <stdlib.h>
#include "type.h"

extern int syntax_err;
extern A_NODE *root;
void initialize();
void print_ast();

void main()
{
	printf("\nstart syntax analysis\n");
	initialize();
	yyparse();
	if (syntax_err)
		exit(1);
	print_ast(root);
	exit(0);
}
