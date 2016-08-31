// benjamin.vongtawan@students.aie.edu.au
#include<iostream>
#include<cstdio>
#include <string>

struct vec2
{
	float x, y;
};

struct Player
{
	char name;
	int health = 0;
	int score = 0;
	vec2 position, velocity;
};

struct Point2d
{
	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;
	float rgb[3];
};