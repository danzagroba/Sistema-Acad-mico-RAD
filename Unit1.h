//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include "Unit3.h"
#include "Unit2.h"
#include "Principal.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *Menu;
	TMenuItem *Cadastrar1;
	TMenuItem *Universidade1;
	TMenuItem *Universidade2;
	TMenuItem *Departamento1;
	TMenuItem *Departamento2;
	TMenuItem *Listar1;
	TMenuItem *Listar2;
	TMenuItem *Departamento3;
	TMenuItem *Departamento4;
	TMenuItem *Professor2;
	TMenuItem *udo1;
	TMenuItem *Salvar1;
	TMenuItem *Salvar2;
	TMenuItem *Recuperar1;
	TMenuItem *Recuperar2;
	TMenuItem *Universidades1;
	TMenuItem *Universidades2;
	TMenuItem *Disciplinas1;
	TMenuItem *Disciplinas2;
	TMenuItem *Universidades3;
	TMenuItem *Universidades4;
	TMenuItem *Disciplinas3;
	TMenuItem *Disciplinas4;
	TFrame3 *Frame31;
	TFrame2 *Frame21;
	void __fastcall Universidade1Click(TObject *Sender);
	void __fastcall Departamento1Click(TObject *Sender);
	void __fastcall Departamento2Click(TObject *Sender);
	void __fastcall Universidade2Click(TObject *Sender);
	void __fastcall Listar2Click(TObject *Sender);
	void __fastcall Departamento3Click(TObject *Sender);
	void __fastcall Departamento4Click(TObject *Sender);
	void __fastcall Professor2Click(TObject *Sender);
	void __fastcall udo1Click(TObject *Sender);
	void __fastcall Salvar2Click(TObject *Sender);
	void __fastcall Universidades1Click(TObject *Sender);
	void __fastcall Universidades2Click(TObject *Sender);
	void __fastcall Disciplinas1Click(TObject *Sender);
	void __fastcall Disciplinas2Click(TObject *Sender);
	void __fastcall Recuperar2Click(TObject *Sender);
	void __fastcall Universidades3Click(TObject *Sender);
	void __fastcall Universidades4Click(TObject *Sender);
	void __fastcall Disciplinas3Click(TObject *Sender);
	void __fastcall Disciplinas4Click(TObject *Sender);
private:
	void tirarVisible();	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	Principal *Sistema;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
