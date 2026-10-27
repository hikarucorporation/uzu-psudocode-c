// Function : fillAllWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b5b70
// Prototype: undefined fillAllWithColour(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, uint param_2, char param_3)
// Body     : 003b5b70 - 003b6564


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::PixelARGB, bool) const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithColour
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          long param_1,uint param_2,char param_3)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  int *piVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  char *pcVar23;
  char *pcVar24;
  byte *pbVar25;
  char cVar26;
  long local_90 [2];
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  long *local_68;
  undefined8 local_60;
  uint local_54;
  int *local_50;
  int *local_48;
  long local_40;
  size_t local_38;
  
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 == (long *)0x0) {
    local_74 = 0;
    local_70 = 0;
  }
  else {
    local_74 = (undefined4)plVar2[2];
    local_70 = *(undefined4 *)((long)plVar2 + 0x14);
  }
  local_68 = (long *)0x0;
                    /* try { // try from 003b5bb6 to 003b5bc7 has its CatchHandler @ 003b6565 */
  (**(code **)(*plVar2 + 0x38))(plVar2,local_90,0,0,2);
  cVar3 = (char)(param_2 >> 0x18);
  if (local_80 == 1) {
    cVar19 = (char)(param_2 >> 8);
    cVar26 = (char)param_2;
    cVar7 = (char)(param_2 >> 0x10);
    if (param_3 == '\0') {
      if (local_78 == 3) {
        local_60 = (int *)CONCAT44(local_60._4_4_,
                                   (uint)CONCAT11(cVar3,cVar26 == cVar19 && cVar7 == cVar19));
        iVar21 = *(int *)(this + 0x1c);
      }
      else {
        local_60 = (int *)((ulong)local_60._4_4_ << 0x20);
        iVar21 = *(int *)(this + 0x1c);
      }
      if ((long)iVar21 != 0) {
        piVar6 = *(int **)(this + 0x10);
        local_48 = piVar6 + (long)iVar21 * 4;
        iVar21 = 0x100 - (param_2 >> 0x18);
        uVar13 = param_2 >> 0x10;
        local_54 = uVar13;
        do {
          local_50 = piVar6;
          if (0 < piVar6[3]) {
            iVar1 = *piVar6;
            lVar10 = (long)piVar6[1];
            local_38 = (long)piVar6[2] * 3;
            lVar14 = (long)(piVar6[3] + piVar6[1]);
            iVar5 = piVar6[2] + 1;
            local_40 = lVar14;
            do {
              lVar11 = local_7c * lVar10;
              lVar15 = (long)local_78;
              lVar17 = lVar15 * iVar1;
              if (param_2 < 0xff000000) {
                pbVar25 = (byte *)(lVar11 + lVar17 + local_90[0] + 2);
                iVar9 = iVar5;
                do {
                  uVar20 = (((uint)*pbVar25 << 0x10 | (uint)pbVar25[-2]) * iVar21 >> 8 & 0xff00ff) +
                           (param_2 & 0xff00ff);
                  uVar20 = 0x100 - (uVar20 >> 8 & 0x10001) | uVar20;
                  iVar8 = ((uint)pbVar25[-1] * iVar21 >> 8) + (param_2 >> 8 & 0xff00ff);
                  pbVar25[-1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
                  *pbVar25 = (byte)(uVar20 >> 0x10);
                  pbVar25[-2] = (byte)uVar20;
                  iVar9 = iVar9 + -1;
                  pbVar25 = pbVar25 + lVar15;
                } while (1 < iVar9);
              }
              else if ((local_78 == 3) && ((char)local_60 != '\0')) {
                memset((void *)(local_90[0] + lVar11 + lVar17),uVar13 & 0xff,local_38);
                lVar14 = local_40;
                uVar13 = local_54;
              }
              else {
                puVar12 = (undefined1 *)(lVar11 + lVar17 + local_90[0] + 2);
                iVar9 = iVar5;
                do {
                  puVar12[-2] = cVar26;
                  puVar12[-1] = cVar19;
                  *puVar12 = (char)uVar13;
                  iVar9 = iVar9 + -1;
                  puVar12 = puVar12 + lVar15;
                } while (1 < iVar9);
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < lVar14);
          }
          piVar6 = local_50 + 4;
        } while (piVar6 != local_48);
      }
    }
    else {
      piVar6 = *(int **)(this + 0x10);
      iVar21 = *(int *)(this + 0x1c);
      if (local_78 == 3) {
        if (iVar21 == 0) goto LAB_003b6546;
        piVar18 = piVar6 + (long)iVar21 * 4;
        if ((cVar7 == cVar19) && (cVar19 == cVar26)) {
          do {
            if (0 < piVar6[3]) {
              iVar21 = *piVar6;
              iVar1 = piVar6[2];
              lVar14 = (long)piVar6[1];
              lVar10 = (long)(piVar6[3] + piVar6[1]);
              if ((long)local_78 == 3) {
                iVar5 = 3;
                while( true ) {
                  lVar15 = (long)(iVar5 * iVar21);
                  if (iVar5 == 3) {
                    memset((void *)(local_90[0] + local_7c * lVar14 + lVar15),param_2 >> 8 & 0xff,
                           (long)iVar1 * 3);
                  }
                  else {
                    pcVar23 = (char *)(local_7c * lVar14 + lVar15 + local_90[0] + 2);
                    iVar9 = iVar1 + 1;
                    do {
                      pcVar23[-2] = cVar19;
                      pcVar23[-1] = cVar19;
                      *pcVar23 = cVar19;
                      iVar9 = iVar9 + -1;
                      pcVar23 = pcVar23 + iVar5;
                    } while (1 < iVar9);
                  }
                  lVar14 = lVar14 + 1;
                  if (lVar10 <= lVar14) break;
                  iVar5 = local_78;
                }
              }
              else {
                pcVar23 = (char *)(local_90[0] + lVar14 * local_7c + (long)(iVar21 * local_78) + 2);
                do {
                  pcVar24 = pcVar23;
                  iVar21 = iVar1 + 1;
                  do {
                    pcVar24[-2] = cVar19;
                    pcVar24[-1] = cVar19;
                    *pcVar24 = cVar19;
                    iVar21 = iVar21 + -1;
                    pcVar24 = pcVar24 + local_78;
                  } while (1 < iVar21);
                  lVar14 = lVar14 + 1;
                  pcVar23 = pcVar23 + local_7c;
                } while (lVar14 < lVar10);
              }
            }
            piVar6 = piVar6 + 4;
          } while (piVar6 != piVar18);
          goto LAB_003b6546;
        }
      }
      else {
        if (iVar21 == 0) goto LAB_003b6546;
        piVar18 = piVar6 + (long)iVar21 * 4;
      }
      do {
        iVar21 = piVar6[3];
        if (0 < iVar21) {
          iVar1 = piVar6[2];
          iVar5 = piVar6[1];
          lVar14 = (long)iVar5;
          pcVar23 = (char *)(local_7c * lVar14 + (long)*piVar6 * (long)local_78 + local_90[0] + 2);
          do {
            pcVar24 = pcVar23;
            iVar9 = iVar1 + 1;
            do {
              pcVar24[-2] = cVar26;
              pcVar24[-1] = cVar19;
              *pcVar24 = cVar7;
              iVar9 = iVar9 + -1;
              pcVar24 = pcVar24 + local_78;
            } while (1 < iVar9);
            lVar14 = lVar14 + 1;
            pcVar23 = pcVar23 + local_7c;
          } while (lVar14 < iVar21 + iVar5);
        }
        piVar6 = piVar6 + 4;
      } while (piVar6 != piVar18);
    }
  }
  else if (local_80 == 2) {
    piVar6 = *(int **)(this + 0x10);
    iVar21 = *(int *)(this + 0x1c);
    piVar18 = piVar6 + (long)iVar21 * 4;
    if (param_3 == '\0') {
      if (iVar21 != 0) {
        iVar21 = 0x100 - (param_2 >> 0x18);
        do {
          iVar1 = piVar6[3];
          if (0 < iVar1) {
            iVar5 = *piVar6;
            iVar9 = piVar6[2];
            iVar8 = piVar6[1];
            lVar14 = (long)iVar8;
            do {
              lVar10 = (long)local_78;
              puVar22 = (uint *)(lVar10 * iVar5 + local_7c * lVar14 + local_90[0]);
              iVar4 = iVar9 + 1;
              if (param_2 < 0xff000000) {
                do {
                  uVar20 = ((*puVar22 & 0xff00ff) * iVar21 >> 8 & 0xff00ff) + (param_2 & 0xff00ff);
                  uVar13 = ((*puVar22 >> 8 & 0xff00ff) * iVar21 >> 8 & 0xff00ff) +
                           (param_2 >> 8 & 0xff00ff);
                  *puVar22 = ((0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff) << 8 |
                             (0x100 - (uVar20 >> 8 & 0x10001) | uVar20) & 0xff00ff;
                  puVar22 = (uint *)((long)puVar22 + lVar10);
                  iVar4 = iVar4 + -1;
                } while (1 < iVar4);
              }
              else {
                do {
                  *puVar22 = param_2;
                  puVar22 = (uint *)((long)puVar22 + lVar10);
                  iVar4 = iVar4 + -1;
                } while (1 < iVar4);
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < iVar1 + iVar8);
          }
          piVar6 = piVar6 + 4;
          local_60 = piVar18;
        } while (piVar6 != piVar18);
      }
    }
    else if (iVar21 != 0) {
      do {
        iVar21 = piVar6[3];
        if (0 < iVar21) {
          iVar1 = *piVar6;
          iVar5 = piVar6[2];
          iVar9 = piVar6[1];
          lVar14 = (long)iVar9;
          do {
            puVar22 = (uint *)((long)local_78 * (long)iVar1 + local_7c * lVar14 + local_90[0]);
            iVar8 = iVar5 + 1;
            do {
              *puVar22 = param_2;
              puVar22 = (uint *)((long)puVar22 + (long)local_78);
              iVar8 = iVar8 + -1;
            } while (1 < iVar8);
            lVar14 = lVar14 + 1;
          } while (lVar14 < iVar21 + iVar9);
        }
        piVar6 = piVar6 + 4;
      } while (piVar6 != piVar18);
    }
  }
  else {
    piVar6 = *(int **)(this + 0x10);
    iVar21 = *(int *)(this + 0x1c);
    piVar18 = piVar6 + (long)iVar21 * 4;
    if (param_3 == '\0') {
      if (iVar21 != 0) {
        if (param_2 < 0xff000000) {
          do {
            iVar21 = piVar6[3];
            if (0 < iVar21) {
              iVar1 = piVar6[2];
              iVar5 = piVar6[1];
              lVar14 = (long)iVar5;
              pbVar25 = (byte *)(local_7c * lVar14 + (long)*piVar6 * (long)local_78 + local_90[0]);
              do {
                pbVar16 = pbVar25;
                iVar9 = iVar1 + 1;
                do {
                  *pbVar16 = (char)((uint)*pbVar16 * (0x100 - (param_2 >> 0x18)) >> 8) + cVar3;
                  iVar9 = iVar9 + -1;
                  pbVar16 = pbVar16 + local_78;
                } while (1 < iVar9);
                lVar14 = lVar14 + 1;
                pbVar25 = pbVar25 + local_7c;
              } while (lVar14 < iVar21 + iVar5);
            }
            piVar6 = piVar6 + 4;
          } while (piVar6 != piVar18);
        }
        else {
          do {
            if (0 < piVar6[3]) {
              iVar21 = *piVar6;
              iVar1 = piVar6[2];
              lVar14 = (long)piVar6[1];
              lVar10 = (long)(piVar6[3] + piVar6[1]);
              if ((long)local_78 == 1) {
                iVar5 = 1;
                while( true ) {
                  lVar15 = (long)(iVar5 * iVar21);
                  if (iVar5 == 1) {
                    memset((void *)(local_90[0] + local_7c * lVar14 + lVar15),param_2 >> 0x18,
                           (long)iVar1);
                  }
                  else {
                    pcVar23 = (char *)(local_90[0] + local_7c * lVar14 + lVar15);
                    iVar9 = iVar1 + 1;
                    do {
                      *pcVar23 = cVar3;
                      iVar9 = iVar9 + -1;
                      pcVar23 = pcVar23 + iVar5;
                    } while (1 < iVar9);
                  }
                  lVar14 = lVar14 + 1;
                  if (lVar10 <= lVar14) break;
                  iVar5 = local_78;
                }
              }
              else {
                pcVar23 = (char *)(lVar14 * local_7c + (long)(iVar21 * local_78) + local_90[0]);
                do {
                  pcVar24 = pcVar23;
                  iVar21 = iVar1 + 1;
                  do {
                    *pcVar24 = cVar3;
                    iVar21 = iVar21 + -1;
                    pcVar24 = pcVar24 + local_78;
                  } while (1 < iVar21);
                  lVar14 = lVar14 + 1;
                  pcVar23 = pcVar23 + local_7c;
                } while (lVar14 < lVar10);
              }
            }
            piVar6 = piVar6 + 4;
          } while (piVar6 != piVar18);
        }
      }
    }
    else if (iVar21 != 0) {
      do {
        if (0 < (long)piVar6[3]) {
          iVar21 = *piVar6;
          iVar1 = piVar6[2];
          lVar14 = (long)piVar6[1];
          lVar10 = piVar6[3] + lVar14;
          if ((long)local_78 == 1) {
            iVar5 = 1;
            while( true ) {
              lVar15 = (long)(iVar5 * iVar21);
              if (iVar5 == 1) {
                memset((void *)(local_90[0] + local_7c * lVar14 + lVar15),param_2 >> 0x18,
                       (long)iVar1);
              }
              else {
                pcVar23 = (char *)(local_90[0] + local_7c * lVar14 + lVar15);
                iVar9 = iVar1 + 1;
                do {
                  *pcVar23 = cVar3;
                  iVar9 = iVar9 + -1;
                  pcVar23 = pcVar23 + iVar5;
                } while (1 < iVar9);
              }
              lVar14 = lVar14 + 1;
              if (lVar10 <= lVar14) break;
              iVar5 = local_78;
            }
          }
          else {
            pcVar23 = (char *)(lVar14 * local_7c + (long)(iVar21 * local_78) + local_90[0]);
            do {
              pcVar24 = pcVar23;
              iVar21 = iVar1 + 1;
              do {
                *pcVar24 = cVar3;
                iVar21 = iVar21 + -1;
                pcVar24 = pcVar24 + local_78;
              } while (1 < iVar21);
              lVar14 = lVar14 + 1;
              pcVar23 = pcVar23 + local_7c;
            } while (lVar14 < (int)lVar10);
          }
        }
        piVar6 = piVar6 + 4;
      } while (piVar6 != piVar18);
    }
  }
LAB_003b6546:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  return;
}


