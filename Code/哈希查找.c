//#include"stdio.h"
//#define M 6
//#define P (M+1)
//typedef struct HashTable{
//	int key;      //�ؼ��� 
//	int EmptyFlag;//ռ�ã���ͻ����־��0��ʾû��ռ�ã�1��ʾ��ռ�� 
//}HashTable;
//
//void CreateHashTable(HashTable* tbl, int* data, int m, int p);
//int SearchHashTable(HashTable* tbl, int key, int p);
//
//int main(){
//	HashTable HashTbl[P];
//	int data[M] = { 10, 8, 14, 15, 20, 31 };
//	int i, loc;
//	printf("��ʼ���ݣ�\n");
//	for (i = 0; i < M; i++){
//		printf("data[%d] = %5d\n", i, data[i]);
//	}
//	printf("\n");
//	CreateHashTable(HashTbl, data, M, P);
//	printf("��ϣ��  \n");
//	for (i = 0; i < M; i++){
//		printf("tbl[%d] = %5d\n", i, HashTbl[i].key);
//	}
//	printf("\n");
//	for (i = 0; i < M; i++){
//		loc = SearchHashTable(HashTbl, data[i], P);
//		printf("%5d 's loc = %5d\n", data[i], loc);
//	}
//	return 0;
//}
//void CreateHashTable(HashTable* tbl, int* data, int m, int p){
//	int i, addr, k;
//	for (i = 0; i < p; i++) //�ѹ�ϣ��ռ�ñ�־��Ϊ0 
//		tbl[i].EmptyFlag = 0;
//	for (i = 0; i < m; i++){
//		addr = data[i] % p;//�����ϣ��ַ 
//		k = 0;//��¼��ͻ���� 
//		while (k++ < p){
//			if (tbl[addr].EmptyFlag == 0){
//				tbl[addr].EmptyFlag = 1;//��ʾ��λ���Ѿ���ռ�� 
//				tbl[addr].key = data[i];
//				break;
//			}
//			else
//				addr = (addr + 1) % p; //�����ͻ 			
//		}
//	}
//}
//
//int SearchHashTable(HashTable* tbl, int key, int p){
//	int addr, k, loc;//loc��ʾ����λ���±꣬���Ϊ0���ʾ����ʧ�� 
//	addr = key % P;//����Hash��ַ 
//	loc = -1;
//	k = 0;//��¼��ͻ���� 
//	while (k++ < p){
//		if (tbl[addr].key == key){
//			loc = addr;
//			break;
//		}
//		else
//			addr = (addr + 1) % p; //�����ͻ 
//	}
//	return loc;
//}
