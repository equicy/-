#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<conio.h>
//#include<malloc.h>
#define UP    0x48
#define DOWN  0x50
int point=1;
char tc;
float sf;
struct custom
  { char fjh[10];//��������0��ͷ�������޷���ʾ0
    char yzm[10];
    char sfr[10];
    char jfrq[20];
    float rs;
    float bysbs;
    float jfje;
     }kh;

struct customs
  { char fjhs[10];//��������0��ͷ�������޷���ʾ0
    char yzms[10];
    char sfrs[10];
    char jfrqs[20];
    float rss;
    float bysbss;
    float jfjes;
     };
struct customs kh1[10];
FILE *fp;
//file *history;
int p1()
{
 system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                    ��1.�½�\n");
	printf("                                      2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
      case 13: newfile();
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p6();
	  case DOWN:p2();
	  default:continue;
	  }
	break;
	}
}

int p2()
{
	system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                      1.�½�\n");
	printf("                                    ��2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
      case 13: print();
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p1();
	  case DOWN:p3();
	  default:continue;
	  }
	break;
	}
}

p3()
{
	system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                      1.�½�\n");
	printf("                                      2.���\n");
	printf("                                    ��3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
	  case 13: seek();
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p2();
	  case DOWN:p4();
	  default:continue;
	  }
	break;
	}
}

p4()
{
	system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                      1.�½�\n");
	printf("                                      2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                    ��4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
      case 13: append();
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p3();
	  case DOWN:p5();
	  default:continue;
	  }
	break;
	}
}

p5()
{
	system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                      1.�½�\n");
	printf("                                      2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                    ��5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
      case 13: update();
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p4();
	  case DOWN:p6();
	  default:continue;
	  }
	break;
	}
}

