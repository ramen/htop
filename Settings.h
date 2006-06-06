/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_Settings
#define HEADER_Settings
/*
htop - Settings.h
(C) 2004-2006 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "String.h"
#include "ProcessList.h"
#include "Header.h"

#include "debug.h"

#define DEFAULT_DELAY 15


typedef struct Settings_ {
   char* userSettings;
   ProcessList* pl;
   Header* header;
   int colorScheme;
   bool changed;
   int delay;
} Settings;


Settings* Settings_new(ProcessList* pl, Header* header);

void Settings_delete(Settings* this);

bool Settings_read(Settings* this, char* fileName);

bool Settings_write(Settings* this);

#endif
