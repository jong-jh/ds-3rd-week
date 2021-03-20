#include<stdio.h>
#include<stdlib.h>

void main()
{
int list[5]; //크기가 5인 배열 list와 포인트배열 plist를 선언한다.
int *plist[5];
/*list[0],list[1]에 값을 대입한다.*/
list[0]=10;
list[1]=11;
/* plist[0]이 int크기의 동적으로 할당된 공간을 가리키게 된다. 이 때 동적으로 할당된 변수는 heep 메모리 영역에 있다. 이번 예제에선 사용하지 않는다. */
plist[0]=(int*)malloc(sizeof(int));

/*
list[0] 의 값은 이전에 대입해준 10의 값이 출력된다.
배열의 이름인 list는 list배열의 주소를 의미하고, list[0]의 주소 또한 배열의 주소를 의미한다.
*/
printf("list[0] \t= %d\n",list[0]);
printf("address of list \t= %p\n",list);
printf("address of list[0] \t= %p\n",&list[0]);
/*
list는 int형 배열이기 때문에 list+1이 되면 크기가 4 만큼 차이가 나는 주소의 값이 출력되게 된다. 
*/
printf("address of list + 0 \t= %p\n",list+0);
printf("address of list + 1 \t= %p\n",list+1);
printf("address of list + 2 \t= %p\n",list+2);
printf("address of list + 3 \t= %p\n",list+3);
printf("address of list + 4 \t= %p\n",list+4);
/*list[4]의 주소값은 list+4로 표현한 출력값과 같음을 알 수 있다*/
printf("address of list[4] \t= %p\n",&list[4]);

free(plist[0]);//동적할당한 plist[0]을 해제해준다.
}