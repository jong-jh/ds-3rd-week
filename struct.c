#include <stdio.h>

struct student1{
    char lastName;
    int studentId;
    char grade;
}; //typedef �� ������� �ʰ� ����ü ����

typedef struct {
    char lastName;
    int studentId;
    char grade;
}student2; //typedef �� ����ϰ� ����ü�� ����

int studentsEqual(student2 ,student2 ); //���� ��� �˻� �Լ�

int main(){
    printf("---2018038051 ---  ������ --- struct.c\n\n");
    struct student1 st1 = {'A',100,'A'}; //typedef�� ������� �ʾұ� ������ �տ� struct �� �ٿ��־�� �Ѵ�.

    printf("st1.lastNa e = %c \n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n",st1.grade);

    student2 st2={'B',200,'B'}; // typedef�� ����Ͽ��� ������ struct Ű���带 �� �ᵵ ������ ���� �ʴ´�.

    printf("\nst2.lastName = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;

    st3 = st2; //student2 st3 �� st2�� ���� ���� (���� ġȯ)
    printf("\nst3.lastName = %c\n",st3.lastName);
    printf("st3.studentId = %d\n",st3.studentId);
    printf("st3.grade = %c\n",st3.grade);

    /*equality test ������ ��� �˻縦 ���ؼ��� �̷� ǥ���� ������ ���� */
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
    /*st1 �� st2�� �����ϸ� true ��ȯ*/
    /*�ڷῡ���� strcmp�� ��������� �������� ���ϴ� ���� ���� �̱� ������
    strcmp�� ����ϴ� ������ ���Դ�. */
    if(st1.lastName != st2.lastName) //���ڸ� ������ ��, �ٸ��� FAILSE�� �����Ѵ�
        return 0;
    if (st1.studentId != st2.studentId)
        return 0;
    if (st1.grade != st2.grade)
        return 0;
    
    return 1;
} 