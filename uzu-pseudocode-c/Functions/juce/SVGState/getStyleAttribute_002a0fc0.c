// Function : getStyleAttribute
// Namespace: juce:SVGState
// Entry    : 002a0fc0
// Prototype: undefined getStyleAttribute(SVGState * param_1, long param_2, long * param_3, byte * param_4, byte * param_5, byte * param_6)
// Body     : 002a0fc0 - 002a1a8b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::getStyleAttribute(juce::SVGState::XmlPath const&, juce::StringRef, juce::String
   const&) const */

void __cdecl
juce::SVGState::getStyleAttribute
          (SVGState *param_1,long param_2,long *param_3,byte *param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  size_t __n;
  byte bVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  undefined4 *__dest;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  bool bVar20;
  byte *local_70;
  char *local_68;
  byte *local_60;
  byte *local_58;
  long *local_50;
  undefined4 *local_48;
  long local_40;
  byte *local_38;
  
  plVar12 = *(long **)(*param_3 + 0x10);
  pbVar16 = param_5;
  local_50 = param_3;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12;
    do {
      uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar10[1],param_4);
      if (uVar2 == 0) goto LAB_002a10ed;
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar12[1],(byte *)0x5e3c05);
      if (uVar2 == 0) {
        plVar12 = plVar12 + 2;
        goto LAB_002a1052;
      }
    }
  }
  plVar12 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar3 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar3 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar12 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002a1052:
  local_68 = (char *)*plVar12;
  piVar14 = (int *)(local_68 + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    *piVar14 = *piVar14 + 1;
    UNLOCK();
  }
  local_58 = param_5;
  local_40 = param_2;
  if (*local_68 == '\0') {
    plVar12 = *(long **)(*local_50 + 0x10);
    local_60 = param_4;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12;
      do {
        uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          ((byte *)plVar10[1],(byte *)0x5e40d8);
        if (uVar2 == 0) {
          local_70 = *(byte **)(local_40 + 0x40);
          goto LAB_002a1210;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  else {
    local_48 = (undefined4 *)&DAT_0061ac58;
                    /* try { // try from 002a1093 to 002a10a7 has its CatchHandler @ 002a1abc */
    getAttributeFromStyleList(param_1,(String *)&local_68,param_4,(byte *)&local_48,pbVar16,param_6)
    ;
    if (**(char **)param_1 != '\0') goto LAB_002a11bb;
    piVar14 = (int *)(*(char **)param_1 + -0x10);
    local_60 = param_4;
    if (piVar14 != &emptyString) {
      LOCK();
      iVar3 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar14);
      }
    }
  }
LAB_002a114d:
  if ((long *)local_50[1] == (long *)0x0) {
    lVar15 = *(long *)local_58;
    *(long *)param_1 = lVar15;
    piVar14 = (int *)(lVar15 + -0x10);
    if (piVar14 != &emptyString) {
      LOCK();
      *piVar14 = *piVar14 + 1;
      UNLOCK();
    }
  }
  else {
                    /* try { // try from 002a115b to 002a1179 has its CatchHandler @ 002a1aba */
    getStyleAttribute(param_1,local_40,(long *)local_50[1],local_60,local_58,param_6);
  }
LAB_002a11bb:
  piVar14 = (int *)(local_68 + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar3 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar14);
    }
  }
  return;
LAB_002a1210:
  do {
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)&getEmptyStringRef()::empty;
      if (getEmptyStringRef()::empty == '\0') {
        iVar3 = __cxa_guard_acquire();
        plVar12 = (long *)&getEmptyStringRef()::empty;
        if (iVar3 != 0) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          plVar12 = (long *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release();
        }
      }
