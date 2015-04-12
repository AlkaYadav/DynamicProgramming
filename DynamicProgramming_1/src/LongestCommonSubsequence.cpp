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
