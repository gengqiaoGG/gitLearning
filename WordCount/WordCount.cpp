#include<stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
	int i,cnt;
	char ch;
	char filename[80];
	FILE *fp;//变量类型声明，声明fp是FILE型指针，用于指向FILE类型（文件结构）
	//strcpy(filename,argv[2]);//将argu字符串拷贝到table数组中
	fp=fopen(argv[2],"r");
	cnt=0;
	i=0;
	if(strcmp(argv[1],"-c")==0||strcmp(argv[1],"-C")==0)//strcmp是string compare的缩写，用于比较两个字符串并根据比较结果返回整数
	{
		while(!feof(fp))//判断文件是否结束
		{
		ch=fgetc(fp);//从文件指针fp指定的文件中读一个字符并存入ch变量中
		cnt++;
		}
	printf("字符数：%d\n",--cnt);
	}
	else if(strcmp(argv[1],"-w")==0||strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			if(ch==' '||ch==',')
			{
				cnt++;
			}
			
		}
		cnt+=1;
		printf("单词数：%d\n",cnt);
	}
}


