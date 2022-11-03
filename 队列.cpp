#define Maxsize 100
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct{
    ElemType data[Maxsize];
    int length;
}Sqlist;
bool ListInsert(Sqlist &L,int i,ElemType e)
{
    if(i<1||i>L.length+1)
        return false;
    if(L.length>=Maxsize)
        return false;
    for (int j =L.length;j>=i;j--)
    {
        L.data[j]=L.data[j-1];

    }
    L.data[i-1]=e;
    L.length++;
    return true;
}
void PrintList(Sqlist &L)
{
    for(int i=0;i<L.length;i++)
    {
        print("%4d",L.data[i]);
    }
    printf("\n");
}
bool ListDelete(Sqlist &L,int i,ElemType &e)
{
    if(i<1||i>L.length+1)
        return false;   
    e =L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.dat[j];
    L.length--;
    return true;
    if(L.length==0)
        return false;

}
int LocateElem(Sqlist L;ElemType e)
{
    int i;
    for(i=0;i<L.length;i++)
        if(L.data[i]==e)
            return i+1;
    return 0;
}
int main()
{
    Sqlist L;
    bool ret;
    ElemType del;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.length = 3;
    ret = ListInsert(L,2,60);
    if (ret)
    {
        printf("����ɹ�\n")��
        PrintList(L);

    }
    else
    {
        printf("����ʧ��\n");

    }
    ret = ListDelete(L,1,del);
    if(ret)
    {
        printf("ɾ���ɹ�\n");
        printf("ɾ��Ԫ��ֵΪ%d\n",del);
        PrintList(L);
    }
    else
    {
        printf("ɾ��ʧ��\n");

    }
    int elem_pos;
    elem_pos = LocateElem(L,60);
    if(elem_pos)
    {
        printf("���ҳɹ�\n");
        printf("Ԫ��λ��Ϊ%d\n",elem_pos);

    }
    else{
        printf("����ʧ��\n");
    }
    return 0;
}
