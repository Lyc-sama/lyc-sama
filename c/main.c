#define NULL 0
#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
#include"in,pre,post,oder.h"
#include"binary_search.h"

/*int main()
{
    int input;
    int array[13]={5,16,39,45,51,98,100,202,226,321,368,444,501};
    printf("请输入你想查找的数字：");
    scanf("%d",&input);
    binary_search_2(array,0,12,input);
    return 0;
}
*/

/*int main()
{
    stack* pointer=ceate_stack();
    for(int i=0;i<10;i++)
    {
        stack_push(pointer,i);
    }
    for(int i=0;i<10;i++)
    {
        printf("%f\n",stack_pop(pointer));
    }
    free_stack(pointer);
    return 1;
}
*/
int main()
{
    node* j=create_node(10,NULL,NULL);
    node* e=create_node(5,NULL,j);
    node* f=create_node(6,NULL,NULL);
    node* b=create_node(2,e,f);
    node* g=create_node(7,NULL,NULL);
    node* h=create_node(8,NULL,NULL);
    node* c=create_node(3,g,h);
    node* a=create_node(1,b,c);
    inorder_complex(a);
    return 1;

}


