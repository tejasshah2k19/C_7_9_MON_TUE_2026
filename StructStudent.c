#include <stdio.h>

// global
struct student
{

    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{
   struct student s,s1,s2;

    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d", &s.name, &s.maths, &s.sci, &s.eng);

    s.perc = (s.maths + s.sci + s.eng) / 3.0;

    if (s.perc > 90)
    {
        s.grade = 'A';
    }
    else if (s.perc > 75)
    {
        s.grade = 'B';
    }
    else if (s.perc > 35)
    {
        s.grade = 'C';
    }
    else
    {
        s.grade = 'F';
    }

    printf("\nName Maths Sci Eng Perc   Grade\n");
    printf("%-6s %-4d %-3d %-3d %-4.2f %c", s.name, s.maths, s.sci, s.eng, s.perc, s.grade);


    return 0;
}