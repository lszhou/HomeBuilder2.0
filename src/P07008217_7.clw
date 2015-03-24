; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CP07008217_7View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "P07008217_7.h"
LastPage=0

ClassCount=8
Class1=CP07008217_7App
Class2=CP07008217_7Doc
Class3=CP07008217_7View
Class4=CMainFrame

ResourceCount=10
Resource1=IDR_MAINFRAME
Resource2=IDD_Supply (Chinese (P.R.C.))
Class5=CAboutDlg
Resource3=IDD_ABOUTBOX
Class6=TSignup
Class7=MSignup
Resource4=IDD_MSignup
Class8=Supply
Resource5=IDD_TSignup
Resource6=IDR_MAINFRAME (Chinese (P.R.C.))
Resource7=IDD_ABOUTBOX (Chinese (P.R.C.))
Resource8=IDD_MSignup (Chinese (P.R.C.))
Resource9=IDD_TSignup (Chinese (P.R.C.))
Resource10=IDD_Supply

[CLS:CP07008217_7App]
Type=0
HeaderFile=P07008217_7.h
ImplementationFile=P07008217_7.cpp
Filter=N

[CLS:CP07008217_7Doc]
Type=0
HeaderFile=P07008217_7Doc.h
ImplementationFile=P07008217_7Doc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC

[CLS:CP07008217_7View]
Type=0
HeaderFile=P07008217_7View.h
ImplementationFile=P07008217_7View.cpp
Filter=C
BaseClass=CListView
VirtualFilter=VWC
LastObject=ID_OUTPUT_AREA


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_Input_Teachter




[CLS:CAboutDlg]
Type=0
HeaderFile=P07008217_7.cpp
ImplementationFile=P07008217_7.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308481
Control3=IDC_STATIC,static,1342308353
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_APP_ABOUT
Command11=ID_Input_Teachter
Command12=ID_Input_Supply
Command13=ID_Output_Teachter
Command14=ID_OUTPUT_MARRIED
Command15=ID_OUTPUT_PROFESSIOR
Command16=ID_OUTPUT_TEACHER
Command17=ID_OUTPUT_AREA
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_TSignup]
Type=1
Class=TSignup
ControlCount=24
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_8,static,1342308352
Control5=IDC_TName,edit,1350631552
Control6=IDC_1,static,1342308352
Control7=IDC_TMan,button,1342177289
Control8=IDC_TWoman,button,1342177289
Control9=IDC_STATIC,static,1342308352
Control10=IDC_TTitle,combobox,1344340226
Control11=IDC_STATIC,static,1342308352
Control12=IDC_TBirthday,edit,1350631552
Control13=IDC_STATIC,static,1342308352
Control14=IDC_TWorkday,edit,1350631552
Control15=IDC_STATIC,static,1342308352
Control16=IDC_TRecord,combobox,1344340226
Control17=IDC_STATIC,static,1342308352
Control18=IDC_TArea,edit,1350631552
Control19=IDC_Member,button,1342242816
Control20=IDC_STATIC,static,1342308352
Control21=IDC_TGrade,combobox,1344340226
Control22=IDC_2,static,1342308352
Control23=IDC_TMarried,button,1342308361
Control24=IDC_TUnmarried,button,1342177289

[DLG:IDD_MSignup]
Type=1
Class=MSignup
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_8,static,1342308352
Control4=IDC_MName,edit,1350631552
Control5=IDC_1,static,1342308352
Control6=IDC_MMan,button,1342177289
Control7=IDC_MWoman,button,1342177289
Control8=IDC_STATIC,static,1342308352
Control9=IDC_MBirthday,edit,1350631552

[CLS:TSignup]
Type=0
HeaderFile=TSignup.h
ImplementationFile=TSignup.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_TGrade
VirtualFilter=dWC

[CLS:MSignup]
Type=0
HeaderFile=MSignup.h
ImplementationFile=MSignup.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_MMan

[DLG:IDD_Supply]
Type=1
Class=Supply
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_8,static,1342308352
Control4=IDC_Name,edit,1350631552
Control5=IDC_q,static,1342308352
Control6=IDC_Grade,combobox,1344340226

[CLS:Supply]
Type=0
HeaderFile=Supply.h
ImplementationFile=Supply.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_Grade

[TB:IDR_MAINFRAME (Chinese (P.R.C.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME (Chinese (P.R.C.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_APP_ABOUT
Command11=ID_Input_Teachter
Command12=ID_Input_Supply
Command13=ID_Output_Teachter
Command14=ID_Output_Check
CommandCount=14

[ACL:IDR_MAINFRAME (Chinese (P.R.C.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_ABOUTBOX (Chinese (P.R.C.))]
Type=1
Class=?
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TSignup (Chinese (P.R.C.))]
Type=1
Class=TSignup
ControlCount=19
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_8,static,1342308352
Control5=IDC_TName,edit,1350631552
Control6=IDC_1,static,1342308352
Control7=IDC_TMan,button,1342177289
Control8=IDC_TWoman,button,1342177289
Control9=IDC_STATIC,static,1342308352
Control10=IDC_TTitle,combobox,1344340226
Control11=IDC_STATIC,static,1342308352
Control12=IDC_TBirthday,edit,1350631552
Control13=IDC_STATIC,static,1342308352
Control14=IDC_TWorkday,edit,1350631552
Control15=IDC_STATIC,static,1342308352
Control16=IDC_TRecord,combobox,1344340226
Control17=IDC_STATIC,static,1342308352
Control18=IDC_TArea,edit,1350631552
Control19=IDC_Member,button,1342242816

[DLG:IDD_MSignup (Chinese (P.R.C.))]
Type=1
Class=MSignup
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_8,static,1342308352
Control4=IDC_MName,edit,1350631552
Control5=IDC_1,static,1342308352
Control6=IDC_MMan,button,1342177289
Control7=IDC_MWoman,button,1342177289
Control8=IDC_STATIC,static,1342308352
Control9=IDC_MBirthday,edit,1350631552

[DLG:IDD_Supply (Chinese (P.R.C.))]
Type=1
Class=Supply
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_8,static,1342308352
Control4=IDC_Name,edit,1350631552
Control5=IDC_q,static,1342308352
Control6=IDC_Grade,combobox,1344340226