LAB_002a128b:
      local_38 = (byte *)*plVar12;
      iVar19 = 1;
      iVar17 = 0;
      iVar3 = 0;
      pbVar5 = local_38;
      do {
        bVar1 = *pbVar5;
        if ((char)bVar1 < '\0') {
          do {
            pbVar9 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
          } while ((*pbVar9 & 0xc0) == 0x80);
        }
        else {
          pbVar5 = pbVar5 + 1;
          if (bVar1 == 0) goto LAB_002a1310;
        }
        iVar3 = iVar3 + 1;
        iVar19 = iVar19 + 1;
        iVar17 = iVar17 + -1;
      } while( true );
    }
    uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)plVar12[1],(byte *)0x5e40d8);
    if (uVar2 == 0) {
      plVar12 = plVar12 + 2;
      goto LAB_002a128b;
    }
    plVar12 = (long *)*plVar12;
  } while( true );
  while( true ) {
    pbVar5 = local_70;
    iVar4 = iVar17;
    if (iVar3 < 0) {
      do {
        if ((pbVar5[-1] & 0xc0) == 0x80) {
          if ((pbVar5[-2] & 0xc0) == 0x80) {
            if ((pbVar5[-3] & 0xc0) == 0x80) {
              pbVar5 = pbVar5 + -4;
            }
            else {
              pbVar5 = pbVar5 + -3;
            }
          }
          else {
            pbVar5 = pbVar5 + -2;
          }
        }
        else {
          pbVar5 = pbVar5 + -1;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    else {
      pbVar9 = local_70;
      iVar4 = iVar19;
      if (iVar3 != 0) {
        do {
          pbVar5 = pbVar9 + 1;
          bVar1 = *pbVar9;
          if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
            if ((bVar1 & 0x20) == 0) {
              pbVar5 = pbVar9 + 2;
            }
            else {
              pbVar5 = pbVar9 + (4 - (ulong)((bVar1 & 0x10) == 0));
            }
          }
          iVar4 = iVar4 + -1;
          pbVar9 = pbVar5;
        } while (1 < iVar4);
      }
    }
    while( true ) {
      pbVar9 = pbVar5;
      bVar1 = *pbVar9;
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar2 = (uint)bVar1;
        if ((bVar1 & 0x40) == 0) {
          uVar2 = uVar2 & 0x7f;
        }
        else {
          uVar8 = uVar2 & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar8 = 0x3f;
          }
          uVar2 = uVar8 & uVar2;
          if (((((pbVar9[1] & 0xffffffc0) == 0x80) &&
               (uVar2 = pbVar9[1] & 0x3f | uVar2 << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar9[2] & 0xffffffc0) == 0x80)) &&
             ((uVar2 = pbVar9[2] & 0x3f | uVar2 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar9[3] & 0xffffffc0) == 0x80)))) {
            uVar2 = uVar2 << 6 | pbVar9[3] & 0x3f;
          }
        }
      }
      iVar4 = iswspace(uVar2);
      if (iVar4 == 0) break;
      bVar1 = *pbVar9;
      pbVar5 = pbVar9 + 1;
      if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
         (pbVar5 = pbVar9 + 2, (bVar1 & 0x20) != 0)) {
        pbVar5 = pbVar9 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    bVar1 = *pbVar9;
    uVar2 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar2 = uVar2 & 0x7f;
        if (uVar2 == 0x7b) goto joined_r0x002a1a31;
      }
      else {
        bVar20 = (bVar1 & 0x10) == 0;
        pbVar16 = (byte *)CONCAT71((int7)((ulong)pbVar16 >> 8),bVar20);
        uVar8 = uVar2 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar8 = 0x3f;
        }
        uVar2 = uVar8 & uVar2;
        if ((pbVar9[1] & 0xffffffc0) == 0x80) {
          uVar2 = uVar2 * 0x40;
          uVar7 = pbVar9[1] & 0x3f;
          uVar8 = uVar7 + uVar2;
          if ((bVar1 & 0x20) == 0) {
            if (uVar8 == 0x7b) goto joined_r0x002a1a31;
            uVar2 = uVar7 | uVar2;
          }
          else {
            bVar13 = bVar1 >> 5 & bVar20;
            if ((((pbVar9[2] & 0xffffffc0) == 0x80) &&
                (uVar8 = pbVar9[2] & 0x3f | uVar8 * 0x40, bVar13 == 0)) &&
               ((pbVar9[3] & 0xffffffc0) == 0x80)) {
              uVar8 = uVar8 << 6 | pbVar9[3] & 0x3f;
            }
            param_6 = local_70;
            if (uVar8 == 0x7b) goto joined_r0x002a1a31;
            uVar2 = uVar7 | uVar2;
            if (((((bVar1 & 0x20) != 0) && ((pbVar9[2] & 0xffffffc0) == 0x80)) &&
                (uVar2 = pbVar9[2] & 0x3f | uVar2 << 6, bVar13 == 0)) &&
               ((pbVar9[3] & 0xffffffc0) == 0x80)) {
              uVar2 = pbVar9[3] & 0x3f | uVar2 << 6;
            }
          }
        }
      }
    }
    else if (bVar1 == 0x7b) {
      bVar1 = 0x7b;
      goto joined_r0x002a1a31;
    }
    if (uVar2 == 0x2c) break;
