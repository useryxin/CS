//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct index {//���������� 
//	int key;//���ؼ��� 
//	int start;//��ʼ��ַ 
//}newIndex[3]; //����ṹ������
//int cmp(const void* a, const void* b) {
//	return (*(struct index*)a).key > (*(struct index*)b).key ? 1 : -1;
//}
//int search(int key, int a[])
//{
//	int i = 0, startvalue;
//	while (i < 3 && newIndex[i].key < key)
//	{
//		i++;
//	}
//	if (i > 3)
//	{
//		return -1;
//	}
//	startvalue = newIndex[i].start;
//	while (startvalue <= startvalue + 5 && a[startvalue] != key)
//	{
//		startvalue++;
//	}
//	if (startvalue > startvalue + 5)
//	{
//		return -1;
//	}
//	return startvalue;
//
//}
//int main()
//{
//	int array[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int i, j = 1, k, key, n;
//	//ȷ��ģ�����ʼֵ�����ֵ 
//	for (i = 0; i < 3; i++){
//		newIndex[i].start = j + 1;
//		j += 6;
//		for (int k = newIndex[i].start; k <= j; k++){
//			if (newIndex[i].key < array[k])
//				newIndex[i].key = array[k];
//			
//		}
//	}
//
//
//	//�Խṹ�尴��keyֵ��������
//	qsort(newIndex, 3, sizeof(newIndex[0]), cmp);
//	//����Ҫ��ѯ�����������ú������в��� 
//	printf("��������Ҫ���ҵ�����\n");
//	scanf_s("%d", &key);
//	k = search(key, array);
//	//������ҽ��
//	if (k > 0)
//		printf("���ҳɹ�����Ҫ�ҵ����������е�λ����:%d\n", k);
//	else
//		printf("����ʧ�ܣ������ҵ������������С�\n");
//	return 0;
//}