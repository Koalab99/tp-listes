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

Cellule::Cellule(int val, Cellule *nxt) {
	valeur = val;
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

const Cellule *Cellule::get_next(void) const {
	return this->next;
}

void Cellule::setNext(Cellule *cell) {
	next = cell;	
}
