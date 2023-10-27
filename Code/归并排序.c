//#include <stdio.h>
//#include <stdlib.h>
//
//// �鲢���򣺽�һ��������������������ռ�ϲ���һ��
//
//// ����˵��
//// a -- ���������������������
//// start -- ��һ�������������ʼ��ַ
//// mid -- ��һ����������Ľ�����ַ��Ҳ�ǵڶ��������������ʼ��ַ
//// end -- �ڶ�����������Ľ�����ַ
//
//void merge(int a[], int start, int mid, int end) {
//	int* tmp = (int*)malloc((end - start + 1) * sizeof(int));
//	// tmp�ǻ���2�������������ʱ����
//	int i = start; // ��һ��������������
//	int j = mid + 1; // �ڶ���������������
//	int k = 0; // ��ʱ���������
//	while (i <= mid && j <= end) {
//		if (a[i] <= a[j])
//			tmp[k++] = a[i++];
//		else
//			tmp[k++] = a[j++];
//	}
//	while (i <= mid) {
//		tmp[k++] = a[i++];
//	}
//	while (j <= end) {
//		tmp[k++] = a[j++]; // ��������������ϲ�
//	}
//	// ������Ԫ�أ�ȫ�������ϵ�����a��
//	for (i = 0; i < k; i++) {
//		a[start + i] = tmp[i];
//	}
//	free(tmp);
//	tmp = NULL;
//}
//
//// ������a�����ɴκϲ�������a���ܳ���Ϊlen��������Ϊ���ɸ�����Ϊgap�����飻
//// ����û�������ڵ������顱����鲢����
//// 
//// ����˵��
//// a -- �����������
//// len -- ����ĳ���
//// gap -- ������ĳ���
//
//void merge_groups(int a[], int len, int gap) {
//	int i;
//	int len_2 = 2 * gap; // ��������������ĳ���
//	// ����ÿ�������ڵ������顱���кϲ�����
//	for (i = 0; i + 2 * gap - 1 < len; i += (2 * gap)) {
//		merge(a, i, i + gap - 1, i + 2 * gap - 1);
//	}
//	// �� i+gap-1 < len-1����ʣ��һ��������û�����
//	// ���������ֺϲ����������������
//	if (i + gap - 1 < len - 1) {
//		merge(a, i, i + gap - 1, len - 1);
//	}
//}
//
//// �鲢���� ��������
//// ����˵��
//// a -- �����������
//// b -- ���鳤��
//
//void merge_sort_down_to_up(int a[], int len) {
//	int n;
//	if (a == NULL || a <= 0) {
//		return;
//	}
//	for (n = 1; n < len; n *= 2) {
//		merge_groups(a, len, n);
//	}
//}
//
//void main(void) {
//	int arr[] = { 9,5,1,6,2,3,0,4,8,7,0 };
//	merge_sort_down_to_up(arr, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}