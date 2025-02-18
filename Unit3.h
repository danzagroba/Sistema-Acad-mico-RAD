//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Principal.h"
//---------------------------------------------------------------------------
class TFrame3 : public TFrame
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *Button1;
	TLabel *Label3;
	TEdit *Edit3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall EditKeyPress(TObject *Sender, System::WideChar &Key);
private:
		// User declarations
	int type;
public:		// User declarations
	void setCadastro(int type);
	__fastcall TFrame3(TComponent* Owner);
    Principal* Sistema;
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame3 *Frame3;
//---------------------------------------------------------------------------
#endif
