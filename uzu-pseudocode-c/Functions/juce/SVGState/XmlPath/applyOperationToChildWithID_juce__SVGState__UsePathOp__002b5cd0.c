// Function : applyOperationToChildWithID<juce::SVGState::UsePathOp>
// Namespace: juce:SVGState:XmlPath
// Entry    : 002b5cd0
// Prototype: undefined8 applyOperationToChildWithID<juce::SVGState::UsePathOp>(XmlPath * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 002b5cd0 - 002b604d


/* bool juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::UsePathOp>(juce::String
   const&, juce::SVGState::UsePathOp&) const */

undefined8 __thiscall
juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::UsePathOp>
          (XmlPath *this,undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong in_R9;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  long *local_40;
  XmlPath *local_38;
  
  plVar16 = *(long **)(*(long *)this + 8);
  if (plVar16 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    do {
      plVar7 = (long *)plVar16[2];
      local_40 = plVar16;
      local_38 = this;
      if (plVar7 != (long *)0x0) {
        pbVar2 = (byte *)*param_1;
        pbVar4 = pbVar2;
        do {
          pbVar12 = &DAT_0065bedf;
          pbVar14 = (byte *)plVar7[1];
          do {
            pbVar13 = pbVar14 + 1;
            bVar1 = *pbVar14;
            uVar17 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar17 = uVar17 & 0x7f;
                goto LAB_002b5da2;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar11 = 0x3f;
                lVar15 = 0;
                bVar3 = false;
                in_R9 = 0;
              }
              else {
                bVar3 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar11 = 0x1f;
                  lVar15 = 1;
                  in_R9 = 0;
                }
                else {
                  uVar11 = 0xf;
                  lVar15 = 2;
                  in_R9 = CONCAT71((int7)(in_R9 >> 8),1);
                }
              }
              uVar17 = uVar17 & uVar11;
              if ((pbVar14[1] & 0xc0) == 0x80) {
                uVar17 = pbVar14[1] & 0x3f | uVar17 << 6;
                if (bVar3) {
                  uVar11 = (uint)pbVar14[2];
                  if ((uVar11 & 0xffffffc0) != 0x80) {
                    bVar1 = *pbVar12;
                    pbVar14 = pbVar14 + 2;
                    goto joined_r0x002b5daf;
                  }
                  uVar17 = uVar11 & 0x3f | uVar17 << 6;
                  if ((char)in_R9 != '\0') {
                    pbVar13 = pbVar14 + 3;
                    if ((*pbVar13 & 0xc0) != 0x80) goto LAB_002b5e90;
                    uVar17 = uVar17 << 6 | *pbVar13 & 0x3f;
                  }
                }
                bVar1 = *pbVar12;
                pbVar14 = pbVar14 + lVar15 + 2;
              }
              else {
LAB_002b5e90:
                bVar1 = *pbVar12;
                pbVar14 = pbVar13;
              }
            }
            else {
LAB_002b5da2:
              bVar1 = *pbVar12;
              pbVar14 = pbVar13;
            }
joined_r0x002b5daf:
            uVar11 = (uint)bVar1;
            pbVar13 = pbVar12 + 1;
            if ((char)bVar1 < '\0') {
              pbVar13 = pbVar12 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar11 = uVar11 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar6 = 0x3f;
                  lVar15 = 0;
                  bVar3 = false;
                  in_R9 = 0;
                }
                else {
                  bVar3 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar6 = 0x1f;
                    lVar15 = 1;
                    in_R9 = 0;
                  }
                  else {
                    uVar6 = 0xf;
                    lVar15 = 2;
                    in_R9 = CONCAT71((int7)(in_R9 >> 8),1);
                  }
                }
                uVar11 = uVar11 & uVar6;
                if ((pbVar12[1] & 0xc0) == 0x80) {
                  pbVar10 = pbVar12 + lVar15 + 2;
                  uVar11 = pbVar12[1] & 0x3f | uVar11 << 6;
                  pbVar13 = pbVar10;
                  if (bVar3) {
                    pbVar13 = pbVar12 + 2;
                    if ((*pbVar13 & 0xc0) == 0x80) {
                      uVar11 = *pbVar13 & 0x3f | uVar11 << 6;
                      pbVar13 = pbVar10;
                      if ((char)in_R9 != '\0') {
                        pbVar13 = pbVar12 + 3;
                        bVar1 = *pbVar13;
                        in_R9 = (ulong)bVar1;
                        if ((bVar1 & 0xc0) == 0x80) {
                          in_R9 = (ulong)(bVar1 & 0x3f);
                          uVar11 = uVar11 << 6 | bVar1 & 0x3f;
                          pbVar13 = pbVar10;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar9 = uVar17 - uVar11;
            pbVar4 = (byte *)((ulong)pbVar4 & 0xffffffff);
            if (iVar9 != 0) {
              pbVar4 = (byte *)(ulong)(iVar9 >> 0x1f | 1);
            }
            uVar8 = (ulong)((uint)(uVar17 == 0) * 2);
            if (iVar9 != 0) {
              uVar8 = 1;
            }
            pbVar12 = pbVar13;
          } while ((int)uVar8 == 0);
          if (((int)uVar8 != 1) || ((int)pbVar4 == 0)) {
            uVar17 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar7[1],&DAT_0065bedf);
            if (uVar17 == 0) {
              uVar17 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)plVar7[2],pbVar2);
              if (uVar17 == 0) {
                uVar17 = CharacterFunctions::
                         compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   ((byte *)plVar16[3],&DAT_005e3aa1);
                if (uVar17 != 0) {
                  uVar8 = parsePathElement(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                                           (SVGState *)*param_2,(long *)&local_40,(Path *)param_2[1]
                                           ,uVar8,pbVar14,in_R9);
                  return uVar8;
                }
              }
            }
            break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      uVar5 = applyOperationToChildWithID<juce::SVGState::UsePathOp>
                        ((XmlPath *)&local_40,param_1,param_2);
    } while (((char)uVar5 == '\0') && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0));
  }
  return uVar5;
}


