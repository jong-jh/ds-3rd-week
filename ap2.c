#include<stdio.h>
#include<stdlib.h>

void main()
{
int list[5]; //ũ�Ⱑ 5�� �迭 list�� ����Ʈ�迭 plist�� �����Ѵ�.
int *plist[5];
/*list[0],list[1]�� ���� �����Ѵ�.*/
list[0]=10;
list[1]=11;
/* plist[0]�� intũ���� �������� �Ҵ�� ������ ����Ű�� �ȴ�. �� �� �������� �Ҵ�� ������ heep �޸� ������ �ִ�. �̹� �������� ������� �ʴ´�. */
plist[0]=(int*)malloc(sizeof(int));

/*
list[0] �� ���� ������ �������� 10�� ���� ��µȴ�.
�迭�� �̸��� list�� list�迭�� �ּҸ� �ǹ��ϰ�, list[0]�� �ּ� ���� �迭�� �ּҸ� �ǹ��Ѵ�.
*/
printf("list[0] \t= %d\n",list[0]);
printf("address of list \t= %p\n",list);
printf("address of list[0] \t= %p\n",&list[0]);
/*
list�� int�� �迭�̱� ������ list+1�� �Ǹ� ũ�Ⱑ 4 ��ŭ ���̰� ���� �ּ��� ���� ��µǰ� �ȴ�. 
*/
printf("address of list + 0 \t= %p\n",list+0);
printf("address of list + 1 \t= %p\n",list+1);
printf("address of list + 2 \t= %p\n",list+2);
printf("address of list + 3 \t= %p\n",list+3);
printf("address of list + 4 \t= %p\n",list+4);
/*list[4]�� �ּҰ��� list+4�� ǥ���� ��°��� ������ �� �� �ִ�*/
printf("address of list[4] \t= %p\n",&list[4]);

free(plist[0]);//�����Ҵ��� plist[0]�� �������ش�.
}