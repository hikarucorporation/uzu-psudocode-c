// Function : X11Symbols
// Namespace: juce:X11Symbols
// Entry    : 001deed0
// Prototype: undefined X11Symbols(X11Symbols * this)
// Body     : 001deed0 - 001df7ef


/* juce::X11Symbols::X11Symbols() */

void __thiscall juce::X11Symbols::X11Symbols(X11Symbols *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  
  *(code **)this = xAllocClassHint::{lambda()#1}::__invoke;
  *(code **)(this + 8) = xAllocSizeHints::{lambda()#1}::__invoke;
  *(code **)(this + 0x10) = xAllocWMHints::{lambda()#1}::__invoke;
  *(code **)(this + 0x18) = xBitmapBitOrder::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x20) = xBitmapUnit::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x28) =
       xChangeActivePointerGrab::{lambda(_XDisplay*,unsigned_int,unsigned_long,unsigned_long)#1}::
       __invoke;
  *(code **)(this + 0x30) =
       xChangeProperty::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,unsigned_long,int,int,unsigned_char_const*,int)#1}
       ::__invoke;
  *(code **)(this + 0x38) =
       xCheckTypedWindowEvent::{lambda(_XDisplay*,unsigned_long,int,_XEvent*)#1}::__invoke;
  *(code **)(this + 0x40) =
       xCheckWindowEvent::{lambda(_XDisplay*,unsigned_long,long,_XEvent*)#1}::__invoke;
  *(code **)(this + 0x48) =
       xClearArea::{lambda(_XDisplay*,unsigned_long,int,int,unsigned_int,unsigned_int,int)#1}::
       __invoke;
  *(code **)(this + 0x50) = xCloseDisplay::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x58) = xConnectionNumber::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x60) =
       xConvertSelection::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long)#1}
       ::__invoke;
  *(code **)(this + 0x68) =
       xCreateColormap::{lambda(_XDisplay*,unsigned_long,Visual*,int)#1}::__invoke;
  *(code **)(this + 0x70) = xCreateFontCursor::{lambda(_XDisplay*,unsigned_int)#1}::__invoke;
  *(code **)(this + 0x78) =
       xCreateGC::{lambda(_XDisplay*,unsigned_long,unsigned_long,XGCValues*)#1}::__invoke;
  *(code **)(this + 0x80) =
       xCreateImage::
       {lambda(_XDisplay*,Visual*,unsigned_int,int,int,char_const*,unsigned_int,unsigned_int,int,int)#1}
       ::__invoke;
  *(code **)(this + 0x88) =
       xCreatePixmap::{lambda(_XDisplay*,unsigned_long,unsigned_int,unsigned_int,unsigned_int)#1}::
       __invoke;
  *(code **)(this + 0x90) =
       xCreatePixmapCursor::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,XColor*,XColor*,unsigned_int,unsigned_int)#1}
       ::__invoke;
  *(code **)(this + 0x98) =
       xCreatePixmapFromBitmapData::
       {lambda(_XDisplay*,unsigned_long,char_const*,unsigned_int,unsigned_int,unsigned_long,unsigned_long,unsigned_int)#1}
       ::__invoke;
  *(code **)(this + 0xa0) =
       xCreateWindow::
       {lambda(_XDisplay*,unsigned_long,int,int,unsigned_int,unsigned_int,unsigned_int,int,unsigned_int,Visual*,unsigned_long,XSetWindowAttributes*)#1}
       ::__invoke;
  *(code **)(this + 0xa8) = xDefaultRootWindow::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0xb0) = xDefaultScreen::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0xb8) = xDefaultScreenOfDisplay::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0xc0) = xDefaultVisual::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 200) =
       xDefineCursor::{lambda(_XDisplay*,unsigned_long,unsigned_long)#1}::__invoke;
  *(code **)(this + 0xd0) = xDeleteContext::{lambda(_XDisplay*,unsigned_long,int)#1}::__invoke;
  *(code **)(this + 0xd8) =
       xDeleteProperty::{lambda(_XDisplay*,unsigned_long,unsigned_long)#1}::__invoke;
  *(code **)(this + 0xe0) = xDestroyImage::{lambda(_XImage*)#1}::__invoke;
  *(code **)(this + 0xe8) = xDestroyWindow::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0xf0) = xDisplayHeight::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0xf8) = xDisplayHeightMM::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x100) = xDisplayWidth::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x108) = xDisplayWidthMM::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x110) = xEventsQueued::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x118) = xFindContext::{lambda(_XDisplay*,unsigned_long,int,char**)#1}::__invoke
  ;
  *(code **)(this + 0x120) = xFlush::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x128) = xFree::{lambda(void*)#1}::__invoke;
  *(code **)(this + 0x130) = xFreeCursor::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x138) = xFreeColormap::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x140) = xFreeGC::{lambda(_XDisplay*,_XGC*)#1}::__invoke;
  *(code **)(this + 0x148) = xFreeModifiermap::{lambda(XModifierKeymap*)#1}::__invoke;
  *(code **)(this + 0x150) = xFreePixmap::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x158) = xGetAtomName::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x160) =
       xGetErrorDatabaseText::
       {lambda(_XDisplay*,char_const*,char_const*,char_const*,char_const*,int)#1}::__invoke;
  *(code **)(this + 0x168) = xGetErrorText::{lambda(_XDisplay*,int,char_const*,int)#1}::__invoke;
  *(code **)(this + 0x170) =
       xGetGeometry::
       {lambda(_XDisplay*,unsigned_long,unsigned_long*,int*,int*,unsigned_int*,unsigned_int*,unsigned_int*,unsigned_int*)#1}
       ::__invoke;
  *(code **)(this + 0x178) =
       xGetImage::
       {lambda(_XDisplay*,unsigned_long,int,int,unsigned_int,unsigned_int,unsigned_long,int)#1}::
       __invoke;
  *(code **)(this + 0x180) = xGetInputFocus::{lambda(_XDisplay*,unsigned_long*,int*)#1}::__invoke;
  *(code **)(this + 0x188) = xGetModifierMapping::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 400) = xGetPointerMapping::{lambda(_XDisplay*,unsigned_char*,int)#1}::__invoke;
  *(code **)(this + 0x198) = xGetSelectionOwner::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x1a0) = xGetVisualInfo::{lambda(_XDisplay*,long,XVisualInfo*,int*)#1}::__invoke
  ;
  *(code **)(this + 0x1a8) = xGetWMHints::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x1b0) =
       xGetWindowAttributes::{lambda(_XDisplay*,unsigned_long,XWindowAttributes*)#1}::__invoke;
  *(code **)(this + 0x1b8) =
       xGetWindowProperty::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,long,long,int,unsigned_long,unsigned_long*,int*,unsigned_long*,unsigned_long*,unsigned_char**)#1}
       ::__invoke;
  *(code **)(this + 0x1c0) =
       xGrabPointer::
       {lambda(_XDisplay*,unsigned_long,int,unsigned_int,int,int,unsigned_long,unsigned_long,unsigned_long)#1}
       ::__invoke;
  *(code **)(this + 0x1c8) = xGrabServer::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x1d0) = xImageByteOrder::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x1d8) = xInitImage::{lambda(_XImage*)#1}::__invoke;
  *(code **)(this + 0x1e0) = xInitThreads::{lambda()#1}::__invoke;
  *(code **)(this + 0x1e8) = xInstallColormap::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x1f0) = xInternAtom::{lambda(_XDisplay*,char_const*,int)#1}::__invoke;
  *(code **)(this + 0x1f8) =
       xkbKeycodeToKeysym::{lambda(_XDisplay*,unsigned_char,unsigned_int,unsigned_int)#1}::__invoke;
  *(code **)(this + 0x200) = xKeysymToKeycode::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x208) = xListProperties::{lambda(_XDisplay*,unsigned_long,int*)#1}::__invoke;
  *(code **)(this + 0x210) = xLockDisplay::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x218) =
       xLookupString::{lambda(XKeyEvent*,char_const*,int,unsigned_long*,_XComposeStatus*)#1}::
       __invoke;
  *(code **)(this + 0x220) = xMapRaised::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x228) = xMapWindow::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x230) =
       xMoveResizeWindow::{lambda(_XDisplay*,unsigned_long,int,int,unsigned_int,unsigned_int)#1}::
       __invoke;
  *(code **)(this + 0x238) = xNextEvent::{lambda(_XDisplay*,_XEvent*)#1}::__invoke;
  *(code **)(this + 0x240) = xOpenDisplay::{lambda(char_const*)#1}::__invoke;
  *(code **)(this + 0x248) = xPeekEvent::{lambda(_XDisplay*,_XEvent*)#1}::__invoke;
  *(code **)(this + 0x250) = xPending::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 600) =
       xPutImage::
       {lambda(_XDisplay*,unsigned_long,_XGC*,_XImage*,int,int,int,int,unsigned_int,unsigned_int)#1}
       ::__invoke;
  *(code **)(this + 0x260) = xPutPixel::{lambda(_XImage*,int,int,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x268) =
       xQueryBestCursor::
       {lambda(_XDisplay*,unsigned_long,unsigned_int,unsigned_int,unsigned_int*,unsigned_int*)#1}::
       __invoke;
  *(code **)(this + 0x270) =
       xQueryExtension::{lambda(_XDisplay*,char_const*,int*,int*,int*)#1}::__invoke;
  *(code **)(this + 0x278) =
       xQueryPointer::
       {lambda(_XDisplay*,unsigned_long,unsigned_long*,unsigned_long*,int*,int*,int*,int*,unsigned_int*)#1}
       ::__invoke;
  *(code **)(this + 0x280) =
       xQueryTree::
       {lambda(_XDisplay*,unsigned_long,unsigned_long*,unsigned_long*,unsigned_long**,unsigned_int*)#1}
       ::__invoke;
  *(code **)(this + 0x288) = xRefreshKeyboardMapping::{lambda(XMappingEvent*)#1}::__invoke;
  *(code **)(this + 0x290) =
       xReparentWindow::{lambda(_XDisplay*,unsigned_long,unsigned_long,int,int)#1}::__invoke;
  *(code **)(this + 0x298) =
       xResizeWindow::{lambda(_XDisplay*,unsigned_long,unsigned_int,unsigned_int)#1}::__invoke;
  *(code **)(this + 0x2a0) = xRestackWindows::{lambda(_XDisplay*,unsigned_long*,int)#1}::__invoke;
  *(code **)(this + 0x2a8) = xRootWindow::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x2b0) = xSaveContext::{lambda(_XDisplay*,unsigned_long,int,char*)#1}::__invoke;
  *(code **)(this + 0x2b8) = xScreenCount::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x2c0) = xScreenNumberOfScreen::{lambda(Screen*)#1}::__invoke;
  *(code **)(this + 0x2c8) = xSelectInput::{lambda(_XDisplay*,unsigned_long,long)#1}::__invoke;
  *(code **)(this + 0x2d0) =
       xSendEvent::{lambda(_XDisplay*,unsigned_long,int,long,_XEvent*)#1}::__invoke;
  *(code **)(this + 0x2d8) =
       xSetClassHint::{lambda(_XDisplay*,unsigned_long,XClassHint*)#1}::__invoke;
  *(code **)(this + 0x2e0) = xSetErrorHandler::{lambda(int(*)(_XDisplay*,XErrorEvent*))#1}::__invoke
  ;
  *(code **)(this + 0x2e8) = xSetIOErrorHandler::{lambda(int(*)(_XDisplay*))#1}::__invoke;
  *(code **)(this + 0x2f0) =
       xSetInputFocus::{lambda(_XDisplay*,unsigned_long,int,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x2f8) =
       xSetSelectionOwner::{lambda(_XDisplay*,unsigned_long,unsigned_long,unsigned_long)#1}::
       __invoke;
  *(code **)(this + 0x300) = xSetWMHints::{lambda(_XDisplay*,unsigned_long,XWMHints*)#1}::__invoke;
  *(code **)(this + 0x308) =
       xSetWMIconName::{lambda(_XDisplay*,unsigned_long,XTextProperty*)#1}::__invoke;
  *(code **)(this + 0x310) =
       xSetWMName::{lambda(_XDisplay*,unsigned_long,XTextProperty*)#1}::__invoke;
  *(code **)(this + 0x318) =
       xSetWMNormalHints::{lambda(_XDisplay*,unsigned_long,XSizeHints*)#1}::__invoke;
  *(code **)(this + 800) =
       xStringListToTextProperty::{lambda(char**,int,XTextProperty*)#1}::__invoke;
  *(code **)(this + 0x328) =
       xutf8TextListToTextProperty::
       {lambda(_XDisplay*,char**,int,XICCEncodingStyle,XTextProperty*)#1}::__invoke;
  *(code **)(this + 0x330) = xSync::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x338) = xSynchronize::{lambda(_XDisplay*,int)#1}::__invoke;
  *(code **)(this + 0x340) =
       xTranslateCoordinates::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,int,int,int*,int*,unsigned_long*)#1}::__invoke
  ;
  *(code **)(this + 0x348) = xrmUniqueQuark::{lambda()#1}::__invoke;
  *(code **)(this + 0x350) = xUngrabPointer::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x358) = xUngrabServer::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x360) = xUnlockDisplay::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x368) = xUnmapWindow::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x370) =
       xWarpPointer::
       {lambda(_XDisplay*,unsigned_long,unsigned_long,int,int,unsigned_int,unsigned_int,int,int)#1}
       ::__invoke;
  *(code **)(this + 0x378) = xcursorImageCreate::{lambda(int,int)#1}::__invoke;
  *(code **)(this + 0x380) = xcursorImageLoadCursor::{lambda(_XDisplay*,_XcursorImage*)#1}::__invoke
  ;
  *(code **)(this + 0x388) = xcursorImageDestroy::{lambda(_XcursorImage*)#1}::__invoke;
  *(undefined8 *)(this + 0x390) = 0x1e0000;
  *(code **)(this + 0x398) = xineramaQueryScreens::{lambda(_XDisplay*,int*)#1}::__invoke;
  *(code **)(this + 0x3a0) = xRRGetScreenResources::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x3a8) = xRRFreeScreenResources::{lambda(_XRRScreenResources*)#1}::__invoke;
  *(code **)(this + 0x3b0) =
       xRRGetOutputInfo::{lambda(_XDisplay*,_XRRScreenResources*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x3b8) = xRRFreeOutputInfo::{lambda(_XRROutputInfo*)#1}::__invoke;
  *(code **)(this + 0x3c0) =
       xRRGetCrtcInfo::{lambda(_XDisplay*,_XRRScreenResources*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x3c8) = xRRFreeCrtcInfo::{lambda(_XRRCrtcInfo*)#1}::__invoke;
  *(code **)(this + 0x3d0) = xRRGetOutputPrimary::{lambda(_XDisplay*,unsigned_long)#1}::__invoke;
  *(code **)(this + 0x3d8) = xShmAttach::{lambda(_XDisplay*,XShmSegmentInfo*)#1}::__invoke;
  *(code **)(this + 0x3e0) =
       xShmCreateImage::
       {lambda(_XDisplay*,Visual*,unsigned_int,int,char_const*,XShmSegmentInfo*,unsigned_int,unsigned_int)#1}
       ::__invoke;
  *(code **)(this + 1000) = xShmDetach::{lambda(_XDisplay*,XShmSegmentInfo*)#1}::__invoke;
  *(code **)(this + 0x3f0) = xShmGetEventBase::{lambda(_XDisplay*)#1}::__invoke;
  *(code **)(this + 0x3f8) =
       xShmPutImage::
       {lambda(_XDisplay*,unsigned_long,_XGC*,_XImage*,int,int,int,int,unsigned_int,unsigned_int,bool)#1}
       ::__invoke;
  *(code **)(this + 0x400) = xShmQueryVersion::{lambda(_XDisplay*,int*,int*,int*)#1}::__invoke;
  piVar5 = operator_new__(0x23);
  LOCK();
  *piVar5 = 0;
  UNLOCK();
  piVar5[2] = 0xc;
  piVar5[3] = 0;
  piVar5[4] = 0x5862696c;
  piVar5[5] = 0x732e3131;
  piVar5[6] = 0x362e6f;
  *(undefined8 *)(this + 0x408) = 0;
  piVar7 = (int *)0x0;
  if ((char)piVar5[4] != '\0') {
    piVar7 = piVar5 + 4;
  }
  uVar6 = dlopen(piVar7,2);
  *(undefined8 *)(this + 0x408) = uVar6;
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar5);
  }
                    /* try { // try from 001df625 to 001df62e has its CatchHandler @ 001df8a7 */
  piVar5 = operator_new__(0x27);
  LOCK();
  *piVar5 = 0;
  UNLOCK();
  piVar5[2] = 0x10;
  piVar5[3] = 0;
  piVar5[4] = 0x5862696c;
  piVar5[5] = 0x2e747865;
  piVar5[6] = 0x362e6f73;
  *(undefined1 *)(piVar5 + 7) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  piVar7 = (int *)0x0;
  if ((char)piVar5[4] != '\0') {
    piVar7 = piVar5 + 4;
  }
  uVar6 = dlopen(piVar7,2);
  *(undefined8 *)(this + 0x410) = uVar6;
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar5);
  }
                    /* try { // try from 001df69e to 001df6a7 has its CatchHandler @ 001df87a */
  piVar7 = operator_new__(0x27);
  LOCK();
  *piVar7 = 0;
  UNLOCK();
  piVar7[2] = 0x10;
  uVar4 = s_0EGdk_WindowScalinExpected_____o_005dcbee._62_4_;
  uVar3 = s_0EGdk_WindowScalinExpected_____o_005dcbee._58_4_;
  uVar2 = s_0EGdk_WindowScalinExpected_____o_005dcbee._54_4_;
  piVar7[3] = 0;
  piVar7[4] = s_0EGdk_WindowScalinExpected_____o_005dcbee._50_4_;
  piVar7[5] = uVar2;
  piVar7[6] = uVar3;
  piVar7[7] = uVar4;
  *(undefined8 *)(this + 0x418) = 0;
  uVar6 = dlopen(piVar7 + 4,2);
  *(undefined8 *)(this + 0x418) = uVar6;
  LOCK();
  iVar1 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar7);
  }
                    /* try { // try from 001df6fd to 001df706 has its CatchHandler @ 001df84d */
  piVar7 = operator_new__(0x2b);
  LOCK();
  *piVar7 = 0;
  UNLOCK();
  piVar7[2] = 0x14;
  uVar4 = s_libXinerama_so_11_005dcc30._12_4_;
  uVar3 = s_libXinerama_so_11_005dcc30._8_4_;
  uVar2 = s_libXinerama_so_11_005dcc30._4_4_;
  piVar7[3] = 0;
  piVar7[4] = s_libXinerama_so_11_005dcc30._0_4_;
  piVar7[5] = uVar2;
  piVar7[6] = uVar3;
  piVar7[7] = uVar4;
  *(undefined1 *)(piVar7 + 8) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  uVar6 = dlopen(piVar7 + 4,2);
  *(undefined8 *)(this + 0x420) = uVar6;
  LOCK();
  iVar1 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar7);
  }
                    /* try { // try from 001df761 to 001df76a has its CatchHandler @ 001df7f0 */
  piVar5 = operator_new__(0x27);
  LOCK();
  *piVar5 = 0;
  UNLOCK();
  piVar5[2] = 0x10;
  piVar5[3] = 0;
  piVar5[4] = 0x5862696c;
  piVar5[5] = 0x646e6172;
  piVar5[6] = 0x6f732e72;
  *(undefined2 *)(piVar5 + 7) = 0x322e;
  *(undefined1 *)((long)piVar5 + 0x1e) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  piVar7 = (int *)0x0;
  if ((char)piVar5[4] != '\0') {
    piVar7 = piVar5 + 4;
  }
  uVar6 = dlopen(piVar7,2);
  *(undefined8 *)(this + 0x428) = uVar6;
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar5);
    return;
  }
  return;
}


