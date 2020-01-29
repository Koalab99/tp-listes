#include "liste.hpp"

#include <iostream>
#include <cassert>

Liste::Liste() {
	head = nullptr;
}

Liste::Liste(const Liste& autre) {
	const Cellule *cur = autre.tete();
	if(!cur) {
		head = nullptr;
		return;
	}
	while(cur) {
		this->ajouter_en_queue(cur->get_value());
		cur = cur->get_next();
	}
}

Liste& Liste::operator=(const Liste& autre) {
	// Clean the current data
	Cellule *current;
	while(head) {
		current = head;
		head = current->get_next();
		delete current;
	}
	const Cellule *cur = autre.tete();
	if(!cur) {
		head = nullptr;
		return *this;
	}
	while(cur) {
		this->ajouter_en_queue(cur->get_value());
		cur = cur->get_next();
	}
	return *this ;
}

Liste::~Liste() {
	Cellule *current;
	while(head) {
		current = head;
		head = current->get_next();
		delete current;
	}
}

void Liste::ajouter_en_tete(int valeur) {
	Cellule *first = new Cellule(valeur); 
	assert(first);
	first->setNext(head);
	head = first;
}

void Liste::ajouter_en_queue(int valeur) {
	Cellule *last = new Cellule(valeur);
	assert(last);
	if(!head) {
		head = last;
		return;
	}
	Cellule *current = head;
	while(current->get_next()) {
		current = current->get_next();
	}
	current->setNext(last);
}

void Liste::supprimer_en_tete() {
	assert(head);
	Cellule *del = head;
	head = head->get_next();
	delete del;
}

Cellule* Liste::tete() {
	return head;
}

const Cellule* Liste::tete() const {
	return head;
}

Cellule* Liste::queue() {
	if(!head) {
		return nullptr;
	}
	Cellule *current = head;
	while(current->get_next()) {
		current = current->get_next();	
	}
	return current;
}

const Cellule* Liste::queue() const {
	if(!head) {
		return nullptr;
	}
	Cellule *current = head;
	while(current->get_next()) {
		current = current->get_next();	
	}
	return current;
}

int Liste::taille() const {
	int count = 0;
	Cellule *current = head;
	while(current) {
		current = current->get_next();	
		count++;
	};
	return count;
}

Cellule* Liste::recherche(int valeur) {
	Cellule *current = head;
	while(current) {
		if(current->get_value() == valeur) {
			break;
		}
		current = current->get_next();	
	};
	if(!current) {
		return nullptr;
	}
	Cellule *ret = new Cellule(current->get_value());
	return ret;
}

const Cellule* Liste::recherche(int valeur) const {
	Cellule *current = head;
	while(current) {
		if(current->get_value() == valeur) {
			break;
		}
		current = current->get_next();	
	};
	return current;
}

void Liste::afficher() const {
	Cellule *cell = head;
	while(cell) {
		printf("%d ", cell->get_value());
		cell = cell->get_next();
	}
	printf("\n");	
}
