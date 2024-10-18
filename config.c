#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"tomldo", 1, 9},
    {"sb-mic", 0,   20},
    {"sb-internet", 600, 6},
    {"pingopi",    60,    12},
    {"sb-forecast",900,  5},
    {"sb-date",    60,    10},
};

const unsigned short blockCount = LEN(blocks);
