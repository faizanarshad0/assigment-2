#include<iostream>
#define SIZE 10

using namespace std;
   int queu[SIZE],front=-1,rear=-1;
    void enQueue(int Value)
  {
    if (rear == SIZE-1)
  {
	cout<<"Queue is Full!!! Insertion is not Possible"<<endl;
      }
      
   else if(front==-1 && rear ==-1) 
	{
	front=0;
	rear=0;
	queu[rear]=Value;
		}
		
      else
	  {
	rear++;
	queu[rear]= Value;
	cout<<"Insertion Is Successful \n";
		}	
   }
   
      void deQueue()
      
     {
	if(front==-1&&rear==-1)
	cout<<"qeueu is empty";
	
	else if (front==rear)
	{
		front=-1;
		rear=-1;
		}
		
	else
	{
		cout<<queu[front];
		front++;
			}
		}
		
		
  void Display()
  
	{
		if(front==-1&&rear==-1)
		{
			cout<<"THE QUEUE IS EMPTY ";
			}
		else
		{
			int i;
			cout<<"THE VALUES OF QUEUE ARE: ";
			cout<<" ( ";
			for(i=front;i<rear+1;i++)
			{
			cout<<queu[i]<<" ";
				}
			cout<<" )";
			}
	}
	
int main()

{
	int a,d;
	while(1)
	{
	cout<<"\n\t\t--> 1-Insert Element to Queue: \n";
	cout<<"\t\t--> 2-Delete Element to Queue: \n";
	cout<<"\t\t--> 3-EXIT: \n";
	cout<<endl;
	cout<<"Select Option: ";
	cin>>a;
	switch(a)
	{
	case 1:
	cout<<"Enter the value to be inserted : ";
	cin>>d;
	enQueue(d);
	Display();
	break;
	
	case 2:
	deQueue();
	Display();
	break;
	
	case 3:
	exit(0);
	break;
	
	default:
	cout<<"Option not found"<<endl;
		break;

	
     	}
	}
}

