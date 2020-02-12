
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




//创建一个空的stack的头，头里面有R5
stack* ceate_stack();
//将vlaue推入stack
void stack_push(stack* pointer,node* value);
node* stack_pop(stack* pointer);
//将stack分配的空间全部都释放
void free_stack(stack* pointer);
