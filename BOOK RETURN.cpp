//SAID SHAMSA ALI
//REG N.O PA107/G/22121/24


#include<stdio.h>

int main(){
int bookid,duedate,returndate,daysoverdue;
float fine;
float finerate;

printf("Enter book ID:\n");
scanf("%d",&bookid);

printf("Enter due date:\n");
scanf("%d",&duedate);

printf("Enter the return date:\n");
scanf("%d",&returndate);

//days overdue
daysoverdue=returndate-duedate;


//finerate based on duedate
if(daysoverdue<=7){
	finerate=20;
}else if(daysoverdue<=14){
	finerate=50;
}else{
finerate=100;	
}

fine=daysoverdue*finerate;

printf("BookID:%d\n",bookid);

printf("Due Date:%d\n",duedate);

printf("Days Overdue:%d\n",daysoverdue);

printf("Returndate:%d\n",returndate);

printf("Fine Amount:%.1f\n",fine);

printf("finerate:%.1f\n",finerate);
	
	return 0;
}