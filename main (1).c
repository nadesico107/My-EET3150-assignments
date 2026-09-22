	#include <stdio.h>
	#include "greet.h"

	int main(int argc, char *argv[])
	{
		const char *name = "jeremias Ortiz";

		if (argc > 1) {
			name = argv[1];
		} else {
			printf("I hope I can get this program thing quick.\n");
		}

		greet(name);

		return 0;
	}
