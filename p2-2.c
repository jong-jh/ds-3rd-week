#include<stdio.h>

void print1(int *ptr,int rows); //print1 �Լ� ����

int main(){
    printf("---2018038051 ---  ������ --- p2-2.c\n\n");

    int one[]={0,1,2,3,4}; //int�� �迭 one ���� �� �ʱ�ȭ
    /*�迭 one �� �ּҸ� ����Ѵ�.
    �迭�� �̸��� one[0]�� �ּҴ� �迭�� �ּҸ� �ǹ��Ѵ�.
     */
    printf("one     = %p\n",one);
    printf("&one    = %p\n",&one);
    printf("&one[0] = %p\n",&one[0]);
    printf("\n");

    print1(&one[0],5); //print1 �Լ��� �迭�� �ּҿ� int�� ���ڸ� �����Ѵ�.

    return 0;
}

/* ptr+i �� �ּҿ� ������ �� ���� ����ϴ� �Լ��̴�.
    ptr+i �� �ε��� i�� �ּҰ��� ��Ÿ���� ǥ���̴�.
    int�� �迭�� �ޱ� ������ �ּҴ� ũ�� 4��ŭ ���̰� ����.
    ptr+i�� �ش��ϴ� value�� �ռ� �ʱ�ȭ�� ������ ��µ��� �� �� �ִ�.
 */
void print1 (int *ptr, int rows){

    int i;
    printf("Address \t Contents\n");
    for(i=0;i<rows;i++)
        printf("%p \t %5d\n",ptr+i,*(ptr+i));
}