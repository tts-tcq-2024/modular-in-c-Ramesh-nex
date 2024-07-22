#include <string.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const int MAX_COLORPAIR_NAME_CHARS = 16;

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMajorColors;
extern int numberOfMinorColors;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintReferenceManual();
