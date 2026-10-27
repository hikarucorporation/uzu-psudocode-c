// Function : iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>>
// Namespace: juce:EdgeTable
// Entry    : 00350ef0
// Prototype: void iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>>(EdgeTable * this, long * param_1)
// Body     : 00350ef0 - 0035143c


/* void 
   juce::EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,
   false> >(juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB, false>&) const */

void __thiscall
juce::EdgeTable::
iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>>
          (EdgeTable *this,long *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  
  if (0 < *(int *)(this + 0x1c)) {
    piVar12 = *(int **)this;
    iVar13 = 0;
    do {
      iVar1 = *(int *)(this + 0x24);
      iVar16 = *piVar12;
      if (1 < iVar16) {
        piVar18 = piVar12 + 1;
        uVar9 = piVar12[1];
        param_1[1] = (long)*(int *)(*param_1 + 0x14) * ((long)iVar13 + (long)*(int *)(this + 0x14))
                     + *(long *)*param_1;
        uVar6 = 0;
        do {
          uVar4 = piVar18[2];
          uVar14 = uVar4 + 0xff;
          if (-1 < (int)uVar4) {
            uVar14 = uVar4;
          }
          uVar2 = piVar18[1];
          iVar17 = (int)uVar14 >> 8;
          uVar14 = uVar9 + 0xff;
          if (-1 < (int)uVar9) {
            uVar14 = uVar9;
          }
          iVar11 = (int)uVar14 >> 8;
          uVar14 = iVar17 - iVar11;
          if (uVar14 == 0) {
            uVar6 = (uVar4 - uVar9) * uVar2 + uVar6;
          }
          else {
            iVar7 = (0x100 - (uVar9 & 0xff)) * uVar2;
            uVar8 = iVar7 + uVar6;
            uVar9 = iVar7 + uVar6 + 0xff;
            if (-1 < (int)uVar8) {
              uVar9 = uVar8;
            }
            if (0xff < (int)uVar8) {
              if (uVar8 < 0xff00) {
                uVar8 = (int)uVar9 >> 8 & 0xff;
                lVar5 = (long)iVar11 * (long)*(int *)(*param_1 + 0x18);
                puVar10 = (uint *)(param_1[1] + lVar5);
                uVar9 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * uVar8;
                uVar15 = 0x100 - (uVar9 >> 0x18);
                uVar6 = *(uint *)(param_1[1] + lVar5);
                uVar8 = ((uVar6 & 0xff00ff) * uVar15 >> 8 & 0xff00ff) +
                        ((*(uint *)(param_1 + 2) & 0xff00ff) * uVar8 >> 8 & 0xff00ff);
                uVar6 = uVar6 >> 8 & 0xff00ff;
              }
              else {
                lVar5 = (long)iVar11 * (long)*(int *)(*param_1 + 0x18);
                puVar10 = (uint *)(param_1[1] + lVar5);
                uVar9 = *(uint *)(param_1 + 2);
                uVar6 = 0x100 - (uVar9 >> 0x18);
                uVar15 = *(uint *)(param_1[1] + lVar5);
                uVar8 = ((uVar15 & 0xff00ff) * uVar6 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
                uVar15 = uVar15 >> 8 & 0xff00ff;
              }
              uVar9 = (uVar6 * uVar15 >> 8 & 0xff00ff) + (uVar9 >> 8 & 0xff00ff);
              *puVar10 = ((0x100 - (uVar9 >> 8 & 0x10001) | uVar9) & 0xff00ff) << 8 |
                         (0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff;
            }
            if (0 < (int)uVar2) {
              uVar9 = iVar17 - (int)((long)iVar11 + 1);
              if (0 < (int)uVar9) {
                iVar7 = (uVar2 & 0xff) + 1;
                uVar6 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * iVar7;
                uVar8 = (*(uint *)(param_1 + 2) & 0xff00ff) * iVar7 >> 8 & 0xff00ff;
                lVar5 = (long)*(int *)(*param_1 + 0x18);
                puVar10 = (uint *)(((long)iVar11 + 1) * lVar5 + param_1[1]);
                if (uVar6 < 0xff000000) {
                  iVar11 = 0x100 - (uVar6 >> 0x18);
                  do {
                    uVar9 = ((*puVar10 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar8;
                    uVar15 = ((*puVar10 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                             (uVar6 >> 8 & 0xff00ff);
                    *puVar10 = ((0x100 - (uVar15 >> 8 & 0x10001) | uVar15) & 0xff00ff) << 8 |
                               (0x100 - (uVar9 >> 8 & 0x10001) | uVar9) & 0xff00ff;
                    puVar10 = (uint *)((long)puVar10 + lVar5);
                    uVar14 = uVar14 - 1;
                  } while (1 < uVar14);
                }
                else {
                  uVar6 = uVar6 & 0xff000000 | uVar6 & 0xff00 | uVar8;
                  if ((uVar9 & 7) != 0) {
                    uVar14 = 0;
                    do {
                      *puVar10 = uVar6;
                      puVar10 = (uint *)((long)puVar10 + lVar5);
                      uVar14 = uVar14 + 1;
                    } while ((uVar9 & 7) != uVar14);
                    uVar9 = uVar9 - uVar14;
                  }
                  if (6 < (iVar17 - iVar11) - 2U) {
                    uVar9 = uVar9 - 1;
                    do {
                      *puVar10 = uVar6;
                      *(uint *)((long)puVar10 + lVar5) = uVar6;
                      *(uint *)((long)puVar10 + lVar5 * 2) = uVar6;
                      *(uint *)((long)puVar10 + lVar5 * 3) = uVar6;
                      puVar10[lVar5] = uVar6;
                      *(uint *)((long)puVar10 + lVar5 * 5) = uVar6;
                      *(uint *)((long)puVar10 + lVar5 * 6) = uVar6;
                      *(uint *)((long)puVar10 + lVar5 * 7) = uVar6;
                      puVar10 = puVar10 + lVar5 * 2;
                      uVar9 = uVar9 - 8;
                    } while (uVar9 < 0xfffffffe);
                  }
                }
              }
            }
            uVar6 = (uVar4 & 0xff) * uVar2;
          }
          piVar18 = piVar18 + 2;
          bVar3 = 2 < iVar16;
          iVar16 = iVar16 + -1;
          uVar9 = uVar4;
        } while (bVar3);
        uVar9 = uVar6 + 0xff;
        if (-1 < (int)uVar6) {
          uVar9 = uVar6;
        }
        if (0xff < (int)uVar6) {
          if (uVar6 < 0xff00) {
            uVar4 = (int)uVar9 >> 8 & 0xff;
            lVar5 = (long)iVar17 * (long)*(int *)(*param_1 + 0x18);
            puVar10 = (uint *)(param_1[1] + lVar5);
            uVar6 = (*(uint *)(param_1 + 2) >> 8 & 0xff00ff) * uVar4;
            uVar14 = 0x100 - (uVar6 >> 0x18);
            uVar9 = *(uint *)(param_1[1] + lVar5);
            uVar4 = ((uVar9 & 0xff00ff) * uVar14 >> 8 & 0xff00ff) +
                    ((*(uint *)(param_1 + 2) & 0xff00ff) * uVar4 >> 8 & 0xff00ff);
            uVar9 = uVar9 >> 8 & 0xff00ff;
          }
          else {
            lVar5 = (long)iVar17 * (long)*(int *)(*param_1 + 0x18);
            puVar10 = (uint *)(param_1[1] + lVar5);
            uVar6 = *(uint *)(param_1 + 2);
            uVar9 = 0x100 - (uVar6 >> 0x18);
            uVar14 = *(uint *)(param_1[1] + lVar5);
            uVar4 = ((uVar14 & 0xff00ff) * uVar9 >> 8 & 0xff00ff) + (uVar6 & 0xff00ff);
            uVar14 = uVar14 >> 8 & 0xff00ff;
          }
          uVar9 = (uVar9 * uVar14 >> 8 & 0xff00ff) + (uVar6 >> 8 & 0xff00ff);
          *puVar10 = ((0x100 - (uVar9 >> 8 & 0x10001) | uVar9) & 0xff00ff) << 8 |
                     (0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff;
        }
      }
      piVar12 = piVar12 + iVar1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(this + 0x1c));
  }
  return;
}


