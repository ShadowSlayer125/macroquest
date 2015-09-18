/*****************************************************************************
    MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
    Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License, version 2, as published by
    the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
******************************************************************************/

namespace EQUIStructs
{


enum UIType
{
   UI_Unknown=-1,
   UI_Class=0,
   UI_RGB=1,
   UI_Point=2,
   UI_Size=3,
   UI_TextureInfo=4,
   UI_Frame=5,
   UI_Ui2DAnimation=6,
   UI_ButtonDrawTemplate=7,
   UI_GaugeDrawTemplate=8,
   UI_SpellGemDrawTemplate=9,
   UI_FrameTemplate=10,
   UI_ScrollbarDrawTemplate=11,
   UI_WindowDrawTemplate=12,
   UI_SliderDrawTemplate=13,
   UI_ScreenPiece=14,
   UI_StaticScreenPiece=15,
   UI_StaticAnimation=16,
   UI_StaticTintedBlendAnimation=17,
   UI_StaticText=18,
   UI_StaticFrame=19,
   UI_StaticHeader=20,
   UI_LayoutStrategy=21,
   UI_LayoutVertical=22,
   UI_LayoutHorizontal=23,
   UI_Control=24,
   UI_TemplateAssoc=25,
   UI_TemplateScreen=26,
   UI_ListboxColumn=27,
   UI_Listbox=28,
   UI_Button=29,
   UI_Gauge=30,
   UI_SpellGem=31,
   UI_HtmlComponent=32,
   UI_InvSlot=33,
   UI_EditBox=34,
   UI_Slider=35,
   UI_Label=36,
   UI_STMLBox=37,
   UI_TreeView=38,
   UI_Combobox=39,
   UI_Page=40,
   UI_TabBox=41,
   UI_LayoutBox=42,
   UI_HorizontalLayoutBox=43,
   UI_VerticalLayoutBox=44,
   UI_FinderBox=45,
   UI_TileLayoutBox=46,
   UI_NamedTemplatePiece=47,
   UI_TemplateContainer=48,
   UI_Screen=49,
   UI_SuiteDefaults=50,
   UI_Screens=51,
   UI_TopLevelWindowList=52,
   UI_HotButton=53,
};

// ***************************************************************************
// Structures
// ***************************************************************************

// 10-24-2003 Lax - Massive overhaul.
// See http://macroquest.sourceforge.net/phpBB2/viewtopic.php?t=3569 for
// standards on structures to make things easier on everyone!
// -- ONLY applies to EQ structs, not MQ structs like alerts, etc.

typedef struct _EQCURRENTSELECTION {
/*0x00*/   DWORD   Unknown;
/*0x04*/   DWORD   SelectedWnd;     //address to selection in tree
/*0x08*/   DWORD   Unknownlodncrap;
/*0x0c*/   DWORD   NumberOfSlots;   //merchantslots == 79
/*0x10*/   DWORD   TextureAnim;
/*0x14*/
} EQCURRENTSELECTION, *PEQCURRENTSELECTION;

#define VFTABLE \
/*0x000*/ LPVOID  IsValid; \
/*0x004*/ LPVOID  vector_deleting_destructor; \
/*0x008*/ LPVOID  DrawNC; \
/*0x00c*/ LPVOID  PostDraw; \
/*0x010*/ LPVOID  PostDraw2; \
/*0x014*/ LPVOID  DrawCursor; \
/*0x018*/ LPVOID  nullsub0x18; \
/*0x01c*/ LPVOID  PostDraw3; \
/*0x020*/ LPVOID  DrawBackground; \
/*0x024*/ LPVOID  DrawTooltip; \
/*0x028*/ LPVOID  DrawTooltipAtPoint; \
/*0x02c*/ LPVOID  GetMinimizedRect; \
/*0x030*/ LPVOID  DrawTitleBar; \
/*0x034*/ LPVOID  GetCursorToDisplay; \
/*0x038*/ LPVOID  HandleLButtonDown; \
/*0x03c*/ LPVOID  HandleLButtonUp; \
/*0x040*/ LPVOID  HandleLButtonHeld; \
/*0x044*/ LPVOID  HandleLButtonUpAfterHeld; \
/*0x048*/ LPVOID  HandleRButtonDown; \
/*0x04c*/ LPVOID  HandleRButtonUp; \
/*0x050*/ LPVOID  HandleRButtonHeld; \
/*0x054*/ LPVOID  HandleRButtonUpAfterHeld; \
/*0x058*/ LPVOID  HandleWheelButtonDown; \
/*0x05c*/ LPVOID  HandleWheelButtonUp; \
/*0x060*/ LPVOID  HandleMouseMove; \
/*0x064*/ LPVOID  HandleWheelMove; \
/*0x068*/ LPVOID  GetDragDropCursor; \
/*0x06c*/ LPVOID  PostDraw4; \
/*0x070*/ LPVOID  OnDragDrop; \
/*0x074*/ LPVOID  GetClickStickCursor; \
/*0x078*/ LPVOID  QueryDropOK; \
/*0x07c*/ LPVOID  OnClickStick; \
/*0x080*/ LPVOID  GetClickStickCursor2; \
/*0x084*/ LPVOID  QueryClickStickDropOK; \
/*0x088*/ LPVOID  WndNotification; \
/*0x08c*/ LPVOID  Unknown8c; \
/*0x090*/ LPVOID  ShowWindow; /* Activate */ \
/*0x094*/ LPVOID  Deactivate; \
/*0x098*/ LPVOID  PostDraw5; \
/*0x09c*/ LPVOID  OnResize; \
/*0x0a0*/ LPVOID  OnResize2; \
/*0x0a4*/ LPVOID  Unknown0xa4; \
/*0x0a8*/ LPVOID  Unknown0xa8; \
/*0x0ac*/ LPVOID  OnMinimizeBox; \
/*0x0b0*/ LPVOID  Unknown0xb0; \
/*0x0b4*/ LPVOID  OnTileBox; \
/*0x0b8*/ LPVOID  PostDraw6; \
/*0x0bc*/ LPVOID  OnMove2; \
/*0x0c0*/ LPVOID  OnMove3; \
/*0x0c4*/ LPVOID  OnProcessFrame; \
/*0x0c8*/ LPVOID  OnVScroll; \
/*0x0cc*/ LPVOID  OnHScroll; \
/*0x0d0*/ LPVOID  PostDraw7; \
/*0x0d4*/ LPVOID  OnMove4; \
/*0x0d8*/ LPVOID  Show; \
/*0x0dc*/ LPVOID  Unknown0xdc; \
/*0x0e0*/ LPVOID  Unknown0xe0; \
/*0x0e4*/ LPVOID  OnMove5; \
/*0x0e8*/ LPVOID  GetTooltip; \
/*0x0ec*/ LPVOID  HitTest; \
/*0x0f0*/ LPVOID  GetHitTestRect; \
/*0x0f4*/ LPVOID  GetInnerRect; \
/*0x0f8*/ LPVOID  GetClientRect; \
/*0x0fc*/ LPVOID  GetMinSize; \
/*0x100*/ LPVOID  GetMaxSize; \
/*0x104*/ LPVOID  GetUntileSize; \
/*0x108*/ LPVOID  IsPointTransparent; \
/*0x10c*/ LPVOID  Unknown10c; \
/*0x110*/ LPVOID  Unknown110; \
/*0x114*/ LPVOID  Unknown114; \
/*0x118*/ LPVOID  SetDrawTemplate; \
/*0x11c*/ LPVOID  Move_Rect; \
/*0x120*/ LPVOID  Move_Point; \
/*0x124*/ LPVOID  SetWindowTextA; \
/*0x128*/ LPVOID  Unknown0x128; \
/*0x12c*/ LPVOID  Unknown0x12c; \
/*0x130*/ LPVOID  Unknown0x130; \
/*0x134*/ LPVOID  SetVScrollPos; \
/*0x138*/ LPVOID  SetHScrollPos; \
/*0x13c*/ LPVOID  Unknown0x13c; \
/*0x140*/ LPVOID  Unknown0x140; \
/*0x144*/ LPVOID  SetAttributesFromSidl; \
/*0x148*/ LPVOID  nullsub_1; \
/*0x14c*/ LPVOID  Unknown0x14c; \
/*0x150*/ LPVOID  Unknown0x150; \
/*0x154*/ LPVOID  Unknown0x154; \
/*0x158*/ LPVOID  Unknown0x158; \
/*0x15c*/ LPVOID  PostDraw8; \
/*0x160*/ LPVOID  Unknown0x160; \
/*0x164*/

typedef struct _CSIDLWNDVFTABLE {
VFTABLE
/*0x164*/ LPVOID  Unknown0x164;
/*0x168*/ LPVOID  Unknown0x168;
/*0x16c*/ LPVOID  LoadIniInfo;
/*0x170*/ LPVOID  StoreIniInfo;
/*0x174*/ LPVOID  Unknown0x174;
/*0x178*/ LPVOID  Unknown0x178;
/*0x17c*/
} CSIDLWNDVFTABLE, *PCSIDLWNDVFTABLE; 

typedef struct _CXWNDVFTABLE {
VFTABLE
} CXWNDVFTABLE, *PCXWNDVFTABLE;

// in CChatWindow__CChatWindow
#define EQ_CHAT_HISTORY_OFFSET 0x280
// in CChatWindow__SetChatFont
#define EQ_CHAT_FONT_OFFSET    0x114

//Actual Size: 1d0 (see 8C1FED in eqgame dated Jun 19 2014) - eqmule
//Actual Size: 1ec (see 8C4FDD in eqgame dated Aug 21 2014) - eqmule
//Actual Size: 1c8 (see 8C614D in eqgame dated Sep 18 2014) - eqmule
//Actual Size: 1f0 (see 8C945D in eqgame dated Jan 22 2014) - eqmule
//Actual Size: 1e8 (see 8C99DD in eqgame dated Feb 20 2014) - eqmule
//Actual Size: 1dc (see 66A2D8 in eqgame dated Mar 10 2015) - eqmule
// actual size 0x1C4 in Mar 23 2015 Live (see 0x6885B8) - eqmule
// actual size 0x1D8 in May 18 2015 Live (see 0x68C678) - eqmule
// actual size 0x1CC in May 27 2015 Live (see 0x68C5B2) - eqmule
// actual size 0x1E4 in Jun 12 2015 Live (see 0x68BDD8) - eqmule
// actual size 0x1D4 in Jun 29 2015 Live (see 0x68BF58) - eqmule
// actual size 0x1D8 in Jul 18 2015 Live (see 0x68F328) - eqmule
// actual size 0x1D0 in Aug 14 2015 Live (see 0x68E912) - eqmule
#define CXW_NO_VTABLE \
/*0x0004*/ void*        pPrevSiblingWnd; \
/*0x0008*/ struct _CSIDLWND*    pNextSiblingWnd; \
/*0x000c*/ void*        pUnknown0xc; \
/*0x0010*/ struct _CSIDLWND*    pFirstChildWnd; \
/*0x0014*/ BYTE         Unknown0x0014[0x5]; \
/*0x0019*/ BYTE         dShow; \
/*0x001a*/ BYTE         Unknown0x001a[0x2]; \
/*0x001c*/ DWORD        TimeMouseOver; \
/*0x0020*/ BYTE         Locked; /*found in CSidlScreenWnd__LoadIniInfo_x*/ \
/*0x0021*/ BYTE         Unknown0x0021[0x17]; \
/*0x0038*/ DWORD        WindowStyle;    /* bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border */ \
/*0x003c*/ BYTE         Unknown0x003c[0x2]; \
/*0x003e*/ BYTE         Alpha; \
/*0x003f*/ BYTE         Unknown0x003f; \
/*0x0040*/ DWORD        HScrollMax; \
/*0x0044*/ BYTE         Unknown0x0044[0x8]; \
/*0x004c*/ BYTE         Minimized; \
/*0x004d*/ BYTE         Unknown0x004d[0x3]; \
/*0x0050*/ DWORD        FadeDuration; \
/*0x0054*/ BYTE         Unknown0x0054[0xc]; \
/*0x0060*/ DWORD        VScrollMax; \
/*0x0064*/ BYTE         Unknown0x0064[0x4]; \
/*0x0068*/ DWORD        UnknownCW; /*found in OnProcessFrame*/\
/*0x006c*/ BYTE         Unknown0x006c[0x20]; \
/*0x008c*/ struct _CXSTR*       WindowText; /*CXWnd__GetWindowTextA_x has this one*/ \
/*0x0090*/ BYTE         Unknown0x0090[0x10]; \
/*0x00a0*/ struct _CXSTR*       XMLToolTip; /*found in CSidlManager__CreateLabel_x*/ \
/*0x00a4*/ BYTE         Unknown0x00a4[0x4]; \
/*0x00a8*/ RECT         Location; \
/*0x00b8*/ BYTE         Unknown0x00b8[0x4]; \
/*0x00bc*/ BYTE         FadeToAlpha; /*found in CSidlScreenWnd__StoreIniInfo_x*/\
/*0x00bd*/ BYTE         Unknown0x00bd[0x1b]; \
/*0x00d8*/ ARGBCOLOR    BGColor; \
/*0x00dc*/ BYTE         Unknown0x00dc; \
/*0x00dd*/ BYTE         Unlockable;     /* found in CSidlScreenWnd__LoadIniInfo_x related to Locked */ \
/*0x00de*/ BYTE         Unknown0x00de[0xa]; \
/*0x00e8*/ DWORD        BGType;         /* found in CSidlScreenWnd__StoreIniInfo_x "BGType" in ini */ \
/*0x00ec*/ BYTE         Unknown0x00ec[0x9]; \
/*0x00f5*/ BYTE         Fades; \
/*0x00f6*/ BYTE         Unknown0x00f6; \
/*0x00f7*/ BYTE         ValidCXWnd; /*IsValid has this one*/\
/*0x00f8*/ BYTE         Unknown0x00f8[0xc]; \
/*0x0104*/ BYTE         Faded; \
/*0x0105*/ BYTE         Unknown0x0105[0x3]; \
/*0x0108*/ RECT         OldLocation; \
/*0x0118*/ DWORD        VScrollPos; \
/*0x011c*/ DWORD        XMLIndex; \
/*0x0120*/ DWORD        TickCount2; \
/*0x0124*/ BYTE         Unknown0x0124[0x14]; \
/*0x0138*/ BYTE         MouseOver; /*found in CXWnd__SetMouseOver_x*/ \
/*0x0139*/ BYTE         Unknown0x0139[0x7]; \
/*0x0140*/ struct _CSIDLWND*    pParentWindow; /*CXWnd__IsDescendantOf_x has this one, If this is NULL, coordinates are absolute... */ \
/*0x0144*/ BYTE         Unknown0x0144[0x8]; \
/*0x014c*/ DWORD        HScrollPos; \
/*0x0150*/ DWORD        ZLayer; /*found in CXWndManager__DrawWindows_x*/ \
/*0x0154*/ BYTE         Unknown0x0154[0x9]; \
/*0x015d*/ BYTE         CloseOnESC;     /* found in CSidlScreenWnd__StoreIniInfo_x, close when ESC is pressed */ \
/*0x015e*/ BYTE         Clickable;      /* found in CChatWindow__CChatWindow_x and the button handlers */ \
/*0x015f*/ BYTE         Unknown0x015f[0x9]; \
/*0x0168*/ LPVOID       DrawTemplate; \
/*0x016c*/ BYTE         Unknown0x016c[0x8]; \
/*0x0174*/ struct _CXSTR*       Tooltip; /*found in CSidlManager__CreateLabel_x*/ \
/*0x0178*/ BYTE         Unknown0x0178[0x34]; \
/*0x01ac*/ BYTE         Enabled; \
/*0x01ad*/ BYTE         Unknown0x01a8[0x23]; \
/*0x01d0*/

#define CXW \
/*0x000*/   struct  _CXWNDVFTABLE   *pvfTable; \
CXW_NO_VTABLE \
/*0x1d0*/

typedef struct _CXWND {
CXW
} CXWND, *PCXWND;
#define GateBind          0
//CSidlScreenWnd__CSidlScreenWnd1_x
//updated from Aug 19 2014 test exe - eqmule
#define SIDL \
/*0x1d0*/ union { \
                        struct _CXSTR* SidlText; /*found in CChatWindow__WndNotification_x*/\
                        DWORD Items; \
                }; \
/*0x1d4*/ union { \
                        struct _CXSTR* SidlScreen; \
                        DWORD SlotID; \
                }; \
/*0x1d8*/ LPVOID SidlPiece; /* CScreenPieceTemplate (important) */ \
/*0x1dc*/ union { /*find in CSidlScreenWnd__dCSidlScreenWnd_x*/ \
                struct { \
                        BYTE Checked; \
                        BYTE Highlighted; \
                        BYTE Unused0x1de[0x2]; \
                }; \
                DWORD MaxChars; \
        }; \
/*0x1e0*/ DWORD TextureAnim; \
/*0x1e4*/ struct  _CXSTR* InputText; /*found in CChatWindow__CChatWindow_x*/\
/*0x1e8*/ DWORD Selector; /*found in CSidlScreenWnd__CSidlScreenWnd1_x*/\
/*0x1ec*/ DWORD PushToSelector; /*found in CSidlScreenWnd__LoadIniInfo_x*/\
/*0x1f0*/ DWORD EnableINIStorage; /*found in CSidlScreenWnd__LoadSidlScreen_x*/\
/*0x1f4*/ union { \
                struct _CXSTR* INIStorageName; /*found in CSidlScreenWnd__LoadSidlScreen_x*/\
                struct _EQINVSLOT* pEQInvSlot; \
        }; \
/*0x1f8*/ BYTE  Unknown0x1f8[0x10];  \
/*0x208*/ LPVOID ContextMenu; /* CTextureAnimation */ \
/*0x20c*/ DWORD Unknown0x20c; /* CTextureAnimation */ \
/*0x210*/ DWORD Unknown0x210; /* CTextureAnimation */ \
/*0x214*/ DWORD Unknown0x214; \
/*0x218*/

#define CSW \
/*0x000*/ struct _CSIDLWNDVFTABLE* pvfTable; \
CXW_NO_VTABLE \
SIDL \

typedef struct _CSIDLWND {
CSW
} CSIDLWND, *PCSIDLWND;

typedef struct _CCONTEXTMENUVFTABLE {
VFTABLE
/*0x164*/ LPVOID CListWnd_OnHeaderClick;
/*0x168*/ LPVOID CListWnd__DrawColumnSeparators;
/*0x16c*/ LPVOID CListWnd__DrawSeparator;
/*0x170*/ LPVOID CListWnd__DrawLine;
/*0x174*/ LPVOID CListWnd__DrawHeader;
/*0x178*/ LPVOID CListWnd__DrawItem;
/*0x17c*/ LPVOID CListWnd__DeleteAll;
/*0x180*/ LPVOID CListWnd__Compare;
/*0x184*/ LPVOID CListWnd__Sort;
/*0x188*/ LPVOID CContextMenu__ShowAt;
/*0x18c*/
} CCONTEXTMENUVFTABLE, *PCCONTEXTMENUVFTABLE; 

//see ref to CContextMenu__CContextMenu_x in CBuffWindow__CBuffWindow
// size 0x280 Jul 18 2015 (see 67AACB) -eqmule
#define CONTEXTTAIL \
/*0x218*/ DWORD ZeroMe; \
/*0x21c*/ DWORD SetToMinus1; /*must be set to -1 in constructor or menu wndnotification wont be called*/ \
/*0x220*/ DWORD WillBeZero1; /*set by contructor to 0*/ \
/*0x224*/ ARGBCOLOR HightLightTextColor; /*set by contructor*/ \
/*0x228*/ ARGBCOLOR HighLightTextBkColor; /*set by contructor*/ \
/*0x22c*/ BYTE ZeroMeOut1[0x24]; \
/*0x250*/ DWORD WillBeZero2; /*constructor sets this to 0*/ \
/*0x254*/ BYTE ZeroMeOut2[0x18]; \
/*0x26c*/ DWORD Unknown0x274; /*constructor sets this to 0x10000*/ \
/*0x270*/ DWORD ZeroMeAsWell; \
/*0x274*/ DWORD Unknown0x27c; /*constructor sets this to 0*/ \
/*0x278*/

#define CONTEXTW \
/*0x000*/   struct  _CCONTEXTMENUVFTABLE   *pvfTable; \
CXW_NO_VTABLE \
SIDL \
CONTEXTTAIL \

typedef struct _CCONTEXTMENU {
CONTEXTW
} CCONTEXTMENU, *PCCONTEXTMENU;

// size 0x298  09-03-2008
typedef struct _CSIDLMGR {
/*0x000*/    BYTE    Unknown0x000[0x144];
/*0x144*/    PVOID   pXMLDataMgr;
/*0x148*/    BYTE    Unknown0x11c[0x150];
/*0x298*/
} CSIDLMGR, *PCSIDLMGR;

//11-6-2003 lax
//Actual size 0x1a4 Jul 18 2015 (see 4ACB15) - eqmule
typedef struct _CXWNDMGR {
/*0x000*/ LPVOID CXWNDMGR__vtable;
/*0x004*/ DWORD Count;
/*0x008*/ struct _CSIDLWND **pWindows;
/*0x00c*/ BYTE Unknown0x00C[0x40];
/*0x04c*/ DWORD LastInteractionTimeStamp;//when mouse or keyboard was last clicked
/*0x050*/ DWORD MouseMoveTimeStamp;//when mouse was last moved
/*0x054*/ DWORD KeyHeldTimeStamp;//how long current/last key has been held
/*0x058*/ BYTE Unknown0x058[0xc];
/*0x064*/ PCSIDLWND LastWindowSelected;//when you select a window its pointer shows up here
/*0x068*/ PCSIDLWND CurrDraggedWindow;//when you drag a window its pointer shows up here
/*0x06c*/ BYTE Unknown0x06c[0x4];
/*0x070*/ PCSIDLWND CurrWindowUnderMouse;//Current window pointer is over if this is 0 we are above MAIN Window
/*0x074*/ PCSIDLWND CurrWindowUnderMouseCopy;//Current window pointer is over if this is 0 we are above MAIN Window
/*0x078*/ BYTE Unknown0x078[0x1c];
/*0x094*/ DWORD ScreenMouseX;
/*0x098*/ DWORD ScreenMouseY;
/*0x09c*/ BYTE Unknown0x09c;
/*0x09d*/ bool KeyboardFlags[4];    // 7d-80
/*0x0a1*/ BYTE Unknown0x0a1[0x27];
/*0x0c8*/ DWORD ScreenMouseXCopy;
/*0x0cc*/ DWORD ScreenMouseYCopy;
/*0x0d0*/ CHAR Unknown0x0d0[0x3c];
/*0x10c*/ DWORD ScreenExtentX;
/*0x110*/ DWORD ScreenExtentY;
/*0x114*/ DWORD Unknown;
/*0x118*/ DWORD font_list_ptr;
/*0x11c*/ BYTE Unknown0x11c[0x14];
/*0x130*/ DWORD ScreenMouseLookX;//last position MouseX was at before we mouselooked
/*0x134*/ DWORD ScreenMouseLookY;//last position MouseY was at before we mouselooked
/*0x138*/ BYTE Unknown0x138[0x6c];
/*0x1a4*/ 
} CXWNDMGR, *PCXWNDMGR;


typedef struct _CONTENTSARRAY {
    struct _CONTENTS* Array[1];
} CONTENTSARRAY, *PCONTENTSARRAY;

// 10-27-2003 Lax
// Actual size 0x208 11-5-2003
typedef struct _EQCHATMGR
{
/*0x000*/ struct _EQCHATWINDOW* ChatWnd[0x20];
/*0x080*/ DWORD NumWindows;
/*0x084*/ DWORD ActiveWindow; // CChat::GetActiveChatWindow
/*0x088*/ DWORD LockedWindow; // CChatManager::GetActiveChatWindow
/*0x08c*/ DWORD Unknown0x08c;
/*0x090*/ struct _EQCHATWINDOW* ChannelMap[0x20];   // channel map
/*0x110*/ BYTE  Unknown0x110[0x28];
/*0x138*/ DWORD Unknown0x138;
/*0x13c*/ DWORD Unknown0x13c;
/*0x140*/ DWORD Unknown0x140;
/*0x144*/ LPVOID ChatMenu;
/*0x148*/ DWORD Unknown0x148;
/*0x14c*/ DWORD Unknown0x14c;
/*0x150*/ DWORD Unknown0x150;
/*0x154*/ DWORD Unknown0x154;
/*0x158*/ LPVOID MeleeMenu;
/*0x15c*/ DWORD Unknown0x15c;
/*0x160*/ LPVOID SpellMenu;
/*0x164*/ DWORD Unknown0x164;
/*0x168*/ DWORD Unknown0x168;
/*0x16c*/ LPVOID ChannelMenu;
/*0x170*/ LPVOID ChatMenu2;
/*0x174*/ LPVOID FilterMenu;
/*0x178*/ DWORD Unknown0x178;
/*0x17c*/ DWORD Unknown0x17c;
/*0x180*/ DWORD Unknown0x180;
/*0x184*/ LPVOID HitsModeMenu;
/*0x188*/ LPVOID MeleeMenu2;
/*0x18c*/ LPVOID HitsModeMenu2;
/*0x190*/ DWORD Unknown0x190;
/*0x194*/ LPVOID HitsModeMenu3;
/*0x198*/ DWORD Unknown0x198;
/*0x19c*/ LPVOID HitsModeMenu4;
/*0x1a0*/ DWORD Unknown0x1a0;
/*0x1a4*/ LPVOID HitsModeMenu5;
/*0x1a8*/ DWORD Unknown0x1a8;
/*0x1ac*/ LPVOID HitsModeMenu6;
/*0x1b0*/ DWORD Unknown0x1b0;
/*0x1b4*/ DWORD Unknown0x1b4; // CChatManager__UpdateTellMenus
/*0x1b8*/ DWORD Unknown0x1b8;
/*0x1bc*/ DWORD Unknown0x1bc; // CChatManager__UpdateTellMenus
/*0x1c0*/ DWORD Unknown0x1c0;
/*0x1c4*/ DWORD Unknown0x1c4; // CChatManager__UpdateTellMenus // raid
/*0x1c8*/ DWORD Unknown0x1c8;
/*0x1cc*/ DWORD Unknown0x1cc; // CChatManager__UpdateTellMenus
/*0x1d0*/ DWORD Unknown0x1d0; // CChatManager__UpdateTellMenus
/*0x1d4*/ DWORD Unknown0x1d4; // CChatManager__UpdateTellMenus
/*0x1d8*/ DWORD Unknown0x1d8;
/*0x1dc*/ DWORD Unknown0x1dc;
/*0x1e0*/ DWORD Unknown0x1e0;
/*0x1e4*/ BYTE  Unknown0x1e4[0x1c];
/*0x200*/ DWORD Unknown0x200;
/*0x204*/ DWORD Unknown0x204;
/*0x208*/
} EQCHATMGR, *PEQCHATMGR;

// Actual size 0x26c 02-14-2007
// 10-27-2003 Lax
typedef struct _EQCHATWINDOW
{
/*0x000*/ struct _CSIDLWND Wnd;
/*0x214*/ struct _EQCHATMGR *ChatManager; 
/*0x218*/ struct _CSIDLWND* InputWnd;
/*0x21c*/ struct _CSIDLWND* OutputWnd;
/*0x220*/ DWORD Unknown0x154;
/*0x224*/ DWORD Unknown0x158;       // need to update locations..
/*0x228*/ BYTE Unknown0x148;
/*0x229*/ BYTE Unknown0x149[0x3f];
/*0x268*/ DWORD Unknown0x188;
/*0x26c*/ DWORD Unknown0x18c;
/*0x270*/ struct _CXSTR *CommandHistory[0x28]; // ->0x198
/*0x310*/ DWORD Unknown0x230;       // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x314*/ DWORD Unknown0x234;       // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x318*/ DWORD FontSize;
/*0x268*/ DWORD Unknown0x23C;
/*0x26c*/
} EQCHATWINDOW, *PEQCHATWINDOW;

// actual size 0x14 10-12-2010
//I think this is correct:
//see (69FF1E) in eqgame.exe dated 2013 11 13 -eqmule
typedef struct _EQINVSLOT {
/*0x00*/    LPVOID pvfTable;        // not based on cxwnd
/*0x04*/    struct _EQINVSLOTWND *pInvSlotWnd;
/*0x08*/    DWORD Unknown0x08;
/*0x0C*/    DWORD InvSlot;
/*0x10*/    BYTE Valid;
/*0x11*/    BYTE Unknown0x11[3];
/*0x14*/    
} EQINVSLOT, *PEQINVSLOT;

// actual size 0x2014 10-12-2010
// confirmed (size) 2013 dec 10 eqgame.exe at 497E7A -eqmule
// confirmed 2014-03-31 - eqmule
typedef struct _EQINVSLOTMGR {
/*0x0000*/    DWORD Unknown0x0000;
/*0x0004*/    struct _EQINVSLOT *SlotArray[0x800];
/*0x2004*/    DWORD TotalSlots;
/*0x2008*/    DWORD Unknown0x2008;
/*0x200c*/    struct _EQINVSLOT *pSelectedItem;
/*0x2010*/    DWORD Unknown0x2010;
/*0x2014*/
} EQINVSLOTMGR, *PEQINVSLOTMGR;

// onetimehero 09-17-03
// ContainerWindow
// Actual Size 0x17C old
typedef struct _EQCONTAINERWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ struct _CONTENTS*   pContents;         // Pointer to the contents of the container;
                                                 // Matches the pointer in CHARINFO.Inventory/Bank/World
/*0x14c*/ struct _CSIDLWND*   pSlots[0x0a];
/*0x000*/ struct _CSIDLWND*   pCombine;
/*0x168*/ struct _CSIDLWND*   pDone;
/*0x16c*/ struct _CSIDLWND*   pIcon;
/*0x170*/ struct _CSIDLWND*   pUnknown;
/*0x174*/ struct _CSIDLWND*   pLabel;
/*0x178*/ BYTE Unknown0x178[4];
/*0x17c*/
} EQCONTAINERWINDOW, *PEQCONTAINERWINDOW;

