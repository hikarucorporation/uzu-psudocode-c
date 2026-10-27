// Function : parseShape
// Namespace: juce:SVGState
// Entry    : 002a5380
// Prototype: Component * parseShape(SVGState * param_1, float * param_2, Path * param_3, char * param_4, undefined8 param_5, byte * param_6)
// Body     : 002a5380 - 002a62d7


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parseShape(juce::SVGState::XmlPath const&, juce::Path&, bool,
   juce::AffineTransform*) const */

Component * __cdecl
juce::SVGState::parseShape
          (SVGState *param_1,float *param_2,Path *param_3,char *param_4,undefined8 param_5,
          byte *param_6)

{
  long *plVar1;
  int iVar2;
  Path PVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  FillType *this;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  Drawable *this_00;
  void *pvVar13;
  undefined4 *puVar14;
  Component *pCVar15;
  float *pfVar16;
  uint *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 extraout_RDX;
  float *pfVar20;
  uint uVar21;
  ulong uVar22;
  SVGState *pSVar23;
  byte *pbVar24;
  int *piVar25;
  SVGState *pSVar26;
  byte **ppbVar27;
  byte **ppbVar28;
  bool bVar29;
  undefined4 extraout_XMM0_Da;
  float fVar30;
  float fVar31;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar32;
  undefined4 extraout_XMM0_Db_00;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  byte *local_d8;
  undefined8 local_d0;
  float *local_c8;
  byte *local_c0;
  byte *local_b8;
  SVGState *local_b0;
  undefined8 local_a8;
  void *local_a0;
  long *plStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  SVGState *local_60;
  Component *local_58;
  byte *local_50;
  float local_44;
  undefined1 *local_40;
  Component *local_38;
  
  ppbVar27 = &local_d8;
  ppbVar28 = &local_d8;
  if ((int)param_4 != 0) {
    for (puVar4 = *(undefined8 **)(*(long *)param_2 + 0x10); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar4[1],(byte *)"transform");
      if (uVar10 == 0) {
        local_a8 = *(undefined1 **)param_1;
        piVar25 = (int *)(local_a8 + -0x10);
        if (piVar25 != &emptyString) {
          LOCK();
          *piVar25 = *piVar25 + 1;
          UNLOCK();
        }
        local_70 = *(undefined8 *)(param_1 + 0x38);
        local_a0 = *(void **)(param_1 + 8);
        plStack_98 = *(long **)(param_1 + 0x10);
        uVar32 = *(undefined8 *)(param_1 + 0x18);
        local_90 = *(undefined1 (*) [16])(param_1 + 0x18);
        local_80 = *(undefined8 *)(param_1 + 0x28);
        uStack_78 = *(undefined8 *)(param_1 + 0x30);
        local_68 = *(long *)(param_1 + 0x40);
        piVar25 = (int *)(local_68 + -0x10);
        if (piVar25 != &emptyString) {
          LOCK();
          *piVar25 = *piVar25 + 1;
          UNLOCK();
        }
                    /* try { // try from 002a5b43 to 002a5b5e has its CatchHandler @ 002a62e5 */
        addTransform(local_a0,uVar32,local_80,(SVGState *)&local_a8,
                     *(long **)(*(long *)param_2 + 0x10),extraout_RDX,param_4,param_5,param_6);
        pCVar15 = parseShape((SVGState *)&local_a8,param_2,param_3,(char *)0x0,param_5,param_6);
        piVar25 = (int *)(local_68 + -0x10);
        if (piVar25 != &emptyString) {
          LOCK();
          iVar11 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar11 == 0) {
            operator_delete__(piVar25);
          }
        }
        local_50 = local_a8 + -0x10;
        if (local_50 == (byte *)&emptyString) {
          return pCVar15;
        }
        LOCK();
        iVar11 = *(int *)local_50;
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        goto joined_r0x002a5b9f;
      }
    }
  }
  this_00 = operator_new(0x230);
                    /* try { // try from 002a53ea to 002a53f1 has its CatchHandler @ 002a6585 */
  Drawable::Drawable(this_00);
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined4 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  this_00[0x1a0] = (Drawable)0x1;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  *(undefined8 *)(this_00 + 0x1b8) = 0;
  *(undefined8 *)(this_00 + 0x1c0) = 0;
  this_00[0x1c8] = (Drawable)0x1;
  uVar36 = _ZN4juce7ColoursL5blackE_14;
  *(undefined4 *)(this_00 + 0x1d0) = _ZN4juce7ColoursL5blackE_14;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  uVar10 = DAT_005d9038;
  uVar34 = 0;
  *(undefined1 (*) [16])(this_00 + 0x1e8) = ZEXT416(DAT_005d9038);
  *(undefined8 *)(this_00 + 0x1f8) = 0x3f800000;
  *(undefined4 *)(this_00 + 0x200) = uVar36;
  *(undefined8 *)(this_00 + 0x208) = 0;
  *(undefined8 *)(this_00 + 0x210) = 0;
  *(undefined1 (*) [16])(this_00 + 0x218) = ZEXT416(uVar10);
  *(undefined8 *)(this_00 + 0x228) = 0x3f800000;
  *(undefined ***)this_00 = &PTR__DrawablePath_00708098;
  setCommonAttributes((long *)this_00,(long *)param_2);
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,_ZN4juce7ColoursL16transparentBlackE_5);
  local_a0 = (void *)0x0;
  plStack_98 = (long *)0x0;
  local_90 = ZEXT416(DAT_005d9038);
  local_80 = 0x3f800000;
  local_d0 = (FillType *)(this_00 + 0x1d0);
  bVar9 = FillType::operator!=((FillType *)(this_00 + 0x1d0),(int *)&local_a8);
  if (bVar9 != 0) {
                    /* try { // try from 002a54e1 to 002a5502 has its CatchHandler @ 002a6570 */
    FillType::operator=(local_d0,(FillType *)&local_a8);
    Component::internalRepaintUnchecked((long)this_00,0,*(ulong *)(this_00 + 0x40),'\x01');
    if (plStack_98 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_98 + 8))();
      }
    }
  }
  pvVar13 = local_a0;
  if (local_a0 != (void *)0x0) {
    *(undefined4 *)((long)local_a0 + 0x24) = 0;
    free(*(void **)((long)local_a0 + 0x18));
    operator_delete(pvVar13);
  }
  local_60 = param_1;
  Path::applyTransform(param_3,(float *)(param_1 + 0x28));
  uVar12 = *(uint *)(param_3 + 0xc);
  local_c8 = param_2;
  local_58 = (Component *)this_00;
  if ((int)uVar12 < 1) {
    uVar21 = 0;
    pvVar13 = (void *)0x0;
  }
  else {
    pvVar5 = *(void **)param_3;
    uVar21 = uVar12 + (uVar12 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar21 < 1) {
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = malloc((ulong)uVar21 << 2);
    }
    memcpy(pvVar13,pvVar5,(ulong)uVar12 * 4);
  }
  pCVar15 = local_58;
  pfVar7 = local_c8;
  uVar32 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  PVar3 = param_3[0x20];
  pvVar5 = *(void **)(local_58 + 0x180);
  *(void **)(local_58 + 0x180) = pvVar13;
  *(uint *)(local_58 + 0x188) = uVar21;
  *(uint *)(local_58 + 0x18c) = uVar12;
  *(undefined8 *)(local_58 + 400) = uVar32;
  *(undefined8 *)(local_58 + 0x198) = uVar6;
  *(Path *)(local_58 + 0x1a0) = PVar3;
  free(pvVar5);
  DrawableShape::strokeChanged
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar34,uVar10),pCVar15);
  pSVar26 = local_60;
  local_c0 = &DAT_0061ac58;
                    /* try { // try from 002a5603 to 002a5621 has its CatchHandler @ 002a6536 */
  getStyleAttribute((SVGState *)&local_d8,(long)local_60,(long *)pfVar7,(byte *)"fill-opacity",
                    (byte *)&local_c0,param_6);
  local_b8 = &DAT_0061ac58;
                    /* try { // try from 002a5627 to 002a5642 has its CatchHandler @ 002a64eb */
  getStyleAttribute((SVGState *)&local_b0,(long)pSVar26,(long *)pfVar7,(byte *)0x5e3b0a,
                    (byte *)&local_b8,param_6);
  local_38 = pCVar15 + 0x170;
  pfVar16 = *(float **)param_3 + *(int *)(param_3 + 0xc);
  uVar34 = 0;
  uVar36 = 0;
  pfVar8 = *(float **)param_3;
