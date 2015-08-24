#include "time_as_words.h"

//jame
static const char* const HOURS[] = {
  "",
	"siji",
	"loro",
	"telu",
	"papat",
	"limo",
	"enem",
	"pitu",
	"wolu",
	"songo",
  "spuloh",
  "swelas",
  "rolas"
};

//menit
static const char* const ONES[] = {
  "",
	"siji",
	"loro",
	"telu",
	"papat",
	"limo",
	"enem",
	"pitu",
	"wolu",
	"songo"
};

void time_as_words(int int_hour, int int_min, char* str_hour, char* str_tens, char* str_ones) {
	
	strcpy(str_hour, "");
	strcpy(str_tens, "");
	strcpy(str_ones, "");
  
	//jam
  if (int_hour % 12 == 0) {
		strcat(str_hour, HOURS[12]);
	}
	else {
		strcat(str_hour, HOURS[int_hour % 12]);
	}
	
	//menit
  if(int_min == 0){
    strcat(str_tens, "pas..");
  }
  else if (int_min <= 10){
    if(int_min == 10){
      strcat(str_tens, "spuloh");
    }
    else{
      strcat(str_tens, ONES[int_min % 10]);
    }
  } 
	else {    
		strcat(str_tens, ONES[int_min / 10]);
    if(int_min % 10 == 0){
      strcat(str_ones, "enol");
    }
    else {
      strcat(str_ones, ONES[int_min % 10]);
    }
	}
}