// Actual Size 0x98  03/15/06
typedef struct _EQ_CONTAINERWND_MANAGER {
/*0x000*/   DWORD pvfTable;                           // NOT based on CXWnd.  Contains only destructor
/*0x004*/   PEQCONTAINERWINDOW pPCContainers[0x22];   // All open containers, including World, in order of opening...
/*0x08c*/   PCONTENTS   pWorldContents;               // Pointer to the contents of the world   If NULL, world container isn't open;
/*0x090*/   DWORD dwWorldContainerID;                 // ID of container in zone, starts at one (zero?) and goes up.
/*0x094*/   DWORD dwTimeSpentWithWorldContainerOpen;  // Cumulative counter?
/*0x078*/
} EQ_CONTAINERWND_MANAGER, *PEQ_CONTAINERWND_MANAGER;

typedef struct _POINT3 {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
} POINT3, *PPOINT3;

// plazmic 08-17-03
// Map Window
typedef struct _MAPLABEL { // sizeof() = 0x38
/*0x00*/    DWORD Unknown0x0;
/*0x04*/    struct _MAPLABEL *pNext;
/*0x08*/    struct _MAPLABEL *pPrev;
/*0x0c*/    POINT3 Location;
/*0x18*/    ARGBCOLOR Color;
/*0x1c*/    DWORD Size;     //1-3;
/*0x20*/    PCHAR Label;
/*0x24*/    DWORD Layer;    //0-3;
/*0x28*/    DWORD Width;
/*0x2c*/    DWORD Height;
/*0x30*/    DWORD unk_0x2c;
/*0x34*/    DWORD unk_0x30;
} MAPLABEL, *PMAPLABEL;

