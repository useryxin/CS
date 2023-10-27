//#include<stdio.h>
//
//int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int sequential_search2(int arr[], int len, int n) {
//    arr[0] = n;//这里arr[0]就是哨兵，
//    int i = n;
//    while (arr[i] != n)
//    {
//        --i;
//    }
//    return i;//如果返回0这表明没有这个数据
//}
//
//void main(void) {
//    int s = sequential_search2(array, 10, 9);
//    printf("%d", s);
//}