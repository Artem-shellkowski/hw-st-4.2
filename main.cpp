#include <SFML/Graphics.hpp>
#include "Setings.h"
//#include "boll.h"
//#include "bat.h"
#include "breaksrow.h"
//#include "brick.h"
//#include "breaksrow.h"
//#include "textobg.h"

using namespace sf;
int main()
{
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE,
		Style::Titlebar | Style::Close
	);
	window.setFramerateLimit(60);



	//Ball ball;
	//ballInit(ball);
	//Bat bat;
	//batInit(bat);
	//TextObj scoreText;
	//textInit(scoreText, ball.score);
	Brickrow brickrow;
	Brickrow brickrow1;
	brickRowInit(brickrow, 1, Vector2f{ 0.f,60.f }, BRICK_WIDTH);


	while (window.isOpen())
	{
		//1 îáðàáîòêà ñîáûòèé
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		//îáíîâëåíèå èãðîâûõ îáúåêòîâ (ôóíêöèè update)
		//ballUpdate(ball, bat);
		//batUpdate(bat);
		//textUpdate(scoreText, ball.score);

		brickRowUpdate(brickrow);
		brickRowUpdate(brickrow1);

		//îòðèñîâêà îáúåêòîâ è îáíîâëåíèå îêíà
		window.clear();
		//ballDraw(window, ball);
		//batDraw(window, bat);
		//textDraw(window, scoreText);
		brickRowDraw(window, brickrow);
		brickRowDraw(window, brickrow1);
		window.display();
	}

	return 0;
}