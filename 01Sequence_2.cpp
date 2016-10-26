#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <math.h>

using namespace std;



void ProcessSequences(char *input)
{
	int c = 0;
	
	/* Count the number of '?' in input sequence
	 * 1??0 -> 2
	 */
	for(int i=0;i<strlen(input);i++)
	{
		if(*(input+i) == '?')
		{
			c++;
		}		
	}


	/* Get all possible combination of '?'
	 * 1??0
	 * -> ?? 
	 * -> 00, 01, 10, 11
	 */
	int seqLength = pow(2,c);
	// Initialize 2D array of integer
	int **sequencelist, **allSequences;
	sequencelist = new int*[seqLength];
	allSequences = new int*[seqLength];
	for(int i=0; i<seqLength; i++){
		sequencelist[i] = new int[c];
		allSequences[i] = new int[500000];
	}
	//end initialize

	for(int count = 0; count < seqLength; count++)
	{
		int n = 0;
	   	for(int offset = c-1; offset >= 0; offset--)
	  	{
	  		sequencelist[count][n] = ((count & (1 << offset)) >> offset);
	  		// cout << sequencelist[count][n];
	  		n++;
	   	}
	   	// cout << std::endl;
	}	

	/* Change '?' in former sequence into all possible bits
	 * 1??0 
	 * ?? -> 00, 01, 10, 11
	 * -> 1000, 1010, 1100, 1110
	 */
	for(int d = 0; d<seqLength; d++)
	{
		int seqCount = 0;
		for(int e = 0; e<strlen(input); e++)
		{
			if(*(input+e) == '1')
			{
				allSequences[d][e] = 1;
			}
			else if(*(input+e) == '0')
			{
				allSequences[d][e] = 0;
			}
			else
			{
				allSequences[d][e] = sequencelist[d][seqCount];
				seqCount++;
			}
		}
	}


	/* 
	 *	Sort each sequences to increasing mode
	 * 
	 */
	// cout<<endl;
	int totalNum[seqLength];
	for(int i=0; i<seqLength; i++){
		int num = 0;
		for(int j=0; j<strlen(input); j++){
			if(j==strlen(input)-1){
				break;
			}
			if(allSequences[i][j] > allSequences[i][j+1]){
				int temp = allSequences[i][j];
				allSequences[i][j] = allSequences[i][j+1];
				allSequences[i][j+1] = temp;
				num++;
				j = -1;
			}//endif
		}//endfor
		totalNum[i] = num;
	}//endfor
	
	
	
	
	
	/*
	 * Sum of all Num of Inversions
	 */
	int sum = 0;
	for(int i=0;i<seqLength;i++){
		sum = sum + totalNum[i];
	}
	

	// cout<<"Output: "<<endl;
	int out = sum%1000000007;
	cout<< out <<endl;


}


int main()
{
	// Get Input
	char seq[500000];
	// cout << "Input: "<<endl;
	cin >> seq;

	char *p = &seq[0];

	ProcessSequences(p);
	return 0;
}