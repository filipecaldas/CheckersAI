/*
 * Player.cpp
 *
 *  Created on: 26 juil. 2015
 *      Author: filipe
 */

#include "Player.h"
#include "Table.h"

#include <iostream>

using namespace std;

Player::Player(pc_color color, Table *table) {
	this->table = table;
	this->color = color;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

/* Check if a movement is valid, sends two positions
 * returns bool.
 * assumes white pieces are always at the bottom
 *
 */
bool Player::isMoveValid(position initial, position final){
	Piece *toMove = table->getPiece(initial,this->color);
	if(toMove == NULL)
		return false;

	//TODO: implement
	return false;
}

