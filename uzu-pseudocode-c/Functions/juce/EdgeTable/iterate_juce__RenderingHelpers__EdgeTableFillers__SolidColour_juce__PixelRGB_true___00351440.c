// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,true>>
// Namespace: juce:EdgeTable
// Entry    : 00351440
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,true>>(EdgeTable * this, long * param_1)
// Body     : 00351440 - 003516da


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,
   true> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB, true>&) const */

void __thiscall
juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,true>>
          (EdgeTable *this,long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  undefined1 *__s;
  undefined1 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar12 = *(int **)this;
    iVar11 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar18 = *piVar12;
      if (1 < iVar18) {
        piVar16 = piVar12 + 1;
        uVar6 = piVar12[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar11 + (long)*(int *)(this + 0x14))
                     + *(long *)*param_1;
        iVar5 = 0;
        do {
          uVar2 = piVar16[2];
          uVar8 = uVar2 + 0xff;
          if (-1 < (int)uVar2) {
            uVar8 = uVar2;
          }
          uVar3 = piVar16[1];
          iVar17 = (int)uVar8 >> 8;
          uVar8 = uVar6 + 0xff;
          if (-1 < (int)uVar6) {
            uVar8 = uVar6;
          }
          iVar14 = (int)uVar8 >> 8;
          if (iVar17 - iVar14 == 0) {
            iVar5 = iVar5 + (uVar2 - uVar6) * uVar3;
          }
          else {
            if (0xff < (int)((0x100 - (uVar6 & 0xff)) * uVar3 + iVar5)) {
              lVar13 = param_1[1];
              lVar9 = (long)iVar14 * (long)*(int *)(*param_1 + 0x18);
              *(char *)(lVar13 + lVar9) = (char)param_1[2];
              *(undefined1 *)(lVar13 + 1 + lVar9) = *(undefined1 *)((long)param_1 + 0x11);
              *(undefined1 *)(lVar13 + 2 + lVar9) = *(undefined1 *)((long)param_1 + 0x12);
            }
            if (0 < (int)uVar3) {
              uVar6 = iVar17 - (iVar14 + 1);
              if (0 < (int)uVar6) {
                iVar5 = (uVar3 & 0xff) + 1;
                uVar8 = (*(uint *)(param_1 + 2) & 0xff00ff) * iVar5;
                lVar13 = (long)*(int *)(*param_1 + 0x18);
                __s = (undefined1 *)((long)((iVar14 + 1) * *(int *)(*param_1 + 0x18)) + param_1[1]);
                uVar15 = (undefined1)(uVar8 >> 0x18);
                if ((lVar13 == 3) && (*(char *)((long)param_1 + 0x14) != '\0')) {
                  memset(__s,uVar8 >> 0x18,(ulong)uVar6 * 3);
                }
                else {
                  uVar7 = (undefined1)(uVar8 >> 8);
                  uVar10 = (undefined1)((*(uint *)(param_1 + 2) >> 8 & 0xff) * iVar5 >> 8);
                  if ((uVar6 & 3) != 0) {
                    uVar8 = 0;
                    do {
                      *__s = uVar7;
                      __s[1] = uVar10;
                      __s[2] = uVar15;
                      __s = __s + lVar13;
                      uVar8 = uVar8 + 1;
                    } while ((uVar6 & 3) != uVar8);
                    uVar6 = uVar6 - uVar8;
                  }
                  if (2 < (iVar17 - iVar14) - 2U) {
                    uVar6 = uVar6 - 1;
                    do {
                      *__s = uVar7;
                      __s[1] = uVar10;
                      __s[2] = uVar15;
                      __s[lVar13] = uVar7;
                      __s[lVar13 + 1] = uVar10;
                      __s[lVar13 + 2] = uVar15;
                      __s[lVar13 * 2] = uVar7;
                      __s[lVar13 * 2 + 1] = uVar10;
                      __s[lVar13 * 2 + 2] = uVar15;
                      __s[lVar13 * 3] = uVar7;
                      __s[lVar13 * 3 + 1] = uVar10;
                      __s[lVar13 * 3 + 2] = uVar15;
                      uVar6 = uVar6 - 4;
                      __s = __s + lVar13 * 4;
                    } while (uVar6 < 0xfffffffe);
                  }
                }
              }
            }
            iVar5 = (uVar2 & 0xff) * uVar3;
          }
          piVar16 = piVar16 + 2;
          bVar4 = 2 < iVar18;
          iVar18 = iVar18 + -1;
          uVar6 = uVar2;
        } while (bVar4);
        if (0xff < iVar5) {
          lVar13 = param_1[1];
          lVar9 = (long)iVar17 * (long)*(int *)(*param_1 + 0x18);
          *(char *)(lVar13 + lVar9) = (char)param_1[2];
          *(undefined1 *)(lVar13 + 1 + lVar9) = *(undefined1 *)((long)param_1 + 0x11);
          *(undefined1 *)(lVar13 + 2 + lVar9) = *(undefined1 *)((long)param_1 + 0x12);
        }
      }
      piVar12 = piVar12 + iVar1;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(this + 0x1c));
  }
  return;
}


