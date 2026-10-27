// Function : parseGroupElement
// Namespace: juce:SVGState
// Entry    : 002a6630
// Prototype: Drawable * parseGroupElement(SVGState * param_1, long * param_2, undefined8 param_3, char * param_4, undefined8 param_5, undefined8 param_6)
// Body     : 002a6630 - 002a6daf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parseGroupElement(juce::SVGState::XmlPath const&, bool) */

Drawable * __cdecl
juce::SVGState::parseGroupElement
          (SVGState *param_1,long *param_2,undefined8 param_3,char *param_4,SVGState **param_5,
          byte *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  Drawable *pDVar4;
  int *piVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_28;
  
  for (puVar2 = *(undefined8 **)(*param_2 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar2[1],(byte *)"transform");
    if (uVar3 == 0) {
      local_68 = *(undefined1 (*) [8])param_1;
      piVar5 = (int *)((long)local_68 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      local_30 = *(undefined8 *)(param_1 + 0x38);
      uStack_60 = *(undefined8 *)(param_1 + 8);
      local_58 = *(undefined8 *)(param_1 + 0x10);
      local_50 = *(undefined8 *)(param_1 + 0x18);
      uStack_48 = *(undefined8 *)(param_1 + 0x20);
      local_40 = *(undefined1 (*) [16])(param_1 + 0x28);
      local_28 = *(long *)(param_1 + 0x40);
      piVar5 = (int *)(local_28 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
                    /* try { // try from 002a6926 to 002a6939 has its CatchHandler @ 002a6dca */
      addTransform(uStack_60,local_50,local_40._0_8_,(SVGState *)local_68,
                   *(long **)(*param_2 + 0x10),extraout_RDX,param_4,param_5,param_6);
      pDVar4 = operator_new(400);
                    /* try { // try from 002a693d to 002a6944 has its CatchHandler @ 002a6db0 */
      Drawable::Drawable(pDVar4);
      *(undefined ***)pDVar4 = &PTR__DrawableComposite_00707d08;
      uVar11 = 0;
      uVar12 = 0;
      *(undefined1 (*) [16])(pDVar4 + 0x160) = ZEXT416(DAT_005d94c4) << 0x40;
      fVar8 = (float)DAT_005dd020;
      fVar10 = (float)((ulong)DAT_005dd020 >> 0x20);
      *(undefined8 *)(pDVar4 + 0x170) = DAT_005dd020;
      *(undefined8 *)(pDVar4 + 0x178) = 0;
      *(undefined8 *)(pDVar4 + 0x180) = 0;
      pDVar4[0x188] = (Drawable)0x0;
      *(undefined8 *)(pDVar4 + 0x180) = DAT_005dcf50;
                    /* try { // try from 002a699a to 002a69c5 has its CatchHandler @ 002a6dca */
      uVar6 = setCommonAttributes((long *)pDVar4,param_2);
      parseSubElements(uVar6,CONCAT44(fVar10,fVar8),CONCAT44(uVar12,uVar11),(SVGState *)local_68,
                       param_2,(Component *)pDVar4,(char *)0x1,param_5,param_6);
      uVar6 = (**(code **)(*(long *)pDVar4 + 0x1a8))(pDVar4);
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar18 = (float)uVar6;
      *(undefined8 *)(pDVar4 + 0x178) = uVar6;
      *(float *)(pDVar4 + 0x180) = fVar8;
      *(float *)(pDVar4 + 0x184) = fVar10;
      fVar8 = fVar8 + fVar18;
      fVar10 = fVar10 + fVar7;
      if (((((((*(float *)(pDVar4 + 0x160) == fVar18) &&
              (!NAN(*(float *)(pDVar4 + 0x160)) && !NAN(fVar18))) &&
             (*(float *)(pDVar4 + 0x164) == fVar7)) &&
            ((!NAN(*(float *)(pDVar4 + 0x164)) && !NAN(fVar7) &&
             (*(float *)(pDVar4 + 0x168) == fVar8)))) &&
           ((!NAN(*(float *)(pDVar4 + 0x168)) && !NAN(fVar8) &&
            ((*(float *)(pDVar4 + 0x16c) == fVar7 &&
             (!NAN(*(float *)(pDVar4 + 0x16c)) && !NAN(fVar7))))))) &&
          (*(float *)(pDVar4 + 0x170) == fVar18)) &&
         (!NAN(*(float *)(pDVar4 + 0x170)) && !NAN(fVar18))) {
        if ((*(float *)(pDVar4 + 0x174) == fVar10) &&
           (!NAN(*(float *)(pDVar4 + 0x174)) && !NAN(fVar10))) goto LAB_002a6d63;
      }
      fVar9 = fVar8 - fVar18;
      *(undefined8 *)(pDVar4 + 0x160) = uVar6;
      *(float *)(pDVar4 + 0x168) = fVar8;
      *(float *)(pDVar4 + 0x16c) = fVar7;
      *(ulong *)(pDVar4 + 0x170) = CONCAT44(fVar10,fVar18);
      fVar20 = fVar18 - fVar18;
      fVar8 = fVar7 - fVar7;
      fVar10 = fVar10 - fVar7;
      fVar14 = fVar9 * fVar10 - fVar8 * fVar20;
      dVar15 = (double)fVar14;
      dVar13 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar15 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar15,0));
      if (dVar13 == DAT_005d94e0) {
        if ((fVar14 != 0.0) || (NAN(fVar14))) goto LAB_002a6af1;
LAB_002a6c88:
        fVar14 = fVar20;
        fVar17 = fVar8;
        fVar21 = fVar10;
        fVar16 = fVar9;
      }
      else {
        if ((dVar13 <= DAT_005db368) || (dVar13 <= DAT_005db370 * dVar13)) goto LAB_002a6c88;
LAB_002a6af1:
        dVar15 = _DAT_005d9000 / dVar15;
        fVar17 = (float)((double)(float)((uint)fVar8 ^ _DAT_006524b0) * dVar15);
        fVar14 = (float)((double)(float)(_DAT_006524b0 ^ (uint)fVar20) * dVar15);
        uVar6 = CONCAT44((float)(_DAT_006524b0 ^ (uint)fVar18) * fVar17 -
                         fVar7 * (float)((double)fVar9 * dVar15),
                         (float)(_DAT_006524b0 ^ (uint)fVar18) * (float)((double)fVar10 * dVar15) -
                         fVar7 * fVar14);
        fVar21 = (float)((double)fVar9 * dVar15);
        fVar16 = (float)((double)fVar10 * dVar15);
      }
      fVar19 = (float)((ulong)uVar6 >> 0x20);
      local_88._0_4_ = fVar9 * fVar16 + fVar20 * fVar17;
      local_88._4_4_ = fVar9 * fVar14 + fVar20 * fVar21;
      fStack_7c = fVar16 * fVar8 + fVar17 * fVar10;
      fVar14 = fVar14 * fVar8 + fVar21 * fVar10;
      fStack_80 = fVar9 * (float)uVar6 + fVar20 * fVar19 + fVar18;
      local_78 = CONCAT44(fVar8 * (float)uVar6 + fVar10 * fVar19 + fVar7,fVar14);
      fVar18 = fVar14 * (float)local_88._0_4_ - fStack_7c * (float)local_88._4_4_;
      if ((fVar18 == 0.0) && (!NAN(fVar18))) {
        _local_88 = ZEXT416(DAT_005d9038);
        local_78 = 0x3f800000;
      }
                    /* try { // try from 002a6d58 to 002a6d62 has its CatchHandler @ 002a6dca */
      Component::setTransform((Component *)pDVar4,(float *)local_88);
LAB_002a6d63:
      piVar5 = (int *)(local_28 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = (int *)((long)local_68 + -0x10);
      if (piVar5 == &emptyString) {
        return pDVar4;
      }
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
        return pDVar4;
      }
      return pDVar4;
    }
  }
  pDVar4 = operator_new(400);
                    /* try { // try from 002a6689 to 002a6690 has its CatchHandler @ 002a6dbd */
  Drawable::Drawable(pDVar4);
  *(undefined ***)pDVar4 = &PTR__DrawableComposite_00707d08;
  uVar11 = 0;
  uVar12 = 0;
  *(undefined1 (*) [16])(pDVar4 + 0x160) = ZEXT416(DAT_005d94c4) << 0x40;
  fVar8 = (float)DAT_005dd020;
  fVar10 = (float)((ulong)DAT_005dd020 >> 0x20);
  *(undefined8 *)(pDVar4 + 0x170) = DAT_005dd020;
  *(undefined8 *)(pDVar4 + 0x178) = 0;
  *(undefined8 *)(pDVar4 + 0x180) = 0;
  pDVar4[0x188] = (Drawable)0x0;
  *(undefined8 *)(pDVar4 + 0x180) = DAT_005dcf50;
  uVar6 = setCommonAttributes((long *)pDVar4,param_2);
  parseSubElements(uVar6,CONCAT44(fVar10,fVar8),CONCAT44(uVar12,uVar11),param_1,param_2,
                   (Component *)pDVar4,(char *)0x1,param_5,param_6);
  uVar6 = (**(code **)(*(long *)pDVar4 + 0x1a8))(pDVar4);
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar18 = (float)uVar6;
  *(undefined8 *)(pDVar4 + 0x178) = uVar6;
  *(float *)(pDVar4 + 0x180) = fVar8;
  *(float *)(pDVar4 + 0x184) = fVar10;
  fVar8 = fVar8 + fVar18;
  fVar10 = fVar10 + fVar7;
  if ((*(float *)(pDVar4 + 0x160) == fVar18) && (!NAN(*(float *)(pDVar4 + 0x160)) && !NAN(fVar18)))
  {
    if ((*(float *)(pDVar4 + 0x164) == fVar7) && (!NAN(*(float *)(pDVar4 + 0x164)) && !NAN(fVar7)))
    {
      if ((*(float *)(pDVar4 + 0x168) == fVar8) && (!NAN(*(float *)(pDVar4 + 0x168)) && !NAN(fVar8))
         ) {
        if ((*(float *)(pDVar4 + 0x16c) == fVar7) &&
           (!NAN(*(float *)(pDVar4 + 0x16c)) && !NAN(fVar7))) {
          if ((*(float *)(pDVar4 + 0x170) == fVar18) &&
             (!NAN(*(float *)(pDVar4 + 0x170)) && !NAN(fVar18))) {
            if ((*(float *)(pDVar4 + 0x174) == fVar10) &&
               (!NAN(*(float *)(pDVar4 + 0x174)) && !NAN(fVar10))) {
              return pDVar4;
            }
          }
        }
      }
    }
  }
  fVar9 = fVar8 - fVar18;
  *(undefined8 *)(pDVar4 + 0x160) = uVar6;
  *(float *)(pDVar4 + 0x168) = fVar8;
  *(float *)(pDVar4 + 0x16c) = fVar7;
  *(ulong *)(pDVar4 + 0x170) = CONCAT44(fVar10,fVar18);
  fVar20 = fVar18 - fVar18;
  fVar8 = fVar7 - fVar7;
  fVar10 = fVar10 - fVar7;
  fVar14 = fVar9 * fVar10 - fVar8 * fVar20;
  dVar15 = (double)fVar14;
  dVar13 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar15 >> 0x20),
                            _DAT_005d91b0 & SUB84(dVar15,0));
  if (dVar13 == DAT_005d94e0) {
    if ((fVar14 != 0.0) || (NAN(fVar14))) goto LAB_002a683b;
  }
  else if ((DAT_005db368 < dVar13) && (DAT_005db370 * dVar13 < dVar13)) {
LAB_002a683b:
    dVar15 = _DAT_005d9000 / dVar15;
    fVar17 = (float)((double)(float)((uint)fVar8 ^ _DAT_006524b0) * dVar15);
    fVar14 = (float)((double)(float)(_DAT_006524b0 ^ (uint)fVar20) * dVar15);
    uVar6 = CONCAT44((float)(_DAT_006524b0 ^ (uint)fVar18) * fVar17 -
                     fVar7 * (float)((double)fVar9 * dVar15),
                     (float)(_DAT_006524b0 ^ (uint)fVar18) * (float)((double)fVar10 * dVar15) -
                     fVar7 * fVar14);
    fVar21 = (float)((double)fVar9 * dVar15);
    fVar16 = (float)((double)fVar10 * dVar15);
    goto LAB_002a6b9f;
  }
  fVar14 = fVar20;
  fVar17 = fVar8;
  fVar21 = fVar10;
  fVar16 = fVar9;
LAB_002a6b9f:
  fVar19 = (float)((ulong)uVar6 >> 0x20);
  local_68._0_4_ = fVar9 * fVar16 + fVar20 * fVar17;
  local_68._4_4_ = fVar9 * fVar14 + fVar20 * fVar21;
  uStack_60._4_4_ = fVar16 * fVar8 + fVar17 * fVar10;
  fVar14 = fVar14 * fVar8 + fVar21 * fVar10;
  uStack_60._0_4_ = fVar9 * (float)uVar6 + fVar20 * fVar19 + fVar18;
  local_58 = CONCAT44(fVar8 * (float)uVar6 + fVar10 * fVar19 + fVar7,fVar14);
  fVar18 = fVar14 * (float)local_68._0_4_ - uStack_60._4_4_ * (float)local_68._4_4_;
  if ((fVar18 == 0.0) && (!NAN(fVar18))) {
    _local_68 = ZEXT416(DAT_005d9038);
    local_58 = 0x3f800000;
  }
  Component::setTransform((Component *)pDVar4,(float *)local_68);
  return pDVar4;
}


