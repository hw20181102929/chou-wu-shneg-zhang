#include <iostream>
using namespace std;
class Pet{
    protected:
    string name;
    int length;
    int weight;
    int current;
    public:
    virtual void display(int day)=0;
    Pet(string name, int l, int w, int c):name(name),length(l),weight(w),current(c){
    }
};
class Cat:public Pet{
    public:
    Cat(string n,int l,int w,int c):Pet(n,l,w,c){
    }
    void display(int day){
      cout<<name<<" "<<length+day-current<<" "<<weight+2*(day-current);
    }
};
class Dog:public Pet{
    public:
    Dog(string n,int l,int w,int c):Pet(n,l,w,c){
    }
    void display(int day){
    cout<<name<<" "<<length+2*(day-current)<<" "<<weight+(day-current);
    }
};
int main()
{
    Pet *pt[10];
    int n;
    cin>>n;
    int i=0;
    while(n==1||n==2){
        if(n==1){
            string n;int l;int w;int c;
            cin>>n>>l>>w>>c;
            pt[i]=new Cat (n,l,w,c);
           
        }
        if(n==2){
            string n;int l;int w;int c;
            cin>>n>>l>>w>>c;
            pt[i]=new Dog (n,l,w,c);
    
        }
        i++;
        cin>>n;
    }
    for(int j=0;j<i;j++){
        pt[j]->display(n);
        cout<<endl;
    }
    return 0;
}
