// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    string numerator = strtok(fraction, "/");
    string denominator = strtok(NULL, "/");

    if (denominator.atoi = 8) {
        return numerator.atoi;
    }
    else if (denominator.atoi = 2) {
        return numerator.atoi * 4;
    }
    else {
        return numerator.atoi * 2;
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO: Calculate distance from given note to A4
        // Step 1: Parse note to determine octave and nominal
        // Step 2: Determine number of semitones between note and A4
    // Calculate frequency as 2^n/12 * 440 (n = semitones calculated above)
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s == NULL) {
        return true;
    }
    else {
        return false;
    }
}
