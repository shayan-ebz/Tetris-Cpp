#include "Colors.h"

// defining color RGB values
const Color darkgray{ 26,31,40,255 };	// representing an empty cell
const Color green{ 47,230,23,255 };
const Color red{ 232,18,18,255 };
const Color orange{ 226,116,17,255 };
const Color yellow{ 237,234,4,255 };
const Color purple{ 166,0,247,255 };
const Color cyan{ 21,204,209,255 };
const Color blue{ 13,64,216,255 };
const Color lightblue{ 60,85,160,255 };
const Color darkblue{ 45,45,128,255 };

std::vector<Color> CreatCellColors()
{
	std::vector<Color> colors{ darkgray, green, red, orange, yellow, purple, cyan, blue };

	return colors;
}
