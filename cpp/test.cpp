#include<iostream>
#include<stdio.h>
namespace jill
{
    int fetch=3000;
}
namespace hell
{
    using namespace jill;
    int happy=2747;
}
using std::cout;
using std::endl;

int main()
{
    using namespace hell;

    int fetch=100;
    cout<<fetch<<endl;
    cout<<hell::fetch<<endl;
    return 1;

}





























































/*int main()
{
    std::cout<<&pupu<<std::endl;
    std::cout<<pupu<<std::endl;
    
    static int apple=1;
    std::cout<<"static:"<<&apple<<std::endl;
    int local=2;
    std::cout<<"stack:"<<&local<<std::endl;
    std::cout<<"global:"<<&global<<std::endl;
    call(300);
    std::cout<<&jill::test<<std::endl;
    std::cout<<jill::test<<std::endl;
    std::cout<<&jill::test2<<std::endl;
    std::cout<<jill::test2<<std::endl;
    return 1;
}*/






























/*struct team
{
    long int id;
    int position;
};
typedef struct team team;

template<class a>
void plus(a & lala)
{
    lala=lala+1;

}
template<class c,class b >
void plus(c & ball,const b & call)
{
   ball=ball+call; 
}

template<>
void plus(team& a)
{
    a.position=a.position+1;
}
template<>
void plus(team & ball, const int  & call)
{
    ball.position=ball.position+call;
}
template<class abc>
int add(const abc& a=1000)
{
    return a;

}
template<class q>
auto increase(q apple) ->decltype(apple)
{
    decltype(apple) laji;
    laji=apple;
    return laji;
}

int main()
{
    team apple={3180111516,100};
    plus(apple.position);
    std::cout<<apple.position<<std::endl;
    plus(apple.position,100);
    std::cout<<apple.position<<std::endl;
    plus(apple);
    std::cout<<apple.position<<std::endl;
    plus(apple, 100);
    std::cout<<apple.position<<std::endl;
    std::cout<<add<int>()<<std::endl;
    std::cout<<increase("abc")<<std::endl;
    char test[4]="abc";
    const char* apply[2]={"aaa","bbbb"};//这样不好，字符在文字常量区，是不能修改的
    char greater[]="aaaaa";//这样比较好，放在栈里
    std::cout<<increase(greater)<<std::endl;
    std::cout<<increase(test)<<std::endl;
   
    
    return 1;
}
int main()
{
    
    char a;
    std::cin>>a;




    std::cout<<a<<std::endl;
    const double=3.1e5;
    cin.getline()//换行符不要了     参数：数组+几个（字符串的话包括了最后的\0）
    cin.get()//换行符还在输入队列中  参数：数组+几个（字符串的话包括了最后的\0）
    
    int apple=1;
    const int & pu=apple;
    std::cout<<sizeof(pu)<<std::endl;
    std::cout<<sizeof(apple)<<std::endl;
    apple=apple+1;
    //pu=pu+1;
    //std::cout<<pu<<std::endl;
    //td::cout<<apple<<std::endl;

    int ji[5]={10,20,30,40,50};
    int (&pi)[5]=ji;
    //int* const & pi=ji;
    std::cout<<sizeof(int)<<std::endl;
    std::cout<<pi[1]<<std::endl;
    std::cout<<sizeof(pi)<<std::endl;
    std::cout<<sizeof(ji)<<std::endl;
    
    int ji[5]={10,50,30,40,50};
    //int (&pi)[5]=ji;
    int* const & pi=ji; 
    printf("%d\n",sizeof(pi));
    printf("%d\n",sizeof(ji));
    ji[1]=400;
    printf("%d\n",pi[1]);
    printf("%d\n",ji[1]);
   
   team a={1,2};
   team b={3,4};
   std::cout<<a.id <<"\n"<<a.position<<std::endl;
    std::cout<<b.id <<"\n"<<b.position<<std::endl;
    a=b;
    std::cout<<a.id <<"\n"<<a.position<<std::endl;

    return 1;
}
//cout是个对象
//字符串末尾有'\0'==NULL==0 
*/