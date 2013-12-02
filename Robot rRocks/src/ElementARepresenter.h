
#ifndef ELEMENTAREPRESENTER_H_
#define ELEMENTAREPRESENTER_H_

#include <vector>
#include "Afficheur.h"
using namespace std;

class Afficheur;

class ElementARepresenter{
private:
	vector<Afficheur*> v;
public:
	void attacherAfficheur(Afficheur* a){
		v.push_back(a);
	}

	void detacherAfficheur(Afficheur* a){
		vector<Afficheur*>::iterator it = v.begin();
		while(it != v.end()){
			if(*it == a){
				it = v.erase(it);
			}
			else{
				it ++;
			}
		}
	}

	void notifier(){
		for(int i = 0; i < v.size(); i++){
			v[i]->afficher(this);
		}
	}

};

#endif
