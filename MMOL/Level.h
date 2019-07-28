#pragma once
#include <string>

struct Tileset
{
	int firstGridID;
	int tileWitdth;
	int tileHeight;
	int spacing;
	int margin;
	int width;
	int height;
	int numColumns;
	std::string name;
};

class Level
{
public:
	Level();
	~Level();

	void update();
	void render();
};