LAB_002a1310:
    do {
      bVar1 = *local_70;
      if (bVar1 == 0) goto LAB_002a114d;
      pbVar5 = local_70 + 1;
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          uVar2 = uVar2 & 0x7f;
          goto LAB_002a1332;
        }
        if ((bVar1 & 0x20) == 0) {
          uVar8 = 0x3f;
          lVar15 = 0;
          bVar20 = false;
          pbVar16 = (byte *)0x0;
        }
        else {
          bVar20 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar8 = 0x1f;
            lVar15 = 1;
            pbVar16 = (byte *)0x0;
          }
          else {
            uVar8 = 0xf;
            lVar15 = 2;
            pbVar16 = (byte *)CONCAT71((int7)((ulong)pbVar16 >> 8),1);
          }
        }
        uVar2 = uVar2 & uVar8;
        if ((local_70[1] & 0xffffffc0) == 0x80) {
          pbVar5 = local_70 + lVar15 + 2;
          uVar2 = local_70[1] & 0x3f | uVar2 << 6;
          if (!bVar20) goto LAB_002a15c7;
          bVar1 = local_70[2];
          if ((bVar1 & 0xc0) == 0x80) {
            uVar2 = bVar1 & 0x3f | uVar2 << 6;
            if ((char)pbVar16 != '\0') {
              uVar8 = (uint)local_70[3];
              local_70 = local_70 + 3;
              if ((uVar8 & 0xffffffc0) != 0x80) goto LAB_002a1335;
              uVar2 = uVar2 << 6 | uVar8 & 0x3f;
            }
            goto LAB_002a1332;
          }
          local_70 = local_70 + 2;
        }
        else {
LAB_002a15c7:
          local_70 = pbVar5;
        }
      }
      else {
LAB_002a1332:
        local_70 = pbVar5;
      }
LAB_002a1335:
    } while ((uVar2 != 0x2e) ||
            (uVar2 = CharacterFunctions::
                     compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (local_70,local_38,iVar3), uVar2 != 0));
  }
  while( true ) {
    uVar2 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar2 = uVar2 & 0x7f;
      }
      else {
        bVar20 = (bVar1 & 0x10) == 0;
        pbVar16 = (byte *)CONCAT71((int7)((ulong)pbVar16 >> 8),bVar20);
        uVar8 = uVar2 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar8 = 0x3f;
        }
        uVar2 = uVar8 & uVar2;
        if ((((pbVar9[1] & 0xffffffc0) == 0x80) &&
            (uVar2 = pbVar9[1] & 0x3f | uVar2 << 6, (bVar1 & 0x20) != 0)) &&
           (((pbVar9[2] & 0xffffffc0) == 0x80 &&
            ((uVar2 = pbVar9[2] & 0x3f | uVar2 << 6, (bVar1 >> 5 & bVar20) == 0 &&
             ((pbVar9[3] & 0xffffffc0) == 0x80)))))) {
          uVar2 = uVar2 << 6 | pbVar9[3] & 0x3f;
        }
      }
    }
    if ((uVar2 == 0) || (uVar2 == 0x7b)) break;
    pbVar5 = pbVar9 + 1;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      if ((bVar1 & 0x20) == 0) {
        pbVar5 = pbVar9 + 2;
      }
      else {
        pbVar5 = pbVar9 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    bVar1 = *pbVar5;
    pbVar9 = pbVar5;
  }
