// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,true>>
// Namespace: juce:EdgeTable
// Entry    : 00351cb0
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,true>>(EdgeTable * this, long * param_1)
// Body     : 00351cb0 - 00351efb


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,
   true> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha, true>&) const */

void __thiscall
juce::EdgeTable::
iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,true>>
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
  int iVar9;
  undefined1 *__s;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar10 = *(int **)this;
    iVar9 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar16 = *piVar10;
      if (1 < iVar16) {
        piVar14 = piVar10 + 1;
        uVar6 = piVar10[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar9 + (long)*(int *)(this + 0x14)) +
                     *(long *)*param_1;
        iVar5 = 0;
        do {
          uVar2 = piVar14[2];
          uVar8 = uVar2 + 0xff;
          if (-1 < (int)uVar2) {
            uVar8 = uVar2;
          }
          uVar3 = piVar14[1];
          iVar15 = (int)uVar8 >> 8;
          uVar8 = uVar6 + 0xff;
          if (-1 < (int)uVar6) {
            uVar8 = uVar6;
          }
          iVar12 = (int)uVar8 >> 8;
          if (iVar15 - iVar12 == 0) {
            iVar5 = iVar5 + (uVar2 - uVar6) * uVar3;
          }
          else {
            if (0xff < (int)((0x100 - (uVar6 & 0xff)) * uVar3 + iVar5)) {
              *(undefined1 *)(param_1[1] + (long)iVar12 * (long)*(int *)(*param_1 + 0x18)) =
                   *(undefined1 *)((long)param_1 + 0x13);
            }
            if (0 < (int)uVar3) {
              uVar6 = iVar15 - (iVar12 + 1);
              if (0 < (int)uVar6) {
                uVar8 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * ((uVar3 & 0xff) + 1);
                lVar11 = (long)*(int *)(*param_1 + 0x18);
                lVar13 = (long)((iVar12 + 1) * *(int *)(*param_1 + 0x18));
                __s = (undefined1 *)(param_1[1] + lVar13);
                uVar7 = (undefined1)(uVar8 >> 0x18);
                if (lVar11 == 1) {
                  memset(__s,uVar8 >> 0x18,(ulong)uVar6);
                }
                else {
                  if ((uVar6 & 7) != 0) {
                    __s = (undefined1 *)(param_1[1] + lVar13);
                    uVar8 = 0;
                    do {
                      *__s = uVar7;
                      uVar8 = uVar8 + 1;
                      __s = __s + lVar11;
                    } while ((uVar6 & 7) != uVar8);
                    uVar6 = uVar6 - uVar8;
                  }
                  if (6 < (iVar15 - iVar12) - 2U) {
                    uVar6 = uVar6 - 1;
                    do {
                      *__s = uVar7;
                      __s[lVar11] = uVar7;
                      __s[lVar11 * 2] = uVar7;
                      __s[lVar11 * 3] = uVar7;
                      __s[lVar11 * 4] = uVar7;
                      __s[lVar11 * 5] = uVar7;
                      __s[lVar11 * 6] = uVar7;
                      __s[lVar11 * 7] = uVar7;
                      __s = __s + lVar11 * 8;
                      uVar6 = uVar6 - 8;
                    } while (uVar6 < 0xfffffffe);
                  }
                }
              }
            }
            iVar5 = (uVar2 & 0xff) * uVar3;
          }
          piVar14 = piVar14 + 2;
          bVar4 = 2 < iVar16;
          iVar16 = iVar16 + -1;
          uVar6 = uVar2;
        } while (bVar4);
        if (0xff < iVar5) {
          *(undefined1 *)(param_1[1] + (long)iVar15 * (long)*(int *)(*param_1 + 0x18)) =
               *(undefined1 *)((long)param_1 + 0x13);
        }
      }
      piVar10 = piVar10 + iVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this + 0x1c));
  }
  return;
}