p6()
{
	system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                      1.�½�\n");
	printf("                                      2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                    ��6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
      case 13: exit(0);
 	  }
	point=getch();
	  switch(point)
 	  {
	  case UP:p5();
	  case DOWN:p1();
	  default:continue;
	  }
	break;
	}
}
int newfile(){
  system("cls");
  char ch;int i=0;
  if((fp=fopen("file.txt","a"))==NULL)
  {  printf("�����½��ļ� file.txt\n");
     exit(0);
  }
  printf("����������ķ���š�ҵ����������������ˮ�������ɷѽ��ɷ����ڡ��շ���");
  do
  {  printf("\n");
     scanf("%s%s%f%f%f%s%s",kh.fjh,kh.yzm,&kh.rs,&kh.bysbs,&kh.jfje,kh.jfrq,kh.sfr);

     fflush(stdin);
     fwrite(&kh,sizeof(kh),1,fp);

     printf("have another custom record(y/n)?");
  }while((ch=getche())=='y');
  fclose(fp);

  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
print(){
  system("cls");
  if((fp=fopen("file.txt","r"))==NULL)
  { printf("���ܴ��ļ� file.txt\n");
    exit(0);
  }
  printf("�����\tҵ����\t����\t����ˮ����\t�ɷѽ��\t�ɷ�����\t\t�շ���\n");
  while(fread(&kh,sizeof(kh),1,fp)==1)
    printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\t\t%s\n",kh.fjh,kh.yzm,kh.rs,kh.bysbs,kh.jfje,kh.jfrq,kh.sfr);
  fclose(fp);
  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
seek(){
  system("cls");
  printf("������Ų�ѯ�밴1����ҵ���������밴2��������������������˵���\n");
  tc=getch();
  switch(tc){
  case '1':seekfjh();break;
  case '2':seekyzm();break;
  default:p1();
  }
}
seeksame(){
          char fjh2[10];
          int test=0;
          int i=0;
          float thisshui=kh.bysbs;
           if((fp=fopen("file.txt","r"))==NULL)
           {  printf("û�����ݣ�\n");
               exit(0);
           }
           strcpy(fjh2,kh.fjh);
          fflush(stdin);
           while(fread(&kh1,sizeof(kh1),1,fp)==1)
              fclose(fp);
              if((fp=fopen("file.txt","r"))==NULL)
           {  printf("û�����ݣ�\n");
               exit(0);
           }
          while(fread(&kh1,sizeof(kh1),1,fp)==1)
           fclose(fp);
               if((fp=fopen("file.txt","r"))==NULL)
           {  printf("û�����ݣ�\n");
               exit(0);
           }
           while(fread(&kh,sizeof(kh),1,fp)==1){
           if(strcmp(fjh2,kh1[i].fjhs)==0)
           kh1[i].jfjes=thisshui-kh1[i].bysbss;
           i++;}
           fclose(fp);
           strcpy(kh1[i].fjhs,fjh2);
}
seekfjh(){
  char fjh2[10];
  if((fp=fopen("file.txt","r"))==NULL)
  {  printf("û�����ݣ�\n");
     exit(0);
  }
  printf("������Ҫ���ҵĿͻ��ķ���ţ�");
  scanf("%s",fjh2);
  fflush(stdin);
  printf("�����\tҵ����\t����\t����ˮ����\t�ɷѽ��\t�ɷ�����\t�շ���\n");
  while(fread(&kh,sizeof(kh),1,fp)==1)
  { if(strcmp(fjh2,kh.fjh)==0)
    printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\t\t%s\n",kh.fjh,kh.yzm,kh.rs,kh.bysbs,kh.jfje,kh.jfrq,kh.sfr);
  }
  fclose(fp);
  printf("\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
seekyzm(){
  char yzm2[10];
  if((fp=fopen("file.txt","r"))==NULL)
  {  printf("���ܴ��ļ� file.txt\n");
      exit(0);
  }
  printf("������Ҫ���ҵĿͻ���������");
  scanf("%s",yzm2);
  printf("�����\tҵ����\t����\t����ˮ����\t�ɷѽ��\t�ɷ�����\t�շ���\n");
  while(fread(&kh,sizeof(kh),1,fp)==1)
  { if(strcmp(yzm2,kh.yzm)==0)
    printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\t\t%s\n",kh.fjh,kh.yzm,kh.rs,kh.bysbs,kh.jfje,kh.jfrq,kh.sfr);
  }
  fclose(fp);
  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
append(){
  int ch;
  system("cls");
  printf("                           ��ӿͻ���Ϣ\n");
  if((fp=fopen("file.txt","a"))==NULL)
  {  printf("���ܴ��ļ� file.txt\n");
     exit(0);
  }
  printf("���������뷿��š�ҵ����������������ˮ�������ɷѽ��ɷ����ڡ��շ���");
  do
  {  printf("\n");
     scanf("%s%s%f%f%f%s%s",kh.fjh,kh.yzm,&kh.rs,&kh.bysbs,&kh.jfje,kh.jfrq,kh.sfr);
     fflush(stdin);
     fwrite(&kh,sizeof(kh),1,fp);
     printf("�Ƿ�������Ա����Ϣ(y/n)?");
  }while((ch=getche())=='y');
  fclose(fp);
  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
update(){
  system("cls");
  char cx;
  printf("�޸��ֶ��밴1���ɷ��밴2\n");
  switch(cx=getch()){
  case '1':{
  printf("������Ų����޸��밴1����ҵ���������޸��밴2,���������������˵���\n");
  switch(cx=getch()){
  case '1':fjhxg();break;
  case '2':yzmxg();break;
  default:p1();
   }
  };break;
  case '2':seekfjhaa();break;
  }

}
seekfjhaa(){
  char fjh2[10];
  char yzm2[10];
  float sysbs=0;
  float injf=0;
  float injfs=0;
  if((fp=fopen("file.txt","a"))==NULL)
  {  printf("û�����ݣ�\n");
     exit(0);
  }
 printf("������ɷѵķ����\n");
  scanf("%s",fjh2);

  while(fread(&kh,sizeof(kh),1,fp)==1)
  { if(strcmp(fjh2,kh.fjh)==0)
    //printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\t\t%s\n",kh.fjh,kh.yzm,kh.rs,kh.bysbs,kh.jfje,kh.jfrq,kh.sfr);
    sysbs=kh.bysbs;
    //printf("%s",kh.yzm);
    //printf("%s\n",kh.yzm);
    strcpy(yzm2,kh.yzm);
    //printf("%s\n",kh.yzm);
  }

  strcpy(kh.fjh,fjh2);
  //printf("%s",yzm2);
  strcpy(kh.yzm,yzm2);
  printf("�������շ�����[xxxx-xx-xx]\n");
  scanf("%s",kh.jfrq);
  printf("�������շ���\n");
  scanf("%s",kh.sfr);
  printf("�����뱾��ˮ����\n");
  scanf("%f",&kh.bysbs);
  injf=(kh.bysbs-sysbs)*5;
  kh.jfje=injf;
  printf("��Ӧ�ýɷ�%0.2fԪ\n",injf);
scanf("%f",&injfs);
if(injfs>injf){
injf-=injfs;
printf("����%0.2fԪ",injf);
printf("лл\n");
printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
else{
injf=injf-injfs;
printf("���ڲ���%0.2fԪ\n",injf);
scanf("%f",&injfs);
if(injfs>injf){
injf=injf-injfs;
printf("����%0.2fԪ",injf);
}
printf("лл\n");
fclose(fp);
 if((fp=fopen("file.txt","a"))==NULL)
  {  printf("û�����ݣ�\n");
     exit(0);
  }
  fflush(stdin);
  fwrite(&kh,sizeof(kh),1,fp);
  fclose(fp);
printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
}
fjhxg(){
  char fjh2[10];int i=-1,num=0,j=0;char zd[30],yzm2[20],jfrq2[20],sfr2[10];
  struct custom kh2[10];char tp;
  if((fp=fopen("file.txt","r"))==NULL)
  {  printf("���ܴ��ļ� file.txt\n");
     exit(0);
  }
  while(1){
    printf("\n\n\n������Ҫ�޸ĵķ���ţ�");
    scanf("%s",fjh2);fflush(stdin);
    printf("�����\tҵ����\t����\t����ˮ����\t�ɷѽ��\t�ɷ�����\n");
    while(fread(&kh2[num],sizeof(kh2[num]),1,fp)==1)
    { if(strcmp(fjh2,kh2[num].fjh)==0){
      printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\t\n",kh2[num].fjh,kh2[num].yzm,kh2[num].rs,kh2[num].bysbs,kh2[num].jfje,kh2[num].jfrq);
      i=num;}
      num+=1;
    }
    if(i==-1){printf("������Ϸ��ķ���ţ�");continue;}
	else break;
  }
  fclose(fp);
  while(1){
    printf("������Ҫ�޸ĵ��ֶΣ�����ȫ���޸��밴�����������س�����\n");
    printf("a:����ţ�b:ҵ������c:������d:����ˮ������e:�ɷѽ�f:�ɷ�����\n");
    scanf("%s",zd);fflush(stdin);
    if(strcmp(zd,"a")==0)j=1;
    if(strcmp(zd,"b")==0)j=2;
    if(strcmp(zd,"c")==0)j=3;
    if(strcmp(zd,"d")==0)j=4;
    if(strcmp(zd,"e")==0)j=5;
    if(strcmp(zd,"f")==0)j=6;

    switch(j){
    case 1:printf("�����뷿��ţ�");strcpy(kh2[i].fjh,gets(fjh2));break;
    case 2:printf("������ҵ������"); strcpy(kh2[i].yzm,gets(yzm2));break;
    case 3:printf("������������");scanf("%f",&kh2[i].rs);fflush(stdin);break;
    case 4:printf("�����뱾��ˮ������"); scanf("%f",&kh2[i].bysbs);fflush(stdin);break;
    case 5:printf("������ɷѽ�"); scanf("%f",&kh2[i].jfje);fflush(stdin);break;
    case 6:printf("������ɷ����ڣ�"); strcpy(kh2[i].jfrq,gets(jfrq2));break;


    default: printf("���������뷿��š�ҵ����������������ˮ�������ɷѽ��ɷ�����\n");
           scanf("%s%s%f%f%f%s",kh2[i].fjh,kh2[i].yzm,&kh2[i].rs,&kh2[i].bysbs,&kh2[i].jfje,kh2[i].jfrq);
           fflush(stdin);
    }
    if((fp=fopen("file.txt","w"))==NULL)
    { printf("����");
      exit(0);
    }
    for(j=0;j<num;j++)
      fwrite(&kh2[j],sizeof(kh2[j]),1,fp);
    fclose(fp);
    printf("�޸���ϣ��Ƿ����޸ı���ֶλ��������޸�(y/n)��");if((tp=getche())=='y') continue;else break;
  }
  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
yzmxg(){
  int i=0,xb[10]={-1},num=0,j=0,xg,a;
  char zd[30],yzm2[20],yzm1[20],tp,gzh2[10],fjh2,jfrq2,sfr2;

  struct custom kh2[10];
  while(1){
  	if((fp=fopen("file.txt","r"))==NULL)
    {  printf("���ܴ��ļ� file.txt\n");
       exit(0);
    }
    printf("\n\n\n������Ҫ�޸ĵ�ҵ������");
    scanf("%s",yzm1);fflush(stdin);
    printf("�����\tҵ����\t����\t����ˮ����\t�ɷѽ��\t�ɷ�����\n");
    while(fread(&kh2[num],sizeof(kh2[num]),1,fp)==1)
    { if(strcmp(yzm1,kh2[num].yzm)==0){
      printf("%s\t%s\t%0.0f\t%0.2f\t\t%0.2f\t\t%s\n",kh2[num].fjh,kh2[num].yzm,kh2[num].rs,kh2[num].bysbs,kh2[num].jfje,kh2[num].jfrq);
      xb[i++]=num;a=i-1;}
      num++;
    }
    if(xb[0]==-1){printf("������Ϸ���������");fclose(fp);continue;}
	else break;
  }
  if(i>1)
  { printf("����%d��������¼��Ҫ�޸ĵڼ�����",i);
    while(1){
	  scanf("%d",&xg);fflush(stdin);
	  if(xg<1&&xg>i) {printf("����������������룡");continue;}else break;
    }
    i=xg-1;
  }else i=a;
  fclose(fp);
  while(1){
    printf("������Ҫ�޸ĵ��ֶΣ�����ȫ���޸��밴�����������س�����\n");
    printf("a:����ţ�b:ҵ������c:������d:����ˮ������e:�ɷѽ�f:�ɷ�����\n");
    scanf("%s",zd);fflush(stdin);
      if(strcmp(zd,"a")==0)j=1;
      if(strcmp(zd,"b")==0)j=2;
      if(strcmp(zd,"c")==0)j=3;
      if(strcmp(zd,"d")==0)j=4;
      if(strcmp(zd,"e")==0)j=5;
      if(strcmp(zd,"f")==0)j=6;

    switch(j){
    case 1:printf("�����뷿��ţ�");strcpy(kh2[i].fjh,gets(fjh2));break;
    case 2:printf("������ҵ������"); strcpy(kh2[i].yzm,gets(yzm2));break;
    case 3:printf("������������");scanf("%f",&kh2[i].rs);fflush(stdin);break;
    case 4:printf("�����뱾��ˮ������"); scanf("%f",&kh2[i].bysbs);fflush(stdin);break;
    case 5:printf("������ɷѽ�"); scanf("%f",&kh2[i].jfje);fflush(stdin);break;
    case 6:printf("������ɷ����ڣ�"); strcpy(kh2[i].jfrq,gets(jfrq2));break;
    default: printf("���������뷿��š�ҵ����������������ˮ�������ɷѽ��ɷ�����\n");
           scanf("%s%s%f%f%f%s",kh2[i].fjh,kh2[i].yzm,&kh2[i].rs,&kh2[i].bysbs,&kh2[i].jfje,kh2[i].jfrq);
           fflush(stdin);
    }
    if((fp=fopen("file.txt","w"))==NULL)
    { printf("����");
      exit(0);
    }
    for(j=0;j<num;j++)
      fwrite(&kh2[j],sizeof(kh2[j]),1,fp);
    fclose(fp);
    printf("�޸���ϣ��Ƿ����޸ı���ֶλ��������޸�(y/n)��");if((tp=getche())=='y') continue;else break;
  }
  printf("\n\n�Ƿ񷵻����˵�(y/n)?");
  if((tc=getch())=='y') p1();
}
main(){
    system("cls");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                          С �� ˮ �� �� �� ϵ ͳ �� �� ��\n");
	printf("\n");
	printf("                               ~*********************~\n");
	printf("\n");
	printf("                                    ��1.�½�\n");
	printf("                                      2.���\n");
	printf("                                      3.��ѯ\n");
	printf("                                      4.׷��\n");
	printf("                                      5.�޸�\n");
	printf("                                      6.�˳�\n");
	printf("\n");
	printf("                    �밴���¼�ѡ��,���߰���Ӧ�����ּ�ѡ��˵����\n");
	while(1){
	point=getch();
	switch(point)
 	  {
      case 49: newfile();exit(0);
      case 50: print();exit(0);
      case 51: seek();exit(0);
      case 52: append();exit(0);
      case 53: update();exit(0);
      case 54: exit(0);
	  case 13: newfile();
 	  }
	  point=getch();
	  switch(point)
 	  {
	  case UP:p6();
	  case DOWN:p2();
	  default:continue;
	  }
	break;
	}
}
