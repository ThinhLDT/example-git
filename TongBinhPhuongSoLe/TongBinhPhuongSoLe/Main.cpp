
#include <iostream>
#include <stdio.h>
#pragma warning( disable : 4996 )
int sum;


void NhapMang(int a[], int n)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("\n Nhap so thu %i:", i);
			scanf("%d", &a[i]);
		}
	}

int main()
{
	int n;
	printf("\n nhap so phan tu:");
	scanf("%d", &n);
	int a[10];
	NhapMang(a, n);

	for (int i=1; i <= n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum = sum + (a[i]) * (a[i]);
		}
	}
	printf("\n Tong binh phuong cac so le trong mang: %d", sum);
		

}