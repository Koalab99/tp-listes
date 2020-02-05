#include "cellule.hpp"
#include <stdio.h>

Cellule::Cellule(void) {
	valeur = 0;
}

Cellule::Cellule(int val) {
	valeur = val;
}

Cellule::~Cellule() {
	// *exists*
}

int Cellule::get_value(void) const {
	return valeur;
}

void Cellule::setValue(int val) {
	valeur = val;
}

Cellule *Cellule::get_next(void) {
	if((int)next.size() == 0) {
		return nullptr;
	}
	return next[0];
}
Cellule *Cellule::get_next(int lvl) {
	if(lvl >= (int)next.size()) 
		return nullptr;

	return next[lvl];
}

const Cellule *Cellule::get_next(void) const {
	return next[0];
}

void Cellule::setNext(int lvl, Cellule *cell) {
	if((int)next.size() == lvl) {
		next.push_back(cell);
	}
	else if((int)next.size() > lvl) {
		next[lvl] = cell;
	}
}
