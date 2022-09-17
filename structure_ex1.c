#include<stdio.h>


struct date{
int d,m,y;
};

struct student {
int id,batch,semester;
char name[100];
struct date dob;
}s1,s2;

void printInfo(struct student st)
{
    printf("Student id: %d\n",st.id);
    printf("Student name: %s\n",st.name);
    printf("Student batch: %d\n",st.batch);
    printf("Student semester: %d\n",st.semester);
    printf("Date of Birth: %d/%d/%d\n",st.dob.d,st.dob.m,st.dob.y);
}

int main()
{
    s1.id = 1234;
    s1.batch = 40;
    s1.semester = 2;
    strcpy(s1.name,"name");
    s1.dob.d = 10;
    s1.dob.m= 10;
    s1.dob.y = 2002;

    s2.id = 1236;
    s2.batch = 40;
    s2.semester = 2;
    strcpy(s2.name,"name2");
    s2.dob.d = 20;
    s2.dob.m= 10;
    s2.dob.y = 2000;

    printInfo(s1);

    printf("\n\n");
    printInfo(s2);


}
