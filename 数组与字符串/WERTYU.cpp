//WERTYU
/*把手放在键盘上，稍不注意就会往右错一位。这样，输入Q就会变成输入W，输入J就会变成输入K等。
所有字母均大写
输入：
	O S, GOMR YPFSU/
输出：
	I AM FINE TODAY. 
*/ 
//字符串转义 
#include<stdio.h>
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//中间的"\\"是为了转义 
int main()
{
	char c;
	while((c=getchar())!=EOF){
		int i;
		for(i=1;s[i]&&s[i]!=c;i++);			//注意有分号，这里是为了找到对应的位置
		if(s[i])
			printf("%c",s[i-1]); 
		else
			putchar(c); 					//输出字符串，这种方法也可以 
	}
	return 0;
}
