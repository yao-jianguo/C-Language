#include<stdio.h>
#include<regex.h>

/**
  统计一行字符串中单词的个数，作为函数值返回
  一行字符串在主函数中输入，规定所有的字母由小写字母组成，单词之间用空格隔开，句子开始没有空格
**/

int wordcount(char *p);

int main(){
  char sen[200];
  gets(sen);
  // scanf("%s", sen);
  printf("%s\n", sen);

  int wc;
  wc = wordcount(sen);
  printf("单词个数为:%d\n", wc);
}

int wordcount(char *p){
  int wc = 0;
  while(*p){
    if(*p == ' '){
      wc += 1;
    }
    p++;
  }
  wc = (*--p) == ' ' ? wc : wc +1;  // 判断最后一位是否有空格
  return wc;
}