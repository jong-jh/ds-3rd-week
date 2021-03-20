#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];
    int *plist[5]={NULL,}; //크기 5의 포인터 배열 plist를 선언하고, NULL로 초기화 해준다. 이 때 NULL로 초기화를 하는 이유는, 포인터변수에 예상하지 못한 값이 들어가는 것을 방지하기 위함이다.
    
    /* plist[0]에 동적으로 int크기의 메모리를 할당한다 */
    plist[0]=(int*)malloc(sizeof(int));
    /*list[0]과 list[1]에 값을 대입한다.*/
    list[0]=1;
    list[1]=100;

    *plist[0]=200;//plist[0]이 가르키고 있는 공간에 200을 대입한다.

    printf("----2018038051---정종현\n\n");
    /*
    list[0]의 값과 주소를 출력한다. list[0]의 value는 아까 대입한 1이 출력되고, 주소는 컴퓨터가 할당해준 주소가 출력된다.
    list의 값을 출력을 하는데, 배열의 이름은 배열의 주소이므로 list와 &list[0]과, &list와 다 같은 값임을 확인 할 수 있다.
    */
    printf("value of list[0]        = %d\n",list[0]);
    printf("address of list[0]      = %p\n",&list[0]);
    printf("value of list           = %p\n",list);
    printf("address of list (&list) = %p\n",&list);
    /*
    list[1]의 값과 주소를 출력한다. list[1]의 value는 아까 대입해준 100이 출력이 되고, 주소는 list[0]의 주소보다 4가 더 큰 값이 출력된다. 그 이유는 int형 배열이기 때문에, 각 인덱스끼리의 주소는 크기가 4 만큼 떨어져 있기 때문이다.
    list+1 은 list에서 다음 인덱스의 주소를 의미하기 때문에, list[1]의 address가 출력되게 된다. 따라서 *(list+1)은 list[1]의 value가 출력되게 된다.
    */
    printf("---------------------------------\n\n");
    printf("value of list[1]    = %d\n",list[1]);
    printf("address of list[1]  = %p\n",&list[1]);
    printf("value of *(list+1)  = %d\n",*(list+1));
    printf("address of list+1   = %p\n",list+1);

    printf("---------------------------------\n\n");
    /* *plist[0]의 value 는 앞서 대입해준 200의 값이 출력된다. plist[0]이 가르키고 있는 공간의 값이 출력됨을 알 수 있다.
    &plist[0],&plist,plist 는 다 같은 의미인 plsit배열의 주소를 의미한다. 따라서 같은 주소 값이 출력된다.
    plist[0]에서 plist[4]까지의 값을 출력을 하는데, plist[0]은 plist[0]이 가리키고 있는 동적으로 할당된 공간의 주소의 값을 출력하게 됩니다. 그러나 plist[1]부터 plist[4]는 가리키고 있는 주소가 없기 때문에 NULL이 출력됩니다.
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
    /*다 사용한 동적할당된 변수는 해제를 해주어야 한다.*/
    free(plist[0]);

}