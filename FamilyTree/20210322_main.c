
/*Задача за родословно дърво
Направете програма за въвеждане на родословно дърво на дадена фамилия. За всеки член от фамилията трябва да се въвежда, име, презиме, фамилия, 
месторождение, дата на раждане, терминална дата, съпруги/съпрузи и деца. Създайте възможност за търсене по име и фамилия. 

Намиране на родители на даден 
овек, както и неговите дядовци, и баби. 
Направете извеждане на цялото родословно дърво в текстов режим на екрана, или от даден родител, на неговите деца, внуци, правнуци и т.н.*/

#include "libFamTree.h"


int main(void){

   Family member; /* Stores a family structure */
   if(!(global.pfile = fopen(global.filename, "wb"))){
      printf("\nUnable to open %s for writing.\n", global.filename);
      exit(1);
   }
   while(retrieveRecord(&member)) /* As long as we have input */
      fwrite(&member, sizeof member, 1, global.pfile); /* write it away */
      fclose(global.pfile); /* Close the file now its written */
      displayRecord(); /* Show what we can find out */

   /*
   if(remove(global.filename))
   printf("\nUnable to delete %s.\n", global.filename);
   else
   printf("\n%s is deleted successfully.\n", global.filename);
   */
   return 0;
}
