#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
	
private:
	void on_hello(wxCommandEvent & event);

};

#endif // !PANEL_H
