#include <iostream>
#include <string.h>

using namespace std;

struct Node{
    int no;
    char nama[50];
    char posisi[50];
    Node *next;
};
Node *top;

class stack{

public:
    void push(int n,char pos[],char name[]);
    void pop();
    void display();
};

void push(int n,char pos [],char name[])
{
    struct Node *newNode=new Node;
  
    newNode->no=n;
    strcpy(newNode->nama,name);
    strcpy(newNode->posisi,pos);
    newNode->next=top;
    top=newNode;
}
void pop()
{
    if(top==NULL){
        cout<<"data kosong!"<<endl;
        return;
    }
    top=top->next;
}
void display()
{
if(top==NULL){
        cout<<"stack kosong"<<endl;
        return;
    }
	cout<<"isi stack"<<endl;
    struct Node *temp=top;
    while(temp!=NULL){
        cout<<temp->no<<" -> ";
        cout<<temp->nama<<" -> ";
        cout<<temp->posisi;
        cout<<endl;
        temp=temp=temp->next;
    }
    cout<<endl;
}
int main(){

    stack s;
    int ch;
    do{
    int n;
	 cout<<endl;
	  cout<<"===================================================="<<endl;
      cout<<"\t\tSTACK MENGGUNAKAN LINKED LIST"<<endl;
      cout<<endl;
      cout<<"1.PUSH \n2.POP \n3.TAMPIL \n4.EXIT"<<endl;     
      cout<<endl;
      cout<<"Pilih (1-4) : ";cin>>ch;
      switch(ch){
        case 1:
            Node n;
            cout<<"Data Pemain Bola \n";
            cout<<"===================\n";
            cout<<"No Punggung : ";
            cin>>n.no;
            cout<<"Nama        : ";
            fflush(stdin);gets(n.nama);
            cout<<"Posisi      : ";
			fflush(stdin);gets(n.posisi);
            push(n.no,n.nama,n.posisi);
            break;
        case 2 :
            pop();
            break;
        case 3 :
            display();
            break;
        case 4:
            break;
        default :
            cout<<"error\n";
        break;
    }

    }while(ch!=4);
    return 0;
}
