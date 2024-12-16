#include<stdio.h>

struct School
{
    int age,rollNo;
};

int main(){
    struct School sc;
    sc.age = 18;
    sc.rollNo = 82;

    printf("%d %d",sc.age,sc.rollNo);
}
