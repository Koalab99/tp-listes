#ifndef LIFAP6_LISTE_CELLULE_HPP
#define LIFAP6_LISTE_CELLULE_HPP

#include <vector>

class Cellule {
private:
	std::vector<Cellule *>next;
public:
	/* Used for the tests to succeed, should be private! */
	int valeur;

	/* Constructors */
	Cellule(void);
	Cellule(int val);

	/* Destructor */
	~Cellule(void);

	/* Getters */
	int get_value(void) const;
	Cellule *get_next(void);
	Cellule *get_next(int lvl);
	// For const Cellule only
	const Cellule *get_next(void) const;

	/* Setters */
	void setValue(int val);
	void setNext(int lvl, Cellule *cell);
} ;

#endif
