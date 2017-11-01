#include <stdio.h> //Behövs för printf() funktionen
#include <stdlib.h>

int main(void)
{
	char myFavoritChar;
	char myFirstName[20];
	int myAge;
	float myTemp;

	system("chcp 1252");
	printf("Hej Världen!\n");
	


	printf("Skriv ditt favorittecken: ");
	myFavoritChar = getchar();
	printf("Tack då vet jag att ditt favorittecken är: %c\n", myFavoritChar);

	printf("\nVad heter du i förnamn: ");
	scanf_s("%s", myFirstName, sizeof(myFirstName));
	printf("Tack då vet jag att ditt förnamn är: %s\n", myFirstName);
	getchar();

	printf("\nSkriv in din ålder: ");
	scanf_s("%d", &myAge);
	printf_s("Tack då vet jag din ålder: %d\n", myAge);
	getchar();

	printf("\nSkriv in din uppskaddade kroppsstemperatur: ");
	scanf_s("%f", &myTemp);
	printf_s("Tack då vet jag din uppskattade temperatur: %.1f grader Celsius\n", myTemp);
	getchar();

	getchar(); // Gör så att programmet väntar på en tangenttryckning
	return 0;
}