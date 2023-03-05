
#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include "Setings.h"

using namespace sf;

struct Brick
{
	RectangleShape shape;
	Color color;
	Vector2f position;
};

void brickInit(Brick& brick, sf::Color color, sf::Vector2f position) {
	brick.shape.setSize(sf::Vector2f{ BRICK_WIDTH, BRICK_HEIGHT });
	brick.shape.setFillColor(color);
	brick.shape.setPosition(position);
}

void brickUpdate(Brick& brick) {}

void brickDraw(sf::RenderWindow& window, const Brick& brick) {
	window.draw(brick.shape);
}
