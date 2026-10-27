// Function : loadAllSymbols
// Namespace: juce:X11Symbols
// Entry    : 001c5240
// Prototype: ulong loadAllSymbols(X11Symbols * this)
// Body     : 001c5240 - 001c6bae


/* juce::X11Symbols::loadAllSymbols() */

ulong __thiscall juce::X11Symbols::loadAllSymbols(X11Symbols *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  X11Symbols *pXVar10;
  
  piVar6 = operator_new__(0x27);
  lVar7 = 0;
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 0x10;
  uVar4 = s__XAllocClassHint_005dca8f._13_4_;
  uVar3 = s__XAllocClassHint_005dca8f._9_4_;
  uVar2 = s__XAllocClassHint_005dca8f._5_4_;
  piVar6[3] = 0;
  piVar6[4] = s__XAllocClassHint_005dca8f._1_4_;
  piVar6[5] = uVar2;
  piVar6[6] = uVar3;
  piVar6[7] = uVar4;
  if (*(long *)(this + 0x408) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
    if (lVar7 != 0) goto LAB_001c532e;
LAB_001c52c8:
    piVar6 = operator_new__(0x27);
    lVar7 = 0;
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    piVar6[2] = 0x10;
    uVar4 = s__XAllocClassHint_005dca8f._13_4_;
    uVar3 = s__XAllocClassHint_005dca8f._9_4_;
    uVar2 = s__XAllocClassHint_005dca8f._5_4_;
    piVar6[3] = 0;
    piVar6[4] = s__XAllocClassHint_005dca8f._1_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    if (*(long *)(this + 0x410) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x410),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 != 0) goto LAB_001c532e;
LAB_001c67d0:
    uVar8 = 0;
    goto LAB_001c6b9a;
  }
  if (lVar7 == 0) goto LAB_001c52c8;
