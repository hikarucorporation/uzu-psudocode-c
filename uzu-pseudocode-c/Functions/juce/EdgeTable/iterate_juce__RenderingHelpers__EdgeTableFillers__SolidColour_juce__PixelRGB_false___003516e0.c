// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>>
// Namespace: juce:EdgeTable
// Entry    : 003516e0
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>>(EdgeTable * this, long * param_1)
// Body     : 003516e0 - 00351caf


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,
   false> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB, false>&) const */

void __thiscall
juce::EdgeTable::
iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>>
          (EdgeTable *this,long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  undefined1 uVar20;
  long lVar21;
  int *piVar22;
  int iVar23;
  undefined1 uVar24;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar9 = *(int **)this;
    iVar11 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar19 = *piVar9;
      if (1 < iVar19) {
        piVar22 = piVar9 + 1;
        uVar7 = piVar9[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar11 + (long)*(int *)(this + 0x14))
                     + *(long *)*param_1;
        uVar6 = 0;
        do {
          uVar2 = piVar22[2];
          uVar5 = uVar2 + 0xff;
          if (-1 < (int)uVar2) {
            uVar5 = uVar2;
          }
          uVar3 = piVar22[1];
          iVar23 = (int)uVar5 >> 8;
          uVar5 = uVar7 + 0xff;
          if (-1 < (int)uVar7) {
            uVar5 = uVar7;
          }
          iVar17 = (int)uVar5 >> 8;
          uVar5 = iVar23 - iVar17;
          if (uVar5 == 0) {
            uVar6 = (uVar2 - uVar7) * uVar3 + uVar6;
          }
          else {
            iVar12 = (0x100 - (uVar7 & 0xff)) * uVar3;
            uVar13 = iVar12 + uVar6;
            uVar7 = iVar12 + uVar6 + 0xff;
            if (-1 < (int)uVar13) {
              uVar7 = uVar13;
            }
            if (0xff < (int)uVar13) {
              if (uVar13 < 0xff00) {
                uVar7 = (int)uVar7 >> 8 & 0xff;
                lVar10 = param_1[1];
                lVar21 = (long)iVar17 * (long)*(int *)(*param_1 + 0x18);
                puVar15 = (undefined1 *)(lVar10 + lVar21);
                uVar6 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * uVar7;
                iVar12 = 0x100 - (uVar6 >> 0x18);
                iVar14 = ((uint)*(byte *)(lVar10 + 1 + lVar21) * iVar12 >> 8) +
                         (uVar6 >> 8 & 0xff00ff);
                bVar8 = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
                uVar7 = (((uint)*(byte *)(lVar10 + 2 + lVar21) << 0x10 |
                         (uint)*(byte *)(lVar10 + lVar21)) * iVar12 >> 8 & 0xff00ff) +
                        ((*(uint *)(param_1 + 2) & 0xff00ff) * uVar7 >> 8 & 0xff00ff);
                uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
              }
              else {
                lVar10 = param_1[1];
                lVar21 = (long)iVar17 * (long)*(int *)(*param_1 + 0x18);
                puVar15 = (undefined1 *)(lVar10 + lVar21);
                iVar12 = 0x100 - (uint)*(byte *)((long)param_1 + 0x13);
                uVar7 = (((uint)*(byte *)(lVar10 + 2 + lVar21) << 0x10 |
                         (uint)*(byte *)(lVar10 + lVar21)) * iVar12 >> 8 & 0xff00ff) +
                        (*(uint *)(param_1 + 2) & 0xff00ff);
                uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
                iVar12 = ((uint)*(byte *)(lVar10 + 1 + lVar21) * iVar12 >> 8) +
                         (*(uint *)(param_1 + 2) >> 8 & 0xff00ff);
                bVar8 = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
              }
              puVar15[1] = bVar8;
              puVar15[2] = (char)(uVar7 >> 0x10);
              *puVar15 = (char)uVar7;
            }
            if (0 < (int)uVar3) {
              uVar7 = iVar23 - (int)((long)iVar17 + 1);
              if (0 < (int)uVar7) {
                iVar12 = (uVar3 & 0xff) + 1;
                uVar6 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * iVar12;
                uVar13 = (*(uint *)(param_1 + 2) & 0xff00ff) * iVar12;
                lVar10 = (long)*(int *)(*param_1 + 0x18);
                lVar21 = ((long)iVar17 + 1) * lVar10;
                if (uVar6 < 0xff000000) {
                  iVar17 = 0x100 - (uVar6 >> 0x18);
                  pbVar16 = (byte *)(param_1[1] + lVar21 + 2);
                  do {
                    uVar7 = (((uint)*pbVar16 << 0x10 | (uint)pbVar16[-2]) * iVar17 >> 8 & 0xff00ff)
                            + (uVar13 >> 8 & 0xff00ff);
                    uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
                    iVar12 = ((uint)pbVar16[-1] * iVar17 >> 8) + (uVar6 >> 8 & 0xff00ff);
                    pbVar16[-1] = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
                    *pbVar16 = (byte)(uVar7 >> 0x10);
                    pbVar16[-2] = (byte)uVar7;
                    uVar5 = uVar5 - 1;
                    pbVar16 = pbVar16 + lVar10;
                  } while (1 < uVar5);
                }
                else {
                  puVar15 = (undefined1 *)(param_1[1] + lVar21);
                  uVar24 = (undefined1)(uVar13 >> 0x18);
                  if ((*(int *)(*param_1 + 0x18) == 3) && (*(char *)((long)param_1 + 0x14) != '\0'))
                  {
                    memset(puVar15,uVar13 >> 0x18,(ulong)uVar7 * 3);
                  }
                  else {
                    uVar20 = (undefined1)(uVar13 >> 8);
                    uVar18 = (undefined1)(uVar6 >> 8);
                    if ((uVar7 & 3) != 0) {
                      uVar6 = 0;
                      do {
                        *puVar15 = uVar20;
                        puVar15[1] = uVar18;
                        puVar15[2] = uVar24;
                        puVar15 = puVar15 + lVar10;
                        uVar6 = uVar6 + 1;
                      } while ((uVar7 & 3) != uVar6);
                      uVar7 = uVar7 - uVar6;
                    }
                    if (2 < (iVar23 - iVar17) - 2U) {
                      uVar7 = uVar7 - 1;
                      do {
                        *puVar15 = uVar20;
                        puVar15[1] = uVar18;
                        puVar15[2] = uVar24;
                        puVar15[lVar10] = uVar20;
                        puVar15[lVar10 + 1] = uVar18;
                        puVar15[lVar10 + 2] = uVar24;
                        puVar15[lVar10 * 2] = uVar20;
                        puVar15[lVar10 * 2 + 1] = uVar18;
                        puVar15[lVar10 * 2 + 2] = uVar24;
                        puVar15[lVar10 * 3] = uVar20;
                        puVar15[lVar10 * 3 + 1] = uVar18;
                        puVar15[lVar10 * 3 + 2] = uVar24;
                        uVar7 = uVar7 - 4;
                        puVar15 = puVar15 + lVar10 * 4;
                      } while (uVar7 < 0xfffffffe);
                    }
                  }
                }
              }
            }
            uVar6 = (uVar2 & 0xff) * uVar3;
          }
          piVar22 = piVar22 + 2;
          bVar4 = 2 < iVar19;
          uVar7 = uVar2;
          iVar19 = iVar19 + -1;
        } while (bVar4);
        uVar7 = uVar6 + 0xff;
        if (-1 < (int)uVar6) {
          uVar7 = uVar6;
        }
        if (0xff < (int)uVar6) {
          if (uVar6 < 0xff00) {
            uVar6 = (int)uVar7 >> 8 & 0xff;
            lVar10 = param_1[1];
            lVar21 = (long)iVar23 * (long)*(int *)(*param_1 + 0x18);
            puVar15 = (undefined1 *)(lVar10 + lVar21);
            uVar7 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * uVar6;
            iVar23 = 0x100 - (uVar7 >> 0x18);
            iVar19 = ((uint)*(byte *)(lVar10 + 1 + lVar21) * iVar23 >> 8) + (uVar7 >> 8 & 0xff00ff);
            bVar8 = -(char)((uint)iVar19 >> 8) | (byte)iVar19;
            uVar7 = (((uint)*(byte *)(lVar10 + 2 + lVar21) << 0x10 |
                     (uint)*(byte *)(lVar10 + lVar21)) * iVar23 >> 8 & 0xff00ff) +
                    ((*(uint *)(param_1 + 2) & 0xff00ff) * uVar6 >> 8 & 0xff00ff);
            uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
          }
          else {
            lVar10 = param_1[1];
            lVar21 = (long)iVar23 * (long)*(int *)(*param_1 + 0x18);
            puVar15 = (undefined1 *)(lVar10 + lVar21);
            iVar19 = 0x100 - (uint)*(byte *)((long)param_1 + 0x13);
            uVar7 = (((uint)*(byte *)(lVar10 + 2 + lVar21) << 0x10 |
                     (uint)*(byte *)(lVar10 + lVar21)) * iVar19 >> 8 & 0xff00ff) +
                    (*(uint *)(param_1 + 2) & 0xff00ff);
            uVar7 = 0x100 - (uVar7 >> 8 & 0x10001) | uVar7;
            iVar19 = ((uint)*(byte *)(lVar10 + 1 + lVar21) * iVar19 >> 8) +
                     (*(uint *)(param_1 + 2) >> 8 & 0xff00ff);
            bVar8 = -(char)((uint)iVar19 >> 8) | (byte)iVar19;
          }
          puVar15[1] = bVar8;
          puVar15[2] = (char)(uVar7 >> 0x10);
          *puVar15 = (char)uVar7;
        }
      }
      piVar9 = piVar9 + iVar1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(this + 0x1c));
  }
  return;
}


