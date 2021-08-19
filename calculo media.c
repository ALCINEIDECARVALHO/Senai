#include <stdio.h>


int main(void) {
  float nota1,nota2,nota3,media,rec;
               
               printf("Informe três notas");
                 printf("\n");
                scanf("%f %f %f",&nota1,&nota2,&nota3);
                
                media=(nota1+nota2+nota3)/3;
                
                printf("a media foi:%f\n",media);
                
                if (media>=7) {
                    
                    printf("Aprovado\n");
                 }
                 
                else {
                  
                    printf("Informe a nota da recuperacao\n");
                    scanf("%f",&rec);

                    if(rec>=5){
                      printf("Aprovado na recuperacao\n");

                    }
                    else {
                       printf("reprovado\n");

                    }
                }

  return 0;
}