Assignment =21
///
QUESTION =1
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;

int main()
{
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}

Question=2
//
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;

int main()
{
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}

///
Question =3
///
#include <stdio.h>

/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};

int main()
{
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);

    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
Question=4

#include<stdio.h>
struct employee
{
char name[30];
int id;
int salary;

};
int main()
{
struct employee e[5],temp ;
int i,j;
for(i=0;i<4;i++)
{
printf("enter the name of the employee\n");
fflush(stdin);
fgets(e[i].name,30,stdin);
printf("enter the id of the employee\n");
scanf("%d",&e[i].id);
printf("enter the salary of the employee\n");
scanf("%d",&e[i].salary);
}
for(i=0;i<3;i++)
{

    for(j=i;j<4;j++)
    {
        if(strcmp(e[i].name,e[j].name) > 0)
           {

           temp=e[i];
           e[i]=e[j];
           e[j]=temp;

    }
}
}
for(i=0;i<3;i++)
{
printf("name= %s, id = %d, salary = %d \n",e[i].name,e[i].id,e[i].salary);
}
}
///
Question=5
///
Question=5


#include<stdio.h>

struct employee
{
int salary;
int id;
char employee_name[30];
};
int main()

{

    struct employee b[5];
    int i;
    int j,temp;

    for(i=0;i<5;i++)
    {
        printf("employee  %d \n",i+1);
        printf("enter the employee_name  :\n");
        scanf("%s",&b[i].employee_name);
        printf("enter the id of the employee :\n");
        scanf("%d",&b[i].id);
        printf("enter the salary of the employee :\n");
        scanf("%d",&b[i].salary);

    }


        for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
        {
        if(b[i].salary>b[j].salary)
        {
        temp=b[i].salary;
        b[i].salary=b[j].salary;
        b[j].salary=temp;
        }

        }

        }
        for(i=0;i<5;i++)
        {
        printf("employee   %d \n",i+1);
        printf("name = %s,id = %d, salary = %d \n",b[i].employee_name,b[i].id,b[i].salary);
        }

        }


///
Question=6
//
Question=6

#include<stdio.h>
struct employee
{
char name[30];
int id;
int salary;

};
int main()
{
struct employee e[5],temp ;
int i,j;
for(i=0;i<4;i++)
{
printf("enter the name of the employee\n");
fflush(stdin);
fgets(e[i].name,30,stdin);
printf("enter the id of the employee\n");
scanf("%d",&e[i].id);
printf("enter the salary of the employee\n");
scanf("%d",&e[i].salary);
}
for(i=0;i<4;i++)
{

    for(j=i+1;j<3;j++)
    {
        if(strcmp(e[i].name,e[j].name) > 0)
           {

           temp=e[i];
           e[i]=e[j];
           e[j]=temp;

    }
}
}
for(i=0;i<4;i++)
{
printf("name= %s, id = %d, salary = %d \n",e[i].name,e[i].id,e[i].salary);
}
}


\\\Question = 7
//
#include<stdio.h>
struct time
{
int sec;
int min;
int hrs;

};
void diff_between_time(struct time t1, struct time t2,struct time *diff);
void diff_between_time(struct time start,struct time stop,struct time *diff)
{
if(start.sec>stop.sec)
{
--stop.min;
stop.sec+=60;
}
diff->sec=stop.sec-start.sec;
if(start.min>stop.min)
{
--stop.hrs;
stop.min+=60;
}
diff->min=stop.min-start.min;
diff->hrs=stop.hrs-start.hrs;
}
int main()
{
struct time start_time,stop_time,diff;
printf("enter start time\n");
printf("enter hrs, min and sec");
scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);
printf("enter stop time.\n");
printf("enter hrs, min and sec :\n");
scanf("%d %d %d",&stop_time.hrs,&stop_time.min,&stop_time.sec);
diff_between_time(start_time,stop_time,&diff);
printf("\n start time: %d : %d : %d",start_time.hrs,start_time.min,start_time.sec);
printf("\n stop time: %d : %d : %d",stop_time.hrs,stop_time.min,stop_time.sec);
printf("\n time diff: = %d : %d : %d",diff.hrs,diff.min,diff.sec);
}

/////Question=8

#include<stdio.h>

struct students
{
int roll_no;
int id;
char name[30];
};
struct students input()
{

    struct students b[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("student  %d \n",i+1);
        printf("enter the name of the students :\n");
        scanf("%s",&b[i].name);
        printf("enter the id of the students :\n");
        scanf("%d",&b[i].id);
        printf("enter the roll_no of the students :\n");
        scanf("%d",&b[i].roll_no);

    }
        for(i=0;i<10;i++)
    {
        printf("student  %d \n",i+1);

      printf("name = %s, id = %d, roll_no = %d \n",b[i].name,b[i].id,b[i].roll_no);
    }
}
    int main()
    {
    struct students b2;
    printf("display the data of the students :\n");
    b2 = input();
}
///

Question =9

#include<stdio.h>

struct employee
{
int salary;
int id;
char name[30];
};
int main()

{

    struct employee b[1000];
    int i,n;
    int j,temp;

printf("enter the n students :\n");
scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("employee  %d \n",i+1);
        printf("enter the students  :\n");
        scanf("%s",&b[i].name);
        printf("enter the id of the students :\n");
        scanf("%d",&b[i].id);
        printf("enter the salary of the students :\n");
        scanf("%d",&b[i].salary);

    }

        for(i=0;i<n-1;i++)
        {
        printf("students   %d \n",i+1);
        printf("name = %s,id = %d, salary = %d \n",b[i].name,b[i].id,b[i].salary);
        }

        }
Question=10
//
#include <stdio.h>

//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

//main function
int main() {

    struct Marks marks[5];

    //Getting user input for info of the 5 students
    for(int i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }

    // Calculating and printing percentage for each student
	for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}
