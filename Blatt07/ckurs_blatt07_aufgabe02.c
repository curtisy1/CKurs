#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input3.h"

/* Die Konstanten:
 *  int MAX_LAENGE_STR - die maximale String Länge
 *  int MAX_LAENGE_ARR - die maximale Array Länge
 *  sind input3.c auf jeweils 255 und 100 definiert
 */

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Aufruf: %s <anzahl> <bundesland>\n", argv[0]);
        printf("Beispiel: %s 100 Bayern\n", argv[0]);
        printf("Klein-/Großschreibung beachten!\n");
        exit(1);
    }
    int anzahl = atoi(argv[1]);
    char *bundesland = argv[2];

    // Statisch allokierter Speicher
    char staedte[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    char laender[MAX_LAENGE_ARR][MAX_LAENGE_STR];
    int bewohner[MAX_LAENGE_ARR];
    int *buffer;
    int count = 0;
    int i;
    int j = 0;
    char *land = laender[0];
    char *stadt = staedte[0];
    int einwohner = bewohner[0];

    int len = read_file("staedte.csv", staedte, laender, bewohner);


    buffer = malloc(sizeof(int) * len);


    char *ergebnis[5];

    char string1[len];
    char string2[len];
    char string3[len];
    char string4[len];
    char string5[len];
    char string6[len];
    char string7[len];
    char string8[len];
    char string9[len];
    char string10[len];
    char string11[len];
    char string12[len];
    char string13[len];
    char string14[len];
    char string15[len];
    char string16[len];
    char string17[len];
    char string18[len];
    char string19[len];
    char string20[len];
    char string21[len];
    char string22[len];
    char string23[len];
    char string24[len];
    char string25[len];
    char string26[len];
    char string27[len];
    char string28[len];
    char string29[len];
    char string30[len];

    for(i = 1; i <= len; i++){
    if(strcmp(land, bundesland) == 0){
      stadt = staedte[i - 1];
      einwohner = bewohner[i - 1];
      if(anzahl <= einwohner){
        switch(count){
          case 0:
          sprintf(string1, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 1:
          sprintf(string2, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 2:
          sprintf(string3, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 3:
          sprintf(string4, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 4:
          sprintf(string5, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 5:
          sprintf(string6, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 6:
          sprintf(string7, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 7:
          sprintf(string8, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 8:
          sprintf(string9, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 9:
          sprintf(string10, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 10:
          sprintf(string11, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 11:
          sprintf(string12, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 12:
          sprintf(string13, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 13:
          sprintf(string14, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 14:
          sprintf(string15, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 15:
          sprintf(string16, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 16:
          sprintf(string17, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 17:
          sprintf(string18, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 18:
          sprintf(string19, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 19:
          sprintf(string20, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 20:
          sprintf(string21, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 21:
          sprintf(string22, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 22:
          sprintf(string23, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 23:
          sprintf(string24, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 24:
          sprintf(string25, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 25:
          sprintf(string26, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 26:
          sprintf(string27, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 27:
          sprintf(string28, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 28:
          sprintf(string29, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
          case 29:
          sprintf(string30, "Die Stadt %s hat %d Einwohner.", stadt, einwohner);
          break;
        }
        count++;
      }
    }
    land = laender[i];
  }

  for(j = 0; j <= count; j++){
    switch(j){
      case 0:
      ergebnis[0] = string1;
      break;
      case 1:
      ergebnis[1] = string2;
      break;
      case 2:
      ergebnis[2] = string3;
      break;
      case 3:
      ergebnis[3] = string4;
      break;
      case 4:
      ergebnis[4] = string5;
      break;
      case 5:
      ergebnis[5] = string6;
      break;
      case 6:
      ergebnis[6] = string7;
      break;
      case 7:
      ergebnis[7] = string8;
      break;
      case 8:
      ergebnis[8] = string9;
      break;
      case 9:
      ergebnis[9] = string10;
      break;
      case 10:
      ergebnis[10] = string11;
      break;
      case 11:
      ergebnis[11] = string12;
      break;
      case 12:
      ergebnis[12] = string13;
      break;
      case 13:
      ergebnis[13] = string14;
      break;
      case 14:
      ergebnis[14] = string15;
      break;
      case 15:
      ergebnis[15] = string16;
      break;
      case 16:
      ergebnis[16] = string17;
      break;
      case 17:
      ergebnis[17] = string18;
      break;
      case 18:
      ergebnis[18] = string19;
      break;
      case 19:
      ergebnis[19] = string20;
      break;
      case 20:
      ergebnis[20] = string21;
      break;
      case 21:
      ergebnis[21] = string22;
      break;
      case 22:
      ergebnis[22] = string23;
      break;
      case 23:
      ergebnis[23] = string24;
      break;
      case 24:
      ergebnis[24] = string25;
      break;
      case 25:
      ergebnis[25] = string26;
      break;
      case 26:
      ergebnis[26] = string27;
      break;
      case 27:
      ergebnis[27] = string28;
      break;
      case 28:
      ergebnis[28] = string29;
      break;
      case 29:
      ergebnis[29] = string30;
      break;
    }
  }


    write_file(ergebnis, count);

    free(buffer);
}
