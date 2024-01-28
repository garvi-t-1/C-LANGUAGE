#include<stdio.h>
int main()
{
	struct pokemon{
		int hp;
		int speed;
		int attack;
		char tier;
	};
	struct pokemon pikachu;
	pikachu.attack=60;
	pikachu.hp=100;
	pikachu.speed=90;
	pikachu.tier='A';
	printf("%d",pikachu.attack);
	struct pokemon charizrd;
	charizrd.attack=800;
	charizrd.speed=90;
	charizrd.hp=450;
	charizrd.tier='S';
	return 0;
}
