// Function : from
// Namespace: juce:FreeTypeTypeface
// Entry    : 002f9b30
// Prototype: undefined from(FreeTypeTypeface * this, long * param_1)
// Body     : 002f9b30 - 002fa232


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::FreeTypeTypeface::from(juce::Font const&) */

void __thiscall juce::FreeTypeTypeface::from(FreeTypeTypeface *this,long *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  FTTypefaceList *pFVar4;
  int *piVar5;
  hb_font_t *this_00;
  undefined8 uVar6;
  FreeTypeTypeface *this_01;
  byte *pbVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  int iVar15;
  long local_88;
  byte *local_80;
  void *local_78;
  undefined8 uStack_70;
  void *local_68;
  long *local_60;
  byte *local_58;
  int *local_50;
  FreeTypeTypeface *local_48;
  hb_font_t *local_40;
  void *local_38;
  
  lVar11 = *param_1;
  local_80 = *(byte **)(lVar11 + 0x18);
  pbVar7 = local_80 + -0x10;
  if (pbVar7 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar7 = *(int *)pbVar7 + 1;
    UNLOCK();
    lVar11 = *param_1;
  }
  local_58 = *(byte **)(lVar11 + 0x20);
  pbVar7 = local_58 + -0x10;
  if (pbVar7 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar7 = *(int *)pbVar7 + 1;
    UNLOCK();
  }
  local_60 = param_1;
  local_48 = this;
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002f9b8d to 002f9b96 has its CatchHandler @ 002fa326 */
    pFVar4 = operator_new(0x28);
                    /* try { // try from 002f9b9a to 002f9ba1 has its CatchHandler @ 002fa2a8 */
    FTTypefaceList::FTTypefaceList(pFVar4);
    LOCK();
    UNLOCK();
    FTTypefaceList::singletonHolder = pFVar4;
  }
  pbVar8 = local_58;
  pbVar7 = local_80;
  pFVar4 = FTTypefaceList::singletonHolder;
  plVar10 = *(long **)(FTTypefaceList::singletonHolder + 0x18);
  for (plVar9 = *(long **)(FTTypefaceList::singletonHolder + 0x10); plVar9 != plVar10;
      plVar9 = plVar9 + 1) {
    lVar11 = *plVar9;
    pbVar2 = *(byte **)(lVar11 + 8);
    if (((pbVar2 == pbVar7) ||
        (uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar2,pbVar7), uVar3 == 0)) &&
       ((pbVar2 = *(byte **)(lVar11 + 0x10), pbVar2 == pbVar8 ||
        ((uVar3 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(pbVar2,pbVar8),
         uVar3 == 0 || (*pbVar8 == 0)))))) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) goto LAB_002f9d6c;
      break;
    }
  }
                    /* try { // try from 002f9c19 to 002f9c22 has its CatchHandler @ 002fa326 */
  piVar5 = operator_new__(0x1f);
  pbVar7 = local_80;
  LOCK();
  *piVar5 = 0;
  UNLOCK();
  piVar5[2] = 8;
  piVar5[3] = 0;
  piVar5[4] = 0x75676552;
  piVar5[5] = 0x72616c;
  plVar9 = *(long **)(pFVar4 + 0x10);
  plVar10 = *(long **)(pFVar4 + 0x18);
  if (plVar9 != plVar10) {
    pbVar8 = (byte *)(piVar5 + 4);
    do {
      lVar11 = *plVar9;
      pbVar2 = *(byte **)(lVar11 + 8);
      if (((pbVar2 == pbVar7) ||
          (uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             (pbVar2,pbVar7), uVar3 == 0)) &&
         ((pbVar2 = *(byte **)(lVar11 + 0x10), pbVar2 == pbVar8 ||
          ((uVar3 = CharacterFunctions::
                    compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(pbVar2,pbVar8),
           uVar3 == 0 || (*pbVar8 == 0)))))) {
        plVar9 = (long *)*plVar9;
        LOCK();
        iVar15 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar15 != 0) {
          if (plVar9 == (long *)0x0) goto LAB_002f9ce5;
          goto LAB_002f9d6c;
        }
        operator_delete__(piVar5);
        if (plVar9 != (long *)0x0) goto LAB_002f9d6c;
        goto LAB_002f9ce5;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
  }
  LOCK();
  iVar15 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar15 == 0) {
    operator_delete__(piVar5);
  }
