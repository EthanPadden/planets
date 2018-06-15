#include "PlanetArticle.h"

PlanetArticle::PlanetArticle(float m, float v)
{
	setValues(m, v);
}


PlanetArticle::~PlanetArticle()
{
}

void PlanetArticle::setValues(float m, float v) {
	mass = m;
	volume = v;
}

float PlanetArticle::getMass() {
	return mass;
}

float PlanetArticle::getVolume() {
	return volume;
}
