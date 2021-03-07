
// rechteck-berechnung.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CrechteckberechnungApp:
// Siehe rechteck-berechnung.cpp für die Implementierung dieser Klasse
//

class CrechteckberechnungApp : public CWinApp
{
public:
	CrechteckberechnungApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CrechteckberechnungApp theApp;
