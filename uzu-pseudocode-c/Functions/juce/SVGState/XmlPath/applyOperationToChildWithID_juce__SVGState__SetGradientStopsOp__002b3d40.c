// Function : applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>
// Namespace: juce:SVGState:XmlPath
// Entry    : 002b3d40
// Prototype: ulong applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>(XmlPath * this, undefined8 * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, byte * param_5)
// Body     : 002b3d40 - 002b40bd


/* bool 
   juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>(juce::String
   const&, juce::SVGState::SetGradientStopsOp&) const */

ulong __thiscall
juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>
          (XmlPath *this,undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4,
          byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long *local_40;
  XmlPath *local_38;
  
  plVar14 = *(long **)(*(long *)this + 8);
  if (plVar14 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    do {
      plVar6 = (long *)plVar14[2];
      uVar7 = 0;
      local_40 = plVar14;
      local_38 = this;
      if (plVar6 != (long *)0x0) {
        pbVar2 = (byte *)*param_1;
        pbVar4 = pbVar2;
        do {
          pbVar11 = &DAT_0065bedf;
          param_4 = (byte *)plVar6[1];
          do {
            pbVar12 = param_4 + 1;
            bVar1 = *param_4;
            uVar15 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar15 = uVar15 & 0x7f;
                goto LAB_002b3e12;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar10 = 0x3f;
                lVar13 = 0;
                bVar3 = false;
                param_5 = (byte *)0x0;
              }
              else {
                bVar3 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar10 = 0x1f;
                  lVar13 = 1;
                  param_5 = (byte *)0x0;
                }
                else {
                  uVar10 = 0xf;
                  lVar13 = 2;
                  param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
                }
              }
              uVar15 = uVar15 & uVar10;
              if ((param_4[1] & 0xc0) == 0x80) {
                uVar15 = param_4[1] & 0x3f | uVar15 << 6;
                if (bVar3) {
                  uVar10 = (uint)param_4[2];
                  if ((uVar10 & 0xffffffc0) != 0x80) {
                    bVar1 = *pbVar11;
                    param_4 = param_4 + 2;
                    goto joined_r0x002b3e1f;
                  }
                  uVar15 = uVar10 & 0x3f | uVar15 << 6;
                  if ((char)param_5 != '\0') {
                    pbVar12 = param_4 + 3;
                    if ((*pbVar12 & 0xc0) != 0x80) goto LAB_002b3f00;
                    uVar15 = uVar15 << 6 | *pbVar12 & 0x3f;
                  }
                }
                bVar1 = *pbVar11;
                param_4 = param_4 + lVar13 + 2;
              }
              else {
LAB_002b3f00:
                bVar1 = *pbVar11;
                param_4 = pbVar12;
              }
            }
            else {
LAB_002b3e12:
              bVar1 = *pbVar11;
              param_4 = pbVar12;
            }
joined_r0x002b3e1f:
            uVar10 = (uint)bVar1;
            pbVar12 = pbVar11 + 1;
            if ((char)bVar1 < '\0') {
              pbVar12 = pbVar11 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar10 = uVar10 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar5 = 0x3f;
                  lVar13 = 0;
                  bVar3 = false;
                  param_5 = (byte *)0x0;
                }
                else {
                  bVar3 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar5 = 0x1f;
                    lVar13 = 1;
                    param_5 = (byte *)0x0;
                  }
                  else {
                    uVar5 = 0xf;
                    lVar13 = 2;
                    param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
                  }
                }
                uVar10 = uVar10 & uVar5;
                if ((pbVar11[1] & 0xc0) == 0x80) {
                  pbVar9 = pbVar11 + lVar13 + 2;
                  uVar10 = pbVar11[1] & 0x3f | uVar10 << 6;
                  pbVar12 = pbVar9;
                  if (bVar3) {
                    pbVar12 = pbVar11 + 2;
                    if ((*pbVar12 & 0xc0) == 0x80) {
                      uVar10 = *pbVar12 & 0x3f | uVar10 << 6;
                      pbVar12 = pbVar9;
                      if ((char)param_5 != '\0') {
                        pbVar12 = pbVar11 + 3;
                        bVar1 = *pbVar12;
                        param_5 = (byte *)(ulong)bVar1;
                        if ((bVar1 & 0xc0) == 0x80) {
                          param_5 = (byte *)(ulong)(bVar1 & 0x3f);
                          uVar10 = uVar10 << 6 | bVar1 & 0x3f;
                          pbVar12 = pbVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar8 = uVar15 - uVar10;
            pbVar4 = (byte *)((ulong)pbVar4 & 0xffffffff);
            if (iVar8 != 0) {
              pbVar4 = (byte *)(ulong)(iVar8 >> 0x1f | 1);
            }
            uVar7 = (ulong)((uint)(uVar15 == 0) * 2);
            if (iVar8 != 0) {
              uVar7 = 1;
            }
            pbVar11 = pbVar12;
          } while ((int)uVar7 == 0);
          if (((int)uVar7 != 1) || ((int)pbVar4 == 0)) {
            uVar15 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar6[1],&DAT_0065bedf);
            if ((uVar15 == 0) &&
               ((uVar15 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                    ((byte *)plVar6[2],pbVar2), uVar15 == 0 &&
                (uVar15 = CharacterFunctions::
                          compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                    ((byte *)plVar14[3],&DAT_005e3aa1), uVar15 != 0)))) {
              uVar7 = addGradientStopsIn((SVGState *)*param_2,(ColourGradient *)param_2[1],
                                         (long *)&local_40,uVar7,param_4,param_5);
              return uVar7;
            }
            goto LAB_002b4070;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        uVar7 = 0;
      }
LAB_002b4070:
      uVar7 = applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>
                        ((XmlPath *)&local_40,param_1,param_2,uVar7,param_4,param_5);
    } while (((char)uVar7 == '\0') && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0));
  }
  return uVar7;
}


