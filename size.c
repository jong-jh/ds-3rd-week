#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("---2018038051---정종현---size.c\n\n");
    int **y;
    char **x;
/*본인의 컴파일러는 포인터변수에 32bit를 할당해주기 때문에 int형으로 선언을 하면
차이점을 확인하는 것이 쉽지 않아 int형이 아닌 char 형으로 선언하였다.
x와 *x 는 주소값을 value로 가지고 있는 포인터변수이고, **x는 char형 값을
저장하기 때문에 크기가 1byte임을 확인할 수 있다.
*/
    printf("sizeof(x) = %u\n",sizeof(y));
    printf("sizeof(*x) = %lu\n",sizeof(*y));
    printf("sizeof(**x) = %lu\n",sizeof(**y));

    printf("sizeof(x) = %u\n",sizeof(x));
    printf("sizeof(*x) = %lu\n",sizeof(*x));
    printf("sizeof(**x) = %lu\n",sizeof(**x));
}