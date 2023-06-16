#include <iostream>
using namespace std;
#define MAX_SIZE 5

class stack{
    
    private:
    int tos, stk[MAX_SIZE], data;
    public:
    stack(){
        //constructor that initialize the top of stack
        tos =-1;
        cout<<"initial top of stack is"<<tos<<endl;
    }
    
    int isempty()
    {
        //check whether the stack is empty:
        if (tos==-1 )return 1;
        else return 0;
    }
    int isfull(){
        //check whether the stack is full:
        if (tos==MAX_SIZE-1) return 1;
        else return 0;
    }
    
    void push(int a){
        if(isfull())
        {
            cout<<"stack overflow"<<endl;

        }
        else
        {
            tos = tos+1;
            stk[tos]= a;
        }
    }
    
    
    int pop (){
        if(isempty()) {
            cout<<"stack underflow"<<endl;
            exit(1);
        }
        
        else{
            data = stk[tos];
            tos--;
            return data;
            cout<<"the popped element is"<<data<<endl;
        }
        
    }
    
    int peek()
    {
        data = stk[tos];
        return data;
        
    }
    
    void display() {
        int i;
        if (tos == -1)
        cout<< "no elements in stack to display"<<endl;
        
        else
        {
        cout <<"the elements in stack are"<<endl;
        for (i=tos;i>=0; i--)
        {
            cout<<stk[i]<<"\t";
        }
        cout<<endl;
        }
    }
    
};


int main()
{
    int n,element, item;
    stack obj;
    while (1){
    cout<<"enter your choice\n 1. to push\n 2 to pop \n 3 to peek \n 4 to dsiplay\n 5 to exit"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
    //it is the code to push element in stack
    cout<<"enter the element to push"<<endl;
    cin>>element;
    obj.push(element);
    break;
    
    case 2:
    item = obj.pop();
    cout<<"the popped element is"<<item<<endl;
    break;
    
    case 3:
    //this code helps us to seewhich element is on the top of stack
    item = obj.peek();
    cout<<"the element in topof stack is"<<item<<endl;
    break;
    
    case 4:
    //it displays all eemts in the stack
    obj.display();
    break;
    
    case 5: 
    exit(1);
    break;
    
    default:
    cout<<"invalid choice";
}
}
    return 0;
}