#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// creat  a function 
int Snakewatergun(char you , char comp){
    if(you == comp){
        return 0;
    }
    if( you =='s' && comp =='g'){
        return -1;
    }
    else if(you =='g'&& comp =='s'){
        return 1;
    }
    if(you == 's'&& comp =='w'){
        return 1;
    }
    else if( you =='w' && comp =='s'){
        return -1;
    }
    if(you == 'g ' && comp =='w'){
        return -1;
    }
    else if( you =='w' && comp =='g'){
        return 1;
    }
}

int main(){
    char you , comp ;
    srand(time(0));
    int number =rand()%100+1;

    if(number < 33){
        comp = 's';
    }
    else if(number >33 && number <66){
        comp = 'w';
    }
    else{
        comp ='g';
    }
    printf(" wellcome to Snake water Gun Game \n ");
    printf(" enter s for Snake . w for water , g for Gun  ");
    scanf("%c ",&you);
    int result = Snakewatergun(you, comp);
    printf(" you choose %c and comp choose %c \n",you , comp);

    if(result ==0){
        printf(" Game Draw \n");
    }
    else if( result ==1){
        printf(" you win \n");
    }
    else {
        printf(" you lose \n");
    }
    printf(" thank you for playing the game Snake water gun i hope will will enjoying it");

    return 0;
}