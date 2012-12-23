//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

int p_max,d_len;
unsigned char s_in[30]={0,1,0,1,0,1,0,1,0,1,0,1},s_cod[30],s_bag[30],s_corr[30];
unsigned char matrix[25][200];


void __fastcall TForm1::FormCreate(TObject *Sender)
{
 Edit1->OnChange(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 char buf[100];
 AnsiString t1,t2;
 unsigned char t;
 int p=0,i,j,k;
 buf[p_max+d_len]='*';
// AnsiString t1,t2;
 Memo1->Text="";
 Memo2->Text="";



 for(i=1;i<=p_max+d_len;i++)
  {if(i==(1<<p))
     {buf[p_max+d_len-i]='*';p++;
      s_cod[p_max+d_len-i]=0;
     }
   else
     {buf[p_max+d_len-i]=s_in[d_len-i+p]+'0';
      s_cod[p_max+d_len-i]=s_in[d_len-i+p];
     }
  }
 buf[p_max+d_len+1]=0;
 for(p=0;p<p_max;p++)
  {t=0; t1="";t2="";
   for(int j=0;j<p_max+d_len;j++)
     {t^=matrix[p_max-p][j]&s_cod[j];

      for(k=0;k<=p_max;k++)
        if((1<<k)==(p_max+d_len-j)) break;

      if((k>p_max)&&matrix[p_max-p][j])
        {if(t1!="")
          {t1="+"+t1;t2="+"+t2;

          }
         t1=(AnsiString)"A"+(p_max+d_len-j)+t1;
         t2=(AnsiString)(s_cod[j])+t2;
        }
     }
   s_cod[p_max+d_len-(1<<p)]=t;
   Memo2->Text=Memo2->Text+"E"+(p+1)+"="+t+"="+t1+"="+t2+"\r\n";
  }
 deb->Text=buf;


 s_cod[p_max+d_len]=0;
 for(int j=0;j<d_len+p_max;j++)
  s_cod[p_max+d_len]^=s_cod[j];

 for(i=0;i<=p_max+d_len;i++) buf[i]=s_cod[i]+'0';
 buf[p_max+d_len+1]=0;
 Edit3->Text=buf;



 t1="";t2="";
 for(t=0,j=0;j<p_max+d_len;j++)
     {  t^=s_cod[j];
        if(t1!="")  {t1=t1+"+"; t2=t2+"+"; }
        for(i=0;i<p_max;i++)
          {if(p_max+d_len-j==1<<i) break;
          }

        if(i<p_max||j==p_max+d_len) t1=t1+"E"; else t1=t1+"A";
        t1=t1+(AnsiString)+(p_max+d_len-j);
        t2=t2+(AnsiString)s_cod[j];
     }
 Memo2->Text=(AnsiString)"E0="+(t)+"="+t1+"="+t2+"\r\n"+Memo2->Text;








 RadioGroup1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
 char buf[30];
 int i;
 for(i=0;i<=p_max+d_len;i++)
  s_bag[i]=s_cod[i];
 if(RadioGroup1->ItemIndex==1)
  {
   s_bag[p_max+d_len-Edit4->Text.ToInt()]^=1;
   s_bag[p_max+d_len-Edit5->Text.ToInt()]^=1;
  }
 if(RadioGroup1->ItemIndex==0)
  {
   s_bag[p_max+d_len-Edit6->Text.ToInt()]^=1;
  }
 if(RadioGroup1->ItemIndex==2)
  {
   s_bag[rand()%(p_max+d_len+1)]^=1;
//   s_bag[Edit5->Text.ToInt()]^=1;
  }
 if(RadioGroup1->ItemIndex==3)
  {
   s_bag[rand()%(p_max+d_len+1)]^=1;
   s_bag[rand()%(p_max+d_len+1)]^=1;
  }

 for(i=0;i<=p_max+d_len;i++)
  buf[i]=s_bag[i]+'0';
 buf[i]=0;
 Edit7->Text=buf;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::UpDown4Changing(TObject *Sender, bool &AllowChange)
{ RadioGroup1->OnClick(Sender);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::UpDown4Click(TObject *Sender, TUDBtnType Button)
{
 RadioGroup1->OnClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
 int i=0;
 Edit1->Color=clWhite;
 for(i=0;i<Edit1->Text.Length();i++)
  {
   if((Edit1->Text[i+1]!='0')&&(Edit1->Text[i+1]!='1'))
    {i=-1;
     break;
    }
   s_in[i]=Edit1->Text[i+1]-'0';
  }
 Edit2->Text=i;
 Edit3->Text="";

 if(i!=-1)
  {int j,k;
     d_len=i;
     for(p_max=0;d_len>=(1<<p_max)-p_max;p_max++); //p_max++;
     Edit10->Text=p_max+1;

     StringGrid1->RowCount=p_max+1+1;
     StringGrid1->ColCount=p_max+1+d_len;

     for(j=0;j<=p_max+1+d_len;j++)
       matrix[0][j]=1;
     for(j=0;j<=p_max+d_len;j++)
        {
                for(i=0;i<p_max;i++)
                {
                        if(p_max+d_len-j==1<<i) break;
                }
        if((i<p_max)||(j==p_max+d_len))
             StringGrid1->Cells[j][0]=(AnsiString)"e"+(p_max+d_len-j);
          else
             StringGrid1->Cells[j][0]=(AnsiString)"a"+(p_max+d_len-j);
        }
     for(i=0;i<=(d_len+p_max);i++)
       for(j=0;j<p_max;j++)
         {
           matrix[p_max-j][d_len+p_max-i]=((i>>j)&1)?1:0;
         }
     for(i=0;i<=p_max;i++)
        for(j=0;j<=p_max+d_len;j++)
         StringGrid1->Cells[j][i+1]=matrix[i][j];

  }
 else
  {
   Edit1->Color=clRed;
   Edit2->Text="";
   Edit3->Text="Ошибочные данные";
  }
//  UpDown1->OnClick(Sender,0);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{

 unsigned char t=0;
 int i,j,k;
 AnsiString t1,t2;
 Memo1->Clear();
 k=0;
 Edit11->Text="";
 for(t=0,i=0;i<=p_max+d_len;i++) t^=s_bag[i];
 //Edit12->Text=(AnsiString)t;

 t1="";t2="";
 for(t=0,j=0;j<=p_max+d_len;j++)
     {  t^=s_bag[j];
        if(t1!="")  {t1=t1+"+"; t2=t2+"+"; }
        for(i=0;i<p_max;i++)
          {if(p_max+d_len-j==1<<i) break;
          }

        if(i<p_max||j==p_max+d_len) t1=t1+"E"; else t1=t1+"A";
        t1=t1+(AnsiString)+(p_max+d_len-j);
        t2=t2+(AnsiString)s_bag[j];
     }
  Memo1->Text=(AnsiString)"S0="+t+"="+t1+"="+t2;


 for(i=0;i<p_max;i++)
  {t1="";t2="";
   for(t=0,j=0;j<p_max+d_len;j++)
     {t^=matrix[p_max-i][j]&s_bag[j];
      if(matrix[p_max-i][j])
        {  if(t1!="")
            {t1=t1+"+";
             t2=t2+"+";
            }

           if(p_max+d_len-j==1<<i) t1=t1+"E";
            else t1=t1+"A";

           t1=t1+(AnsiString)+(p_max+d_len-j);
           t2=t2+(AnsiString)s_bag[j];
        }
     }
   k+=(t<<i);
   if(t) Edit11->Text=(AnsiString)'1'+Edit11->Text;
   else Edit11->Text=(AnsiString)'0'+Edit11->Text;
   Memo1->Text=Memo1->Text+"\r\nS"+(i+1)+"="+t+"="+t1+"="+t2;
  }

 for(t=0,i=0;i<=p_max+d_len;i++) t^=s_bag[i];
 Edit12->Text=(AnsiString)t;
 // если хаффман говорит что есть ошибка а бит чётности что нет. то две ошибки
 if(t) //бит чётности говорит что есть ошибка тогда ошибка в k-ом бите.
  {Edit9->Text=k;

   Edit8->Text="";
   for(j=0;j<=p_max+d_len;j++)
     { if(j==k)
         Edit8->Text=(AnsiString)(1-s_bag[p_max+d_len-j])+Edit8->Text;
       else
         Edit8->Text=(AnsiString)(s_bag[p_max+d_len-j])+Edit8->Text;
     }

  }
 else
  {
   if(k!=0) {Edit9->Text="2 ошибк.";Edit8->Text="2 ошибк.";}
   else {Edit9->Text="нет.ошибк.";Edit8->Text=Edit7->Text;}
  }





}
//---------------------------------------------------------------------------




