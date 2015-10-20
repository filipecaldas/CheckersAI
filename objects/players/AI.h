/*
 * AI.h
 *
 *  Created on: 2 août 2015
 *      Author: filipe
 */

#ifndef AI_H_
#define AI_H_

#include "../Player.h"
#include "../Piece.h"
#include <iostream>
#include <vector>
#include "AITable.h"

using namespace std;

#define POINT_KILL 1
#define POINT_KILL_KING 2
#define POINT_PROMOTE 1
class AImove{
public:
	move m;

	int score;

	AImove * previous;

	vector<AImove *> next;

	AITable tableGame;

	AImove(position from, position to, int score, AImove * parent, AITable oTable);

};

class AI : public Player {
private:
	int maxDepth;
	bool checkPositionValid(position &p);

public:
	AI(pc_color color, Table *table);

	move * play();

	void draw(SDL_Surface* screen);

	void mouseMove(int x, int y);

	void click(int x, int y);

	virtual ~AI();

	std::vector<AImove*> possibleMovesForPiece(Piece &p, AImove *parent);

	AImove* createTree(int treeDepth);
};

#endif /* AI_H_ */
