//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//// ��ȡa�����ֵ
//// 
//// ����˵��
//// a -- ����
//// b -- ���鳤��
//
//int get_max(int a[], int n) {
//	int i, max;
//	max = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//// �����鰴�ա�ĳ��λ������������Ͱ����
//// 
//// ����˵��
//// 
//// a -- ����
//// n -- ���鳤��
//// exp -- ָ����������a����ָ���������� 
//// ���磬��������a = {50,3,542,745,2014,154,63,616};
//// ��01��exp=1 ��ʾ���ա���λ��������a��������
//// ��02��exp=10 ��ʾ���ա�ʮλ��������a��������
//// ��03��exp=100 ��ʾ���ա���λ��������a��������
////
//
//void count_sort(int a[], int n, int exp) {
//	int* output = (int*)malloc(n * sizeof(int)); // �洢�����������ݡ�����ʱ����
//	int i, buckets[10] = { 0 };
//	// �����ݳ��ֵĴ����洢��buckets[]��
//	for (i = 0; i < n; i++) {
//		buckets[(a[i] / exp) % 10]++;
//	}
//	// ����buckets[i]��Ŀ�����øĺ��buckets[i]��ֵ���Ǹ�������output[]�е�λ�á�
//	for (i = 1; i < 10; i++) {
//		buckets[i] += buckets[i - 1];
//	}
//	// �����ݴ洢����ʱ����output[]��
//	for (i = n - 1; i >= 0; i--) {
//		output[buckets[(a[i] / exp) % 10] - 1] = a[i];
//		buckets[(a[i] / exp) % 10]--;
//	}
//	// ������õ����ݸ�ֵ��a[]
//	for (i = 0; i < n; i++) {
//		a[i] = output[i];
//	}
//}
//
//// ��������
//// 
//// ����˵��
//// 
//// a -- ����
//// n -- ���鳤��
//// 
//void radix_sort(int a[], int n) {
//	int exp;
//	// ָ�����������鰴��λ��������ʱ��exp=1;��ʮλ��������ʱ��exp=10��
//	int max = get_max(a, n);// ����a�е����ֵ
//	// �Ӹ�λ��ʼ��������a��ָ����������
//	for (exp = 1; max / exp > 0; exp *= 10) {
//		count_sort(a, n, exp);
//	}
//}
//
//
//
//int main() {
//	int arr[] = { 53,3,3,542,3,616,748,14,214,154,63,616 };
//	radix_sort(arr, 12);
//	for (int i = 0; i < 12; i++)
//		printf("%d\t", arr[i]);
//
//	return 0;
//}