typedef struct _MAPLINE { // sizeof() = 0x28 (think this might be 0x34 now)
    struct _MAPLINE *pNext;
    struct _MAPLINE *pPrev;
    POINT3 Start;
    POINT3 End;
    ARGBCOLOR Color;
    DWORD Layer;          //0-3;
} MAPLINE, *PMAPLINE;

typedef struct _EQTRADESKILLRECIPE {
/*0x00*/ DWORD Unknown0x00;
/*0x04*/ DWORD Trivial;
/*0x08*/ DWORD Unknown0x08;
/*0x0c*/ DWORD Unknown0x0c;
/*0x10*/ DWORD Unknown0x10;
/*0x14*/ CHAR  Name[0x40];
/*0x54*/ DWORD Unknown0x54;
/*0x58*/ DWORD Ingredient[0xa];     // ID# of ingredient(s)
/*0x80*/ DWORD IngredientIcon[0xa]; //Icon# of ingredient(s) (Note: 499 is blank)
} EQTRADESKILLRECIPE, *PEQTRADESKILLRECIPE;

//Size 0x3d8 (02/10/2004)
typedef struct _EQTRADESKILLWINDOW {
/*0x000*/   struct _CSIDLWND Wnd;
/*0x148*/ DWORD Unknown0x148[0x1b];  
/*0x1b4*/ PEQTRADESKILLRECIPE SearchResults[0x64]; 
/*0x344*/ DWORD    Unknown0x344;
/*0x348*/ DWORD Unknown0x348;
/*0x34c*/ DWORD Unknown0x34c;
/*0x350*/ PCONTENTS Container;
/*0x354*/ DWORD Unknown0x354;
/*0x358*/ PEQTRADESKILLRECIPE SelectedRecipe;
/*0x35c*/ DWORD Unknown0x35c;
/*0x360*/ DWORD SkillLevel;
/*0x364*/ DWORD Unknown0x364;
/*0x368*/ DWORD Unknown0x368;
/*0x36c*/ BYTE  Unknown0x36c[0x58];
/*0x3c4*/ DWORD Unknown0x3c4;
/*0x3c8*/ DWORD Unknown0x3c8;
/*0x3cc*/ BYTE  Unknonw0x3cc[0x8];
/*0x3d4*/ DWORD Unknown0x3d4;
/*0x3d8*/ DWORD Unknown0x3d8;
} EQTRADESKILLWINDOW, *PTRADESKILLWINDOW;

