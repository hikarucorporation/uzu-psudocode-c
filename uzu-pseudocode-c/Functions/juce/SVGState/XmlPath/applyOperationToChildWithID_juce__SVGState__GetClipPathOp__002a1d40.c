// Function : applyOperationToChildWithID<juce::SVGState::GetClipPathOp>
// Namespace: juce:SVGState:XmlPath
// Entry    : 002a1d40
// Prototype: ulong applyOperationToChildWithID<juce::SVGState::GetClipPathOp>(XmlPath * this, ulong * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, ulong param_5)
// Body     : 002a1d40 - 002a21ad


/* bool 
   juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::GetClipPathOp>(juce::String
   const&, juce::SVGState::GetClipPathOp&) const */

ulong __thiscall
juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::GetClipPathOp>
          (XmlPath *this,ulong *param_1,undefined8 *param_2,undefined8 param_3,SVGState **param_4,
          ulong param_5)

{
  byte bVar1;
  SVGState *this_00;
  Drawable *pDVar2;
  bool bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  Drawable *this_01;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 extraout_RDX;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  SVGState **ppSVar17;
  long lVar18;
  XmlElement *pXVar19;
  uint uVar20;
  XmlElement *local_50;
  XmlPath *local_48;
  byte *local_40;
  XmlPath *local_38;
  
  pXVar19 = *(XmlElement **)(*(long *)this + 8);
  local_38 = this;
  if (pXVar19 == (XmlElement *)0x0) {
LAB_002a218d:
    uVar9 = 0;
  }
  else {
    do {
      local_48 = local_38;
      plVar8 = *(long **)(pXVar19 + 0x10);
      uVar9 = 0;
      local_50 = pXVar19;
      if (plVar8 != (long *)0x0) {
        local_40 = (byte *)*param_1;
        pbVar5 = local_40;
        do {
          pbVar15 = &DAT_0065bedf;
          param_4 = (SVGState **)plVar8[1];
          do {
            ppSVar17 = (SVGState **)((long)param_4 + 1);
            bVar1 = *(byte *)param_4;
            uVar20 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar20 = uVar20 & 0x7f;
                goto LAB_002a1e12;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar14 = 0x3f;
                lVar18 = 0;
                bVar3 = false;
                param_5 = 0;
              }
              else {
                bVar3 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar14 = 0x1f;
                  lVar18 = 1;
                  param_5 = 0;
                }
                else {
                  uVar14 = 0xf;
                  lVar18 = 2;
                  param_5 = CONCAT71((int7)(param_5 >> 8),1);
                }
              }
              uVar20 = uVar20 & uVar14;
              if ((*(byte *)((long)param_4 + 1) & 0xc0) == 0x80) {
                uVar20 = *(byte *)((long)param_4 + 1) & 0x3f | uVar20 << 6;
                if (bVar3) {
                  uVar14 = (uint)*(byte *)((long)param_4 + 2);
                  if ((uVar14 & 0xffffffc0) != 0x80) {
                    bVar1 = *pbVar15;
                    param_4 = (SVGState **)((long)param_4 + 2);
                    goto joined_r0x002a1e1f;
                  }
                  uVar20 = uVar14 & 0x3f | uVar20 << 6;
                  if ((char)param_5 != '\0') {
                    ppSVar17 = (SVGState **)((long)param_4 + 3);
                    if ((*(byte *)ppSVar17 & 0xc0) != 0x80) goto LAB_002a1f00;
                    uVar20 = uVar20 << 6 | *(byte *)ppSVar17 & 0x3f;
                  }
                }
                bVar1 = *pbVar15;
                param_4 = (SVGState **)((long)param_4 + lVar18 + 2);
              }
              else {
LAB_002a1f00:
                bVar1 = *pbVar15;
                param_4 = ppSVar17;
              }
            }
            else {
LAB_002a1e12:
              bVar1 = *pbVar15;
              param_4 = ppSVar17;
            }
joined_r0x002a1e1f:
            uVar14 = (uint)bVar1;
            pbVar16 = pbVar15 + 1;
            if ((char)bVar1 < '\0') {
              pbVar16 = pbVar15 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar14 = uVar14 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar7 = 0x3f;
                  lVar18 = 0;
                  bVar3 = false;
                  param_5 = 0;
                }
                else {
                  bVar3 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar7 = 0x1f;
                    lVar18 = 1;
                    param_5 = 0;
                  }
                  else {
                    uVar7 = 0xf;
                    lVar18 = 2;
                    param_5 = CONCAT71((int7)(param_5 >> 8),1);
                  }
                }
                uVar14 = uVar14 & uVar7;
                if ((pbVar15[1] & 0xc0) == 0x80) {
                  pbVar13 = pbVar15 + lVar18 + 2;
                  uVar14 = pbVar15[1] & 0x3f | uVar14 << 6;
                  pbVar16 = pbVar13;
                  if (bVar3) {
                    pbVar16 = pbVar15 + 2;
                    if ((*pbVar16 & 0xc0) == 0x80) {
                      uVar14 = *pbVar16 & 0x3f | uVar14 << 6;
                      pbVar16 = pbVar13;
                      if ((char)param_5 != '\0') {
                        pbVar16 = pbVar15 + 3;
                        bVar1 = *pbVar16;
                        param_5 = (ulong)bVar1;
                        if ((bVar1 & 0xc0) == 0x80) {
                          param_5 = (ulong)(bVar1 & 0x3f);
                          uVar14 = uVar14 << 6 | bVar1 & 0x3f;
                          pbVar16 = pbVar13;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar12 = uVar20 - uVar14;
            pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff);
            if (iVar12 != 0) {
              pbVar5 = (byte *)(ulong)(iVar12 >> 0x1f | 1);
            }
            uVar9 = (ulong)((uint)(uVar20 == 0) * 2);
            if (iVar12 != 0) {
              uVar9 = 1;
            }
            pbVar15 = pbVar16;
          } while ((int)uVar9 == 0);
          if (((int)uVar9 != 1) || ((int)pbVar5 == 0)) {
            uVar20 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar8[1],&DAT_0065bedf);
            if ((uVar20 != 0) ||
               ((uVar20 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                    ((byte *)plVar8[2],local_40), uVar20 != 0 ||
                (uVar20 = CharacterFunctions::
                          compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                    (*(byte **)(pXVar19 + 0x18),&DAT_005e3aa1), uVar20 == 0))))
            goto LAB_002a2070;
            this_00 = (SVGState *)*param_2;
            lVar18 = param_2[1];
            uVar9 = XmlElement::hasTagNameIgnoringNamespace
                              (local_50,(byte *)"clipPath",extraout_RDX,uVar9,param_4,(uint)param_5)
            ;
            if ((char)uVar9 == '\0') goto LAB_002a218d;
            this_01 = operator_new(400);
                    /* try { // try from 002a20d0 to 002a20d7 has its CatchHandler @ 002a21ae */
            Drawable::Drawable(this_01);
            *(undefined ***)this_01 = &PTR__DrawableComposite_00707d08;
            *(undefined1 (*) [16])(this_01 + 0x160) = ZEXT416(DAT_005d94c4) << 0x40;
            uVar4 = DAT_005dd020;
            *(undefined8 *)(this_01 + 0x170) = DAT_005dd020;
            *(undefined8 *)(this_01 + 0x178) = 0;
            *(undefined8 *)(this_01 + 0x180) = 0;
            this_01[0x188] = (Drawable)0x0;
            uVar11 = DAT_005dcf50;
            *(undefined8 *)(this_01 + 0x180) = DAT_005dcf50;
                    /* try { // try from 002a2129 to 002a214d has its CatchHandler @ 002a21c1 */
            uVar10 = 0;
            parseSubElements(uVar11,uVar4,0,this_00,(long *)&local_50,(Component *)this_01,
                             (char *)0x0,param_4,(byte *)param_5);
            if (*(int *)(this_01 + 100) < 1) {
              (**(code **)(*(long *)this_01 + 8))(this_01);
              goto LAB_002a218d;
            }
            setCommonAttributes((long *)this_01,(long *)&local_50);
            pDVar2 = *(Drawable **)(lVar18 + 0xf8);
            if (pDVar2 == this_01) {
              (**(code **)(*(long *)this_01 + 8))(this_01);
              uVar9 = CONCAT71((int7)((ulong)uVar10 >> 8),1);
            }
            else {
              *(Drawable **)(lVar18 + 0xf8) = this_01;
              if (pDVar2 != (Drawable *)0x0) {
                (**(code **)(*(long *)pDVar2 + 8))();
              }
              uVar11 = 0;
              Component::internalRepaintUnchecked(lVar18,0,*(ulong *)(lVar18 + 0x40),'\x01');
              uVar9 = CONCAT71((int7)((ulong)uVar11 >> 8),1);
            }
            goto LAB_002a218f;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        uVar9 = 0;
      }
LAB_002a2070:
      uVar6 = applyOperationToChildWithID<juce::SVGState::GetClipPathOp>
                        ((XmlPath *)&local_50,param_1,param_2,uVar9,param_4,param_5);
      uVar9 = uVar6 & 0xffffffff;
    } while (((char)uVar6 == '\0') &&
            (pXVar19 = *(XmlElement **)pXVar19, pXVar19 != (XmlElement *)0x0));
  }
LAB_002a218f:
  return uVar9 & 0xffffffff;
}


