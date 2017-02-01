#include <iostream>

int resultingLine;

enum aboveOrBelow
{
    ABOVE,
    BELOW
}

int getLineAboveOrBelow(int aboveorbelow, int *linesAboveOrBelow)
{
    if(aboveorbelow = 0)
    {
        resultingLine == __LINE__ - linesAboveOrBelow;
    }
    
    if(aboveOrBelow = 1)
    {
        resultingLine == __LINE__ + linesAboveOrBelow;
    }
    
    return resultingLine;
}