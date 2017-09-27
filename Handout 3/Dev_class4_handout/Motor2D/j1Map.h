#ifndef __j1MAP_H__
#define __j1MAP_H__

#include "PugiXml/src/pugixml.hpp"
#include "p2List.h"
#include "p2Point.h"
#include "j1Module.h"

// TODO 2: Create a struct to hold information for a TileSet
// Ignore Terrain Types and Tile Types for now, but we want the image!
struct TileSetInfo {	
	unsigned int firstgid = 0;
	char* name = nullptr;
	unsigned int tilewidth = 0;
	unsigned int tileheight = 0;
	unsigned int spacing = 0;
	unsigned int margin = 0;
};
// ----------------------------------------------------


// TODO 1: Create a struct needed to hold the information to Map node
enum orientation {
	orthogonal,
	isometric,
	staggered,
	hexagonal
};
enum renderorder {
	right_down,
	right_up,
	left_down,
	left_up
};
struct MapInfo {
	orientation mapOrientation = orthogonal;
	renderorder mapRenderorder = right_down;
	unsigned int width = 0, height = 0, tilewidth = 0, tileheight = 0, nextobject = 0;
};

// ----------------------------------------------------
class j1Map : public j1Module
{
public:

	j1Map();

	// Destructor
	virtual ~j1Map();

	// Called before render is available
	bool Awake(pugi::xml_node& conf);

	// Called each loop iteration
	void Draw();

	// Called before quitting
	bool CleanUp();

	// Load new map
	bool Load(const char* path);

private:

	void LoadMap();

public:

	// TODO 1: Add your struct for map info as public for now
	MapInfo mapInformation;

private:

	pugi::xml_document	map_file;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__