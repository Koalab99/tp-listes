#ifndef LIFAP6_LISTE_CELLULE_HPP
#define LIFAP6_LISTE_CELLULE_HPP

class Cellule {
private:
	Cellule *next;
public:
	int valeur;
	Cellule(void);
	Cellule(int val);
	Cellule(int val, Cellule *nxt);

	~Cellule(void);

	int get_value(void) const;
	void setValue(int val);

	Cellule *get_next(void);
	const Cellule *get_next(void) const;
	void setNext(Cellule *cell);
} ;

#endif
