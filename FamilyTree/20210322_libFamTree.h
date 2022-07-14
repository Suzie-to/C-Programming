#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>


//const int NAME_MAX = 20;

struct file{
    char *filename; 
    FILE *pfile; 
}global;

extern global = {"FamTreeFile.bin", NULL};

struct Date {
    int day;
    int month;
    int year;
};

typedef struct family{
    struct Date dob;
    struct Date dod;

    char pob[20];
    char middleName[20]; 
    char lastName[20];
    char name[20];
    char fatherName[20];
    char motherName[20];
    char spouseName[20];
    char childName[20];
    char vitalityStatus; 
}Family;

bool retrieveRecord(Family *pfamily); /* Input function */
void getname(char *name); /* Read a name */
void displayRecord(void); /* Output function */
void getRelativeData(Family *pfamily); /* Function to find pa & ma */
