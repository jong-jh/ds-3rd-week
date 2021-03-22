#include <stdio.h>

struct student{
    char lastName[13];   // 13 byte
    int studentId;      //4 bytes
    short grade;        //2 byte
}; //구조체 student 의 크기는 19로 계산할 수 있다.

int main(){

    printf("---2018038051 --- 정종현 ---padding.c\n\n");
    struct student pst;

    printf("size of student = %ld\n",sizeof(struct student));//크기가 24 byte가 나온다.
    printf("size of in = %d\n",sizeof(int));
    printf("size of short = %ld\n",sizeof(short));

    /*4바이트 씩 끊어서, 13바이트인 경우 16바이트가 할당되어 3바이트의 패딩이 생기는 것을 확인 할 수 있다.*/
    return 0;
}