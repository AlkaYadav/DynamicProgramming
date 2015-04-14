//============================================================================
// Name        : DynamicProgramming_1.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "LongestCommonSubsequence.h"
int LongestCommonSubsequence::LCS_recursive(char *X,char *Y){
	int len1=strlen(X);
	int len2=strlen(Y);
	return LCS_recursive_helper(X,Y,len1,len2);
}
int LongestCommonSubsequence::LCS_recursive_helper(char *X,char *Y,int len1,int len2){
	if(len1==0 || len2==0){
		return 0;
	}
	else{
		if(X[len1-1] == Y[len2-1]){
			return 1+LCS_recursive_helper(X,Y,len1-1,len2-1);
		}
		else{
			return max(LCS_recursive_helper(X,Y,len1,len2-1),LCS_recursive_helper(X,Y,len1-1,len2));
		}
	}
}


//Dynamic Programming version of LCS
int LongestCommonSubsequence::LCS_dynamicpogramming(char *X,char *Y){
	int len1=strlen(X);
	int len2=strlen(Y);
	int LCS[len1+1][len2+1];
	for(int i=0;i<=len1;i++){
		for(int j=0;j<=len2;j++){
			LCS[i][j]=0;
		}
	}
	for(int i=1;i<=len1;i++){
			for(int j=1;j<=len2;j++){
										if(X[i-1] == Y[j-1]){
											LCS[i][j] = 1+LCS[i-1][j-1];
										}
										else{
											LCS[i][j] = max(LCS[i][j-1],LCS[i-1][j]);
										}
			}
	}

	int length_lcs=LCS[len1][len2];
	char print_lcs[length_lcs+1];
	int i=len1;
	int j=len2;
	int index=length_lcs;
	print_lcs[length_lcs]='\0';
	while(i>0&&j>0){
		if(X[i-1]==Y[j-1]){
			print_lcs[index-1]=X[i-1];
			i--;
			j--;
			index--;
		}
		else if(LCS[i-1][j]>LCS[i][j-1]){
			i--;
		}
		else j--;
	}

	cout<<print_lcs<<endl;
	return LCS[len1][len2];
}
