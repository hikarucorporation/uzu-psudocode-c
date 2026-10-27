// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,true>>
// Namespace: juce:EdgeTable
// Entry    : 00350cc0
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,true>>(EdgeTable * this, long * param_1)
// Body     : 00350cc0 - 00350ee0


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,
   true> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB, true>&) const */

void __thiscall
juce::EdgeTable::
iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,true>>
          (EdgeTable *this,long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar15 = *(int **)this;
    iVar12 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar16 = *piVar15;
      if (1 < iVar16) {
        piVar7 = piVar15 + 1;
        uVar6 = piVar15[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar12 + (long)*(int *)(this + 0x14))
                     + *(long *)*param_1;
        iVar5 = 0;
        do {
          uVar2 = piVar7[2];
          uVar8 = uVar2 + 0xff;
          if (-1 < (int)uVar2) {
            uVar8 = uVar2;
          }
          uVar3 = piVar7[1];
          iVar17 = (int)uVar8 >> 8;
          uVar8 = uVar6 + 0xff;
          if (-1 < (int)uVar6) {
            uVar8 = uVar6;
          }
          iVar9 = (int)uVar8 >> 8;
          if (iVar17 - iVar9 == 0) {
            iVar5 = iVar5 + (uVar2 - uVar6) * uVar3;
          }
          else {
            if (0xff < (int)((0x100 - (uVar6 & 0xff)) * uVar3 + iVar5)) {
              *(int *)(param_1[1] + (long)*(int *)(*param_1 + 0x18) * (long)iVar9) = (int)param_1[2]
              ;
            }
            if (0 < (int)uVar3) {
              lVar10 = (long)iVar9 + 1;
              uVar6 = iVar17 - (int)lVar10;
              if (0 < (int)uVar6) {
                iVar5 = (uVar3 & 0xff) + 1;
                uVar8 = (*(uint *)(param_1 + 2) & 0xff00ff) * iVar5 >> 8 & 0xff00ff |
                        (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * iVar5 & 0xff00ff00;
                lVar13 = (long)*(int *)(*param_1 + 0x18);
                puVar11 = (uint *)(lVar10 * lVar13 + param_1[1]);
                if ((uVar6 & 7) != 0) {
                  uVar14 = 0;
                  do {
                    *puVar11 = uVar8;
                    puVar11 = (uint *)((long)puVar11 + lVar13);
                    uVar14 = uVar14 + 1;
                  } while ((uVar6 & 7) != uVar14);
                  uVar6 = uVar6 - uVar14;
                }
                if (6 < (iVar17 - iVar9) - 2U) {
                  uVar6 = uVar6 - 1;
                  do {
                    *puVar11 = uVar8;
                    *(uint *)((long)puVar11 + lVar13) = uVar8;
                    *(uint *)((long)puVar11 + lVar13 * 2) = uVar8;
                    *(uint *)((long)puVar11 + lVar13 * 3) = uVar8;
                    puVar11[lVar13] = uVar8;
                    *(uint *)((long)puVar11 + lVar13 * 5) = uVar8;
                    *(uint *)((long)puVar11 + lVar13 * 6) = uVar8;
                    *(uint *)((long)puVar11 + lVar13 * 7) = uVar8;
                    puVar11 = puVar11 + lVar13 * 2;
                    uVar6 = uVar6 - 8;
                  } while (uVar6 < 0xfffffffe);
                }
              }
            }
            iVar5 = (uVar2 & 0xff) * uVar3;
          }
          piVar7 = piVar7 + 2;
          bVar4 = 2 < iVar16;
          iVar16 = iVar16 + -1;
          uVar6 = uVar2;
        } while (bVar4);
        if (0xff < iVar5) {
          *(int *)(param_1[1] + (long)iVar17 * (long)*(int *)(*param_1 + 0x18)) = (int)param_1[2];
        }
      }
      piVar15 = piVar15 + iVar1;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(this + 0x1c));
  }
  return;
}