typedef struct _GUILDMEMBERINFO {
/*0x000*/ DWORD Unknown0x000; //pointer?
/*0x004*/ BYTE OnlineStatus;  // 00=offline, 01=online
/*0x005*/ BYTE UnknownData0x005;
/*0x006*/ BYTE UnknownData0x006;
/*0x007*/ BYTE Unknown0x007;
/*0x008*/ BYTE Unknown0x008[0x8];
/*0x010*/ CHAR Name[0x40];
/*0x050*/ DWORD Level;
/*0x054*/ DWORD Class; 
/*0x058*/ DWORD Rank;         //0=member, 1=officer, 2=leader
/*0x05c*/ FLOAT UnknownData0x05c;
/*0x060*/ CHAR PublicNote[0x80];
/*0x0e0*/ BYTE Unknown0x0e0[0x180];
/*0x260*/ WORD UnknownData0x260;
/*0x262*/ WORD UnknownData0x262;
/*0x264*/ WORD UnknownData0x264;
/*0x266*/ WORD UnknownData0x266;
} GUILDMEMBERINFO, *PGUILDMEMBERINFO;

//Size: 0x3d0 (02/18/2004)
typedef struct _EQGUILDWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x4c];
/*0x194*/ BYTE Unknown0x194;
/*0x195*/ BYTE ShowOffline;                  // 01 = show offline box is checked
/*0x196*/ BYTE Unknown0x196[0x2];
/*0x198*/ struct _GUILDMEMBERINFO **pMember; // This is a pointer to the beginning of a list of pointers, 
                                             // each representing one player in the guild.  The number of 
                                             // pointers depends upon TotalMemberCount.
