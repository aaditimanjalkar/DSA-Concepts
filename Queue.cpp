struct queue 
{ 
int a[5]; 
int front,rear; 
} q; 
void insert() 
{ 
int x; 
if (q.rear == 4) 
printf("Queue is overflow\n"); 
else 
{ 
printf("Enter element to insert in queue:"); 
scanf("%d", &x); 
q.rear++; 
q.a[q.rear]=x; 
if (q.front==-1) 
q.front=0; 
} 
} 
void delete1() 
{ 
if (q.front == -1) 

printf("Queue is underflow"); 
else 
{ 
printf("Element deleted in the stack is %d \n",q.a[q.front]); 
if(q.front==q.rear) 
q.front=q.rear=-1;
else 
q.front++; 
} 
} 
void display() 
{ 
if (q.front == -1) 
printf("Queue is underflow\n"); 
else 
{ 
printf("The elements of the queue are \n"); 
for(int i = q.front; i<= q.rear; i++) 
printf("%d\n",q.a[i]); 
} 
} 
void destory() 
{ 
q.front=q.rear= -1; 
printf("Queue is destory \n"); 
} 
int main(void) 
{ 
int ch; 
q.front=q.rear= -1; 
do 
{ 
printf("MENU\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.DESTORY\n 5.EXIT\n"); 
scanf("%d", &ch); 
switch(ch) 
{ 
case 1: insert(); 
break; 
case 2: delete1(); 
break; 
case 3: display(); 
break; 
case 4: destory(); 
break; 
case 5: break; 
default : printf("Entered a wrong choice"); 
} 
} 
while(ch!=5); 
}
