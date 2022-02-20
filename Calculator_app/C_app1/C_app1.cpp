#include <stdio.h>





	int main(void) {

		double a, b, result;
		char sign;

		printf("Calculator\n");
		printf("Enter the first number:");
		scanf_s("%lf", &a);
		printf("Enter the sign [+-*/]:");
		scanf_s("%s", &sign);
		printf("Enter the second number:");
		scanf_s("%lf", &b);

		switch (sign)
		{
			case '+': result = a + b; break;
			case '-': result = a - b; break;
			case '*': result = a * b; break;
			case '/': result = a / b; break;
		}

		printf("Result: %lf", result);

	return 0;
}