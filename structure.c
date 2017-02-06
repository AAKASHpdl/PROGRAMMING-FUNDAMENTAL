#include<stdio.h>
struct student

{
	int student_id;
	int registeration_id;
	float fee;
};
int main () 
{
	struct student aakash ;
	aakash.student_id=101;
	aakash.registeration_id=1005;
	aakash.fee=10000.50;
	printf("Aakash id =%d\n",aakash.student_id);
	printf("Aakash registeration id= %d \n",aakash.registeration_id);
	printf("Aakash.fee =%f\n",aakash.fee);
	
	 
return 0;
}
