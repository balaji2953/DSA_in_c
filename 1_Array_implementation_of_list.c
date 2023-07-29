#include<stdio.h>
#include<stdlib.h>

#define ARRSIZE 50
int arr[ARRSIZE];

int size=0,option,value,pos,count;

void insertAtBeginning()
{
    if(size>ARRSIZE)
    {
        printf("Array is Full\n");
        return;
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    for(int i=size; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    printf("Inserted %d Successfully At Beginning\n",value);
    size++;
}
void insertAtSpecificPosition()
{
    if(size>ARRSIZE)
    {
        printf("Array is Full\n");
        return;
    }
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }

    printf("There are %d value in Array & Maximum Store %d Value\n",size,ARRSIZE);
    printf("Enter the Position : ");
    scanf("%d",&pos);
    if(pos>=size)
    {
        printf("Wrong position\n");
        return;
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    for(int i=size-1; i>=pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    size++;
    printf("Inserted %d Successfully\n",value);
}
void insertAtEnd()
{
    if(size>ARRSIZE)
    {
        printf("Array is Full\n");
        return;
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    //insert(value);
    arr[size]=value;
    size++;
    printf("Inserted %d Successfully\n",value);
}

void DeleteAtBeginning()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Deleted Beginning value %d Successfully\n",arr[0]);
    for(int i=0; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}

void DeleteAtSpecificPosition()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Enter the Position : ");
    scanf("%d",&pos);
    if(pos>=size)
    {
        printf("Wrong position\n");
        return;
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    printf("Deleted value %d At %d Position Successfully\n",value,pos);
    for(int i=pos; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}
void DeleteAtEnd()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Deleted End value %d Successfully\n",arr[size-1]);
    size--;
}
void update()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Enter the Position : ");
    scanf("%d",&pos);
    if(pos>=size)
    {
        printf("Wrong position\n");
        return;
    }
    printf("Enter the Value : ");
    scanf("%d",&value);
    printf("%d Value At %d Position change to %d",arr[pos],pos,value);
    arr[pos]=value;
}

void search()
{
    count=0;
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Enter the Value to Search = ");
    scanf("%d",&value);
    printf("Value %d ",value);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            if(count==0)
            {
                printf("At Position - ");
            }
            printf("%d ",i);
            count=1;
        }
    }
    if(count = 0)
    {
        printf("Not in Array");
    }
    printf("\n");
}
void display()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    for(int i=0; i<size; i++)
    {
        printf("| %d ",arr[i]);
    }
    printf("|\n");
}

void length()
{
    if(size==0)
    {
        printf("Array is Empty\n");
        return;
    }
    printf("Length of the Array is %d \n",size);
}
int main()
{
    while(1)
    {
//Menu
        printf("-------------------------------------\n");
        printf(" 1.Insert At Beginning\n");
        printf(" 2.Insert At Specified Position\n");
        printf(" 3.Insert At End\n");
        printf(" 4.Delete At Beginning\n");
        printf(" 5.Delete At Specified Position\n");
        printf(" 6.Delete At End\n");
        printf(" 7.Update\n");
        printf(" 8.Search\n");
        printf(" 9.Display\n");
        printf(" 10.Length Of the Array\n");
        printf(" 11.Exit\n");
        printf("-------------------------------------\n");

//Get Choice from user
        printf("Choose Option : ");
        scanf("%d",&option);

//Switch case
        switch(option)
        {
        case 1:insertAtBeginning();
               break;

        case 2:insertAtSpecificPosition();
               break;

        case 3:insertAtEnd();
               break;

        case 4:DeleteAtBeginning();
               break;

        case 5:DeleteAtSpecificPosition();
               break;

        case 6:DeleteAtEnd();
               break;

        case 7:update();
               break;

        case 8:search();
               break;

        case 9:display();
               break;

        case 10:length();
                break;

        case 11:exit(0);

        default:
            printf("Wrong Choice\n");
        }
    }

    return 0;
}
