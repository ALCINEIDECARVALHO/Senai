#include <stdio.h>

int main()
{
              float n1;
              float n2;
              float n3;
              float n4;
              float soma;
              float media;
              
              printf("Informe as notas dos alunos\n");
                scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
                
               printf("\n");
                    
                soma= n1+n2+n3+n4;
                
                media=soma/4;
                
                printf(" A soma das notas dos alunos foi: %f e a media foi: %f", soma,media);
                
               system("pause");
               
              
               return 0;
               
}