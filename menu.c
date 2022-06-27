#include "menu.h"


struct student
{
    int stid[20];//student id
    char name[20];//student name
    int sctime[20];//when student enter school
    int course1[10];//course 1 score
    int course2[10];//course 2 score
    int course3[10];//course 3 score
    int course4[10];//course 4 score
};

void menu()
{
    printf("--------------------------------------------------------\n");
    printf("--        welcome to student score manage system      --\n");
    printf("--                                                    --\n");
    printf("--          press number to choose the function       --\n");
    printf("--               1.student infomation entry           --\n");
    printf("--               2.student score update               --\n");
    printf("--               3.student score retrieve             --\n");
    printf("--               4.student avarage score              --\n");
    printf("--               5.course statistics                  --\n");
    printf("--                                                    --\n");
    printf("--------------------------------------------------------\n");
}

void infoentry()
{
    printf("--------------------------------------------------------\n");
    printf("--       welcome to student score manage system       --\n");
    printf("--                                                    --\n");
    printf("--           please entry student infomation          --\n");
    printf("--                                                    --\n");
     scanf("--Student ID%d & Name%s & Admission time%d & 4 courses score%d--",);  
    printf("--                                                    --\n");  
    printf("--         press 0 back to menu                       --\n");
    printf("--------------------------------------------------------\n");    
}

int getinput()
{
    int usrinput;
    usrinput=getchar();
    usrinput=usrinput-48;
    return usrinput;

}