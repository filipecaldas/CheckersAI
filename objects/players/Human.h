/*
 * Human.h
 *
 *  Created on: 2 août 2015
 *      Author: filipe
 */

#ifndef HUMAN_H_
#define HUMAN_H_

#include "../Player.h"

class Human : public Player {
	position selected_case;
	bool selected;
public:
	Human(pc_color color, Table *table);

	void play();

	void draw(SDL_Surface* screen);

	void click(int x, int y);

	virtual ~Human();
};

#endif /* HUMAN_H_ */