LAB_002a5697:
  while( true ) {
    pfVar20 = pfVar8;
    if (pfVar20 == pfVar16) goto LAB_002a56dc;
    fVar33 = *pfVar20;
    if ((fVar33 != DAT_005de3d0) || (NAN(fVar33) || NAN(DAT_005de3d0))) break;
LAB_002a5690:
    pfVar8 = pfVar20 + 3;
  }
  if ((fVar33 == DAT_005de3d8) && (!NAN(fVar33) && !NAN(DAT_005de3d8))) goto LAB_002a5690;
  if ((fVar33 == DAT_005de3dc) && (!NAN(fVar33) && !NAN(DAT_005de3dc))) {
    pfVar8 = pfVar20 + 5;
    goto LAB_002a5697;
  }
  if ((fVar33 == DAT_005de3d4) && (!NAN(fVar33) && !NAN(DAT_005de3d4))) {
    pfVar8 = pfVar20 + 7;
    goto LAB_002a5697;
  }
  pfVar8 = pfVar20 + 1;
  if ((fVar33 != DAT_005de41c) || (NAN(fVar33) || NAN(DAT_005de41c))) goto LAB_002a5697;
LAB_002a56dc:
  puVar17 = &_ZN4juce7ColoursL16transparentBlackE_5;
  if (pfVar20 != pfVar16) {
    puVar17 = &_ZN4juce7ColoursL5blackE_14;
  }
                    /* try { // try from 002a56f8 to 002a571a has its CatchHandler @ 002a64c0 */
  fVar30 = DAT_005de3d8;
  fVar33 = DAT_005de3dc;
  getPathFillType((ulong)(uint)DAT_005de3d0,(ulong)(uint)DAT_005de3d8,(ulong)(uint)DAT_005de3dc,
                  (uint *)&local_a8,pSVar26,param_3,(long *)pfVar7,(byte *)0x654009,
                  (byte *)&local_d8,local_b0,*puVar17);
  this = local_d0;
  bVar9 = FillType::operator!=(local_d0,(int *)&local_a8);
  if (bVar9 != 0) {
                    /* try { // try from 002a5731 to 002a5750 has its CatchHandler @ 002a64b1 */
    FillType::operator=(this,(FillType *)&local_a8);
    Component::internalRepaintUnchecked((long)pCVar15,0,*(ulong *)(pCVar15 + 0x40),'\x01');
  }
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plStack_98 + 8))();
    }
  }
  pvVar13 = local_a0;
  if (local_a0 != (void *)0x0) {
    *(undefined4 *)((long)local_a0 + 0x24) = 0;
    free(*(void **)((long)local_a0 + 0x18));
    operator_delete(pvVar13);
  }
  local_a0 = (void *)0x0;
  pSVar23 = local_b0 + -0x10;
  if (pSVar23 != (SVGState *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pSVar23;
    *(int *)pSVar23 = *(int *)pSVar23 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pSVar23);
    }
  }
  pbVar24 = local_b8 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pbVar24);
    }
  }
  pbVar24 = local_d8 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pbVar24);
    }
  }
  pbVar24 = local_c0 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pbVar24);
    }
  }
  local_a8 = &DAT_0061ac58;
                    /* try { // try from 002a5825 to 002a5845 has its CatchHandler @ 002a64a9 */
  getStyleAttribute((SVGState *)&local_50,(long)pSVar26,(long *)local_c8,(byte *)"stroke",
                    (byte *)&local_a8,(byte *)ppbVar27);
  if (*local_50 != 0) {
    uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (local_50,&DAT_0065e5f2);
    pSVar26 = local_60;
    pfVar16 = local_c8;
    if (uVar10 != 0) {
      local_c0 = &DAT_0061ac58;
                    /* try { // try from 002a5877 to 002a589a has its CatchHandler @ 002a646f */
      getStyleAttribute((SVGState *)&local_d8,(long)local_60,(long *)local_c8,
                        (byte *)"stroke-opacity",(byte *)&local_c0,(byte *)ppbVar27);
      local_b8 = &DAT_0061ac58;
                    /* try { // try from 002a58a0 to 002a58bb has its CatchHandler @ 002a641d */
      uVar32 = getStyleAttribute((SVGState *)&local_b0,(long)pSVar26,(long *)pfVar16,
                                 (byte *)0x5e3b0a,(byte *)&local_b8,(byte *)ppbVar27);
                    /* try { // try from 002a58c7 to 002a58e9 has its CatchHandler @ 002a63f3 */
      getPathFillType(uVar32,CONCAT44(uVar34,fVar30),CONCAT44(uVar36,fVar33),(uint *)&local_a8,
                      pSVar26,param_3,(long *)pfVar16,(byte *)"stroke",(byte *)&local_d8,local_b0,
                      _ZN4juce7ColoursL16transparentBlackE_5);
      bVar9 = FillType::operator!=((FillType *)(pCVar15 + 0x200),(int *)&local_a8);
      if (bVar9 != 0) {
                    /* try { // try from 002a5905 to 002a5924 has its CatchHandler @ 002a63e4 */
        FillType::operator=((FillType *)(pCVar15 + 0x200),(FillType *)&local_a8);
        Component::internalRepaintUnchecked((long)pCVar15,0,*(ulong *)(pCVar15 + 0x40),'\x01');
      }
      if (plStack_98 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plStack_98 + 8))();
        }
      }
      pvVar13 = local_a0;
      if (local_a0 != (void *)0x0) {
        *(undefined4 *)((long)local_a0 + 0x24) = 0;
        free(*(void **)((long)local_a0 + 0x18));
        operator_delete(pvVar13);
      }
      local_a0 = (void *)0x0;
      local_b0 = local_b0 + -0x10;
      if (local_b0 != (SVGState *)&emptyString) {
        LOCK();
        iVar11 = *(int *)local_b0;
        *(int *)local_b0 = *(int *)local_b0 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(local_b0);
        }
      }
      pbVar24 = local_b8 + -0x10;
      if (pbVar24 != (byte *)&emptyString) {
        LOCK();
        iVar11 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(pbVar24);
        }
      }
      local_d8 = local_d8 + -0x10;
      if (local_d8 != (byte *)&emptyString) {
        LOCK();
        iVar11 = *(int *)local_d8;
        *(int *)local_d8 = *(int *)local_d8 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(local_d8);
        }
      }
      pbVar24 = local_c0 + -0x10;
      if (pbVar24 != (byte *)&emptyString) {
        LOCK();
        iVar11 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(pbVar24);
        }
      }
                    /* try { // try from 002a59e6 to 002a59ef has its CatchHandler @ 002a63df */
      puVar14 = operator_new__(0x1b);
      LOCK();
      *puVar14 = 0;
      UNLOCK();
      *(undefined8 *)(puVar14 + 2) = 4;
      local_d8 = (byte *)(puVar14 + 4);
      *(undefined2 *)(puVar14 + 4) = 0x31;
                    /* try { // try from 002a5a0d to 002a5a28 has its CatchHandler @ 002a63ae */
      getStyleAttribute((SVGState *)&local_a8,(long)pSVar26,(long *)local_c8,(byte *)"stroke-width",
                        (byte *)&local_d8,(byte *)ppbVar28);
      fVar30 = (float)((uint)(*(float *)(pSVar26 + 0x28) * *(float *)(pSVar26 + 0x38) -
                             *(float *)(pSVar26 + 0x34) * *(float *)(pSVar26 + 0x2c)) &
                      _DAT_005d91c0);
      uVar34 = 0;
      uVar35 = 0;
      if (fVar30 < 0.0) {
        fVar30 = sqrtf(fVar30);
      }
      else {
        fVar30 = SQRT(fVar30);
      }
      local_d0 = (FillType *)CONCAT44(local_d0._4_4_,fVar30);
      uVar19 = getCoordLength(*(float *)(pSVar26 + 0x20),CONCAT44(uVar35,uVar34),
                              CONCAT44(uVar36,fVar33),(String *)&local_a8);
      local_44 = (float)uVar19;
      local_b0 = (SVGState *)&DAT_0061ac58;
                    /* try { // try from 002a5a8a to 002a5aa7 has its CatchHandler @ 002a635b */
      getStyleAttribute((SVGState *)&local_c0,(long)pSVar26,(long *)local_c8,
                        (byte *)"stroke-linejoin",(byte *)&local_b0,(byte *)ppbVar28);
      pbVar24 = local_c0;
      uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (local_c0,(byte *)0x654b5c);
      if (uVar10 == 0) {
        iVar11 = 1;
      }
      else {
        uVar10 = CharacterFunctions::
                 compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar24,(byte *)"bevel");
        iVar11 = (uint)(uVar10 == 0) * 2;
      }
      local_40 = &DAT_0061ac58;
                    /* try { // try from 002a5bbe to 002a5bde has its CatchHandler @ 002a6338 */
      getStyleAttribute((SVGState *)&local_b8,(long)pSVar26,(long *)local_c8,
                        (byte *)"stroke-linecap",(byte *)&local_40,(byte *)ppbVar28);
      pbVar24 = local_b8;
      uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (local_b8,(byte *)0x654b5c);
      if (uVar10 == 0) {
        uVar12 = 2;
        uVar10 = 2;
        ppbVar27 = ppbVar28;
        fVar30 = (float)local_d0;
      }
      else {
        uVar10 = CharacterFunctions::
                 compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar24,(byte *)"square");
        uVar12 = (uint)(uVar10 == 0);
        uVar10 = (uint)(uVar10 == 0);
        ppbVar27 = ppbVar28;
        fVar30 = (float)local_d0;
      }
      if (pbVar24 != &DAT_0061ac58) {
        pbVar24 = pbVar24 + -0x10;
        LOCK();
        iVar2 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
        uVar10 = uVar12;
        if (iVar2 == 0) {
          operator_delete__(pbVar24);
          fVar30 = (float)local_d0;
        }
      }
      piVar25 = (int *)(local_40 + -0x10);
      if (piVar25 != &emptyString) {
        LOCK();
        iVar2 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar25);
          fVar30 = (float)local_d0;
        }
      }
      pbVar24 = local_c0 + -0x10;
      if (pbVar24 != (byte *)&emptyString) {
        LOCK();
        iVar2 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(pbVar24);
          fVar30 = (float)local_d0;
        }
      }
      pSVar26 = local_b0 + -0x10;
      if (pSVar26 != (SVGState *)&emptyString) {
        LOCK();
        iVar2 = *(int *)pSVar26;
        *(int *)pSVar26 = *(int *)pSVar26 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(pSVar26);
          fVar30 = (float)local_d0;
        }
      }
      piVar25 = (int *)(local_a8 + -0x10);
      if (piVar25 != &emptyString) {
        LOCK();
        iVar2 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar25);
          fVar30 = (float)local_d0;
        }
      }
      fVar30 = fVar30 * local_44;
      pbVar24 = local_d8 + -0x10;
      if (pbVar24 == (byte *)&emptyString) {
LAB_002a5d0e:
        fVar31 = *(float *)(pCVar15 + 0x160);
        if (fVar31 == fVar30) {
          if (!NAN(fVar31) && !NAN(fVar30)) goto LAB_002a5d1e;
        }
      }
      else {
        LOCK();
        iVar2 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
        if (iVar2 != 0) goto LAB_002a5d0e;
        local_d0 = (FillType *)CONCAT44(local_d0._4_4_,fVar30);
        operator_delete__(pbVar24);
        fVar31 = *(float *)(pCVar15 + 0x160);
        fVar30 = (float)local_d0;
        if ((fVar31 == (float)local_d0) && (!NAN(fVar31) && !NAN((float)local_d0))) {
LAB_002a5d1e:
          uVar34 = 0;
          if ((*(int *)(pCVar15 + 0x164) == iVar11) && (*(uint *)(pCVar15 + 0x168) == uVar10))
          goto LAB_002a5d72;
        }
      }
      uVar34 = 0;
      *(float *)(pCVar15 + 0x160) = fVar30;
      *(int *)(pCVar15 + 0x164) = iVar11;
      *(uint *)(pCVar15 + 0x168) = uVar10;
                    /* try { // try from 002a5d6a to 002a5d71 has its CatchHandler @ 002a62e0 */
      DrawableShape::strokeChanged((ulong)(uint)fVar31,(ulong)(uint)fVar30,pCVar15);
    }
  }
