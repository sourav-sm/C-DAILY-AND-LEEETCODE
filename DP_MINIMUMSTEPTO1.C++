//*********BY RECURSIVE SOLUTION**********//
///***NOTE:--HERE PROBLEM IS THE COMPLEXITY WILL BE EXPONENETIAL AS SAME CALCULATION ARE REPETATED
int countMinStepsToOne(int n)
{
	//Write your code here
	if(n<=1)return 0;
	int x=countMinStepsToOne(n-1);
	int y=INT_MAX,z=INT_MAX;//because we have to take minimum so it is better if we initilise with 
	if(n%2==0){
		y=countMinStepsToOne(n/2);
	}
	if(n%3==0){
		z=countMinStepsToOne(n/3);
	}
	return 1+min(x,min(y,z));
}

//**********BY MEMORIZATION************////
//here completexity is o(n);
int countStepsToOnehelper(int n,int *ans){
	if(n<=1)return 0;
	if(ans[n]!=-1){
		return ans[n];
	}
	int x=countStepsToOnehelper(n-1,ans);
	int y=INT_MAX,z=INT_MAX;//so that when we take min it will help if we initilise with +infinity
    if(n%2==0){
       y=countStepsToOnehelper(n/2, ans);
	}
	if(n%3==0){
       z=countStepsToOnehelper(n/3, ans);
	}
	int output=1+min(x,min(y,z));
    ans[n]=output;
}

int countStepsToOne(int n)
{
	//Write your code here
	int *ans=new int[n+1];
	for(int i=0;i<=n;i++){
		ans[i]=-1;
	}
	return countStepsToOnehelper(n,ans);
}

///******BY USING DP*********///
