#include <iostream>
#include "Article.h"
#include "PlanetArticle.h"

using namespace std;

int main() {
	//Example of use:
	Article sample;
	sample.setTitle("myTitle");
	sample.setContent("myContent");
	
	cout << sample.getInfo() << endl;

	PlanetArticle planet(20, 25);
	planet.setTitle("Earth");
	planet.setContent("Earth is where we live");

	cout << planet.getInfo() << endl;
	cout << "Mass = " << planet.getMass() << endl;
	cout << "Volume = " << planet.getVolume() << endl;
}