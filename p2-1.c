#include<stdio.h>

#define MAX_SIZE 100 //MAX_SIZE 매크로 정의

float sum(float [],int); //sum 사용자정의 함수 정의
float input[MAX_SIZE],answer; //전역으로 선언
int i;
void main(){
    for(i=0;i<MAX_SIZE;i++) //input 배열에 각 인덱스에 0부터99까지 값을 차례로 대입한다.
        input[i]=i;

    printf("address of input = %p\n",input);//input배열의 주소를 출력한다.

    answer=sum(input,MAX_SIZE); //변수 answer에 sum함수의 리턴값을 받는다. sum 함수에는 배열의 주소와 최대값을 인자로 받는다.

    printf("The sum is : %f\n",answer); //answer를 출력한다.

}
/*sum 함수 구현
list 의 값은 함수 인자로 전달받은 input의 주소값이 들어가게 된다.
list의 주소는 input값과 관계없이 존재한다.
*/
float sum(float list[],int n){
    printf("value of list = %p\n",list);
    printf("address of list = %p\n",&list);
    /* tempsum에 list[i]의 값을 누적해서 더해준다.
    return tempsum 의 의미는 list[0]과 list[MAX_SIZE]를 포함한 사이의 모든 값들의 합을 의미한다. 
     */
    int i;
    float tempsum=0;
    for(i=0;i<n;i++)
        tempsum+=list[i];
    return tempsum;
}