#include <stdio.h>
#include <string.h>

struct player
{
    char name[30];
    int age;
    char specialization[20];
    int totalRuns;
    int totalWickets;
};

struct player p[4]; // p[0] p[1] p[2] p[3]

void getData()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("\nEnter Name");
        scanf("%s", &p[i].name);
        printf("\nEnter Specialization and Age");
        scanf("%s%d", &p[i].specialization, &p[i].age);
        printf("\nEnter Total Runs and Total Wickets");
        scanf("%d%d", &p[i].totalRuns, &p[i].totalWickets);
    }
}

void printData()
{
    int i;
    printf("\nName  Specializtion Age TotalRuns TotalWickets");
    for (i = 0; i < 4; i++)
    {
        printf("\n%-10s %-10s %-3d %-4d %-4d", p[i].name, p[i].specialization, p[i].age, p[i].totalRuns, p[i].totalWickets);
    }
}

void search()
{
    char searchName[30];
    int i;
    int found = 0; // no

    printf("\nenter player name that you want to search : ");
    scanf("%s", searchName); // rock

    // rock sakira jack james
    // jack
    // sam

    for (i = 0; i < 4; i++)
    {
        if (strcmp(p[i].name, searchName) == 0)
        {
            found = 1;
            printf("\n%-10s %-10s %-3d %-4d %-4d", p[i].name, p[i].specialization, p[i].age, p[i].totalRuns, p[i].totalWickets);
        }
    }//7 tue 

    if(found==0){
        printf("\n%s not found ",searchName);         
    }
}

int main()
{
    getData();
    printData();

    search();
    // enter search player name
    // rock
    // print all details
    // not found

    return 0;
}