LAB_002f9ce5:
  pbVar7 = local_80;
  plVar10 = *(long **)(pFVar4 + 0x18);
  for (plVar9 = *(long **)(pFVar4 + 0x10); plVar9 != plVar10; plVar9 = plVar9 + 1) {
    lVar11 = *plVar9;
    pbVar8 = *(byte **)(lVar11 + 8);
    if ((pbVar8 == pbVar7) ||
       (uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar8,pbVar7), uVar3 == 0)) {
      pbVar7 = *(byte **)(lVar11 + 0x10);
      if (pbVar7 != &DAT_0061ac58) {
        CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                  (pbVar7,&DAT_0061ac58);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) goto LAB_002f9d6c;
      break;
    }
  }
  local_68 = (void *)0x0;
LAB_002f9dd3:
  if (local_68 == (void *)0x0) {
    *(undefined8 *)local_48 = 0;
    pvVar13 = (void *)0x0;
    goto LAB_002fa1df;
  }
                    /* try { // try from 002f9de5 to 002f9de9 has its CatchHandler @ 002fa317 */
  piVar5 = hb_ft_face_create_referenced(*(long *)((long)local_68 + 0x28));
                    /* try { // try from 002f9ded to 002f9df4 has its CatchHandler @ 002fa303 */
  this_00 = hb_font_create(piVar5);
  if (this_00 == (hb_font_t *)0x0) {
    *(undefined8 *)local_48 = 0;
  }
  else {
    pbVar8 = *(byte **)(*local_60 + 0x18);
    pbVar7 = pbVar8 + -0x10;
    if (pbVar7 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
      UNLOCK();
    }
    local_50 = piVar5;
    if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002f9e32 to 002f9e3b has its CatchHandler @ 002fa278 */
      pFVar4 = operator_new(0x28);
                    /* try { // try from 002f9e3f to 002f9e46 has its CatchHandler @ 002fa26b */
      FTTypefaceList::FTTypefaceList(pFVar4);
      LOCK();
      UNLOCK();
      FTTypefaceList::singletonHolder = pFVar4;
    }
    local_78 = (void *)0x0;
    uStack_70 = 0;
    plVar10 = *(long **)(FTTypefaceList::singletonHolder + 0x10);
    plVar9 = *(long **)(FTTypefaceList::singletonHolder + 0x18);
    if (plVar10 != plVar9) {
      do {
        lVar11 = *plVar10;
        pbVar2 = *(byte **)(lVar11 + 8);
        if ((pbVar2 == pbVar8) ||
           (uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (pbVar2,pbVar8), uVar3 == 0)) {
          StringArray::addIfNotAlreadyThere((ulong *)&local_78,(undefined8 *)(lVar11 + 0x10));
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
    if (pbVar7 != (byte *)&emptyString) {
      LOCK();
      iVar15 = *(int *)pbVar7;
      *(int *)pbVar7 = *(int *)pbVar7 + -1;
      UNLOCK();
      if (iVar15 == 0) {
        operator_delete__(pbVar7);
      }
    }
    pvVar13 = local_78;
    pbVar8 = *(byte **)(*local_60 + 0x20);
    pbVar7 = pbVar8 + -0x10;
    if (pbVar7 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar7 = *(int *)pbVar7 + 1;
      UNLOCK();
    }
    uVar14 = (ulong)uStack_70._4_4_;
    iVar15 = -1;
    if (0 < (int)uStack_70._4_4_) {
      uVar12 = 0;
      do {
        uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar8,*(byte **)((long)pvVar13 + uVar12 * 8));
        if (uVar3 == 0) {
          iVar15 = (int)uVar12;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar14 != uVar12);
    }
    if (pbVar7 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)pbVar7;
      *(int *)pbVar7 = *(int *)pbVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(pbVar7);
      }
    }
    if (iVar15 < 0) {
      local_88 = *(long *)(*local_60 + 0x20);
      piVar5 = (int *)(local_88 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      uVar6 = juce::String::containsWholeWordIgnoreCase((String *)&local_88,(byte *)0x5e50a2);
      if ((char)uVar6 == '\0') {
        uVar6 = juce::String::containsWholeWordIgnoreCase((String *)&local_88,(byte *)"Oblique");
        piVar5 = (int *)(local_88 + -0x10);
        if (piVar5 != &emptyString) {
          LOCK();
          iVar15 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar15 == 0) {
            operator_delete__(piVar5);
          }
        }
        if ((char)uVar6 != '\0') goto LAB_002fa031;
      }
      else {
        piVar5 = (int *)(local_88 + -0x10);
        if (piVar5 != &emptyString) {
          LOCK();
          iVar15 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar15 == 0) {
            operator_delete__(piVar5);
          }
        }
LAB_002fa031:
        if (*(int *)(this_00 + 4) != 0) {
          if ((*(float *)(this_00 + 0x44) != DAT_005d9068) ||
             (NAN(*(float *)(this_00 + 0x44)) || NAN(DAT_005d9068))) {
            *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
            *(undefined4 *)(this_00 + 0x44) = 0x3dcccccd;
                    /* try { // try from 002fa057 to 002fa100 has its CatchHandler @ 002fa233 */
            hb_font_t::mults_changed(this_00);
          }
        }
      }
      lVar11 = *(long *)(*local_60 + 0x20);
      piVar5 = (int *)(lVar11 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      local_88 = lVar11;
      uVar6 = juce::String::containsWholeWordIgnoreCase((String *)&local_88,&DAT_005e50a9);
      piVar5 = (int *)(lVar11 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar15 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          operator_delete__(piVar5);
        }
      }
      if ((((char)uVar6 != '\0') && (*(int *)(this_00 + 4) != 0)) &&
         ((*(float *)(this_00 + 0x30) != _DAT_005de554 ||
          (((*(float *)(this_00 + 0x34) != _DAT_005de554 ||
            (NAN(*(float *)(this_00 + 0x34)) || NAN(_DAT_005de554))) ||
           (this_00[0x38] != (hb_font_t)0x1)))))) {
        *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
        *(undefined8 *)(this_00 + 0x30) = 0x3d23d70a3d23d70a;
        this_00[0x38] = (hb_font_t)0x1;
        hb_font_t::mults_changed(this_00);
      }
    }
    if (0 < (int)uStack_70._4_4_) {
      lVar11 = 0;
      do {
        piVar5 = (int *)(*(long *)((long)local_78 + lVar11 * 8) + -0x10);
        if (piVar5 != &emptyString) {
          LOCK();
          iVar15 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar15 == 0) {
            operator_delete__(piVar5);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uStack_70._4_4_);
    }
    free(local_78);
                    /* try { // try from 002fa15e to 002fa167 has its CatchHandler @ 002fa2e5 */
    this_01 = operator_new(0x38);
    local_38 = local_68;
    if (local_68 != (void *)0x0) {
      LOCK();
      *(int *)((long)local_68 + 8) = *(int *)((long)local_68 + 8) + 1;
      UNLOCK();
    }
                    /* try { // try from 002fa184 to 002fa1a1 has its CatchHandler @ 002fa2bd */
    local_40 = this_00;
    FreeTypeTypeface(this_01,0,(long *)&local_38,(long *)&local_40,(long *)&local_80,
                     (long *)&local_58);
    *(FreeTypeTypeface **)local_48 = this_01;
    LOCK();
    *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
    UNLOCK();
    if (local_40 != (hb_font_t *)0x0) {
                    /* try { // try from 002fa1b9 to 002fa1bd has its CatchHandler @ 002fa2a0 */
      hb_font_destroy((int *)local_40);
    }
    ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_38);
    piVar5 = local_50;
  }
  if (piVar5 != (int *)0x0) {
                    /* try { // try from 002fa1d2 to 002fa1d9 has its CatchHandler @ 002fa2b5 */
    hb_face_destroy(piVar5);
  }
  pvVar13 = local_68;
