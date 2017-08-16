#ifndef RANDOMCLOUD_HPP_INCLUDED
#define RANDOMCLOUD_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <list>
#include <stdlib.h>
#include <time.h>

class RandomCloud : public sf::Drawable, sf::Transformable {
	private:
		static const int MAX_WIDTH = 200;
		static const int MAX_HEIGHT = 100;
		static const int BORDER_SIZE_MIN = 30;
		static const int BORDER_SIZE_MAX = 45;
		static const int BORDER_NUMBER = 12;
		sf::RectangleShape cloudBody;
		std::list<sf::CircleShape> cloudBorder;

	public:
		RandomCloud();
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {
			target.draw(this->cloudBody);
			for (sf::CircleShape var : this->cloudBorder) {
				target.draw(var);
			}
		}

		virtual void setPosition(float x, float y) {
			this->cloudBody.setPosition(x, y);
			for (sf::CircleShape var : this->cloudBorder) {
				var.setPosition(x, y);
			}
		}

		void generateBorder();
};

#endif