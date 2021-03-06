 /*
 ============================================================================
 Name		: uppgift.3.4.c
 Author		: Noor Latif
 Description: Identifierar om du är man eller kvinna via ditt personnummer.
 Date		: 2020-09-28
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main (void) {
	int gender;
	long int id;
	printf("Hej %s! Detta program �r bra f�r den som inte �r s�ker p� sitt k�n.\n", getenv("USERNAME"));
	printf("Write 0 if female, 1 if male: ");
	scanf("%d", &gender);
	printf("Your ID number (10 digits only): "); /* Only digits work */
	scanf("%ld", &id);
	/* To Reach the 9th digit that identifies the gender.
	We have to divide the ID number by 10 */
	id = (id / 10);
	printf("To identify gender we need the 9th digit: %ld \n", id);
	if (gender == 0 && id%2 == 0) {			/* Modulo division by 2 to identify even numbers. */
		printf("Correct, you're female\n");
	} else if (gender == 1 && id%2 == 1) { 	/* Modulo division by 2 will output a remainder of 1 if number is uneven. */
		printf("Correct, you're male\n");
	} else if (gender == 1) { 				/* output error on gender mismatch */
		printf("Wrong. You're not male\n");
	} else if (gender == 0) { 				/* output error on gender mismatch */
		printf("Wrong. You're not female\n");
	} else {
		printf("Error. Wrong input!\n");
	}
   return 0;
 }
