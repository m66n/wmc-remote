// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

#define NTDDI_VERSION NTDDI_WIN7

#include <atlbase.h>
#include <atlstr.h>
#include <atlapp.h>

extern CAppModule _Module;

#include <atlwin.h>

#include <atlframe.h>
#include <atlctrls.h>
#include <atldlgs.h>
#include <atlddx.h>
#include <atlmisc.h>

#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' \
      name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
      processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' \
      language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' \
      name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
      processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' \
      language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' \
      name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
      processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' \
      language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' \
      name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
      processorArchitecture='*' publicKeyToken='6595b64144ccf1df' \
      language='*'\"")
#endif
