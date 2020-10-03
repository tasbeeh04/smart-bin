#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int u_input;
char u_name[100] = "smartbin";
int u_pass;
int weight =1000;
int points = 1000;
int convert;
void program()
{
    printf("Welcome to smart bin!\nchoose the operation you want: \n");
    printf("1:insert your garbage\n2:check your points\n3:convert your points\n4:contact us\n5:to exit the program\n");
    scanf("%d",&u_input);
    switch(u_input)
    {
        case 1:
              printf("insert your garbage\n");
              points =weight+points;
              printf("your now points:%d\n",points);
              break;

        case 2 :
              printf("enter user name:\n ");
              scanf("%s",&u_name);
              printf("\nenter your password:\n ");
              scanf("%d",&u_pass);
              if(u_pass ==(1234))
              {
                  printf("\nyour points:%d\n",points);
                  break;
              }
              else{
                for(int i=0; i<3; i++)
                    {
                    printf("wrong password try again\n");
                    scanf("%s",&u_pass);
                    }
                printf("please try to contact us to solve your problem on the following numbers:01234567891\n or on send us a mail on: smartbin@334.com \n");
                break;
              }
        case 3:printf("enter number of points you want to convert:");
              scanf("%d",&convert);
              if(convert >points)
              {
                  printf("\nyou have entered more than your points\n please enter a valid number\nyour now points: %d\n\n", points);
                  break;
              }
              else{
                points = points - convert;
                printf("your now points: %d\n",points);
                printf("the value of money transferred to bank account: %d\n", convert);
                break;
              }
        case 4:
            printf("contact us on our:\nmail:smartbin@334.com\nphone number: 01234567891\nHotline: 23456");
            break;
        case 5:
             printf("thanks for choosing us");
             break;
        default :
            printf("please enter a valid number");
            break;
    }
}
int main()
{
    while(u_input != 5)
    {
        program();
        printf("\n");
    }
    printf("thanks for choosing us");
    return 0;
}
