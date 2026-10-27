// Function : createTabBarExtrasButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 00205c10
// Prototype: Button * createTabBarExtrasButton(void)
// Body     : 00205c10 - 00205c14


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::createTabBarExtrasButton() */

Button * __thiscall juce::LookAndFeel_V2::createTabBarExtrasButton(void)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  byte bVar5;
  void *pvVar6;
  DrawableShape *pDVar7;
  Button *this;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar14;
  undefined8 uVar13;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined1 auVar15 [16];
  void *pvStack_7e8;
  uint uStack_7e0;
  uint uStack_7dc;
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  DrawableShape DStack_7c8;
  long lStack_7b8;
  undefined **ppuStack_7b0;
  void *pvStack_7a8;
  long *plStack_7a0;
  undefined1 auStack_798 [16];
  undefined8 uStack_788;
  ulong uStack_770;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  void *pvStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  DrawableShape DStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined4 auStack_5e0 [2];
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 auStack_5c8 [16];
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_598 [16];
  undefined8 uStack_588;
  undefined **appuStack_580 [8];
  ulong uStack_540;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  void *pvStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  DrawableShape DStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined4 auStack_3b0 [2];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [16];
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined **ppuStack_350;
  void *pvStack_348;
  long *plStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined **ppuStack_1c0;
  void *pvStack_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  fStack_7d8 = 0.0;
  fStack_7d4 = 0.0;
  fStack_7d0 = 0.0;
  fStack_7cc = 0.0;
  pvStack_7e8 = (void *)0x0;
  uStack_7e0 = 0;
  uStack_7dc = 0;
  DStack_7c8 = (DrawableShape)0x1;
  Path::addEllipse(_DAT_005dcf30,_DAT_005dcf40,(Path *)&pvStack_7e8);
  Drawable::Drawable((Drawable *)appuStack_580);
  uVar9 = uStack_7dc;
  pvVar4 = pvStack_7e8;
  uStack_420 = 0;
  uStack_418 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  pvStack_400 = (void *)0x0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  DStack_3e0 = (DrawableShape)0x1;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 1;
  auStack_3b0[0] = _ZN4juce7ColoursL5blackE_14;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  auStack_398 = ZEXT416(DAT_005d9038);
  uStack_388 = 0x3f800000;
  uStack_380 = _ZN4juce7ColoursL5blackE_14;
  uStack_378 = 0;
  uStack_370 = 0;
  auStack_368 = ZEXT416(DAT_005d9038);
  uStack_358 = 0x3f800000;
  appuStack_580[0] = &PTR__DrawablePath_00708098;
  uVar10 = (ulong)uStack_7dc;
  if ((int)uStack_7dc < 1) {
    uVar8 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar8 = (uStack_7dc >> 1) + uStack_7dc + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
      uVar13 = uVar14;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
      uVar13 = uVar14;
    }
    memcpy(pvVar6,pvVar4,uVar10 * 4);
  }
  uStack_3f0 = CONCAT44(fStack_7d4,fStack_7d8);
  uStack_3e8 = CONCAT44(fStack_7cc,fStack_7d0);
  uStack_3f8 = CONCAT44(uVar9,uVar8);
  DStack_3e0 = DStack_7c8;
  pvStack_400 = pvVar6;
  DrawableShape::strokeChanged(uStack_3f0,uVar13,(Component *)appuStack_580);
  ppuStack_7b0 = (undefined **)CONCAT44(ppuStack_7b0._4_4_,0x99ffffff);
  pvStack_7a8 = (void *)0x0;
  plStack_7a0 = (long *)0x0;
  auStack_798 = ZEXT416(DAT_005d9038);
  uStack_788 = 0x3f800000;
  bVar5 = FillType::operator!=((FillType *)auStack_3b0,(int *)&ppuStack_7b0);
  if (bVar5 != 0) {
    FillType::operator=((FillType *)auStack_3b0,(FillType *)&ppuStack_7b0);
    Component::internalRepaintUnchecked((long)appuStack_580,0,uStack_540,'\x01');
    if (plStack_7a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_7a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_7a0 + 8))();
      }
    }
  }
  pvVar4 = pvStack_7a8;
  if (pvStack_7a8 != (void *)0x0) {
    *(undefined4 *)((long)pvStack_7a8 + 0x24) = 0;
    free(*(void **)((long)pvStack_7a8 + 0x18));
    operator_delete(pvVar4);
  }
  uStack_7dc = 0;
  fStack_7d8 = 0.0;
  fStack_7d4 = 0.0;
  fStack_7d0 = 0.0;
  fStack_7cc = 0.0;
  Path::addEllipse(0,DAT_005dcf50,(Path *)&pvStack_7e8);
  uVar9 = uStack_7dc;
  lVar11 = (long)(int)uStack_7dc;
  if (lVar11 == 0) {
    fStack_7d8 = _DAT_005dcf80;
    fStack_7d4 = _UNK_005dcf84;
    fStack_7d0 = _UNK_005dcf88;
    fStack_7cc = _UNK_005dcf8c;
    if ((int)uStack_7e0 < (int)(uStack_7dc + 0xd)) goto LAB_001fb7df;
  }
  else {
    fStack_7d8 = (float)(-(uint)(DAT_005dcf60 < fStack_7d8) & (uint)_DAT_005dcf80 |
                        ~-(uint)(DAT_005dcf60 < fStack_7d8) & (uint)fStack_7d8);
    fStack_7d4 = (float)(-(uint)(fStack_7d4 < DAT_005dcf74) & (uint)_UNK_005dcf84 |
                        ~-(uint)(fStack_7d4 < DAT_005dcf74) & (uint)fStack_7d4);
    fStack_7d0 = (float)(-(uint)(DAT_005dcf68 < fStack_7d0) & (uint)_UNK_005dcf88 |
                        ~-(uint)(DAT_005dcf68 < fStack_7d0) & (uint)fStack_7d0);
    fStack_7cc = (float)(-(uint)(fStack_7cc < DAT_005dcf7c) & (uint)_UNK_005dcf8c |
                        ~-(uint)(fStack_7cc < DAT_005dcf7c) & (uint)fStack_7cc);
    if ((int)uStack_7e0 < (int)(uStack_7dc + 0xd)) {
LAB_001fb7df:
      uVar8 = (int)(uStack_7dc + 0xd) / 2 + uStack_7dc + 0x15 & 0xfffffff8;
      if (uStack_7e0 != uVar8) {
        if ((int)uVar8 < 1) {
          free(pvStack_7e8);
          pvStack_7e8 = (void *)0x0;
        }
        else {
          pvStack_7e8 = realloc(pvStack_7e8,(ulong)uVar8 << 2);
        }
      }
      uStack_7e0 = uVar8;
    }
  }
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4) = 0x47c35100;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 4) = 0x41b00000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 8) = 0x42640000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0xc) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x10) = 0x41b00000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x14) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x18) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x1c) = 0x429c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x20) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x24) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x28) = 0x429c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x2c) = 0x42640000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x30) = 0x47c35280;
  if (uVar9 == -0xd) {
    fStack_7d8 = _DAT_005dcfb0;
    fStack_7d4 = _UNK_005dcfb4;
    fStack_7d0 = _UNK_005dcfb8;
    fStack_7cc = _UNK_005dcfbc;
    if (0xc < (int)uStack_7e0) goto LAB_001fb969;
  }
  else {
    fStack_7d8 = (float)(-(uint)(DAT_005dcf90 < fStack_7d8) & (uint)_DAT_005dcfb0 |
                        ~-(uint)(DAT_005dcf90 < fStack_7d8) & (uint)fStack_7d8);
    fStack_7d4 = (float)(-(uint)(fStack_7d4 < DAT_005dcfa4) & (uint)_UNK_005dcfb4 |
                        ~-(uint)(fStack_7d4 < DAT_005dcfa4) & (uint)fStack_7d4);
    fStack_7d0 = (float)(-(uint)(DAT_005dcf98 < fStack_7d0) & (uint)_UNK_005dcfb8 |
                        ~-(uint)(DAT_005dcf98 < fStack_7d0) & (uint)fStack_7d0);
    fStack_7cc = (float)(-(uint)(fStack_7cc < DAT_005dcfac) & (uint)_UNK_005dcfbc |
                        ~-(uint)(fStack_7cc < DAT_005dcfac) & (uint)fStack_7cc);
    if ((int)(uVar9 + 0x1a) <= (int)uStack_7e0) goto LAB_001fb969;
  }
  uVar8 = (int)(uVar9 + 0x1a) / 2 + uVar9 + 0x22 & 0xfffffff8;
  if (uStack_7e0 != uVar8) {
    if ((int)uVar8 < 1) {
      free(pvStack_7e8);
      pvStack_7e8 = (void *)0x0;
    }
    else {
      pvStack_7e8 = realloc(pvStack_7e8,(ulong)uVar8 << 2);
    }
  }
  uStack_7e0 = uVar8;
