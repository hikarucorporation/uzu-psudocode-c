// Function : applyOperationToChildWithID<juce::SVGState::UseTextOp>
// Namespace: juce:SVGState:XmlPath
// Entry    : 002b1b30
// Prototype: char applyOperationToChildWithID<juce::SVGState::UseTextOp>(XmlPath * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 002b1b30 - 002b1ebf


/* bool juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::UseTextOp>(juce::String
   const&, juce::SVGState::UseTextOp&) const */

char __thiscall
juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::UseTextOp>
          (XmlPath *this,undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  Drawable *pDVar6;
  uint uVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong in_R9;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  long *local_40;
  XmlPath *local_38;
  
  plVar15 = *(long **)(*(long *)this + 8);
  if (plVar15 == (long *)0x0) {
    cVar4 = '\0';
  }
  else {
    do {
      plVar8 = (long *)plVar15[2];
      local_40 = plVar15;
      local_38 = this;
      if (plVar8 != (long *)0x0) {
        pbVar2 = (byte *)*param_1;
        pbVar5 = pbVar2;
        do {
          pbVar11 = &DAT_0065bedf;
          pbVar13 = (byte *)plVar8[1];
          do {
            pbVar12 = pbVar13 + 1;
            bVar1 = *pbVar13;
            uVar16 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar16 = uVar16 & 0x7f;
                goto LAB_002b1c02;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar10 = 0x3f;
                lVar14 = 0;
                bVar3 = false;
                in_R9 = 0;
              }
              else {
                bVar3 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar10 = 0x1f;
                  lVar14 = 1;
                  in_R9 = 0;
                }
                else {
                  uVar10 = 0xf;
                  lVar14 = 2;
                  in_R9 = CONCAT71((int7)(in_R9 >> 8),1);
                }
              }
              uVar16 = uVar16 & uVar10;
              if ((pbVar13[1] & 0xc0) == 0x80) {
                uVar16 = pbVar13[1] & 0x3f | uVar16 << 6;
                if (bVar3) {
                  uVar10 = (uint)pbVar13[2];
                  if ((uVar10 & 0xffffffc0) != 0x80) {
                    bVar1 = *pbVar11;
                    pbVar13 = pbVar13 + 2;
                    goto joined_r0x002b1cdb;
                  }
                  uVar16 = uVar10 & 0x3f | uVar16 << 6;
                  if ((char)in_R9 != '\0') {
                    pbVar12 = pbVar13 + 3;
                    if ((*pbVar12 & 0xc0) != 0x80) goto LAB_002b1cf0;
                    uVar16 = uVar16 << 6 | *pbVar12 & 0x3f;
                  }
                }
                bVar1 = *pbVar11;
                pbVar13 = pbVar13 + lVar14 + 2;
              }
              else {
LAB_002b1cf0:
                bVar1 = *pbVar11;
                pbVar13 = pbVar12;
              }
            }
            else {
LAB_002b1c02:
              bVar1 = *pbVar11;
              pbVar13 = pbVar12;
            }
joined_r0x002b1cdb:
            uVar10 = (uint)bVar1;
            pbVar12 = pbVar11 + 1;
            if ((char)bVar1 < '\0') {
              pbVar12 = pbVar11 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar10 = uVar10 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar7 = 0x3f;
                  lVar14 = 0;
                  bVar3 = false;
                  in_R9 = 0;
                }
                else {
                  bVar3 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar7 = 0x1f;
                    lVar14 = 1;
                    in_R9 = 0;
                  }
                  else {
                    uVar7 = 0xf;
                    lVar14 = 2;
                    in_R9 = CONCAT71((int7)(in_R9 >> 8),1);
                  }
                }
                uVar10 = uVar10 & uVar7;
                if ((pbVar11[1] & 0xc0) == 0x80) {
                  pbVar9 = pbVar11 + lVar14 + 2;
                  uVar10 = pbVar11[1] & 0x3f | uVar10 << 6;
                  pbVar12 = pbVar9;
                  if (bVar3) {
                    pbVar12 = pbVar11 + 2;
                    if ((*pbVar12 & 0xc0) == 0x80) {
                      uVar10 = *pbVar12 & 0x3f | uVar10 << 6;
                      pbVar12 = pbVar9;
                      if ((char)in_R9 != '\0') {
                        pbVar12 = pbVar11 + 3;
                        bVar1 = *pbVar12;
                        in_R9 = (ulong)bVar1;
                        if ((bVar1 & 0xc0) == 0x80) {
                          in_R9 = (ulong)(bVar1 & 0x3f);
                          uVar10 = uVar10 << 6 | bVar1 & 0x3f;
                          pbVar12 = pbVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
            cVar4 = (uVar16 == 0) * '\x02';
            pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff);
            if (uVar16 - uVar10 != 0) {
              pbVar5 = (byte *)(ulong)((int)(uVar16 - uVar10) >> 0x1f | 1);
              cVar4 = '\x01';
            }
            pbVar11 = pbVar12;
          } while (cVar4 == '\0');
          if ((cVar4 != '\x01') || ((int)pbVar5 == 0)) {
            uVar16 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar8[1],&DAT_0065bedf);
            if (uVar16 == 0) {
              uVar16 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)plVar8[2],pbVar2);
              if (uVar16 == 0) {
                uVar16 = CharacterFunctions::
                         compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   ((byte *)plVar15[3],&DAT_005e3aa1);
                if (uVar16 != 0) {
                  pDVar6 = parseText(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,(SVGState *)*param_2,
                                     (long *)&local_40,1,(float *)param_2[1],(Drawable *)0x0,in_R9);
                  param_2[2] = pDVar6;
                  return pDVar6 != (Drawable *)0x0;
                }
              }
            }
            break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      cVar4 = applyOperationToChildWithID<juce::SVGState::UseTextOp>
                        ((XmlPath *)&local_40,param_1,param_2);
    } while ((cVar4 == '\0') && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0));
  }
  return cVar4;
}


