#include "libFamTree.h"



bool retrieveRecord(Family *temp){
    static char addMember = '\0'; 
    printf("\nWould you like to enter details of a%s family member?\n(Y or N) ",addMember != '\0'?"nother " : "" );
    scanf(" %c", &addMember);
    if(tolower(addMember) == 'n')
        return false;

    printf("\nFirst name:\t");
    getname(temp->name); 
    
    printf("\nMiddle Name:\t");
    scanf("%s", temp->middleName);   

    printf("\nLast Name:\t");
    scanf("%s",temp->lastName );      

    printf("\n%s's place of birth:\t", temp->name);
    scanf("%s", temp->pob);

    printf("\nEnter %s's date of birth (DD MM YYYY)\t", temp->name);
    scanf("%d %d %d", &temp->dob.day, &temp->dob.month, &temp->dob.year);

    printf("\nWho is %s's father?\t", temp->name);
    getname(temp->fatherName); 

    printf("\nWho is %s's mother?\t", temp->name);
    getname(temp->motherName); 

    printf("\nWho is %s's spouce?\t", temp->name);
    getname(temp->spouseName); 

    printf("\nWho is %s's child?\t", temp->name);
    getname(temp->childName); 

    
    printf("\nVitality Status (enter D for deseased, H for healthy):\t");
    scanf("%c", &temp->vitalityStatus);
    if(temp->vitalityStatus == 'd'){
        printf("\nEnter %s's date of decease (DD MM YYYY)\t", temp->name);
        scanf("%d %d %d", &temp->dod.day, &temp->dod.month, &temp->dod.year); 
    }

    return true;
}

void getname(char *name){
    fflush(stdin); 
    fgets(name, 20, stdin);
    int len = strlen(name);
    if(name[len-1] == '\n') /* If last char is newline */
    name[len-1] = '\0'; /* overwrite it */
}

void displayRecord(void){
  Family member; /* Structure to hold data from file */
  fpos_t current = 0; /* File position */
 
/* Open file for binary read */
 if(!(global.pfile = fopen(global.filename, "rb"))){
    printf("\nUnable to open %s for reading.\n", global.filename);
    exit(1);
 }
/* Read data on person */
  while(fread(&member, sizeof member, 1, global.pfile)){
      fgetpos(global.pfile, &current); /* Save current position */
      printf("\n\n%s %s %s is born on %d/%d%d, in %s to  %s, and %s as parents.", 
            member.name,member.middleName, member.lastName, member.dob.day, member.dob.month, member.dob.year,
            member.pob, member.fatherName, member.motherName);
      printf("\n%s is married to %s, their child is %s", member.name, member.spouseName, member.childName);
      if(member.vitalityStatus =! NULL){
        printf("\n%s passed away on %d/%d/%d.\n", member.name, member.dod.day, member.dod.month, member.dod.year);
      }
      getRelativeData(&member); /* Get parent data */
      fsetpos(global.pfile, &current); /* Position file to read next */
  }
  fclose(global.pfile); 
}

void getRelativeData(Family *pmember){
    Family relative; /* Stores a relative */
    int counterParents = 0; /* Count of relatives found */
    rewind(global.pfile); /* Set file to the beginning */

/*Retrieve information on a relative */
    while(fread(&relative, sizeof(Family), 1, global.pfile)){
      if(strcmp(pmember->fatherName, relative.name) == 0) /*Verifying Father*/{ 
          printf("\n%s was born on %d/%d/%d, in %s.\nHis father is %s, his mother - %s.\nHe is married to %s.\n",
                relative.name, relative.dob.day, relative.dob.month, relative.dob.year, relative.pob, 
                relative.fatherName, relative.motherName, relative.spouseName);
      
          if(++counterParents == 2) /* Increment parent count */
              return; 
      }
      else if(strcmp(pmember->motherName, relative.name) == 0) { 
        printf("\n%s was born on %d/%d/%d in %s.\nHer father is %s, her mother - %s",
                relative.name, relative.dob.day, relative.dob.month, relative.dob.year, 
                relative.pob, relative.fatherName, relative.motherName, relative.spouseName);
            if(++counterParents == 2) 
                return; 
      }
      else if(strcmp(pmember->spouseName, relative.name) == 0){ 
          printf("\n%s was born on %d/%d/%d, in %s.\n.%s's parents are %s and %s.\n%s is married to %s. they have %s as a child.\n",
                  relative.name, relative.dob.day, relative.dob.month, relative.dob.year, relative.pob, relative.name,
                  relative.fatherName, relative.motherName, relative.name, relative.spouseName, relative.childName);
            return; 
      }
      else if(strcmp(pmember->childName, relative.name) == 0) { 
          printf("\n%s was born on %d/%d/%d, in %s.\n.%s's parents are %s and %s.\n%s is married to %s. they have %s as a child.\n",
                  relative.name, relative.dob.day, relative.dob.month, relative.dob.year, relative.pob, relative.name,
                  relative.fatherName, relative.motherName, relative.name, relative.spouseName, relative.childName);
            return; 
      }
    }
}
