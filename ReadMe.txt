========================================================================
       MICROSOFT FOUNDATION CLASS LIBRARY : caculate
========================================================================


AppWizard has created this caculate application for you.  This application
not only demonstrates the basics of using the Microsoft Foundation classes
but is also a starting point for writing your application.

This file contains a summary of what you will find in each of the files that
make up your caculate application.

caculate.dsp
    This file (the project file) contains information at the project level and
    is used to build a single project or subproject. Other users can share the
    project (.dsp) file, but they should export the makefiles locally.

caculate.h
    This is the main header file for the application.  It includes other
    project specific headers (including Resource.h) and declares the
    CCaculateApp application class.

caculate.cpp
    This is the main application source file that contains the application
    class CCaculateApp.

caculate.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
	Visual C++.

caculate.clw
    This file contains information used by ClassWizard to edit existing
    classes or add new classes.  ClassWizard also uses this file to store
    information needed to create and edit message maps and dialog data
    maps and to create prototype member functions.

res\caculate.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file caculate.rc.

res\caculate.rc2
    This file contains resources that are not edited by Microsoft 
	Visual C++.  You should place all resources not editable by
	the resource editor in this file.




/////////////////////////////////////////////////////////////////////////////

AppWizard creates one dialog class:

caculateDlg.h, caculateDlg.cpp - the dialog
    These files contain your CCaculateDlg class.  This class defines
    the behavior of your application's main dialog.  The dialog's
    template is in caculate.rc, which can be edited in Microsoft
	Visual C++.


/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named caculate.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Visual C++ reads and updates this file.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

If your application uses MFC in a shared DLL, and your application is 
in a language other than the operating system's current language, you
will need to copy the corresponding localized resources MFC42XXX.DLL
from the Microsoft Visual C++ CD-ROM onto the system or system32 directory,
and rename it to be MFCLOC.DLL.  ("XXX" stands for the language abbreviation.
For example, MFC42DEU.DLL contains resources translated to German.)  If you
don't do this, some of the UI elements of your application will remain in the
language of the operating system.


What is the application?
==================================================================
  This is a Windows appliction ,a simple caculate tool,which can run on Windows paltform.It is implmented with MFC and the software VC6.0.it implements some basic caculater function,including"+","-","*","/","1/x","sin","arcsin","sinh","cos","arccos","cosh","tan","arctan","sqrt","2^x","N!","tan","arctan","exp","ln","10^x" operatioins.In gernral,we can complete basic operations except trigonometric function and anti-trigonometric function ,if we want to caculate trigonometric function and anti-trigonometric function,we need choice radian or angle.


How to use it?
=================================================================
  You need download all the file to your windows paltform and 
find the file named caculate.exe which is located in Debug file,then you need double click it, the application will be started.You can do some caculate on it in your computer.
  Though the Caculater would not comparable with other perfect software,it can easy record some someting!















