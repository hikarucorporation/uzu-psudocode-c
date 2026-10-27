// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,false>>
// Namespace: juce:EdgeTable
// Entry    : 00351f00
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,false>>(EdgeTable * this, long * param_1)
// Body     : 00351f00 - 003522ea


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,
   false> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha, false>&) const
    */

void __thiscall
juce::EdgeTable::
iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,false>>
          (EdgeTable *this,long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  byte *__s;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar10 = *(int **)this;
    iVar9 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar17 = *piVar10;
      if (1 < iVar17) {
        piVar15 = piVar10 + 1;
        uVar7 = piVar10[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar9 + (long)*(int *)(this + 0x14)) +
                     *(long *)*param_1;
        uVar6 = 0;
        do {
          uVar2 = piVar15[2];
          uVar13 = uVar2 + 0xff;
          if (-1 < (int)uVar2) {
            uVar13 = uVar2;
          }
          uVar3 = piVar15[1];
          iVar16 = (int)uVar13 >> 8;
          uVar13 = uVar7 + 0xff;
          if (-1 < (int)uVar7) {
            uVar13 = uVar7;
          }
          iVar5 = (int)uVar13 >> 8;
          iVar14 = iVar16 - iVar5;
          if (iVar14 == 0) {
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
                lVar8 = (long)iVar5 * (long)*(int *)(*param_1 + 0x18);
                uVar7 = (uint)*(byte *)((long)param_1 + 0x13) * (((int)uVar7 >> 8 & 0xffU) + 1);
                *(char *)(param_1[1] + lVar8) =
                     (char)((0x100 - (uVar7 >> 8)) * (uint)*(byte *)(param_1[1] + lVar8) >> 8) +
                     (char)(uVar7 >> 8);
              }
              else {
                lVar8 = (long)iVar5 * (long)*(int *)(*param_1 + 0x18);
                *(byte *)(param_1[1] + lVar8) =
                     (char)((0x100 - (uint)*(byte *)((long)param_1 + 0x13)) *
                            (uint)*(byte *)(param_1[1] + lVar8) >> 8) +
                     *(byte *)((long)param_1 + 0x13);
              }
            }
            if (0 < (int)uVar3) {
              uVar7 = iVar16 - (int)((long)iVar5 + 1);
              if (0 < (int)uVar7) {
                uVar6 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * ((uVar3 & 0xff) + 1);
                lVar8 = (long)*(int *)(*param_1 + 0x18);
                __s = (byte *)(((long)iVar5 + 1) * lVar8 + param_1[1]);
                bVar11 = (byte)(uVar6 >> 0x18);
                if (uVar6 < 0xff000000) {
                  iVar5 = 0x100 - (uVar6 >> 0x18);
                  if ((uVar7 & 3) != 0) {
                    uVar6 = 0;
                    do {
                      *__s = (char)((uint)*__s * iVar5 >> 8) + bVar11;
                      uVar6 = uVar6 + 1;
                      __s = __s + lVar8;
                    } while ((uVar7 & 3) != uVar6);
                    uVar7 = uVar7 - uVar6;
                  }
                  if (2 < iVar14 - 2U) {
                    uVar7 = uVar7 - 1;
                    do {
                      *__s = (char)((uint)*__s * iVar5 >> 8) + bVar11;
                      __s[lVar8] = (char)((uint)__s[lVar8] * iVar5 >> 8) + bVar11;
                      __s[lVar8 * 2] = (char)((uint)__s[lVar8 * 2] * iVar5 >> 8) + bVar11;
                      __s[lVar8 * 3] = (char)((uint)__s[lVar8 * 3] * iVar5 >> 8) + bVar11;
                      uVar7 = uVar7 - 4;
                      __s = __s + lVar8 * 4;
                    } while (uVar7 < 0xfffffffe);
                  }
                }
                else if (*(int *)(*param_1 + 0x18) == 1) {
                  memset(__s,uVar6 >> 0x18,(ulong)uVar7);
                }
                else {
                  if ((uVar7 & 7) != 0) {
                    uVar6 = 0;
                    do {
                      *__s = bVar11;
                      uVar6 = uVar6 + 1;
                      __s = __s + lVar8;
                    } while ((uVar7 & 7) != uVar6);
                    uVar7 = uVar7 - uVar6;
                  }
                  if (6 < iVar14 - 2U) {
                    uVar7 = uVar7 - 1;
                    do {
                      *__s = bVar11;
                      __s[lVar8] = bVar11;
                      __s[lVar8 * 2] = bVar11;
                      __s[lVar8 * 3] = bVar11;
                      __s[lVar8 * 4] = bVar11;
                      __s[lVar8 * 5] = bVar11;
                      __s[lVar8 * 6] = bVar11;
                      __s[lVar8 * 7] = bVar11;
                      __s = __s + lVar8 * 8;
                      uVar7 = uVar7 - 8;
                    } while (uVar7 < 0xfffffffe);
                  }
                }
              }
            }
            uVar6 = (uVar2 & 0xff) * uVar3;
          }
          piVar15 = piVar15 + 2;
          bVar4 = 2 < iVar17;
          iVar17 = iVar17 + -1;
          uVar7 = uVar2;
        } while (bVar4);
        uVar7 = uVar6 + 0xff;
        if (-1 < (int)uVar6) {
          uVar7 = uVar6;
        }
        if (0xff < (int)uVar6) {
          if (uVar6 < 0xff00) {
            lVar8 = (long)iVar16 * (long)*(int *)(*param_1 + 0x18);
            uVar7 = (uint)*(byte *)((long)param_1 + 0x13) * (((int)uVar7 >> 8 & 0xffU) + 1);
            *(char *)(param_1[1] + lVar8) =
                 (char)((0x100 - (uVar7 >> 8)) * (uint)*(byte *)(param_1[1] + lVar8) >> 8) +
                 (char)(uVar7 >> 8);
          }
          else {
            lVar8 = (long)iVar16 * (long)*(int *)(*param_1 + 0x18);
            *(byte *)(param_1[1] + lVar8) =
                 (char)((0x100 - (uint)*(byte *)((long)param_1 + 0x13)) *
                        (uint)*(byte *)(param_1[1] + lVar8) >> 8) + *(byte *)((long)param_1 + 0x13);
          }
        }
      }
      piVar10 = piVar10 + iVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this + 0x1c));
  }
  return;
}


