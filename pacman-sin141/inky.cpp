#include "inky.h"
Inky::Inky(int x, int y) : Ghost() {
	entityX = x;
	entityY = y;
	ghostType = 2;
}
Inky::~Inky() {}
void Inky::chasePacman(std::vector<std::vector<char>> map, int pacX, int pacY)
{
	// TODO: implement Inky's unique chase method

}
void Inky::renderGhost(ALLEGRO_BITMAP* imgInky, int sprite) {
	al_draw_bitmap_region(imgInky, direction * entityWidth, sprite * entityHeight, entityWidth, entityHeight, getEntityX(), getEntityY(), 0);
}

