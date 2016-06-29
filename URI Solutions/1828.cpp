#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main(int argc, char *argv[]) {
    char sheldon[50], raj[50];
    char t[8] = "tesoura";
    char p[6] = "pedra";
    char pa[6] = "papel";
    char l[8] = "lagarto";
    char s[6] = "Spock";
    int x=1, num;
    scanf("%d", &num);
    while(x<=num){
    scanf("%s %s",&sheldon,&raj);
 
    if(strcmp(sheldon,raj)==0)
        printf("Caso #%d: De novo!\n",x);
    else
        if((strcmp(sheldon,t)==0 && strcmp(raj,pa)==0) || (strcmp(sheldon,pa)==0 && strcmp(raj,t)==0)){
                if(strcmp(sheldon,t)==0 && strcmp(raj,pa)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,pa)==0 && strcmp(raj,p)==0) || (strcmp(sheldon,p)==0 && strcmp(raj,pa)==0)){
                if(strcmp(sheldon,pa)==0 && strcmp(raj,p)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,p)==0 && strcmp(raj,l)==0) || (strcmp(sheldon,l)==0 && strcmp(raj,p)==0)){
                if(strcmp(sheldon,p)==0 && strcmp(raj,l)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,l)==0 && strcmp(raj,s)==0) || (strcmp(sheldon,s)==0 && strcmp(raj,l)==0)){
                if(strcmp(sheldon,l)==0 && strcmp(raj,s)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }   
         
        if((strcmp(sheldon,s)==0 && strcmp(raj,t)==0) || (strcmp(sheldon,t)==0 && strcmp(raj,s)==0)){
                if(strcmp(sheldon,s)==0 && strcmp(raj,t)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }   
         
        if((strcmp(sheldon,t)==0 && strcmp(raj,l)==0) || (strcmp(sheldon,l)==0 && strcmp(raj,t)==0)){
                if(strcmp(sheldon,t)==0 && strcmp(raj,l)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,l)==0 && strcmp(raj,pa)==0) || (strcmp(sheldon,pa)==0 && strcmp(raj,l)==0)){
                if(strcmp(sheldon,l)==0 && strcmp(raj,pa)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
 
        if((strcmp(sheldon,pa)==0 && strcmp(raj,s)==0) || (strcmp(sheldon,s)==0 && strcmp(raj,pa)==0)){
                if(strcmp(sheldon,pa)==0 && strcmp(raj,s)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,s)==0 && strcmp(raj,p)==0) || (strcmp(sheldon,p)==0 && strcmp(raj,s)==0)){
                if(strcmp(sheldon,s)==0 && strcmp(raj,p)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
         
        if((strcmp(sheldon,p)==0 && strcmp(raj,t)==0) || (strcmp(sheldon,t)==0 && strcmp(raj,p)==0)){
                if(strcmp(sheldon,p)==0 && strcmp(raj,t)==0)
                    printf("Caso #%d: Bazinga!\n",x);
                else
                    printf("Caso #%d: Raj trapaceou!\n",x);
        }
        x++;
    }
    return 0;
}