/*
 * main.cpp
 *
 *  Created on: Apr 11, 2015
 *      Author: alkyadav
 */

#include"LongestCommonSubsequence.h"
#include"LongestIncreasingSubsequence.h"
int main(){
	LongestCommonSubsequence lcs;
	LongestIncreasingSubsequence lis;
	char X[100],Y[100];
	int *in_str;
	int option,len;
	do{
		cout<<endl<<"1.Find LongestCommonSubsequence using recursion"<<endl;
		cout<<endl<<"2.Find LongestCommonSubsequence using dynamic programming"<<endl;
		cout<<endl<<"3.Find LongestIncreasingSubsequence using dynamic programming"<<endl;
		cout<<endl<<"Enter option -1 to exit"<<endl;
		cin>>option;
		switch(option){
						case 1:
							cout<<endl<<"Enter string 1"<<endl;
							cin>>X;
							cout<<endl<<"Enter string 2"<<endl;
							cin>>Y;
							cout<<"LCS is:"<<lcs.LCS_recursive(X,Y)<<endl;
							break;
						case 2:
							cout<<endl<<"Enter string 1"<<endl;
							cin>>X;
							cout<<endl<<"Enter string 2"<<endl;
							cin>>Y;
							cout<<"LCS is:"<<lcs.LCS_dynamicpogramming(X,Y)<<endl;
							break;
						case 3:
							cout<<endl<<"Enter the length to find Longest increasing subsequence"<<endl;
							cin>>len;
							in_str=new int[len];
							cout<<endl<<"Enter string"<<endl;
							for(int i=0;i<len;i++){
							cin>>in_str[i];
							}
							cout<<"Longest Increasing Subsequence is:"<<lis.longestIncreasingSubsequence(in_str,len)<<endl;
							break;
	}
	}while(option!=-1);
return 0;
}


