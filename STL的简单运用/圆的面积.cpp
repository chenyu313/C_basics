//圆的面积
/* 
问题描述：		 
		给定圆的半径r，求圆的面积。 
输入格式： 
		输入包含一个整数r，表示圆的半径。 
输出格式： 
		输出一行，包含一个实数，四舍五入保留小数点后7位，表示圆的面积。 
*/
#include<stdio.h>
#include<math.h>
#define PI atan(1.0)*4   //1.0的正切，相当于PI=(π/4)*4 
int main()
{
	int r;
	scanf("%d",&r);
	double ans;
	ans=r*r*PI;			//因为π可能记不住，可以靠公式求出 
	printf("%.7lf\n",ans);
	return 0;
}
 
