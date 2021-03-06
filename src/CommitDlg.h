/*******************************************************************************
 *
 * Copyright (C) 2009, Alexander Stigsen, e-texteditor.com
 *
 * This software is licensed under the Open Company License as described
 * in the file license.txt, which you should have received as part of this
 * distribution. The terms are also available at http://opencompany.org/license.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ******************************************************************************/

#ifndef __COMMITDLG_H__
#define __COMMITDLG_H__

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class CommitDlg : public wxDialog {
public:
	CommitDlg(wxWindow *parent);

	// Access to commit info
	wxString GetLabel() const;
	wxString GetDescription() const;

private:
	wxTextCtrl* m_descCtrl;
	wxTextCtrl* m_labelCtrl;
};

#endif // __COMMITDLG_H_