LAB_001c532e:
  pXVar10 = this + 0x410;
  *(long *)this = lVar7;
  piVar6 = operator_new__(0x27);
  lVar7 = 0;
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 0x10;
  uVar4 = s_XAllocSizeHints_005dcaa0._12_4_;
  uVar3 = s_XAllocSizeHints_005dcaa0._8_4_;
  uVar2 = s_XAllocSizeHints_005dcaa0._4_4_;
  piVar6[3] = 0;
  piVar6[4] = s_XAllocSizeHints_005dcaa0._0_4_;
  piVar6[5] = uVar2;
  piVar6[6] = uVar3;
  piVar6[7] = uVar4;
  if (*(long *)(this + 0x408) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  if (lVar7 == 0) {
    piVar6 = operator_new__(0x27);
    lVar7 = 0;
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    piVar6[2] = 0x10;
    uVar4 = s_XAllocSizeHints_005dcaa0._12_4_;
    uVar3 = s_XAllocSizeHints_005dcaa0._8_4_;
    uVar2 = s_XAllocSizeHints_005dcaa0._4_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XAllocSizeHints_005dcaa0._0_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    if (*(long *)pXVar10 != 0) {
      lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) goto LAB_001c67d0;
  }
  *(long *)(this + 8) = lVar7;
  piVar6 = operator_new__(0x27);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  lVar7 = 0;
  piVar6[2] = 0x10;
  piVar6[3] = 0;
  piVar6[4] = 0x6c6c4158;
  piVar6[5] = 0x4d57636f;
  piVar6[6] = 0x746e6948;
  *(undefined2 *)(piVar6 + 7) = 0x73;
  if (*(long *)(this + 0x408) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  if (lVar7 == 0) {
    piVar6 = operator_new__(0x27);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0x10;
    piVar6[3] = 0;
    piVar6[4] = 0x6c6c4158;
    piVar6[5] = 0x4d57636f;
    piVar6[6] = 0x746e6948;
    *(undefined2 *)(piVar6 + 7) = 0x73;
    if (*(long *)pXVar10 != 0) {
      lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) goto LAB_001c67d0;
  }
  *(long *)(this + 0x10) = lVar7;
  bVar5 = FUN_001c6bb0((long *)(this + 0x408),(long *)pXVar10,(long *)(this + 0x18),
                       (byte *)"XBitmapBitOrder",(long *)(this + 0x20),(byte *)"XBitmapUnit",
                       (long *)(this + 0x28),(byte *)"XChangeActivePointerGrab",
                       (long *)(this + 0x30),(byte *)"XChangeProperty",(long *)(this + 0x38),
                       (byte *)"XCheckTypedWindowEvent",(long *)(this + 0x40),
                       (byte *)"XCheckWindowEvent",(long *)(this + 0x48),(byte *)"XClearArea",
                       (long *)(this + 0x50),(byte *)"XCloseDisplay",(long *)(this + 0x58),
                       (byte *)"XConnectionNumber",(long *)(this + 0x60),(byte *)"XConvertSelection"
                       ,(long *)(this + 0x68),(byte *)"XCreateColormap",(long *)(this + 0x70),
                       (byte *)"XCreateFontCursor",(long *)(this + 0x78),(byte *)"XCreateGC",
                       (long *)(this + 0x80),(byte *)"XCreateImage",(long *)(this + 0x88),
                       (byte *)"XCreatePixmap",(long *)(this + 0x90),(byte *)"XCreatePixmapCursor",
                       (long *)(this + 0x98),(byte *)"XCreatePixmapFromBitmapData",
                       (long *)(this + 0xa0),(byte *)"XCreateWindow",(long *)(this + 0xa8),
                       (byte *)"XDefaultRootWindow",(long *)(this + 0xb0),(byte *)"XDefaultScreen",
                       (long *)(this + 0xb8),(byte *)"XDefaultScreenOfDisplay",(long *)(this + 0xc0)
                       ,(byte *)"XDefaultVisual",(long *)(this + 200),(byte *)"XDefineCursor",
                       (long *)(this + 0xd0),(byte *)"XDeleteContext",(long *)(this + 0xd8),
                       (byte *)"XDeleteProperty",(long *)(this + 0xe0),(byte *)"XDestroyImage",
                       (long *)(this + 0xe8),(byte *)"XDestroyWindow",(long *)(this + 0xf0),
                       (byte *)"XDisplayHeight",(long *)(this + 0xf8),(byte *)"XDisplayHeightMM",
                       (long *)(this + 0x100),(byte *)"XDisplayWidth",(long *)(this + 0x108),
                       (byte *)"XDisplayWidthMM",(long *)(this + 0x110),(byte *)"XEventsQueued",
                       (long *)(this + 0x118),(byte *)"XFindContext");
  uVar8 = 0;
  if (!bVar5) goto LAB_001c6b9a;
  piVar6 = operator_new__(0x2b);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 0x14;
  uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._12_4_;
  uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._8_4_;
  uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._4_4_;
  piVar6[3] = 0;
  piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._0_4_;
  piVar6[5] = uVar2;
  piVar6[6] = uVar3;
  piVar6[7] = uVar4;
  *(undefined2 *)(piVar6 + 8) = 0x6574;
  *(undefined1 *)((long)piVar6 + 0x22) = 0;
  if (*(long *)(this + 0x418) != 0) {
    uVar8 = dlsym(*(long *)(this + 0x418),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  if (uVar8 != 0) {
    *(ulong *)(this + 0x378) = uVar8;
    piVar6 = operator_new__(0x2f);
    lVar7 = 0;
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    piVar6[2] = 0x18;
    uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._28_4_;
    uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._24_4_;
    uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._20_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._16_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    piVar6[8] = 0x73727543;
    *(undefined2 *)(piVar6 + 9) = 0x726f;
    *(undefined1 *)((long)piVar6 + 0x26) = 0;
    if (*(long *)(this + 0x418) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x418),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 != 0) {
      *(long *)(this + 0x380) = lVar7;
      piVar6 = operator_new__(0x2b);
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      lVar7 = 0;
      piVar6[2] = 0x14;
      uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._44_4_;
      uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._40_4_;
      uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._36_4_;
      piVar6[3] = 0;
      piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._32_4_;
      piVar6[5] = uVar2;
      piVar6[6] = uVar3;
      piVar6[7] = uVar4;
      piVar6[8] = 0x796f72;
      if (*(long *)(this + 0x418) != 0) {
        lVar7 = dlsym(*(long *)(this + 0x418),piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      if (lVar7 != 0) {
        *(long *)(this + 0x388) = lVar7;
      }
    }
  }
  piVar6 = operator_new__(0x2b);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  lVar7 = 0;
  piVar6[2] = 0x14;
  uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._60_4_;
  uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._56_4_;
  uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._52_4_;
  piVar6[3] = 0;
  piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._48_4_;
  piVar6[5] = uVar2;
  piVar6[6] = uVar3;
  piVar6[7] = uVar4;
  *(undefined1 *)(piVar6 + 8) = 0;
  if (*(long *)(this + 0x420) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x420),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  if (lVar7 != 0) {
    *(long *)(this + 0x390) = lVar7;
    piVar6 = operator_new__(0x2f);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0x18;
    uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._76_4_;
    uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._72_4_;
    uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._68_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._64_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    piVar6[8] = 0x736e6565;
    *(undefined1 *)(piVar6 + 9) = 0;
    if (*(long *)(this + 0x420) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x420),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 != 0) {
      *(long *)(this + 0x398) = lVar7;
    }
  }
  piVar6 = operator_new__(0x2f);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  lVar7 = 0;
  piVar6[2] = 0x18;
  uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._92_4_;
  uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._88_4_;
  uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._84_4_;
  piVar6[3] = 0;
  piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._80_4_;
  piVar6[5] = uVar2;
  piVar6[6] = uVar3;
  piVar6[7] = uVar4;
  piVar6[8] = 0x65637275;
  *(undefined2 *)(piVar6 + 9) = 0x73;
  if (*(long *)(this + 0x428) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  if (lVar7 != 0) {
    *(long *)(this + 0x3a0) = lVar7;
    piVar6 = operator_new__(0x2f);
    lVar7 = 0;
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    piVar6[2] = 0x18;
    uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._108_4_;
    uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._104_4_;
    uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._100_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._96_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    piVar6[8] = 0x6372756f;
    *(undefined2 *)(piVar6 + 9) = 0x7365;
    *(undefined1 *)((long)piVar6 + 0x26) = 0;
    if (*(long *)(this + 0x428) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 != 0) {
      *(long *)(this + 0x3a8) = lVar7;
      piVar6 = operator_new__(0x2b);
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      lVar7 = 0;
      piVar6[2] = 0x14;
      uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._124_4_;
      uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._120_4_;
      uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._116_4_;
      piVar6[3] = 0;
      piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._112_4_;
      piVar6[5] = uVar2;
      piVar6[6] = uVar3;
      piVar6[7] = uVar4;
      *(undefined1 *)(piVar6 + 8) = 0;
      if (*(long *)(this + 0x428) != 0) {
        lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      if (lVar7 != 0) {
        *(long *)(this + 0x3b0) = lVar7;
        piVar6 = operator_new__(0x2b);
        LOCK();
        *piVar6 = 0;
        UNLOCK();
        lVar7 = 0;
        piVar6[2] = 0x14;
        uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._140_4_;
        uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._136_4_;
        uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._132_4_;
        piVar6[3] = 0;
        piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._128_4_;
        piVar6[5] = uVar2;
        piVar6[6] = uVar3;
        piVar6[7] = uVar4;
        *(undefined2 *)(piVar6 + 8) = 0x6f;
        if (*(long *)(this + 0x428) != 0) {
          lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
        }
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar6);
        }
        if (lVar7 != 0) {
          *(long *)(this + 0x3b8) = lVar7;
          piVar6 = operator_new__(0x27);
          lVar7 = 0;
          LOCK();
          *piVar6 = 0;
          UNLOCK();
          piVar6[2] = 0x10;
          piVar6[3] = 0;
          piVar6[4] = 0x47525258;
          piVar6[5] = 0x72437465;
          piVar6[6] = 0x6e496374;
          *(undefined2 *)(piVar6 + 7) = 0x6f66;
          *(undefined1 *)((long)piVar6 + 0x1e) = 0;
          if (*(long *)(this + 0x428) != 0) {
            lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
          }
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar6);
          }
          if (lVar7 != 0) {
            *(long *)(this + 0x3c0) = lVar7;
            piVar6 = operator_new__(0x27);
            lVar7 = 0;
            LOCK();
            *piVar6 = 0;
            UNLOCK();
            piVar6[2] = 0x10;
            uVar4 = s_XcursorImageCreaXcursorImageLoad_005dcab0._156_4_;
            uVar3 = s_XcursorImageCreaXcursorImageLoad_005dcab0._152_4_;
            uVar2 = s_XcursorImageCreaXcursorImageLoad_005dcab0._148_4_;
            piVar6[3] = 0;
            piVar6[4] = s_XcursorImageCreaXcursorImageLoad_005dcab0._144_4_;
            piVar6[5] = uVar2;
            piVar6[6] = uVar3;
            piVar6[7] = uVar4;
            if (*(long *)(this + 0x428) != 0) {
              lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
            }
            LOCK();
            iVar1 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar6);
            }
            if (lVar7 != 0) {
              *(long *)(this + 0x3c8) = lVar7;
              piVar6 = operator_new__(0x2b);
              LOCK();
              *piVar6 = 0;
              UNLOCK();
              lVar7 = 0;
              piVar6[2] = 0x14;
              uVar4 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._12_4_;
              uVar3 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._8_4_;
              uVar2 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._4_4_;
              piVar6[3] = 0;
              piVar6[4] = s_XRRGetOutputPrimXShmCreateImage_005dcb50._0_4_;
              piVar6[5] = uVar2;
              piVar6[6] = uVar3;
              piVar6[7] = uVar4;
              piVar6[8] = 0x797261;
              if (*(long *)(this + 0x428) != 0) {
                lVar7 = dlsym(*(long *)(this + 0x428),piVar6 + 4);
              }
              LOCK();
              iVar1 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                operator_delete__(piVar6);
              }
              if (lVar7 != 0) {
                *(long *)(this + 0x3d0) = lVar7;
              }
            }
          }
        }
      }
    }
  }
  piVar6 = operator_new__(0x23);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  lVar7 = 0;
  piVar6[2] = 0xc;
  piVar6[3] = 0;
  piVar6[4] = 0x6d685358;
  piVar6[5] = 0x61747441;
  *(undefined2 *)(piVar6 + 6) = 0x6863;
  *(undefined1 *)((long)piVar6 + 0x1a) = 0;
  if (*(long *)(this + 0x408) != 0) {
    lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
    if (lVar7 == 0) goto LAB_001c66fd;
LAB_001c675c:
    *(long *)(this + 0x3d8) = lVar7;
    piVar6 = operator_new__(0x27);
    lVar7 = 0;
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    piVar6[2] = 0x10;
    uVar4 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._28_4_;
    uVar3 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._24_4_;
    uVar2 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._20_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XRRGetOutputPrimXShmCreateImage_005dcb50._16_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    if (*(long *)(this + 0x408) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) {
      piVar6 = operator_new__(0x27);
      lVar7 = 0;
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      piVar6[2] = 0x10;
      uVar4 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._28_4_;
      uVar3 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._24_4_;
      uVar2 = s_XRRGetOutputPrimXShmCreateImage_005dcb50._20_4_;
      piVar6[3] = 0;
      piVar6[4] = s_XRRGetOutputPrimXShmCreateImage_005dcb50._16_4_;
      piVar6[5] = uVar2;
      piVar6[6] = uVar3;
      piVar6[7] = uVar4;
      if (*(long *)pXVar10 != 0) {
        lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      lVar9 = 0;
      if (lVar7 == 0) goto LAB_001c6b97;
    }
    *(long *)(this + 0x3e0) = lVar7;
    piVar6 = operator_new__(0x23);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0xc;
    piVar6[3] = 0;
    piVar6[4] = 0x6d685358;
    piVar6[5] = 0x61746544;
    *(undefined2 *)(piVar6 + 6) = 0x6863;
    *(undefined1 *)((long)piVar6 + 0x1a) = 0;
    if (*(long *)(this + 0x408) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) {
      piVar6 = operator_new__(0x23);
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      lVar7 = 0;
      piVar6[2] = 0xc;
      piVar6[3] = 0;
      piVar6[4] = 0x6d685358;
      piVar6[5] = 0x61746544;
      *(undefined2 *)(piVar6 + 6) = 0x6863;
      *(undefined1 *)((long)piVar6 + 0x1a) = 0;
      if (*(long *)pXVar10 != 0) {
        lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      lVar9 = 0;
      if (lVar7 == 0) goto LAB_001c6b97;
    }
    *(long *)(this + 1000) = lVar7;
    piVar6 = operator_new__(0x2b);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0x14;
    uVar4 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._12_4_;
    uVar3 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._8_4_;
    uVar2 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._4_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XShmGetEventBaseXShmQueryVersion_005dcb70._0_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    *(undefined1 *)(piVar6 + 8) = 0;
    if (*(long *)(this + 0x408) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) {
      piVar6 = operator_new__(0x2b);
      lVar7 = 0;
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      piVar6[2] = 0x14;
      uVar4 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._12_4_;
      uVar3 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._8_4_;
      uVar2 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._4_4_;
      piVar6[3] = 0;
      piVar6[4] = s_XShmGetEventBaseXShmQueryVersion_005dcb70._0_4_;
      piVar6[5] = uVar2;
      piVar6[6] = uVar3;
      piVar6[7] = uVar4;
      *(undefined1 *)(piVar6 + 8) = 0;
      if (*(long *)pXVar10 != 0) {
        lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      lVar9 = 0;
      if (lVar7 == 0) goto LAB_001c6b97;
    }
    *(long *)(this + 0x3f0) = lVar7;
    piVar6 = operator_new__(0x27);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0x10;
    piVar6[3] = 0;
    piVar6[4] = 0x6d685358;
    piVar6[5] = 0x49747550;
    piVar6[6] = 0x6567616d;
    *(undefined1 *)(piVar6 + 7) = 0;
    if (*(long *)(this + 0x408) != 0) {
      lVar7 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar7 == 0) {
      piVar6 = operator_new__(0x27);
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      lVar7 = 0;
      piVar6[2] = 0x10;
      piVar6[3] = 0;
      piVar6[4] = 0x6d685358;
      piVar6[5] = 0x49747550;
      piVar6[6] = 0x6567616d;
      *(undefined1 *)(piVar6 + 7) = 0;
      if (*(long *)pXVar10 != 0) {
        lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      lVar9 = 0;
      if (lVar7 == 0) goto LAB_001c6b97;
    }
    *(long *)(this + 0x3f8) = lVar7;
    piVar6 = operator_new__(0x2b);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar9 = 0;
    piVar6[2] = 0x14;
    uVar4 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._28_4_;
    uVar3 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._24_4_;
    uVar2 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._20_4_;
    piVar6[3] = 0;
    piVar6[4] = s_XShmGetEventBaseXShmQueryVersion_005dcb70._16_4_;
    piVar6[5] = uVar2;
    piVar6[6] = uVar3;
    piVar6[7] = uVar4;
    *(undefined1 *)(piVar6 + 8) = 0;
    if (*(long *)(this + 0x408) != 0) {
      lVar9 = dlsym(*(long *)(this + 0x408),piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    if (lVar9 == 0) {
      piVar6 = operator_new__(0x2b);
      lVar9 = 0;
      LOCK();
      *piVar6 = 0;
      UNLOCK();
      piVar6[2] = 0x14;
      uVar4 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._28_4_;
      uVar3 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._24_4_;
      uVar2 = s_XShmGetEventBaseXShmQueryVersion_005dcb70._20_4_;
      piVar6[3] = 0;
      piVar6[4] = s_XShmGetEventBaseXShmQueryVersion_005dcb70._16_4_;
      piVar6[5] = uVar2;
      piVar6[6] = uVar3;
      piVar6[7] = uVar4;
      *(undefined1 *)(piVar6 + 8) = 0;
      if (*(long *)pXVar10 != 0) {
        lVar9 = dlsym(*(long *)pXVar10,piVar6 + 4);
      }
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
      if (lVar9 == 0) goto LAB_001c6b97;
    }
    *(long *)(this + 0x400) = lVar9;
  }
  else {
    if (lVar7 != 0) goto LAB_001c675c;
LAB_001c66fd:
    piVar6 = operator_new__(0x23);
    LOCK();
    *piVar6 = 0;
    UNLOCK();
    lVar7 = 0;
    piVar6[2] = 0xc;
    piVar6[3] = 0;
    piVar6[4] = 0x6d685358;
    piVar6[5] = 0x61747441;
    *(undefined2 *)(piVar6 + 6) = 0x6863;
    *(undefined1 *)((long)piVar6 + 0x1a) = 0;
    if (*(long *)pXVar10 != 0) {
      lVar7 = dlsym(*(long *)pXVar10,piVar6 + 4);
    }
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
    lVar9 = 0;
    if (lVar7 != 0) goto LAB_001c675c;
  }
LAB_001c6b97:
  uVar8 = CONCAT71((int7)((ulong)lVar9 >> 8),1);
LAB_001c6b9a:
  return uVar8 & 0xffffffff;
}


