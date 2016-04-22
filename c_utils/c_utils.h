#ifndef __C_UTILS
#define __C_UTILS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "C_Object.h"
#include "C_Integer.h"
#include "C_List.h"
#include "C_Char.h"
#include "C_String.h"

char *dynamic_str(char *);

Object *range(int start, int stop, int step);

#endif