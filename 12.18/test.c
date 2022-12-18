#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr1[] = { 0 };
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int j = 0;
//	int insert = 0;
//	scanf("%d", &insert);
//	while (arr1[i] < insert)
//	{
//		arr1[j] = arr1[i];
//		i++;
//		j++;
//	}
//
//		for (j = 0;j < n + 1;j++)
//		{
//			printf("%d", arr1[j]);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j <= i;j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int score;
//	int i;
//	double sum = 0.0;//范围0~100
//	int max = 0;//假设最大值为0，那么每次max都可以刷新如果假设是100那如果score中最大值小于100那就不行
//	int min = 100;//假设最小值为100，那么每次min都可以刷新
//	for (i = 0;i < 7;i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//	}
//	printf("%.2lf", (sum - max - min) / 5.0);
//	return 0;
//}
//int main()
//{
//	int score;
//	double sum = 0.0;
//	int max = 0;
//	int min = 100;
//	int count = 0;
//	while(scanf("%d",&score)!=-1)
//	{
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//		count++;
//		if (count == 7)
//		{
//			printf("%.2lf", (sum - max - min) / 5.0);
//			sum = 0;
//			max = 0;
//			min = 100;
//			count = 0;
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[51] = { 0 };
//	scanf("%d", &n);
//	int i;
//	int insert;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	scanf("%d", &insert);
//	for (i =n-1;i>=0;i--)
//	{
//		if (arr[i] > insert)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = insert;
//			break;
//		}
//		
//	}
//	if (arr[0]>insert)
//	{
//		arr[0] = insert;
//
//	}
//	for (i = 0;i < n + 1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[] = { 0 };
//	int count = 0;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		j = 0;
//		for (i = 2;i <= n;i++)
//		{
//
//			arr[j] = i;
//			if (i > 2)
//			{
//				if (arr[j] % 2 == 0)
//				{
//					arr[j] = 0;
//				
//				}
//			}
//			if (i>3)
//			{
//				if (arr[j] % 3 == 0)
//				{
//					arr[j] = 0;
//					
//				}
//			}
//			j++;
//		}
//		for (j = 0;j < n - 1;j++)
//		{
//			if (arr[j] != 0)
//			{
//				printf("%d ", arr[j]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n");
//		printf("%d\n", count);
//	}
//	
//	return 0;
//}
int main()
{
	int n;
	while (scanf("%d", &n) !=-1)
	{
		int i = 0;
		int arr[101];
		for (i = 2;i <= n;i++)
		{
			arr[i] = i;
		}//存储数据
		int j;
		for (j = 2;j <= n;j++)
		{
			int k;
			k = j + 1;
			for (k = j + 1;k <= n;k++)
			{
				if (arr[k] % j == 0)
				{
					arr[k] = 0;
				}
			}
		}
		int count = 0;
		for (j = 2;j <= n;j++)
		{
			if (arr[j] != 0)
			{
				printf("%d ", arr[j]);
			}
			else
			{
				count++;
			}
		}
		printf("\n%d\n", count);
	}
	return 0;
}