LAB_001fb969:
  uStack_7dc = uVar9 + 0x1a;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x34) = 0x47c35100;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x38) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x3c) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x40) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x44) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x48) = 0x41b00000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x4c) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x50) = 0x42640000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x54) = 0x41b00000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x58) = 0x47c35080;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x5c) = 0x42640000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x60) = 0x422c0000;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 100) = 0x47c35280;
  if (uStack_7dc == 0) {
    fStack_7d8 = (float)_DAT_005dcfe0;
    fStack_7d4 = (float)_UNK_005dcfe4;
    fStack_7d0 = (float)_UNK_005dcfe8;
    fStack_7cc = (float)_UNK_005dcfec;
  }
  else {
    fStack_7d8 = (float)(-(uint)(DAT_005dcfc0 < fStack_7d8) & _DAT_005dcfe0 |
                        ~-(uint)(DAT_005dcfc0 < fStack_7d8) & (uint)fStack_7d8);
    fStack_7d4 = (float)(-(uint)(fStack_7d4 < DAT_005dcfd4) & _UNK_005dcfe4 |
                        ~-(uint)(fStack_7d4 < DAT_005dcfd4) & (uint)fStack_7d4);
    fStack_7d0 = (float)(-(uint)(DAT_005dcfc8 < fStack_7d0) & _UNK_005dcfe8 |
                        ~-(uint)(DAT_005dcfc8 < fStack_7d0) & (uint)fStack_7d0);
    fStack_7cc = (float)(-(uint)(fStack_7cc < DAT_005dcfdc) & _UNK_005dcfec |
                        ~-(uint)(fStack_7cc < DAT_005dcfdc) & (uint)fStack_7cc);
  }
  uVar8 = uVar9 + 0x27;
  if ((int)uStack_7e0 < (int)uVar8) {
    uVar9 = uVar9 + (int)(uVar9 + 0x27) / 2 + 0x2f & 0xfffffff8;
    if (uStack_7e0 != uVar9) {
      if ((int)uVar9 < 1) {
        free(pvStack_7e8);
        pvStack_7e8 = (void *)0x0;
      }
      else {
        pvStack_7e8 = realloc(pvStack_7e8,(ulong)uVar9 << 2);
      }
    }
    uVar8 = uStack_7dc + 0xd;
    uStack_7e0 = uVar9;
  }
  pvVar4 = pvStack_7e8;
  uVar13 = _UNK_005dcff8;
  lVar11 = (long)(int)uStack_7dc;
  puVar2 = (undefined8 *)((long)pvStack_7e8 + lVar11 * 4);
  *puVar2 = _DAT_005dcff0;
  puVar2[1] = uVar13;
  uVar13 = _UNK_005dd008;
  puVar2 = (undefined8 *)((long)pvStack_7e8 + lVar11 * 4 + 0x10);
  *puVar2 = _DAT_005dd000;
  puVar2[1] = uVar13;
  uVar13 = _UNK_005dd018;
  puVar2 = (undefined8 *)((long)pvStack_7e8 + lVar11 * 4 + 0x20);
  *puVar2 = _DAT_005dd010;
  puVar2[1] = uVar13;
  *(undefined4 *)((long)pvStack_7e8 + lVar11 * 4 + 0x30) = 0x47c35280;
  DStack_7c8 = (DrawableShape)0x0;
  uStack_7dc = uVar8;
  Drawable::Drawable((Drawable *)&ppuStack_7b0);
  uStack_650 = 0;
  uStack_648 = 0;
  uStack_640 = 0;
  uStack_638 = 0;
  pvStack_630 = (void *)0x0;
  uStack_628 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  DStack_610 = (DrawableShape)0x1;
  uStack_608 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  uStack_5e8 = 1;
  auStack_5e0[0] = _ZN4juce7ColoursL5blackE_14;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  auVar15 = ZEXT416(DAT_005d9038);
  uVar10 = (ulong)DAT_005d9038;
  uStack_5b8 = 0x3f800000;
  uStack_5b0 = _ZN4juce7ColoursL5blackE_14;
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0x3f800000;
  ppuStack_7b0 = &PTR__DrawablePath_00708098;
  auStack_5c8 = auVar15;
  auStack_598 = auVar15;
  if ((int)uVar8 < 1) {
    uVar9 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar9 = uVar8 + (uVar8 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar9 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar9 << 2);
    }
    memcpy(pvVar6,pvVar4,(ulong)uVar8 << 2);
    uVar10 = auVar15._0_8_;
  }
  uStack_620 = CONCAT44(fStack_7d4,fStack_7d8);
  uStack_618 = CONCAT44(fStack_7cc,fStack_7d0);
  uStack_628 = CONCAT44(uVar8,uVar9);
  DStack_610 = DStack_7c8;
  pvStack_630 = pvVar6;
  DrawableShape::strokeChanged(uStack_620,uVar10,(Component *)&ppuStack_7b0);
  ppuStack_1c0 = (undefined **)CONCAT44(ppuStack_1c0._4_4_,0x59000000);
  pvStack_1b8 = (void *)0x0;
  plStack_1b0 = (long *)0x0;
  auStack_1a8 = ZEXT416(DAT_005d9038);
  uStack_198 = 0x3f800000;
  bVar5 = FillType::operator!=((FillType *)auStack_5e0,(int *)&ppuStack_1c0);
  if (bVar5 != 0) {
    FillType::operator=((FillType *)auStack_5e0,(FillType *)&ppuStack_1c0);
    Component::internalRepaintUnchecked((long)&ppuStack_7b0,0,uStack_770,'\x01');
    if (plStack_1b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_1b0 + 8))();
      }
    }
  }
  pvVar4 = pvStack_1b8;
  if (pvStack_1b8 != (void *)0x0) {
    *(undefined4 *)((long)pvStack_1b8 + 0x24) = 0;
    free(*(void **)((long)pvStack_1b8 + 0x18));
    operator_delete(pvVar4);
  }
  Drawable::Drawable((Drawable *)&ppuStack_1c0);
  ppuStack_1c0 = &PTR__DrawableComposite_00707d08;
  auStack_60 = ZEXT416(DAT_005d94c4) << 0x40;
  uStack_50 = DAT_005dd020;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = DAT_005dcf50;
  pDVar7 = operator_new(0x230);
  DrawableShape::DrawableShape(pDVar7,(long)appuStack_580);
  pvVar4 = pvStack_400;
  *(undefined ***)pDVar7 = &PTR__DrawablePath_00708098;
  uVar9 = uStack_3f8._4_4_;
  uVar10 = (ulong)uStack_3f8._4_4_;
  uVar13 = extraout_XMM1_Qa;
  if ((int)uStack_3f8._4_4_ < 1) {
    uVar8 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar8 = (uStack_3f8._4_4_ >> 1) + uStack_3f8._4_4_ + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
    }
    memcpy(pvVar6,pvVar4,uVar10 * 4);
  }
  pvVar4 = *(void **)(pDVar7 + 0x180);
  *(void **)(pDVar7 + 0x180) = pvVar6;
  *(uint *)(pDVar7 + 0x188) = uVar8;
  *(uint *)(pDVar7 + 0x18c) = uVar9;
  *(undefined8 *)(pDVar7 + 400) = uStack_3f0;
  *(undefined8 *)(pDVar7 + 0x198) = uStack_3e8;
  pDVar7[0x1a0] = DStack_3e0;
  free(pvVar4);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),uVar13,(Component *)pDVar7);
  (**(code **)(*(long *)pDVar7 + 0x60))(pDVar7,1);
  Component::addChildComponent((Component *)&ppuStack_1c0,(Component *)pDVar7,0xffffffff);
  pDVar7 = operator_new(0x230);
  DrawableShape::DrawableShape(pDVar7,(long)&ppuStack_7b0);
  pvVar4 = pvStack_630;
  *(undefined ***)pDVar7 = &PTR__DrawablePath_00708098;
  uVar9 = uStack_628._4_4_;
  uVar10 = (ulong)uStack_628._4_4_;
  uVar13 = extraout_XMM1_Qa_00;
  if ((int)uStack_628._4_4_ < 1) {
    uVar8 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar8 = (uStack_628._4_4_ >> 1) + uStack_628._4_4_ + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
    }
    memcpy(pvVar6,pvVar4,uVar10 * 4);
  }
  pvVar4 = *(void **)(pDVar7 + 0x180);
  *(void **)(pDVar7 + 0x180) = pvVar6;
  *(uint *)(pDVar7 + 0x188) = uVar8;
  *(uint *)(pDVar7 + 0x18c) = uVar9;
  *(undefined8 *)(pDVar7 + 400) = uStack_620;
  *(undefined8 *)(pDVar7 + 0x198) = uStack_618;
  pDVar7[0x1a0] = DStack_610;
  free(pvVar4);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),uVar13,(Component *)pDVar7);
  (**(code **)(*(long *)pDVar7 + 0x60))(pDVar7,1);
  Component::addChildComponent((Component *)&ppuStack_1c0,(Component *)pDVar7,0xffffffff);
  ppuStack_350 = (undefined **)CONCAT44(ppuStack_350._4_4_,0xcc000000);
  pvStack_348 = (void *)0x0;
  plStack_340 = (long *)0x0;
  auStack_338 = ZEXT416(DAT_005d9038);
  uStack_328 = 0x3f800000;
  bVar5 = FillType::operator!=((FillType *)auStack_5e0,(int *)&ppuStack_350);
  if (bVar5 != 0) {
    FillType::operator=((FillType *)auStack_5e0,(FillType *)&ppuStack_350);
    Component::internalRepaintUnchecked((long)&ppuStack_7b0,0,uStack_770,'\x01');
    if (plStack_340 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_340 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_340 + 8))();
      }
    }
  }
  pvVar4 = pvStack_348;
  if (pvStack_348 != (void *)0x0) {
    *(undefined4 *)((long)pvStack_348 + 0x24) = 0;
    free(*(void **)((long)pvStack_348 + 0x18));
    operator_delete(pvVar4);
  }
  Drawable::Drawable((Drawable *)&ppuStack_350);
  ppuStack_350 = &PTR__DrawableComposite_00707d08;
  auStack_1f0 = ZEXT416(DAT_005d94c4) << 0x40;
  uStack_1e0 = DAT_005dd020;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = DAT_005dcf50;
  pDVar7 = operator_new(0x230);
  DrawableShape::DrawableShape(pDVar7,(long)appuStack_580);
  pvVar4 = pvStack_400;
  *(undefined ***)pDVar7 = &PTR__DrawablePath_00708098;
  uVar9 = uStack_3f8._4_4_;
  uVar10 = (ulong)uStack_3f8._4_4_;
  uVar13 = extraout_XMM1_Qa_01;
  if ((int)uStack_3f8._4_4_ < 1) {
    uVar8 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar8 = uStack_3f8._4_4_ + (uStack_3f8._4_4_ >> 1) + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
    }
    memcpy(pvVar6,pvVar4,uVar10 * 4);
  }
  pvVar4 = *(void **)(pDVar7 + 0x180);
  *(void **)(pDVar7 + 0x180) = pvVar6;
  *(uint *)(pDVar7 + 0x188) = uVar8;
  *(uint *)(pDVar7 + 0x18c) = uVar9;
  *(undefined8 *)(pDVar7 + 400) = uStack_3f0;
  *(undefined8 *)(pDVar7 + 0x198) = uStack_3e8;
  pDVar7[0x1a0] = DStack_3e0;
  free(pvVar4);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),uVar13,(Component *)pDVar7);
  (**(code **)(*(long *)pDVar7 + 0x60))(pDVar7,1);
  Component::addChildComponent((Component *)&ppuStack_350,(Component *)pDVar7,0xffffffff);
  pDVar7 = operator_new(0x230);
  DrawableShape::DrawableShape(pDVar7,(long)&ppuStack_7b0);
  pvVar4 = pvStack_630;
  *(undefined ***)pDVar7 = &PTR__DrawablePath_00708098;
  uVar9 = uStack_628._4_4_;
  uVar10 = (ulong)uStack_628._4_4_;
  uVar13 = extraout_XMM1_Qa_02;
  if ((int)uStack_628._4_4_ < 1) {
    uVar8 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar8 = uStack_628._4_4_ + (uStack_628._4_4_ >> 1) + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
    }
    memcpy(pvVar6,pvVar4,uVar10 * 4);
  }
  pvVar4 = *(void **)(pDVar7 + 0x180);
  *(void **)(pDVar7 + 0x180) = pvVar6;
  *(uint *)(pDVar7 + 0x188) = uVar8;
  *(uint *)(pDVar7 + 0x18c) = uVar9;
  *(undefined8 *)(pDVar7 + 400) = uStack_620;
  *(undefined8 *)(pDVar7 + 0x198) = uStack_618;
  pDVar7[0x1a0] = DStack_610;
  free(pvVar4);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),uVar13,(Component *)pDVar7);
  (**(code **)(*(long *)pDVar7 + 0x60))(pDVar7,1);
  Component::addChildComponent((Component *)&ppuStack_350,(Component *)pDVar7,0xffffffff);
  this = operator_new(0x250);
  translate((juce *)&lStack_7b8,(byte *)"Additional Items");
  Button::Button(this,&lStack_7b8);
  *(undefined ***)this = &PTR__DrawableButton_00707240;
  *(undefined ***)(this + 0xf0) = &PTR__DrawableButton_00707428;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 3;
  piVar12 = (int *)(lStack_7b8 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar3 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar12);
    }
  }
  DrawableButton::setImages((long *)this,(long *)&ppuStack_1c0,(long *)&ppuStack_350);
  DrawableComposite::~DrawableComposite((DrawableComposite *)&ppuStack_350);
  DrawableComposite::~DrawableComposite((DrawableComposite *)&ppuStack_1c0);
  DrawableShape::~DrawableShape((DrawableShape *)&ppuStack_7b0);
  DrawableShape::~DrawableShape((DrawableShape *)appuStack_580);
  free(pvStack_7e8);
  return this;
}


