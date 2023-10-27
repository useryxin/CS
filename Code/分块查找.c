//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct index {//定义索引表 
//	int key;//最大关键字 
//	int start;//起始地址 
//}newIndex[3]; //定义结构体数组
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
//	//确定模块的起始值和最大值 
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
//	//对结构体按照key值进行排序
//	qsort(newIndex, 3, sizeof(newIndex[0]), cmp);
//	//输入要查询的数，并调用函数进行查找 
//	printf("输入您想要查找的数：\n");
//	scanf_s("%d", &key);
//	k = search(key, array);
//	//输出查找结果
//	if (k > 0)
//		printf("查找成功！您要找的数在数组中的位置是:%d\n", k);
//	else
//		printf("查找失败！您查找的数不在数组中。\n");
//	return 0;
//}