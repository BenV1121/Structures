// benjamin.vongtawan@students.aie.edu.au
#include<iostream>
#include<cstdio>
#include<string>

struct Player
{
	char name[80];
	int score;
};

Player makeEggC()
{
	Player Egg;

	printf("Please insert a player's name and score: ");
	// pull in a string up to 80 characters
	scanf_s("%s %d", Egg.name, 80, &Egg.score);
	getchar();

	return Egg;
}

void printEgg(Player Egg)
{
	printf("%s %d", Egg.name, 80, Egg.score);
}

void main()
{
	Player players[5];
	for (int i = 0; i < 5; ++i)
	{
		players[i] = makeEggC();
	}
	for (int i = 0; i < 5; ++i)
	{
		printEgg(players[i]);
	}
	getchar();
}