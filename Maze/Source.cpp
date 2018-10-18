#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include <fstream> 
#include "Stack.h"
using namespace std;
int main()
{
	fstream fs;
	fs.open("iman.txt", fstream::in );
	char **temprow;
	temprow = new char*[100];
	int g = 0;
	int r;
	char *rt=0;
	string chmatrix;
	 
	while (!fs.eof())
	{
		
		getline(fs, chmatrix);
		r = chmatrix.size();
		if (!rt)
			rt= new char[r+1];
		temprow[g] = new char[r / 2 + 2];
		strcpy(rt, chmatrix.c_str());
		rt[r] = '\0';
		int b = 0;
		for (int i = 0; i < r; i++)
		{
			if (rt[i] != ' ')
			{
				temprow[g][b] = rt[i];
				b++;
			}
		}
		temprow[g][b] = '\0';
		g++;
	}
	if (rt)
	 delete [] rt;
	char**matrixMaze;
	matrixMaze = new char*[g+2];
	for (int i = 0; i < g+2; i++)
	{
		matrixMaze[i] = new char[r / 2 + 3];
	}

	for (int x = 0; x <g+2; x++)
	{
		for (int y = 0; y < r / 2 + 3; y++)
		{

			matrixMaze[x][y] = '1';
		}
	}

	for (int x = 0,z=1; x <g ; x++,z++)
	{
		for (int y = 0,c=1; y < r/2+1; y++,c++)
		{

			 matrixMaze[z][c]=temprow[x][y];
		}
	}
	
	for (int i = 0; i < g; i++)
	{
		delete [] temprow[i];
	}
	delete[] temprow;
	
	for (int x = 1; x < g-1; x++)
	{
		for (int y = 1; y < r/2; y++)
		{
			cout << matrixMaze[x][y] << " ";
		}
		cout << endl;
	}
	Stack s1;
	
	char **result;
	result= new char*[g];

	for (int i = 0; i < g; i++)
		result[i] = new char[r / 2 + 1];

	for (int x = 0; x < g; x++)
	{
		for (int y = 0; y < r/2+1; y++)
		{
			result[x][y] = ' ';
		}
	}
	int i = 1, j = 1;
	int bi = 1, bj = 1;
	string s;
	char s2[4];

	s2[0] = j + '0';
	s2[1] = ',';
	s2[2] = i + '0';
	s2[3] = '\0';
	s = s2;
	s1.Push(s);
	int flag = 0;
	while (true)
	{
	//	system("pause");
		
		if (i == g-2 && j == r/2-1)
		{
			break;
		}
		if (matrixMaze[i - 1][j - 1] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i - 1;
			j = j - 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i - 1][j] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i - 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i - 1][j + 1] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i - 1;
			j = j + 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i][j - 1] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			j = j - 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i][j + 1] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			j = j + 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i + 1][j - 1] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i + 1;
			j = j - 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i + 1][j] == '0' )
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i + 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		if (matrixMaze[i + 1][j + 1] == '0')
		{
			if (flag == 1)
			{
				s2[0] = j + '0';
				s2[1] = ',';
				s2[2] = i + '0';
				s2[3] = '\0';
				s = s2;
				s1.Push(s);
				flag = 0;
			}
			result[i][j] = '*';
			bi = i;
			bj = j;
			matrixMaze[bi][bj] = '2';
			i = i + 1;
			j = j + 1;
			s2[0] = j + '0';
			s2[1] = ',';
			s2[2] = i + '0';
			s2[3] = '\0';
			s = s2;
			s1.Push(s);
			continue;
		}
		//int ti = i;
		//int tj = j;

		strcpy(s2, s1.Pop().c_str());
		flag = 1;
		s2[3] = '\0';

		bj = s2[0] - '0';
		bi = s2[2] - '0';
		result[i][j] = ' ';
		matrixMaze[bi][bj] = '0';
		matrixMaze[i][j] = '2';
		i = bi;
		j = bj;
		//bi = ti;
		//bj = tj;
	}

	for (int x = 1; x < g-1; x++)
	{
		for (int y = 1; y < r/2; y++)
		{
			cout << result[x][y] << " ";
		}
		cout << endl;
	}

		for (; s1.MyTop>-1 ; )
		{
			cout << s1.Pop() <<endl;
		}
		cout << endl;

	return 0;
}