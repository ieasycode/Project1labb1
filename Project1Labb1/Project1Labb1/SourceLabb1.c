#include <stdio.h> //Beh�vs f�r printf() funktionen
#include <stdlib.h>

int main(void)
{
	char myFavoritChar;
	char myFirstName[20];
	int myAge;
	float myTemp;

	system("chcp 1252");
	printf("Hej V�rlden!\n");
	


	printf("Skriv ditt favorittecken: ");
	myFavoritChar = getchar();
	printf("Tack d� vet jag att ditt favorittecken �r: %c\n", myFavoritChar);

	printf("\nVad heter du i f�rnamn: ");
	scanf_s("%s", myFirstName, sizeof(myFirstName));
	printf("Tack d� vet jag att ditt f�rnamn �r: %s\n", myFirstName);
	getchar();

	printf("\nSkriv in din �lder: ");
	scanf_s("%d", &myAge);
	printf_s("Tack d� vet jag din �lder: %d\n", myAge);
	getchar();

	printf("\nSkriv in din uppskaddade kroppsstemperatur: ");
	scanf_s("%f", &myTemp);
	printf_s("Tack d� vet jag din uppskattade temperatur: %.1f grader Celsius\n", myTemp);
	getchar();

	getchar(); // G�r s� att programmet v�ntar p� en tangenttryckning
	return 0;
}