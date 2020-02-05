#include "cellule.hpp"
#include <stdio.h>

Cellule::Cellule(void) {
	valeur = 0;
	next = nullptr;
}

Cellule::Cellule(int val) {
	valeur = val;
	next = nullptr;
}

Cellule::Cellule(int val, int lvl, Cellule *nxt) {
	valeur = val;
	level = lvl;
	next = nxt;
}

Cellule::~Cellule() {
	next = nullptr;
}

int Cellule::get_value(void) const {
	return valeur;
}

void Cellule::setValue(int val) {
	valeur = val;
}

Cellule *Cellule::get_next(void) {
	return this->next;
}
Cellule *Cellule::get_next(int lvl) {
	if(lvl >= level) 
		return nullptr;

	return &next[lvl];
}

const Cellule *Cellule::get_next(void) const {
	return this->next;
}

void Cellule::setNext(int lvl, Cellule *cell) {
	level = lvl;
	next = cell;	
}
