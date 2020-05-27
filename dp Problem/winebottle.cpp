// Created by AAKASH KUMAR
// akashkmr27089@gmail.com

/*
"Imagine you have a collection of N wines placed next to each other on a shelf. For simplicity, let's number the wines from left to right as they are standing on the shelf with integers from 1 to N, respectively. The price of the ith wine is pi. (prices of different wines can be different).
Because the wines get better every year, supposing today is the year 1, on year y the price of the ith wine will be y*pi, i.e. y-times the value that current year.
You want to sell all the wines you have, but you want to sell exactly one wine per year, starting on this year. One more constraint - on each year you are allowed to sell only either the leftmost or the rightmost wine on the shelf and you are not allowed to reorder the wines on the shelf (i.e. they must stay in the same order as they are in the beginning).
You want to find out, what is the maximum profit you can get, if you sell the wines in optimal order?"
*/

#include <bits/stdc++.h>

#define loop(i,n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;

int price[100] = {0};
int value[100][100];

int fcount;

int solve(int limita, int limitz){
	if(limita <= limitz){
		if(::value[limita][limitz] != -1) return ::value[limita][limitz];
		int count = ::fcount - (limitz - limita + 1) + 1;
		return ::value[limita][limitz] = max(::price[limita]*count + solve(limita+1, limitz),
			::price[limitz]*count + solve(limita, limitz-1));

	}else
		return 0;
}

int main()
{
	::memset(value, -1, 10000*sizeof(int));
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    ::fcount = t;
    cout << endl;
   	loop(i,t)
   		cin >> ::price[i];
   	int limita = 0, limitz = t-1;
   	cout << solve(limita, limitz) <<endl;
   	loop(i,6){
   		loop(j, 6){
   			printf("%3d ",::value[i][j] );
   		}
   		printf("\n");
   	}
   	cout << endl;
    return 0;
}