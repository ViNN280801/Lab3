#include<cstdio>
#include<clocale>
#include<iostream>
#include<stdlib.h>

int main(int argvc, char* argv[]){
	int x = 0;
	printf("\nEnter a value: ");
	scanf("%d", &x);
	int y = (2 + x * 3) % 17 - x / 6;
	printf("\nValue after some transformations: %d\n", y);
	
	std::cin.get();
	int val1 = 0, val2 = 0;
	printf("\n\nComparing two values:\nEnter 1st value: ");
	scanf("%d", &val1);
	printf("\nEnter 2nd value: ");
	scanf("%d", &val2);

	int compare1 = (val1 >= val2),
	compare2 = (val1 != val2);
	std::string result("");
	
	printf("\nCompare like >=\n");
	if(compare1 == 0){
		result = "false";
		printf("Comparison result: %d(%s)\n", val1, result.c_str());
	}
	else if(compare1 == 1){
		result = "true";
		printf("Comparison result: %d(%s)\n", val2, result.c_str());
	}
	else printf("Unknown error!");
	
	printf("\nCompare like !=\n");
	if(compare2 == 0){
		result = "false";
		printf("Comparison result: %d(%s)\n", val1, result.c_str());
	}
	else if(compare2 == 1){
		result = "true";
		printf("Comparison result: %d(%s)\n", val2, result.c_str());
	}
	else printf("Unknown error!");

	unsigned int number = 0, shift = 0;
	printf("Which number do you want to realize the shift to right side? Enter: ");
	scanf("%d", &number);
	printf("How much do you want to shift the bytes to right side? Enter: ");
	scanf("%d", &shift);
	printf("Right side byte shift to %d bytes: %d\n", shift, number >>= shift);
	
	number = shift = 0;
	printf("\nWhich number do you want to realize the shift to left side? Enter: ");
	scanf("%d", &number);
	printf("How much do you want to shift the bytes to left side? Enter: ");
	scanf("%d", &shift);
	printf("Left side byte shift to %d bytes: %d\n", shift, number <<= shift);

	printf("\nWhich number do you want to realize ~? Enter: ");
	scanf("%d", &number);
	printf("Result of the ~ shift: %d\n", number = ~number);

	printf("\nWhich number do you want to realize XOR? Enter two numbers: ");
	scanf("%d %d", &number, &shift);
	printf("Result of the XOR operation: %d\n", number ^= shift);

	printf("\nWhich number do you want to realize AND operation? Enter: ");
	scanf("%d %d", &number, &shift);
	printf("Result of the AND operation: %d\n", number &= shift);

	int N_number = 0, temp = 0;
	printf("\nEnter number: ");
	scanf("%d", &N_number);
	temp = N_number++;
	printf("Increment value++: %d\n", N_number, temp);
	int temp2 = ++N_number;
	printf("Increment ++value: %d\n", N_number, temp);
	
	temp = --N_number;
	printf("Decrement --value: %d\n", N_number, temp);
	temp2 = N_number--;
	printf("Decrement value--: %d\n", N_number, temp);

	return EXIT_SUCCESS;
}