/*0x19c*/ DWORD TotalMemberCount;
/*0x1a0*/ DWORD Unknown0x1a0;                // 150?
/*0x1a4*/ DWORD Unknown0x1a4;                // 1?
/*0x1a8*/ DWORD TotalMemberCountAgain;
/*0x1ac*/ BYTE Unknown0x1ac[0x1c];
/*0x1c8*/ CHAR PersonalNotesFilePath[0x40];  // path to personal notes file
/*0x208*/ BYTE Unknown0x208[0x1c0];          // empty
/*0x3c8*/ DWORD Unknown0x3c8;                // 1?
/*0x3cc*/ DWORD Unknown0x3cc;                // some sort of bizaare pointer...
/*0x3d0*/
} EQGUILDWINDOW, *PEQGUILDWINDOW;

typedef struct _EQNOTESWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x04];
/*0x14c*/ struct _CSIDLWND *pEditWnd;
} EQNOTESWINDOW, *PEQNOTESWINDOW;

// Actual size 0x1c8 07-09-2008
typedef struct _EQSPELLINFOWINDOW 
{ 
/*0x000*/ struct _CSIDLWND Wnd;
/*0x208*/ PVOID Unknown0x190;
/*0x20c*/ PVOID Unknown0x194;
/*0x210*/ struct _CSIDLWND *DisplayWnd;
/*0x214*/ PVOID Unknown0x19c; 
/*0x218*/ PVOID Unknown0x1a0; 
/*0x21c*/ PCXSTR ItemInfo;
/*0x220*/ PVOID Unknown0x1a8;
/*0x224*/ DWORD Unknown0x1ac;
/*0x228*/ DWORD Unknown0x1b0;
/*0x22c*/ DWORD Unknown0x1b4;
/*0x230*/ DWORD Unknown0x1b8;
/*0x234*/ PVOID TextureAnim;
/*0x238*/ DWORD SpellID;
/*0x23c*/ DWORD TimeStamp;
/*0x240*/ 
} EQSPELLINFOWINDOW, *PEQSPELLINFOWINDOW;

