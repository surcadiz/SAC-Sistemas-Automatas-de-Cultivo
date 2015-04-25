/*
 * languages.h : File That contains all the Language Options for the Project SAC.
 *  In this file contains all the Messages for Print in screen in 2 Languages.
 *
 *  Created on: 16/03/2014
 *      Author: David Cuevas <mr.cavern@gmail.com>
 *      Collaborator: Victor Suarez<suarez.garcia.victor@gmail.com>
 *
 *   SAC: Version 1.1.
 */
int active_language=1;


enum {
  S_SM,
  S_RETURN_TO,
  S_CONFIGURATION,
  S_RESET,
  S_ON,
  S_RANGE,
  S_STMax,
  S_CONSUMPTION,
  S_CICLE,
  S_SATCALIBRATION,
  S_CURRENTVALUE,
  S_ABOUT,
  S_SAC,
  S_SMm,
 };

#define MAX_LANGUAGE 1
typedef struct TranslatedString {
 PROGMEM const char *languages[MAX_LANGUAGE];
} TranslatedString;

TranslatedString string_db[]={
  
  // for languages missing translations, english will be used instead 
  
  {{"HSO:"}},
  {{"VOLVER"}},
  {{"CONFIGURACION"}},
  {{"RESET"}},
  {{"ON:"}},
  {{" "  }},
  {{"TSMAX:"}},
  {{"CONSUMO:"}},
  {{"CICLO:"}},
  {{"CALIBRATION SAT"}},
  {{"VALOR ACTUAL"}},
  {{"ACERCA DE"}},
  {{"DESARROLLO POR AISUR"}},
  {{"MIN:"}},
};

/* returns a translated string; if no translation found - return the original
 * string.
 */
static const char *translate(int stringno)
{
  if (active_language < 0)
    active_language = 0;
  if (active_language >= MAX_LANGUAGE)
    active_language = MAX_LANGUAGE-1;

  if (string_db[stringno].languages[active_language])
    return string_db[stringno].languages[active_language];
  else
    return string_db[stringno].languages[0];
}