joined_r0x002a1a31:
  if (bVar1 == 0) goto LAB_002a114d;
  pbVar5 = pbVar9;
  bVar13 = bVar1;
  while( true ) {
    uVar2 = (uint)bVar13;
    if ((char)bVar13 < '\0') {
      if ((bVar13 & 0x40) == 0) {
        uVar2 = uVar2 & 0x7f;
      }
      else {
        bVar20 = (bVar13 & 0x10) == 0;
        pbVar16 = (byte *)CONCAT71((int7)((ulong)pbVar16 >> 8),bVar20);
        uVar2 = uVar2 & 0x10 ^ 0x1f;
        if ((bVar13 & 0x20) == 0) {
          uVar2 = 0x3f;
        }
        uVar2 = uVar2 & bVar13;
        if (((((pbVar5[1] & 0xffffffc0) == 0x80) &&
             (uVar2 = pbVar5[1] & 0x3f | uVar2 << 6, (bVar13 & 0x20) != 0)) &&
            ((pbVar5[2] & 0xffffffc0) == 0x80)) &&
           ((uVar2 = pbVar5[2] & 0x3f | uVar2 << 6, (bVar13 >> 5 & bVar20) == 0 &&
            ((pbVar5[3] & 0xffffffc0) == 0x80)))) {
          uVar2 = uVar2 << 6 | pbVar5[3] & 0x3f;
        }
      }
    }
    if ((uVar2 == 0) || (uVar2 == 0x7d)) break;
    pbVar18 = pbVar5 + 1;
    if (((char)bVar13 < '\0') && ((bVar13 & 0x40) != 0)) {
      if ((bVar13 & 0x20) == 0) {
        pbVar18 = pbVar5 + 2;
      }
      else {
        pbVar18 = pbVar5 + (4 - (ulong)((bVar13 & 0x10) == 0));
      }
    }
    bVar13 = *pbVar18;
    pbVar5 = pbVar18;
  }
  if (bVar13 == 0) goto LAB_002a114d;
  pbVar18 = pbVar9 + 1;
  if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
    if ((bVar1 & 0x20) == 0) {
      pbVar18 = pbVar9 + 2;
    }
    else {
      pbVar18 = pbVar9 + (4 - (ulong)((bVar1 & 0x10) == 0));
    }
  }
  __dest = (undefined4 *)&DAT_0061ac58;
  if (*pbVar18 != 0) {
    __n = (long)pbVar5 - (long)pbVar18;
    uVar11 = __n + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002a192d to 002a1931 has its CatchHandler @ 002a1a8c */
    puVar6 = operator_new__(uVar11 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar11;
    __dest = puVar6 + 4;
    memcpy(__dest,pbVar18,__n);
    *(undefined1 *)((long)puVar6 + __n + 0x10) = 0;
  }
                    /* try { // try from 002a1962 to 002a1978 has its CatchHandler @ 002a1a8e */
  local_48 = __dest;
  getAttributeFromStyleList(param_1,(String *)&local_48,local_60,local_58,pbVar16,param_6);
  piVar14 = __dest + -4;
  if (piVar14 != &emptyString) {
    LOCK();
    iVar3 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar14);
    }
  }
  if (**(char **)param_1 == '\0') {
    local_70 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      if ((bVar1 & 0x20) == 0) {
        local_70 = pbVar5 + 2;
      }
      else {
        local_70 = pbVar5 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    piVar14 = (int *)(*(char **)param_1 + -0x10);
    if (piVar14 != &emptyString) {
      LOCK();
      iVar3 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar14);
      }
    }
    plVar12 = *(long **)(*local_50 + 0x10);
    goto LAB_002a1210;
  }
  goto LAB_002a11bb;
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
LAB_002a10ed:
    uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)plVar12[1],param_4);
    if (uVar2 == 0) {
      lVar15 = plVar12[2];
      goto LAB_002a117f;
    }
  }
  lVar15 = *(long *)param_5;
LAB_002a117f:
  *(long *)param_1 = lVar15;
  piVar14 = (int *)(lVar15 + -0x10);
  if (piVar14 == &emptyString) {
    return;
  }
  LOCK();
  *piVar14 = *piVar14 + 1;
  UNLOCK();
  return;
}