// Size: 0x1a4 (4/14/2005)
typedef struct _EQMAILWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x158  Finish... */
} EQMAILWINDOW, *PEQMAILWINDOW;

#define Fly                     0

// Actual size 0x1c4 10-9-2003
typedef struct _EQHOTBUTTONWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE Unknown0x138[0xc];
/*0x000*/ DWORD   HotButtonWndView;     //0 to 9 for the different views
/*0x14c*/ struct _CSIDLWND   *HotButtons[0x0a];//these will change when you switch page...
/*0x174*/
} EQHOTBUTTONWINDOW, *PEQHOTBUTTONWINDOW;

typedef struct _LOOTCORPSE {
/*0x000*/   BYTE    Unknown0x000;   // 03 seems very common (for NPC anyway)
/*0x001*/   CHAR    Name[0x4b];
/*0x04c*/   FLOAT   Timer;          //Uncertain the equation used here, but fairly certain it's the timer
/*0x050*/   FLOAT   X;
/*0x054*/   BYTE    Unknown0x054[0x4];
/*0x058*/   FLOAT   Y;
/*0x05c*/   FLOAT   Z;
/*0x060*/   BYTE    Unknown0x060[0x24];
/*0x084*/   DWORD   Flags;
/*0x088*/   BYTE    Unknown0x088[0x4];
/*0x08c*/   DWORD   Unknown0x08c;   //256 seems very common
/*0x090*/
// I think there might be pointers at 0x0e0..but no clue what to
} LOOTCORPSE, *PLOOTCORPSE;

// size 0x180 3-10-2004
typedef struct _EQCOMPASSWINDOW {
/*0x000*/    struct _CSIDLWND Wnd;
/*0x148*/    struct _CSIDLWND *pStrip1;
/*0x14C*/    struct _CSIDLWND *pStrip2;
// in progress.
/*0x16C*/   BOOL DrawLine;
/*0x170*/   DWORD Unknown0x170;
/*0x174*/    DWORD LineRed;
/*0x178*/    DWORD LineGreen;
/*0x17C*/    DWORD LineBlue;
/*0x180*/
} EQCOMPASSWINDOW, *PEQCOMPASSWINDOW;

// used by options window
typedef struct _EQKBASSIGN
{
/*0x00*/    struct _CXSTR *pDescription;
/*0x04*/    DWORD nAssignmentNumber;
/*0x08*/
} EQKBASSIGN, *PEQKBASSIGN;

// size 0x904 3-10-2004
typedef struct _EQOPTIONSWINDOW {
/*0x000*/    struct _CSIDLWND Wnd;
/*0x148*/

/*0x264*/ struct _EQKBASSIGN Binds[0xA1];
/*0x508*/

/*0x904*/
} EQOPTIONSWINDOW, *PEQOPTIONSWINDOW;

// size 0x28 4-24-2004 Lax
typedef struct _EQGRAPHICSENGINE {
/*0x00*/ // Graphics file handler
/*0x04*/
} EQGRAPHICSENGINE, *PEQGRAPHICSENGINE;
#define SafeXLoc 0

//CButtonWnd__CButtonWnd_x
//size is 0x264 see 8C9C9E in eqgame.exe dated 20 Aug 2015 - eqmule
typedef struct _CBUTTONWND {
/*0x000*/ struct    _CXWND Wnd;
/*0x1d0*/ BYTE      Unknown[0x4];
/*0x1d4*/ BYTE      State;        //1=down 0=up
/*0x1d5*/ BYTE      Unknown0x1d5; //something to do with State
/*0x1d6*/ BYTE      Unknown0x1d6[0x12];
/*0x1e8*/ ARGBCOLOR Color;
/*0x1ec*/ BYTE      Unknown0x1ec[0x58];
/*0x244*/ DWORD     TextureAnim;//im guessing now but I think this is the icon displayed use iconcache->geticon to fill it in...
/*0x248*/ BYTE      Unknown0x248[0x1c];
/*0x264*/
} CBUTTONWND, *PCBUTTONWND;
 
typedef struct _CTEXTENTRYWND {
/*0x000*/ struct    _CXWND Wnd;
/*0x1c4*/ DWORD     CursorPos1;
/*0x13c*/ DWORD     CursorPos2; //same as above but only this needs to be set to update cursor position
/*0x140*/
} CTEXTENTRYWND, *PCTEXTENTRYWND;

typedef struct _CLABELWND {
/*0x000*/ struct    _CXWND Wnd;
/*0x1c4*/ BYTE      Unknown[0x8];
/*0x1cc*/ DWORD     SidlPiece;
/*0x1d0*/
} CLABELWND, *PCLABELWND;

typedef struct _LOOTDETAILS {
	/*0x00*/ DWORD	CorpseID;//spawnId of the corpse that has this lootitem
	/*0x04*/ WORD	StackCount;
	/*0x06*/ WORD	UnknownWord;
	/*0x08*/ DWORD	UnknownDWord;
	/*0x0c*/ BYTE	Unknown0x0c;
	/*0x0d*/ CHAR	Name[0x40];
	/*0x4d*/ //more data here? -eqmule
} LOOTDETAILS,*PLOOTDETAILS;
//.text:0041FC2B                 imul    eax, 84h in Mar 31 2015
typedef struct _LOOTITEM
{
	/*0x00*/ DWORD	ItemID;
	/*0x04*/ CHAR	Name[0x40];
	/*0x44*/ DWORD	IconID;
	/*0x48*/ DWORD  IsStackable;
	/*0x4C*/ DWORD  MaxStackSize;
	/*0x50*/ BYTE   NoDrop;//if the item is nodrop this is 1
	/*0x51*/ BYTE   Unknown0x51[0x1b];
	/*0x6c*/ struct _LOOTDETAILS	*LootDetails;
	/*0x70*/ BYTE	Unknown0x70[0xc];
	/*0x7c*/ BYTE	AutoRoll;
	/*0x7d*/ BYTE	Unknown0x7d;
	/*0x7e*/ BYTE	Need;
	/*0x7f*/ BYTE	Greed;
	/*0x80*/ BYTE	No;
	/*0x81*/ BYTE	AlwaysNeed;
	/*0x82*/ BYTE	AlwaysGreed;
	/*0x83*/ BYTE	Never;
	/*0x84*/
} LOOTITEM,*PLOOTITEM;
typedef struct _LOOTLIST {
	/*0x000*/ BYTE	Unknown0x004[0x4];
	/*0x004*/ struct _LOOTITEM *pLootItem;
	/*0x008*/ DWORD	ListSize;
} LOOTLIST,*PLOOTLIST;

//CAdvancedLootWnd__CAdvancedLootWnd_x
//size 0x2D4 see 4B7D11 in May 15 2015 test -eqmule
typedef struct _EQADVLOOTWND {
	/*0x000*/ struct _CSIDLWND     Wnd;
	/*0x218*/ BYTE	Unknown0x0218[0x94];
	/*0x2ac*/ struct _LOOTLIST *pCLootList;//below ref to aAdlw_applyfilt
	/*0x2b0*/ struct _LOOTLIST *pPLootList;//below ref to aAdlw_cllwnd
	/*0x2b4*/ BYTE		Unknown0x2b4[0xc];
	/*0x2c0*/ DWORD		PListCount;
	/*0x2c4*/ BYTE		Unknown0x2c4[0x4];
	/*0x2c8*/ DWORD		ContextMenuId;
	/*0x2cc*/ BYTE		Unknown0x2cc[0x8];
	/*0x2d4*/
} EQADVLOOTWND,*PEQADVLOOTWND;