LAB_002fa1df:
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(pvVar13);
  pbVar7 = local_58 + -0x10;
  if (pbVar7 != (byte *)&emptyString) {
    LOCK();
    iVar15 = *(int *)pbVar7;
    *(int *)pbVar7 = *(int *)pbVar7 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(pbVar7);
    }
  }
  pbVar7 = local_80 + -0x10;
  if (pbVar7 != (byte *)&emptyString) {
    LOCK();
    iVar15 = *(int *)pbVar7;
    *(int *)pbVar7 = *(int *)pbVar7 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(pbVar7);
    }
  }
  return;
LAB_002f9d6c:
  local_78 = *(void **)(pFVar4 + 8);
  if (local_78 != (void *)0x0) {
    LOCK();
    *(int *)((long)local_78 + 8) = *(int *)((long)local_78 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 002f9d87 to 002f9d96 has its CatchHandler @ 002fa2f4 */
  (**(code **)(*plVar9 + 0x10))(&local_68,plVar9,&local_78);
  pvVar13 = local_78;
  if (local_78 != (void *)0x0) {
    LOCK();
    piVar5 = (int *)((long)local_78 + 8);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      if (*(long *)((long)local_78 + 0x18) != 0) {
                    /* try { // try from 002f9db8 to 002f9dbc has its CatchHandler @ 002fa24d */
        FT_Done_FreeType();
      }
      if (*(long *)((long)pvVar13 + 0x10) != 0) {
                    /* try { // try from 002f9dc6 to 002f9dca has its CatchHandler @ 002fa245 */
        FcConfigDestroy();
      }
      operator_delete(pvVar13);
    }
  }
  goto LAB_002f9dd3;
}


