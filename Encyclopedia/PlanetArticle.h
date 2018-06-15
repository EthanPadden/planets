#pragma once
#include "Article.h"
class PlanetArticle :
	public Article
{
public:
	PlanetArticle(float m, float v);
	~PlanetArticle();
	void setValues(float m, float v);
	float getMass();
	float getVolume();

private:
	float mass;
	float volume;
};

