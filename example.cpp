#include <stdafx.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;




	int main()
	{
		int  k = 0;
		const int N = 10;
		int m1[N];
		int m2[N];

		for (int i = 0; i < N; i++) 
		{
			m1[i] = i;
			cout << m1[i] << " ";
		}
		cout << "Input elements: " << endl;
		for (int i = 0; i < N; i++)
		{
			cin >> m2[i];
		}
		
		for (int i = 0; i < N; ++i) 
		{
			cout << m2[i] << " ";
		}
		cout << endl;

		for (int i = 0; i<N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (m1[i] == m2[j])
				{
					k++;
				}
			}
		if (k == 0)
		{
			cout << m1[i];
		}	
		}

		
		
		_getch();
		return 0;
	}