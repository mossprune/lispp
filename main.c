
#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
	puts("lispyy v.0.1.0");
	puts("Press ctrl + c to exit");

	while (1) {
		fputs("lispyy >> ", stdout);
		fgets(input, 2048, stdin);
		printf("No you're a %s", input);
	}

    return 0;
}
