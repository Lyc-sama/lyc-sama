#include<iostream>
class person
{
    private:
        static const int a=10;
        char name[a];
        double weight;
        double height;
        int gender;         //man=1,woman=0
    public:
       person();
       person(const char aa[],double b,double c,int d);
       void writename(){std::cin>>name;}
       void show(){std::cout<<name<<std::endl;}
       ~person(){std::cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAA"<<std::endl;};
};
person::person()
{
    for(int i=0;i <= a;i++)
    {
        name[i]='\0';
    }
    weight=0;
    height=0;
    gender=0;
}
person::person(const char aa[],double b,double c,int d)
{
    int i=0;
    while(aa[i]!='\0' && a>i)
    {
        name[i]=aa[i];
        i++;
    }
    if(i+1>=a-1)
    {
         name[a-1]='\0';
    }
    else
    {
        name[i+1]='\0';
    }
    weight=b;
    height=c;
    gender=d;

}
int main()
{
{
    person* lyc=new person("lusama",1,1,1);
    lyc->show();
    delete lyc;
    return 1;
}
}