//#include <stdio.h>
//
//int array[] = { 1,2545,25,26,2,323,4562,7855,3822,3656,236,263,27,37,283,377,2542,23,232,32,138,345 };
//int lenght = sizeof(array) / sizeof(array[0]);
//
//void quick_sort(int num[], int low, int high) {
//    int i, j, temp;
//    int tmp;
//    i = low;
//    j = high;
//    tmp = num[low];
//    //����Ϊ�м�ֽ��ߣ���߱���С���ұ߱�����,ͨ����һ��Ԫ���ǻ�׼��
//    if (i > j)  //����±�i�����±�j��������������
//        return;
//
//    while (i != j) {
//        while (num[j] >= tmp && j > i)
//            j--;
//        while (num[i] <= tmp && j > i)
//            i++;
//
//        if (j > i) {
//            temp = num[j];
//            num[j] = num[i];
//            num[i] = temp;
//        }
//    }
//
//    num[low] = num[i];
//    num[i] = tmp;
//
//    quick_sort(num, low, i - 1);
//    quick_sort(num, i + 1, high);
//}
//
//int main(int argc, char** argv) {
//    quick_sort(array, 0, lenght - 1);
//
//    for (int i = 0; i < lenght; i++)
//        printf("%d\t", array[i]);
//    return 0;
//}

