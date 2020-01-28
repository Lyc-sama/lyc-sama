
typedef struct node
{
    double data;
    struct node* left;
    struct node* right;
}node;

typedef struct stack_node
{
    struct stack_node* after;
    struct stack_node* before;
    node* data;
}stack_node;

typedef struct stack
{
    stack_node* location;//用来定位
}stack;


//模拟stack
stack* ceate_stack()
{
    stack* pointer=(stack*)malloc(sizeof(stack));
    pointer->location=NULL;
    return pointer;

}

void stack_push(stack* pointer,node* value)
{
    stack_node* new=(stack_node*)malloc(sizeof(stack_node));
    new->after=NULL;
    new->before=pointer->location;
    pointer->location=new;
    new->data=value;
}

node* stack_pop(stack* pointer)
{
    if(pointer->location==NULL)
    {
        printf("不能pop，因为是空的");
        return NULL;
    }
    if(pointer->location->before==NULL)
    {
        node* value=pointer->location->data;
        free(pointer->location);
        pointer->location=NULL;
        return value;
    }
    node* value=pointer->location->data;
    pointer->location->before->after=NULL;
    stack_node*temp=pointer->location->before;
    free(pointer->location);
    pointer->location=temp;
    return value;
}

void free_stack(stack* pointer)
{
    if(pointer->location==NULL)
    {
        free(pointer);
        return;
    }
    while(pointer->location->before!=NULL)
    {
        stack_node*  temp=pointer->location->before;
        free(pointer->location);
        pointer->location=temp;
    }
    free(pointer->location);
    free(pointer);
}




//创建一个空的stack的头，头里面有R5
stack* ceate_stack();
//将vlaue推入stack
void stack_push(stack* pointer,node* value);
node* stack_pop(stack* pointer);
//将stack分配的空间全部都释放
void free_stack(stack* pointer);
