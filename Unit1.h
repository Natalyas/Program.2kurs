//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TEdit *Edit2;
        TStringGrid *StringGrid1;
        TEdit *deb;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TLabel *Label3;
        TEdit *Edit3;
        TRadioGroup *RadioGroup1;
        TEdit *Edit4;
        TEdit *Edit5;
        TUpDown *UpDown2;
        TUpDown *UpDown3;
        TUpDown *UpDown4;
        TEdit *Edit6;
        TLabel *Label4;
        TEdit *Edit7;
        TButton *Button2;
        TEdit *Edit8;
        TLabel *Label5;
        TEdit *Edit9;
        TLabel *Label6;
        TLabel *Label7;
        TEdit *Edit11;
        TLabel *Label8;
        TEdit *Edit12;
        TMemo *Memo1;
        TLabel *Label9;
        TEdit *Edit10;
        TLabel *Label10;
        TLabel *Label11;
        TMemo *Memo2;
        TLabel *Label12;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall UpDown4Changing(TObject *Sender,
          bool &AllowChange);
        void __fastcall UpDown4Click(TObject *Sender, TUDBtnType Button);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
