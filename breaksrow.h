
#pragma once
#include "SFML/Graphics.hpp"
#include "Setings.h"
#include "brick.h"

struct Brickrow {
	int size;
	Brick brickArr[10];
};

struct Brickrow2 {
	int size2;
	Brick brickArr[10];
};

void brickRowInit(Brickrow& brickrow, int size, sf::Vector2f rowStartPos,
	float offsetX)
{
	brickrow.size = size;
	for (int i = 0; i < brickrow.size; i++) {
		sf::Color color{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position{ rowStartPos.x + i * BRICK_WIDTH, rowStartPos.y };
		brickInit(brickrow.brickArr[i], color, position);
	}
}

void brickRowInit2(Brickrow2& brickrow2, int size2, sf::Vector2f rowStartPos2,
	float offsetX)
{
	brickrow2.size2 = size2;
	for (int i = 0; i < brickrow2.size2; i++) {
		sf::Color color2{
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256),
			(sf::Uint8)(rand() % 256)
		};
		sf::Vector2f position2{ rowStartPos2.x + i * BRICK_WIDTH, rowStartPos2.y + 40 };
		brickInit(brickrow2.brickArr[i], color2, position2);
	}
}

void brickRowUpdate(Brickrow& brickrow) {
	for (int i = 0; i < brickrow.size; i++) {
		brickUpdate(brickrow.brickArr[i]);
	}
}

void brickRowUpdate(Brickrow2& brickrow2) {
	for (int i = 0; i < brickrow2.size2; i++) {
		brickUpdate(brickrow2.brickArr[i]);
	}
}

void brickRowDraw(sf::RenderWindow& window, const Brickrow& brickrow) {
	for (int i = 0; i < brickrow.size; i++) {
		brickDraw(window, brickrow.brickArr[i]);
	}
}
void brickRowDraw(sf::RenderWindow& window2, const Brickrow2& brickrow2) {
	for (int i = 0; i < brickrow2.size2; i++) {
		brickDraw(window2, brickrow2.brickArr[i]);
	}
}