LAB_002a5d72:
  local_a8 = &DAT_0061ac58;
                    /* try { // try from 002a5d7e to 002a5d9d has its CatchHandler @ 002a64a1 */
  getStyleAttribute((SVGState *)&local_c0,(long)local_60,(long *)local_c8,(byte *)"stroke-dasharray"
                    ,(byte *)&local_a8,(byte *)ppbVar27);
  pbVar24 = local_c0;
  if (*local_c0 == 0) goto LAB_002a6282;
  uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (local_c0,(byte *)0x5e6253);
  if (uVar10 == 0) goto LAB_002a6282;
  uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (pbVar24,&DAT_0065e5f2);
  if (uVar10 == 0) goto LAB_002a6282;
  local_d8 = pbVar24;
  local_c8 = (float *)0x0;
  uVar10 = 0;
  uVar19 = 0;
  while( true ) {
    uVar22 = uVar19;
    local_a8 = &DAT_0061ac58;
                    /* try { // try from 002a5e0c to 002a5e1d has its CatchHandler @ 002a6595 */
    uVar32 = parseNextNumber(&local_d8,&local_a8,'\x01');
    uVar12 = (uint)uVar22;
    if ((char)uVar32 == '\0') break;
    uVar19 = getCoordLength(*(float *)(local_60 + 0x20),CONCAT44(uVar34,fVar30),
                            CONCAT44(uVar36,fVar33),(String *)&local_a8);
    fVar31 = (float)uVar19;
    piVar25 = (int *)(local_a8 + -0x10);
    pfVar16 = local_c8;
    if (piVar25 != &emptyString) {
      LOCK();
      iVar11 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        local_d0 = (FillType *)CONCAT44(local_d0._4_4_,fVar31);
        operator_delete__(piVar25);
        fVar31 = (float)local_d0;
        pfVar16 = local_c8;
      }
    }
    if ((long)uVar22 < (long)(int)uVar10) {
    }
    else {
      uVar12 = (uVar12 + 1 >> 1) + uVar12 + 9 & 0xfffffff8;
      if (uVar10 != uVar12) {
        local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
        local_d0 = (FillType *)CONCAT44(local_d0._4_4_,fVar31);
        local_c8 = pfVar16;
        pfVar16 = realloc(pfVar16,(ulong)uVar12 << 2);
        fVar31 = (float)local_d0;
        uVar10 = uVar12;
      }
    }
    pfVar16[uVar22] = fVar31;
    local_c8 = pfVar16;
