#include <stdio.h>

struct student{
    char lastName[13];   // 13 byte
    int studentId;      //4 bytes
    short grade;        //2 byte
}; //����ü student �� ũ��� 19�� ����� �� �ִ�.

int main(){

    printf("---2018038051 --- ������ ---padding.c\n\n");
    struct student pst;

    printf("size of student = %ld\n",sizeof(struct student));//ũ�Ⱑ 24 byte�� ���´�.
    printf("size of in = %d\n",sizeof(int));
    printf("size of short = %ld\n",sizeof(short));

    /*4����Ʈ �� ���, 13����Ʈ�� ��� 16����Ʈ�� �Ҵ�Ǿ� 3����Ʈ�� �е��� ����� ���� Ȯ�� �� �� �ִ�.*/
    return 0;
}