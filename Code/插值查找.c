//#include<stdio.h>
//
////��ֵ����
//int InsertionSearch_iteration(int a[], int value, int n)
//{
//    int low, high, mid = 0;//�����low��high��mid������ֵ
//    low = 0;
//    high = n - 1;
//    if (value > a[high] || value < a[low])//���ڷ�Χֱ�ӷ���
//        return -1;
//    while (low <= high)//��low == high Ϊ���һ�μ�飬���������ͬ�򷵻�
//    {
//        mid = low + (value - a[low]) / (a[high] - a[low]) * (high - low);	//mid�ļ��㷽ʽ�ı�һ�¼���
//        //���low + high��������������ȡ����Ҳ�������
//        if (a[mid] == value)//ƥ�䵽ֱ�ӷ���
//            return mid;
//        if (a[mid] > value)//��������һ�Σ���left==right����high<low
//            high = mid - 1;//����while��ѭ��
//        else
//            low = mid + 1;
//    }
//    return -1;
//}
//
//int InsertionSearch_recursive(int a[], int value, int low, int high)
//{
//    if (value > a[high] || value < a[low])//���ڷ�Χֱ�ӷ���
//        return -1;
//    int mid = low + (value - a[low]) / (a[high] - a[low]) * (high - low);//����һ�µ��ƹ�ϵʽ
//    if (a[mid] == value)//�ݹ����ֹ����,ǰ����value�������д���
//        return mid;
//    if (low == high)//���Ѿ������һ�β����ˣ���һ��value������ͬ���򷵻�
//    {//����ֻ����ĳ���ض��ķ���ݹ飬�������������ݹ�����ٺ��ҵݹ���ݣ�����low==high �ǵݹ�����һ�Ρ���������һ������Ѿ�����ˣ����û��ֱ�ӷ��أ���ô����ζ��value����ͬ��ֱ�ӷ���-1����
//        return -1;
//    }
//    if (a[mid] > value)//ֻ����ĳ���ض��ķ���ݹ飬�������������ݹ���ҵݹ�
//        return InsertionSearch_recursive(a, value, low, mid - 1);
//    else
//        return InsertionSearch_recursive(a, value, mid + 1, high);
//}
//
//void main()
//{
//    int a[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//����һ����˳���
//    //�����������ݼ��а���valueֵ
//    int recv_iter = InsertionSearch_iteration(a, 13, 15);//�ҵ���������ֵ������-1
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
//    //�����������ݼ���û�а���valueֵ
//    int recv_iter_1 = InsertionSearch_iteration(a, 16, 16);//�ҵ���������ֵ������-1
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
