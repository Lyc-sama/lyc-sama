#include <stdio.h>
//二分查找
//接受一个从小到大排列的整数数组(一个指针和和以index为标准的，从最左边到最右边的范围)，一个要查找的整数，返回关键字在数组中的index
int binary_search_1(int* array,int left, int right,int key)
{
//二分查找的定位标志,是数组的index
int middle=(right+left)/2;
if(array[middle]==key)
{
    printf("在数组位置：%d\n",middle);
    return middle;
}
else if(left>=right)
{
    printf("很抱歉，没有找到\n");
    return -1;
}
//下面是遍历，上面是结束条件
if(array[middle]<key)
{
    left=middle+1;
    middle=(right+left)/2;
    binary_search_1(array,left,right,key);
}
else
{
    right=middle-1;
    middle=(right+left)/2;
    binary_search_1(array,left,right,key);
}
//以防万一设置一个return，，没有任何意义
return -1;
}



//二分查找
//right是指这个数组的大小
int binary_search_2(int* array,int left,int right, int key)
{
    while(left<=right)
    {
        int middle=(left+right)/2;
        if(array[middle]==key)
        {
            printf("在数组位置：%d\n",middle);
            return middle;
        }
        else if(array[middle]<key)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }  
    }
    printf("很抱歉，没有找到\n");
    return -1;
}
