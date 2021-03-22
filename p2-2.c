#include<stdio.h>

void print1(int *ptr,int rows); //print1 함수 정의

int main(){
    printf("---2018038051 ---  정종현 --- p2-2.c\n\n");

    int one[]={0,1,2,3,4}; //int형 배열 one 선언 및 초기화
    /*배열 one 의 주소를 출력한다.
    배열의 이름과 one[0]의 주소는 배열의 주소를 의미한다.
     */
    printf("one     = %p\n",one);
    printf("&one    = %p\n",&one);
    printf("&one[0] = %p\n",&one[0]);
    printf("\n");

    print1(&one[0],5); //print1 함수에 배열의 주소와 int형 인자를 전달한다.

    return 0;
}

/* ptr+i 의 주소와 역참조 한 값을 출력하는 함수이다.
    ptr+i 는 인덱스 i의 주소값을 나타내는 표현이다.
    int형 배열을 받기 때문에 주소는 크기 4만큼 차이가 난다.
    ptr+i에 해당하는 value는 앞서 초기화한 값들이 출력됨을 알 수 있다.
 */
void print1 (int *ptr, int rows){

    int i;
    printf("Address \t Contents\n");
    for(i=0;i<rows;i++)
        printf("%p \t %5d\n",ptr+i,*(ptr+i));
}