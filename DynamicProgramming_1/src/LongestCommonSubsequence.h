/*
 * LongestCommonSubsequence.h
 *
 *  Created on: Apr 11, 2015
 *      Author: alkyadav
 */

#ifndef LONGESTCOMMONSUBSEQUENCE_H_
#define LONGESTCOMMONSUBSEQUENCE_H_

#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;

#define max(x,y) ((x) > (y) ? (x) : (y))
class LongestCommonSubsequence{
	int LCS_recursive_helper(char *X,char *Y,int len1,int len2);
public:
	int LCS_dynamicpogramming(char *X,char *Y,int len1,int len2);
	int LCS_recursive(char *X,char *Y);
};




#endif /* LONGESTCOMMONSUBSEQUENCE_H_ */
