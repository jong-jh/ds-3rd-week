#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("---2018038051---������---size.c\n\n");
    int **y;
    char **x;
/*������ �����Ϸ��� �����ͺ����� 32bit�� �Ҵ����ֱ� ������ int������ ������ �ϸ�
�������� Ȯ���ϴ� ���� ���� �ʾ� int���� �ƴ� char ������ �����Ͽ���.
x�� *x �� �ּҰ��� value�� ������ �ִ� �����ͺ����̰�, **x�� char�� ����
�����ϱ� ������ ũ�Ⱑ 1byte���� Ȯ���� �� �ִ�.
*/
    printf("sizeof(x) = %u\n",sizeof(y));
    printf("sizeof(*x) = %lu\n",sizeof(*y));
    printf("sizeof(**x) = %lu\n",sizeof(**y));

    printf("sizeof(x) = %u\n",sizeof(x));
    printf("sizeof(*x) = %lu\n",sizeof(*x));
    printf("sizeof(**x) = %lu\n",sizeof(**x));
}