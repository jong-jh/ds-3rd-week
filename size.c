#include <stdio.h>

#define MALLOC(p,s)\
    if(!((p)=malloc(s))){\
        fprintf(stderr,"Insufficient memory");\
        exit(EXIT_FAILURE);\
    }

int **make2dArray(int rows,int cols){
    int **x,i;
    MALLOC(x,rows*sizeof(*x));

    for(i=0;i<rows;i++)
        MALLOC(x[i],cols*sizeof(**x));
    return x;

};

int main(){
    int r,c;
    int **pt;
    r=2;
    c=4;
    pt=make2dArray(r,c);
    printf("value of pt = %p",pt);
    printf("value of *pt = %p",*pt);

//dfasffasfasf
}