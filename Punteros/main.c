#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int *x=NULL;
    int v=10;
    x=&v;

    printf("%d",v);


    return 0;
*/

    //mostrar direccion de memoria
/*
    int *x=NULL;
    int v=10;
    x=&v;

    printf("%p",&v);

    return 0;
*/
/*
    int *x=NULL;
    int v=10;
    x=&v;
    printf("%d\n",v);
    printf("%p\n",&v);direccion de memoria de v
    printf("%p\n",&x); direccion de memoria de x
    printf("%p\n",x);
    printf("%d\n",*x);

*/
    char letra='x';
    char* pLetra;
    fflush(stdin);

    if(pLetra!=NULL){
    printf("/n/n--%c--",letra);
    }
    else{
    printf("Es nulo");

    }

    int p; //no es puntero
    int* q; //puntero
    int* r;
    p=10; //darle valor a p
    q=&p; //
    r=q;

    printf("");
    printf("");
    printf("");
    printf("");




    /*
    scanf("%c",pLetra);//esta recibiendo una direccion de memoria, siempre asegurarse q el puntero tenga algo
    */
    return 0;

}
