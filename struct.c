#include <stdio.h>

struct student1{
    char lastName;
    int studentId;
    char grade;
}; //typedef 를 사용하지 않고 구조체 선언

typedef struct {
    char lastName;
    int studentId;
    char grade;
}student2; //typedef 를 사용하고 구조체를 선언

int studentsEqual(student2 ,student2 ); //구조 동등성 검사 함수

int main(){
    printf("---2018038051 ---  정종현 --- struct.c\n\n");
    struct student1 st1 = {'A',100,'A'}; //typedef를 사용하지 않았기 때문에 앞에 struct 를 붙여주어야 한다.

    printf("st1.lastNa e = %c \n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n",st1.grade);

    student2 st2={'B',200,'B'}; // typedef를 사용하였기 때문에 struct 키워드를 안 써도 오류가 나지 않는다.

    printf("\nst2.lastName = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;

    st3 = st2; //student2 st3 에 st2의 값을 대입 (구조 치환)
    printf("\nst3.lastName = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId);
    printf("st3.grade = %c\n",st3.grade);

    /*equality test 구조의 동등성 검사를 위해서는 이런 표현은 오류가 난다 */
    /*
    if(st3==st2)
        printf("equal\n");
    else
        printf("not equal\n");
    */
    if(studentsEqual(st2,st3))
        printf("\nequal\n");
    else
        printf("not equal\n");



   return 0;
}

int studentsEqual(student2 st1,student2 st2){
    /*st1 과 st2가 동일하면 true 반환*/
    /*자료에서는 strcmp를 사용했으나 과제에서 비교하는 것은 문자 이기 때문에
    strcmp를 사용하니 오류가 나왔다. */
    if(st1.lastName != st2.lastName) //문자를 비교했을 때, 다르면 FAILSE를 리턴한다
        return 0;
    if (st1.studentId != st2.studentId)
        return 0;
    if (st1.grade != st2.grade)
        return 0;
    
    return 1;
} 