/******************************************** CHECKED *****************************************************************/
//everything above this line is work in progress/stuff that can be improved/checked/fixed.
//everything below it is 100% checked -eqmule

//CBazaarSearchWnd__CBazaarSearchWnd aBazaarsearchwn
// Actual Size: 0x92b4 (see 49B883) in Nov 21 2014 test - eqmule
typedef struct _BAZAARSEARCHWND {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x8ff8];
	/*0x9210*/ void **      ppTraderData;
	/*0x9214*/ DWORD        hashVal;//find in CBazaarSearchWnd__HandleBazaarMsg_x
	/*0x9218*/ BYTE         Unknown0x9218[0x9c];
	/*0x92b4*/
} BAZAARSEARCHWND, *PBAZAARSEARCHWND;

//CPlayerWindow__CPlayerWindow aPlayerwindow
//Note to self: cant actually find CombatState in it, so no point in looking through IDA for it, but it IS the last dword... so... until that changes, im just gonna accept it...
// Actual Size: 0x2d0 (see 49B1BE) in Nov 21 2014 test - eqmule
typedef struct _CPLAYERWND {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0xb4];
	/*0x02cc*/ DWORD        CombatState;   // 1=debuffed, 2=combat cooldown, 3=stand, 4=sit
	/*0x02d0*/
} CPLAYERWND, *PCPLAYERWND;

// CTargetWindow__CTargetWindow aTargetwindow
// Actual Size: 0x8ac (see 49B052) in Nov 21 2014 test - eqmule
typedef struct _CTARGETWND {
	/*0x0000*/ struct  _CSIDLWND    Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x198];
	/*0x03b0*/ struct _CBUTTONWND * pTargetBuff[NUM_BUFF_SLOTS]; // buff icons
	/*0x0534*/ int          BuffSpellID[NUM_BUFF_SLOTS]; // 0xffffffff if no buff
	/*0x06b8*/ DWORD        BuffTimer[NUM_BUFF_SLOTS];
	/*0x083c*/ BYTE         Unknown0x083c[0x24];
	/*0x0860*/ DWORD        Type;              // 1 = self, 4 = group member, 5 = PC, 7 = NPC
	/*0x0864*/ BYTE         Unknown0x0864[0x48];
	/*0x08ac*/
} CTARGETWND, *PCTARGETWND;

// CBuffWindow__CBuffWindow aBuffwindow
// this is used for both long and shortbuffs...
// Actual Size: 0x700 (see 49AEE6) in Nov 21 2014 test - eqmule
typedef struct _EQBUFFWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0xbc];
	/*0x02d4*/ struct _CBUTTONWND * pBuff[0x24];    // CButton*
	/*0x0364*/ BYTE         Unknown0x0364[0x210];
	/*0x0574*/ DWORD        BuffId[NUM_LONG_BUFFS];
	/*0x061c*/ DWORD        BuffTimer[NUM_LONG_BUFFS];
	/*0x06c4*/ BYTE         Unknown0x06c4[0x28];
	/*0x06ec*/ DWORD        MaxLongBuffs;           //0x2a (NUM_LONG_BUFFS)
	/*0x06f0*/ DWORD        MaxShortBuffs;          //0x37 (NUM_SHORT_BUFFS)
	/*0x06f4*/ BYTE         Unknown0x06f4[0xc];
	/*0x0700*/
} EQBUFFWINDOW, *PEQBUFFWINDOW;

// CSpellGemWnd__CSpellGemWnd
// Individual Gems 
// Actual Size: 0x2fc (see 78AA28) in Feb 19 2015 test - eqmule
typedef struct _EQCASTSPELLGEM {
	/*0x0000*/ struct    _CXWND     Wnd;
	/*0x01d0*/ BYTE         Unknown0x01d0[0x44];
	/*0x0214*/ DWORD        TimeStamp;
	/*0x0218*/ DWORD        RecastTime;
	/*0x021c*/ BYTE         Unknown0x021c[0xb4];
	/*0x02d0*/ DWORD        spellicon;       //if this is equal to FFFFFFFF there is no spell memmed in this slot...
	/*0x02d4*/ DWORD        spellstate;      // 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast
	/*0x02d8*/ BYTE         Unknown0x02d8[0x24];
	/*0x02fc*/
} EQCASTSPELLGEM, *PEQCASTSPELLGEM;

//pinstCCastSpellWnd_x
// CCastSpellWnd__CCastSpellWnd aCastspellwnd
// Actual Size: 0x2a8 (see 49B2D2) in Nov 21 2014 test - eqmule
typedef struct _EQCASTSPELLWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x14];
	/*0x022c*/ struct _EQCASTSPELLGEM   *   SpellSlots[NUM_SPELL_GEMS];//CSPW_Spell%d
	/*0x025c*/ BYTE         Unknown0x025c[0x4c];
	/*0x02a8*/
} EQCASTSPELLWINDOW, *PEQCASTSPELLWINDOW;

// Actual Size: 0x2b0 (see 78AB39) in Feb 19 2015 test - eqmule
typedef struct _EQINVSLOTWND {
	/*0x0000*/ struct _CXWND        Wnd;      //----/ actually CButtonWnd
	/*0x01d0*/ BYTE         Unknown0x01d0[0x98];
	/*0x0268*/ LONG         WindowType;        // ieatacid has this as InventoryType
	// 00 for inventory
	// 01 for bank
	// 02 for shared bank
	// 03 for trader window
	// 04 for World/Tradeskill/Combine
	// 11 for loot window
	/*0x026c*/ WORD         InvSlot;
	/*0x026e*/ WORD         BagSlot;
	/*0x0270*/ WORD         GlobalSlot;
	/*0x0272*/ WORD         RandomNum;              //no idea what this is, it changes upon login but we need it for moveitem... -eqmule
	/*0x0274*/ BYTE         Unknown0x0274[0x20];
	/*0x0294*/ struct _EQINVSLOT *  pInvSlot;
	/*0x0298*/ BYTE         Unknown0x0298[0x8];
	/*0x02A0*/ BOOL         ProcessClick;
	/*0x02A4*/ BYTE         Unknown0x02A4[0xc];
	/*0x02b0*/
} EQINVSLOTWND, *PEQINVSLOTWND;

// CItemDisplayWindow__CItemDisplayWindow aItemdisplaywin
// Actual Size: 0x5f8 (see 6B89DF) in Nov 21 2014 test - eqmule
typedef struct _EQITEMWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ struct _CSIDLWND *   DisplayWnd;
	/*0x021c*/ BYTE         Unknown0x021c[0x70];
	/*0x028c*/ PCXSTR       ItemInfo;
	/*0x0290*/ PCXSTR       WindowTitle;
	/*0x0294*/ BYTE         Unknown0x0294[0x8];
	/*0x029c*/ PCXSTR       UnknownCXStr; // if this is NULL don't populate item data in MQ2ItemDisplay
	/*0x02a0*/ BYTE         Unknown0x02a0[0x8];
	/*0x02a8*/ PCONTENTS    pItem;
	/*0x02ac*/ BYTE         Unknown0x02ac[0x34c];
	/*0x05f8*/
} EQITEMWINDOW, *PEQITEMWINDOW;

