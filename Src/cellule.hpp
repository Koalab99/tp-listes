#ifndef LIFAP6_LISTE_CELLULE_HPP
#define LIFAP6_LISTE_CELLULE_HPP

class Cellule {
private:
	Cellule *next;
	int level;
public:
	int valeur;
	Cellule(void);
	Cellule(int val);
	Cellule(int val, int lvl, Cellule *nxt);

	~Cellule(void);

	int get_value(void) const;
	void setValue(int val);

	Cellule *get_next(void);
	Cellule *get_next(int lvl);
	const Cellule *get_next(void) const;
	void setNext(int lvl, Cellule *cell);
} ;

#endif
