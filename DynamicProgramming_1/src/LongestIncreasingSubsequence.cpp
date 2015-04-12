/*
 * LongestIncreasingSubsequence.cpp
 *
 *  Created on: Apr 11, 2015
 *      Author: alkyadav
 */

#include "LongestIncreasingSubsequence.h"

int LongestIncreasingSubsequence::longestIncreasingSubsequence(int *X,int len){
	int LIS[len];
	int max=INT_MIN;
	for(int i=0;i<len;i++){
		LIS[i]=1;
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<i;j++){
			if(X[j]<X[i]&& LIS[j]+1>LIS[i]){
				LIS[i]=LIS[j]+1;
			}
		}
	}

	for(int i=0;i<len;i++){
		if(LIS[i]>max){
			max=LIS[i];
		}
	}
	return max;
}


