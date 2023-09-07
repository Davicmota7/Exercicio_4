#include <Stdio.h>

int main(int argc, char const *argv[])
{
    int tempodeServico, idade;

    printf("digite a idade");
    scanf("%d", &idade);

    printf("digite o tempo de serviço");
    scanf("%d", &tempodeServico);

   
   
    if (idade >= 65 && tempodeServico >= 30 || idade >= 60 && tempodeServico >=25)          
    {
        printf("pode se aposentar");
    } 
    else
    { printf("nao pode se aposetar");
        
    }
    
    
     
    

}
