#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];
    int *plist[5]={NULL,}; //ũ�� 5�� ������ �迭 plist�� �����ϰ�, NULL�� �ʱ�ȭ ���ش�. �� �� NULL�� �ʱ�ȭ�� �ϴ� ������, �����ͺ����� �������� ���� ���� ���� ���� �����ϱ� �����̴�.
    
    /* plist[0]�� �������� intũ���� �޸𸮸� �Ҵ��Ѵ� */
    plist[0]=(int*)malloc(sizeof(int));
    /*list[0]�� list[1]�� ���� �����Ѵ�.*/
    list[0]=1;
    list[1]=100;

    *plist[0]=200;//plist[0]�� ����Ű�� �ִ� ������ 200�� �����Ѵ�.

    printf("----2018038051---������\n\n");
    /*
    list[0]�� ���� �ּҸ� ����Ѵ�. list[0]�� value�� �Ʊ� ������ 1�� ��µǰ�, �ּҴ� ��ǻ�Ͱ� �Ҵ����� �ּҰ� ��µȴ�.
    list�� ���� ����� �ϴµ�, �迭�� �̸��� �迭�� �ּ��̹Ƿ� list�� &list[0]��, &list�� �� ���� ������ Ȯ�� �� �� �ִ�.
    */
    printf("value of list[0]        = %d\n",list[0]);
    printf("address of list[0]      = %p\n",&list[0]);
    printf("value of list           = %p\n",list);
    printf("address of list (&list) = %p\n",&list);
    /*
    list[1]�� ���� �ּҸ� ����Ѵ�. list[1]�� value�� �Ʊ� �������� 100�� ����� �ǰ�, �ּҴ� list[0]�� �ּҺ��� 4�� �� ū ���� ��µȴ�. �� ������ int�� �迭�̱� ������, �� �ε��������� �ּҴ� ũ�Ⱑ 4 ��ŭ ������ �ֱ� �����̴�.
    list+1 �� list���� ���� �ε����� �ּҸ� �ǹ��ϱ� ������, list[1]�� address�� ��µǰ� �ȴ�. ���� *(list+1)�� list[1]�� value�� ��µǰ� �ȴ�.
    */
    printf("---------------------------------\n\n");
    printf("value of list[1]    = %d\n",list[1]);
    printf("address of list[1]  = %p\n",&list[1]);
    printf("value of *(list+1)  = %d\n",*(list+1));
    printf("address of list+1   = %p\n",list+1);

    printf("---------------------------------\n\n");
    /* *plist[0]�� value �� �ռ� �������� 200�� ���� ��µȴ�. plist[0]�� ����Ű�� �ִ� ������ ���� ��µ��� �� �� �ִ�.
    &plist[0],&plist,plist �� �� ���� �ǹ��� plsit�迭�� �ּҸ� �ǹ��Ѵ�. ���� ���� �ּ� ���� ��µȴ�.
    plist[0]���� plist[4]������ ���� ����� �ϴµ�, plist[0]�� plist[0]�� ����Ű�� �ִ� �������� �Ҵ�� ������ �ּ��� ���� ����ϰ� �˴ϴ�. �׷��� plist[1]���� plist[4]�� ����Ű�� �ִ� �ּҰ� ���� ������ NULL�� ��µ˴ϴ�.
     */
    printf("value of *plist[0]      = %d\n",*plist[0]);
    printf("&plist[0]               = %p\n",&plist[0]);
    printf("&plist                  = %p\n",&plist);
    printf("plist                   = %p\n",plist);
    printf("plist[0]                = %p\n",plist[0]);
    printf("plist[1]                = %p\n",plist[1]);
    printf("plist[2]                = %p\n",plist[2]);
    printf("plist[3]                = %p\n",plist[3]);
    printf("plist[4]                = %p\n",plist[4]);
    /*�� ����� �����Ҵ�� ������ ������ ���־�� �Ѵ�.*/
    free(plist[0]);

}