//CLootWnd__CLootWnd aLootwnd
// Actual Size: 0x3a0 (see 49B655) in Nov 21 2014 test - eqmule
typedef struct _EQLOOTWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ void *       vftable; // for CLootWnd::DialogResponse handler
	/*0x021c*/ BYTE         Unknown0x021c[0x9c];
	/*0x02b8*/ DWORD        NumOfSlots;
	/*0x02bc*/ BYTE         Unknown0x02bc[0x4];
	/*0x02c0*/ struct _INVENTORYARRAY *     pInventoryArray;
	/*0x02c4*/ DWORD        NumOfSlots2;
	/*0x02c8*/ DWORD        NumOfSlots3;
	/*0x02cc*/ BYTE         Unknown0x02cc[0x24];
	/*0x02f0*/ BYTE         Unknown0x02f0;
	/*0x02f1*/ BYTE         Unknown0x02f1;
	/*0x02f2*/ BYTE         Unknown0x02f2;
	/*0x02f3*/ BYTE         Unknown0x02f3;
	/*0x02f4*/ struct _CSIDLWND *   LootInvWnd;
	/*0x02f8*/ struct _CSILDWND *   LootSlotWnd[0x22];
	/*0x0380*/ struct _CSIDLWND *   LW_CorpseName;
	/*0x0384*/ struct _CSIDLWND *   DoneButton;
	/*0x0388*/ struct _CSIDLWND *   BroadcastButton;
	/*0x038c*/ struct _CSIDLWND *   LootAllButton;
	/*0x0390*/ BYTE         Unknown0x0390[0x10];
	/*0x03a0*/
} EQLOOTWINDOW, *PEQLOOTWINDOW;

// pLines address = 0x254 + 0x035c = 0x05b0 (address of pMapViewMapVfTable)
// CMapViewWnd__CMapViewWnd_x
// Actual Size: 0x614 (see 49AD47) in Nov 21 2014 test - eqmule
typedef struct _EQMAPWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x40];
	/*0x0258*/ CHAR         shortzonename[0x20];
	/*0x0278*/ BYTE         Unknown0x0278[0x9c];
	/*0x0314*/ struct _CXWND  *     wnd;           // its the MVW_MapRenderArea window... found at aMvw_maprendera
	/*0x0318*/ BYTE         Unknown0x0318[0x38];
	/*0x0350*/ struct _CSIDLWNDVFTABLE    * pMapViewMapVfTable; // found at aMapviewmap
	/*0x0354*/ BYTE         Unknown0x0354[0x244];
	/*0x0598*/ PMAPLINE     pLines;     //0x248
	/*0x059c*/ PMAPLABEL    pLabels;    //0x24c
	/*0x05a0*/ BYTE         Unknown0x05a0[0x74];
	/*0x0614*/
} EQMAPWINDOW, *PEQMAPWINDOW;

// 20120316 - ieatacid
// 20130819 confirmed  - eqmule
struct merchdata {
	/*0x00*/ void   *vftable;
	/*0x04*/ BYTE   Unknown0x4[0xc];
	/*0x10*/ DWORD  MerchSlots;
	/*0x14*/ DWORD  Unknown0x14;
	/*0x18*/ struct _CONTENTSARRAY *pMerchArray;
	/*0x1c*/ DWORD  MerchMaxSlots;
	/*0x20*/
};

struct merch_other {
	merchdata *pMerchData;
	void *other;
	void *other2;
};

//CMerchantWnd__CMerchantWnd (aMerchantwnd)
// Actual Size: 0x2b4 (see 49B76F) in Nov 21 2014 test - eqmule
typedef struct _EQMERCHWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x10];
	/*0x0228*/ merch_other *        pMerchOther;//found in CMerchantWnd__CMerchantWnd
	/*0x022c*/ BYTE         Unknown0x022c[0x8];
	/*0x0234*/ FLOAT        Markup;//found in CMerchantWnd__DisplayBuyOrSellPrice_x
	/*0x0238*/ BYTE         Unknown0x0238[0xc];
	/*0x0244*/ DWORD        SelectedSlotID;//found in CMerchantWnd__RequestBuyItem_x
	/*0x0248*/ BYTE         Unknown0x0248[0x6c];
	/*0x02b4*/
} EQMERCHWINDOW, *PEQMERCHWINDOW;

//CPetInfoWindow__CPetInfoWindow aPetinfowindow
// Actual Size: 0x918 (see 49A782) in Nov 21 2014 test - eqmule
typedef struct _EQPETINFOWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0x8];
	/*0x0220*/ DWORD                PetSpawnID;//The pets SpawnID
	/*0x0224*/ BYTE         Unknown0x0224[0x8];
	/*0x022c*/ struct _CBUTTONWND * pButton[0xe];//there are 14 buttons on the petinfowin with text that can be set to attack,none,back and so on, these are those...
	/*0x0264*/ BYTE         Unknown0x0264[0x8];
	/*0x026c*/ struct _CBUTTONWND * pAttackButton;//if 0 its not assigned.
	/*0x0270*/ struct _CBUTTONWND * pQAttackButton;//if 0 its not assigned.
	/*0x0274*/ struct _CBUTTONWND * pFollowButton;//if 0 its not assigned.
	/*0x0278*/ struct _CBUTTONWND * pGuardButton;//if 0 its not assigned.
	/*0x027c*/ struct _CBUTTONWND * pSitButton;//if 0 its not assigned.
	/*0x0280*/ struct _CBUTTONWND * pStopButton;//if 0 its not assigned.
	/*0x0284*/ BYTE         Unknown0x0284[0x1bc];
	/*0x0440*/ struct _CSIDLWND *   pWnd[NUM_BUFF_SLOTS]; // buff icons?
	/*0x05c4*/ int          Buff[NUM_BUFF_SLOTS];        // Spell ID# of each buff -- 97 total
	/*0x0748*/ BYTE         Unknown0x0748[0x20];
	/*0x0768*/ DWORD        PetBuffTimer[NUM_BUFF_SLOTS]; // duration until buff fades, in thousands of a second
	/*0x08ec*/ BYTE         Unknown0x08ec[0x1f];
	/*0x090b*/ BYTE         Sit;//0/1 is off/on
	/*0x090c*/ BYTE         Stop;//0/1 is off/on
	/*0x090d*/ BYTE         ReGroup;//0/1 is off/on
	/*0x090e*/ BYTE         Follow;//0/1 is off/on
	/*0x090f*/ BYTE         Guard;//0/1 is off/on
	/*0x0910*/ BYTE         Taunt;//0/1 is off/on
	/*0x0911*/ BYTE         Hold;//0/1 is off/on
	/*0x0912*/ BYTE         GHold;//0/1 is off/on
	/*0x0913*/ BYTE         Focus;//0/1 is off/on
	/*0x0914*/ BYTE         Unknown0x0914[0x4];
	/*0x0918*/
} EQPETINFOWINDOW, *PEQPETINFOWINDOW;

//CRaidWindow__CRaidWindow
//aClasscolorD
// Actual Size: 0x38c (see 4B1E05) in Feb 19 2015 test - eqmule
typedef struct _EQRAIDWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0xb8];
	/*0x02d0*/ DWORD        ClassColors[0x10];
	/*0x0310*/ BYTE         Unknown0x0310[0x7c];
	/*0x038c*/
} EQRAIDWINDOW, *PEQRAIDWINDOW;

//CTradeWnd__CTradeWnd aTradewnd
// Actual Size: 0x2f8 (see 49B7CB) in Nov 21 2014 test - eqmule
typedef struct _EQTRADEWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0218*/ BYTE         Unknown0x0218[0xd8];
	/*0x02f0*/ BYTE         HisTradeReady;
	/*0x02f1*/ BYTE         MyTradeReady;
	/*0x02f2*/ BYTE         TradeWndOpen;
	/*0x02f3*/ BYTE         Unknown0x02f3[0x5];
	/*0x02f8*/
} EQTRADEWINDOW, *PEQTRADEWINDOW;

};
using namespace EQUIStructs;