LAB_002a5ed0:
    pbVar24 = local_d8;
    bVar9 = *local_d8;
    uVar12 = (uint)bVar9;
    if ((char)bVar9 < '\0') {
      uVar21 = (uint)bVar9;
      if ((bVar9 & 0x40) == 0) {
        iVar11 = iswspace(uVar21 & 0x7f);
      }
      else {
        uVar12 = uVar21 & 0x10 ^ 0x1f;
        if ((bVar9 & 0x20) == 0) {
          uVar12 = 0x3f;
        }
        uVar12 = uVar12 & uVar21;
        if ((local_d8[1] & 0xffffffc0) != 0x80) goto LAB_002a5f90;
        uVar12 = local_d8[1] & 0x3f | uVar12 << 6;
        if (((bVar9 & 0x20) == 0) || ((local_d8[2] & 0xffffffc0) != 0x80)) {
          iVar11 = iswspace(uVar12);
        }
        else {
          uVar12 = local_d8[2] & 0x3f | uVar12 << 6;
          if (((bVar9 >> 5 & (bVar9 & 0x10) == 0) != 0) || ((local_d8[3] & 0xffffffc0) != 0x80))
          goto LAB_002a5f90;
          iVar11 = iswspace(uVar12 << 6 | local_d8[3] & 0x3f);
        }
      }
    }
    else {
LAB_002a5f90:
      iVar11 = iswspace(uVar12);
    }
    if (iVar11 != 0) {
      local_d8 = pbVar24 + 1;
      bVar9 = *pbVar24;
      if (((char)bVar9 < '\0') && ((bVar9 & 0x40) != 0)) {
        lVar18 = 4 - (ulong)((bVar9 & 0x10) == 0);
        if ((bVar9 & 0x20) == 0) {
          lVar18 = 2;
        }
        local_d8 = pbVar24 + lVar18;
      }
      goto LAB_002a5ed0;
    }
    bVar9 = *pbVar24;
    uVar12 = (uint)bVar9;
    if ((char)bVar9 < '\0') {
      uVar12 = (uint)bVar9;
      if ((bVar9 & 0x40) == 0) {
        uVar12 = uVar12 & 0x7f;
      }
      else {
        uVar21 = uVar12 & 0x10 ^ 0x1f;
        if ((bVar9 & 0x20) == 0) {
          uVar21 = 0x3f;
        }
        uVar12 = uVar21 & uVar12;
        if (((((pbVar24[1] & 0xffffffc0) == 0x80) &&
             (uVar12 = pbVar24[1] & 0x3f | uVar12 << 6, (bVar9 & 0x20) != 0)) &&
            ((pbVar24[2] & 0xffffffc0) == 0x80)) &&
           ((uVar12 = pbVar24[2] & 0x3f | uVar12 << 6, (bVar9 >> 5 & (bVar9 & 0x10) == 0) == 0 &&
            ((pbVar24[3] & 0xffffffc0) == 0x80)))) {
          uVar12 = uVar12 << 6 | pbVar24[3] & 0x3f;
        }
      }
    }
    uVar19 = uVar22 + 1;
    if (uVar12 == 0x2c) {
      uVar19 = uVar22 + 1;
      local_d8 = pbVar24 + 1;
      bVar9 = *pbVar24;
      if (((char)bVar9 < '\0') && ((bVar9 & 0x40) != 0)) {
        lVar18 = 4 - (ulong)((bVar9 & 0x10) == 0);
        if ((bVar9 & 0x20) == 0) {
          lVar18 = 2;
        }
        local_d8 = pbVar24 + lVar18;
      }
    }
  }
  piVar25 = (int *)(local_a8 + -0x10);
  if (piVar25 != &emptyString) {
    LOCK();
    iVar11 = *piVar25;
    *piVar25 = *piVar25 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar25);
    }
  }
  fVar31 = DAT_005de514;
  fVar33 = DAT_005d908c;
  pCVar15 = local_58;
  if (uVar12 != 0) {
    if (uVar12 == 1) {
      fVar33 = fVar30;
      if (*local_c8 <= 0.0) goto LAB_002a6278;
    }
    else {
      uVar19 = 0;
      uVar34 = 0;
      do {
        if (local_c8[uVar19] <= 0.0) {
          local_c8[uVar19] = 0.001;
          uVar10 = (uint)uVar19 ^ 1;
          if ((uVar10 < uVar12) && (fVar33 < local_c8[uVar10])) {
            local_c8[uVar10] = local_c8[uVar10] + fVar31;
          }
        }
        uVar19 = uVar19 + 1;
      } while ((uVar22 & 0xffffffff) != uVar19);
    }
    if (*(uint *)(local_58 + 0x17c) == uVar12) {
      lVar18 = 0;
      do {
        fVar30 = *(float *)(*(long *)local_38 + lVar18);
        fVar33 = *(float *)((long)local_c8 + lVar18);
        uVar34 = 0;
        if ((fVar30 != fVar33) || (NAN(fVar30) || NAN(fVar33))) break;
        bVar29 = (uVar22 & 0xffffffff) * 4 + -4 != lVar18;
        lVar18 = lVar18 + 4;
      } while (bVar29);
      if ((fVar30 == fVar33) && (!NAN(fVar30) && !NAN(fVar33))) goto LAB_002a6278;
    }
    uVar10 = ((uint)(uVar22 >> 1) & 0x7fffffff) + uVar12 + 8 & 0xfffffff8;
    if ((int)uVar10 < 1) {
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = malloc((ulong)uVar10 << 2);
    }
    memcpy(pvVar13,local_c8,(uVar22 & 0xffffffff) << 2);
    pCVar15 = local_58;
    pvVar5 = *(void **)(local_58 + 0x170);
    *(void **)(local_58 + 0x170) = pvVar13;
    *(uint *)(local_58 + 0x178) = uVar10;
    *(uint *)(local_58 + 0x17c) = uVar12;
    free(pvVar5);
                    /* try { // try from 002a626b to 002a6272 has its CatchHandler @ 002a62d8 */
    DrawableShape::strokeChanged
              (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar34,fVar33),pCVar15);
  }
LAB_002a6278:
  free(local_c8);
  pbVar24 = local_c0;
LAB_002a6282:
  pbVar24 = pbVar24 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pbVar24);
    }
  }
  local_50 = local_50 + -0x10;
  if (local_50 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)local_50;
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
joined_r0x002a5b9f:
    if (iVar11 == 0) {
      operator_delete__(local_50);
    }
  }
  return pCVar15;
}


