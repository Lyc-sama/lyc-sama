

node* create_node(double value,node* left,node* right)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->left=left;
    temp->right=right;
    return temp;
}

void inorder_complex(node*first)
{
    stack* pointer= ceate_stack();
    while(pointer->location!=NULL)
    {
        while(first!=NULL)
        {
            stack_push(pointer,first);
            first=first->left;
        }
        if(pointer->location!=NULL)
        {
            first=stack_pop(pointer);
            printf("%f\n",first->data);
            first=first->right;
        }
    }
    
    
}






