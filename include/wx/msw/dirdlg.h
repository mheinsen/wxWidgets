/////////////////////////////////////////////////////////////////////////////
// Name:        wx/msw/dirdlg.h
// Purpose:     wxDirDialog class
// Author:      Julian Smart
// Modified by:
// Created:     01/02/97
// RCS-ID:      $Id$
// Copyright:   (c) Julian Smart
// Licence:   	wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_DIRDLG_H_
#define _WX_DIRDLG_H_

#ifdef __GNUG__
#pragma interface "dirdlg.h"
#endif

#include "wx/dialog.h"

WXDLLEXPORT_DATA(extern const wxChar*) wxFileSelectorPromptStr;

class WXDLLEXPORT wxDirDialog : public wxDialog
{
public:
    wxDirDialog(wxWindow *parent,
                const wxString& message = wxFileSelectorPromptStr,
                const wxString& defaultPath = wxEmptyString,
                long style = 0,
                const wxPoint& pos = wxDefaultPosition);

    void SetMessage(const wxString& message) { m_message = message; }
    void SetPath(const wxString& path) { m_path = path; }
    void SetStyle(long style) { m_dialogStyle = style; }

    wxString GetMessage() const { return m_message; }
    wxString GetPath() const { return m_path; }
    long GetStyle() const { return m_dialogStyle; }

    virtual int ShowModal();

protected:
    wxString    m_message;
    long        m_dialogStyle;
    wxString    m_path;

private:
    DECLARE_DYNAMIC_CLASS(wxDirDialog)
};

#endif
    // _WX_DIRDLG_H_
