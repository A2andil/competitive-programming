#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main()
{
    float a,b,c,d,z,_average,recalculate,exam,exam_score;
 
    scanf("%f %f %f %f",&a,&b,&c,&d);
 
    _average=(((a*2)+(b*3)+(c*4)+(d*1))/10);
 
    printf("Media: %.1f\n",_average);
 
 
    if(_average>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(_average<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(_average>=5.0 && _average<=6.9)
    {
        printf("Aluno em exame.\n");
        exam=z;
 
        scanf("%f",&exam_score);
        printf("Nota do exame: %.1f\n",exam_score);
 
        recalculate=(_average+exam_score)/2;
 
 
        if(recalculate>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",recalculate);
        }
        else if(recalculate<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",recalculate);
        }
 
    }
 
 
    return 0;
}