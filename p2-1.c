#include<stdio.h>

#define MAX_SIZE 100 //MAX_SIZE ��ũ�� ����

float sum(float [],int); //sum ��������� �Լ� ����
float input[MAX_SIZE],answer; //�������� ����
int i;
void main(){
    for(i=0;i<MAX_SIZE;i++) //input �迭�� �� �ε����� 0����99���� ���� ���ʷ� �����Ѵ�.
        input[i]=i;

    printf("address of input = %p\n",input);//input�迭�� �ּҸ� ����Ѵ�.

    answer=sum(input,MAX_SIZE); //���� answer�� sum�Լ��� ���ϰ��� �޴´�. sum �Լ����� �迭�� �ּҿ� �ִ밪�� ���ڷ� �޴´�.

    printf("The sum is : %f\n",answer); //answer�� ����Ѵ�.

}
/*sum �Լ� ����
list �� ���� �Լ� ���ڷ� ���޹��� input�� �ּҰ��� ���� �ȴ�.
list�� �ּҴ� input���� ������� �����Ѵ�.
*/
float sum(float list[],int n){
    printf("value of list = %p\n",list);
    printf("address of list = %p\n",&list);
    /* tempsum�� list[i]�� ���� �����ؼ� �����ش�.
    return tempsum �� �ǹ̴� list[0]�� list[MAX_SIZE]�� ������ ������ ��� ������ ���� �ǹ��Ѵ�. 
     */
    int i;
    float tempsum=0;
    for(i=0;i<n;i++)
        tempsum+=list[i];
    return tempsum;
}