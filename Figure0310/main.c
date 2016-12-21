//=============================================================================
// Figure 3.10: main.c
// Analysis of examination results.
//=============================================================================
#include <stdio.h>

int main(void)
{
	// Initialize variables and definitions.
	unsigned int passes = 0; // Number of passes.
	unsigned int failures = 0; // Number of failures.
	unsigned int student = 1; // Student counter.
	int result; // One exam result.

	// Process 10 students using counter-controlled loop.
	while (student <= 10)
	{
		// Prompt user for input and obtain value from user.
		printf("%s", "Enter result (1=pass, 2=fail): ");

#if defined(_WIN32)
		scanf_s("%d", &result);
#else
		scanf("%d", &result);
#endif // WIN32)

		// If result 1, increment passes
		if (result == 1) 
		{
			passes++;
		}
		else // Otherwrise, increment failures.
		{
			failures++;
		}

		student++; // Increment student counter.
	}

	// Termination phase; display number of passes and failures.
	printf("Passes %u.\n", passes);
	printf("Failed %u.\n", failures);

	// If more than 8 student passed, print "Bonus to instructor!"
	if (passes > 8) 
	{
		puts("Bonus to instructor!");
	}

	return 0;
}