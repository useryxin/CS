//#include<stdio.h>
//
////插值查找
//int InsertionSearch_iteration(int a[], int value, int n)
//{
//    int low, high, mid = 0;//这里的low、high、mid是索引值
//    low = 0;
//    high = n - 1;
//    if (value > a[high] || value < a[low])//不在范围直接返回
//        return -1;
//    while (low <= high)//当low == high 为最后一次检查，如果还不相同则返回
//    {
//        mid = low + (value - a[low]) / (a[high] - a[low]) * (high - low);	//mid的计算方式改变一下即可
//        //如果low + high等于奇数，向下取整。也就是左边
//        if (a[mid] == value)//匹配到直接返回
//            return mid;
//        if (a[mid] > value)//如果是最后一次，即left==right，则high<low
//            high = mid - 1;//跳出while大循环
//        else
//            low = mid + 1;
//    }
//    return -1;
//}
//
//int InsertionSearch_recursive(int a[], int value, int low, int high)
//{
//    if (value > a[high] || value < a[low])//不在范围直接返回
//        return -1;
//    int mid = low + (value - a[low]) / (a[high] - a[low]) * (high - low);//更改一下递推关系式
//    if (a[mid] == value)//递归的终止条件,前提是value在数组中存在
//        return mid;
//    if (low == high)//这已经是最后一次查找了，这一次value还不相同，则返回
//    {//由于只会往某种特定的方向递归，而不会出现先左递归回溯再后右递归回溯，所以low==high 是递归的最后一次。由于上面一个语句已经检查了，如果没有直接返回，那么就意味着value不相同，直接返回-1即可
//        return -1;
//    }
//    if (a[mid] > value)//只会往某种特定的方向递归，而不会出现先左递归后右递归
//        return InsertionSearch_recursive(a, value, low, mid - 1);
//    else
//        return InsertionSearch_recursive(a, value, mid + 1, high);
//}
//
//void main()
//{
//    int a[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//数组一定是顺序的
//    //待搜索的数据集中包含value值
//    int recv_iter = InsertionSearch_iteration(a, 13, 15);//找到返回索引值，否则-1
//    int recv_recu = InsertionSearch_recursive(a, 20, 0, 16 - 1);
//    if (recv_iter != -1)
//    {
//        printf("\nrecv_iter offset position is :%d", recv_iter);
//    }
//    else
//    {
//        printf("\nrecv_iter can not find value \n");
//    }
//    if (recv_recu != -1)
//    {
//        printf("\nrecv_recu offset position is :%d", recv_recu);
//    }
//    else
//    {
//        printf("\nrecv_recu can not find value \n");
//    }
//    //待搜索的数据集中没有包含value值
//    int recv_iter_1 = InsertionSearch_iteration(a, 16, 16);//找到返回索引值，否则-1
//    int recv_recu_1 = InsertionSearch_recursive(a, 16, 0, 16 - 1);
//    if (recv_iter_1 != -1)
//    {
//        printf("\nrecv_iter_1 offset position is :%d", recv_iter_1);
//    }
//    else
//    {
//        printf("\nrecv_iter_1 can not find value \n");
//    }
//    if (recv_recu_1 != -1)
//    {
//        printf("recv_recu_1 offset position is :%d", recv_recu_1);
//    }
//    else
//    {
//        printf("recv_recu_1 can not find value \n");
//    }
//    system("pause");
//}
