// Function : fillRectWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b22b0
// Prototype: undefined fillRectWithColour(long param_1, long param_2, ulong param_3, undefined8 param_4, uint param_5, char param_6)
// Body     : 003b22b0 - 003b2e91


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Rectangle<int>, juce::PixelARGB, bool) const */

void __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour
          (long param_1,long param_2,ulong param_3,undefined8 param_4,uint param_5,char param_6)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  char *__s;
  char cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  char cVar24;
  int iVar26;
  int iVar25;
  bool bVar27;
  long local_90 [2];
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  long *local_68;
  ulong local_60;
  undefined8 local_58;
  int local_4c;
  long *local_48 [2];
  uint local_38;
  undefined1 local_34;
  
  plVar1 = *(long **)(param_2 + 0x68);
  if (plVar1 == (long *)0x0) {
    local_74 = 0;
    local_70 = 0;
  }
  else {
    local_74 = (undefined4)plVar1[2];
    local_70 = *(undefined4 *)((long)plVar1 + 0x14);
  }
  local_68 = (long *)0x0;
                    /* try { // try from 003b2301 to 003b2315 has its CatchHandler @ 003b2e92 */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_90,0,0,2);
  iVar25 = (int)param_4;
  iVar26 = (int)((ulong)param_4 >> 0x20);
  bVar3 = (byte)(param_5 >> 0x18);
  uVar2 = (uint)param_3;
  uVar22 = (uint)(param_3 >> 0x20);
  if (local_80 == 1) {
    cVar24 = (char)param_5;
    cVar16 = (char)(param_5 >> 8);
    cVar4 = (char)(param_5 >> 0x10);
    if (param_6 == '\0') {
      if (local_78 != 3) {
        iVar18 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar18 = *(int *)(param_1 + 0x1c);
      }
      local_34 = local_78 == 3 && (cVar24 == cVar16 && cVar4 == cVar16);
      local_48[0] = local_90;
      local_38 = param_5;
      if ((long)iVar18 != 0) {
        puVar6 = *(uint **)(param_1 + 0x10);
        puVar20 = puVar6 + (long)iVar18 * 4;
        do {
          uVar23 = *puVar6;
          uVar10 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            uVar10 = uVar2;
          }
          uVar13 = puVar6[1];
          uVar5 = uVar13;
          if ((int)uVar13 < (int)uVar22) {
            uVar5 = uVar22;
          }
          iVar18 = iVar25 + uVar2;
          if ((int)(uVar23 + puVar6[2]) <= (int)(iVar25 + uVar2)) {
            iVar18 = uVar23 + puVar6[2];
          }
          iVar18 = iVar18 - uVar10;
          if (-1 < iVar18) {
            iVar17 = iVar26 + uVar22;
            if ((int)(uVar13 + puVar6[3]) <= (int)(iVar26 + uVar22)) {
              iVar17 = uVar13 + puVar6[3];
            }
            iVar17 = iVar17 - uVar5;
            if (((-1 < iVar17) && (iVar18 != 0)) && (iVar17 != 0)) {
              EdgeTableFillers::SolidColour<juce::PixelRGB,false>::handleEdgeTableRectangle
                        ((SolidColour<juce::PixelRGB,false> *)local_48,uVar10,uVar5,iVar18,iVar17,
                         0xff);
            }
          }
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar20);
      }
    }
    else {
      bVar27 = local_78 != 3;
      if (bVar27) {
        iVar18 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar18 = *(int *)(param_1 + 0x1c);
      }
      if ((long)iVar18 != 0) {
        puVar6 = *(uint **)(param_1 + 0x10);
        local_58 = puVar6 + (long)iVar18 * 4;
        local_60 = param_3 >> 0x20;
        local_4c = uVar2 + iVar25;
        do {
          uVar23 = *puVar6;
          uVar10 = puVar6[1];
          uVar13 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            uVar13 = uVar2;
          }
          uVar5 = uVar10;
          if ((int)uVar10 < (int)(uint)local_60) {
            uVar5 = (uint)local_60;
          }
          iVar25 = uVar23 + puVar6[2];
          if (local_4c < (int)(uVar23 + puVar6[2])) {
            iVar25 = local_4c;
          }
          uVar23 = iVar25 - uVar13;
          if (-1 < (int)uVar23) {
            iVar18 = uVar10 + puVar6[3];
            if ((int)(iVar26 + uVar22) < (int)(uVar10 + puVar6[3])) {
              iVar18 = iVar26 + uVar22;
            }
            iVar18 = iVar18 - uVar5;
            if (((-1 < iVar18) && (0 < (int)uVar23)) && (iVar18 != 0)) {
              __s = (char *)((long)(int)(local_78 * uVar13) +
                            (long)local_7c * (long)(int)uVar5 + local_90[0]);
              uVar10 = uVar23 & 3;
              if (local_78 != 3) goto LAB_003b2d10;
              do {
                if (bVar27 || (cVar24 != cVar16 || cVar4 != cVar16)) goto LAB_003b2d10;
                memset(__s,param_5 >> 0x10 & 0xff,(ulong)uVar23 * 3);
                while( true ) {
                  if (iVar18 < 2) goto LAB_003b2c10;
                  iVar18 = iVar18 + -1;
                  __s = __s + local_7c;
                  if (local_78 == 3) break;
LAB_003b2d10:
                  lVar7 = (long)local_78;
                  pcVar9 = __s;
                  uVar5 = uVar23;
                  if (uVar10 != 0) {
                    iVar17 = -uVar10;
                    do {
                      *pcVar9 = cVar24;
                      pcVar9[1] = cVar16;
                      pcVar9[2] = cVar4;
                      pcVar9 = pcVar9 + lVar7;
                      iVar17 = iVar17 + 1;
                    } while (iVar17 != 0);
                    uVar5 = iVar25 - (uVar13 + uVar10);
                  }
                  if (2 < ~uVar13 + iVar25) {
                    iVar17 = uVar5 + 4;
                    do {
                      *pcVar9 = cVar24;
                      pcVar9[1] = cVar16;
                      pcVar9[2] = cVar4;
                      pcVar9[lVar7] = cVar24;
                      pcVar9[lVar7 + 1] = cVar16;
                      pcVar9[lVar7 + 2] = cVar4;
                      pcVar9[lVar7 * 2] = cVar24;
                      pcVar9[lVar7 * 2 + 1] = cVar16;
                      pcVar9[lVar7 * 2 + 2] = cVar4;
                      pcVar9[lVar7 * 3] = cVar24;
                      pcVar9[lVar7 * 3 + 1] = cVar16;
                      pcVar9[lVar7 * 3 + 2] = cVar4;
                      iVar17 = iVar17 + -4;
                      pcVar9 = pcVar9 + lVar7 * 4;
                    } while (4 < iVar17);
                  }
                }
              } while( true );
            }
          }
LAB_003b2c10:
          puVar6 = puVar6 + 4;
        } while (puVar6 != local_58);
      }
    }
  }
  else if (local_80 == 2) {
    if (param_6 == '\0') {
      local_34 = 0;
      local_48[0] = local_90;
      local_38 = param_5;
      if ((long)*(int *)(param_1 + 0x1c) != 0) {
        puVar6 = *(uint **)(param_1 + 0x10);
        puVar20 = puVar6 + (long)*(int *)(param_1 + 0x1c) * 4;
        do {
          uVar23 = *puVar6;
          uVar10 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            uVar10 = uVar2;
          }
          uVar13 = puVar6[1];
          uVar5 = uVar13;
          if ((int)uVar13 < (int)uVar22) {
            uVar5 = uVar22;
          }
          iVar18 = iVar25 + uVar2;
          if ((int)(uVar23 + puVar6[2]) <= (int)(iVar25 + uVar2)) {
            iVar18 = uVar23 + puVar6[2];
          }
          iVar18 = iVar18 - uVar10;
          if (-1 < iVar18) {
            iVar17 = iVar26 + uVar22;
            if ((int)(uVar13 + puVar6[3]) <= (int)(iVar26 + uVar22)) {
              iVar17 = uVar13 + puVar6[3];
            }
            iVar17 = iVar17 - uVar5;
            if (((-1 < iVar17) && (iVar18 != 0)) && (iVar17 != 0)) {
              EdgeTableFillers::SolidColour<juce::PixelARGB,false>::handleEdgeTableRectangle
                        ((SolidColour<juce::PixelARGB,false> *)local_48,uVar10,uVar5,iVar18,iVar17,
                         0xff);
            }
          }
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar20);
      }
    }
    else if ((long)*(int *)(param_1 + 0x1c) != 0) {
      puVar6 = *(uint **)(param_1 + 0x10);
      puVar20 = puVar6 + (long)*(int *)(param_1 + 0x1c) * 4;
      do {
        uVar23 = *puVar6;
        uVar10 = puVar6[1];
        uVar13 = uVar23;
        if ((int)uVar23 < (int)uVar2) {
          uVar13 = uVar2;
        }
        uVar5 = uVar10;
        if ((int)uVar10 < (int)uVar22) {
          uVar5 = uVar22;
        }
        iVar18 = uVar23 + puVar6[2];
        if ((int)(iVar25 + uVar2) < (int)(uVar23 + puVar6[2])) {
          iVar18 = iVar25 + uVar2;
        }
        iVar18 = iVar18 - uVar13;
        if (-1 < iVar18) {
          iVar17 = uVar10 + puVar6[3];
          if ((int)(iVar26 + uVar22) < (int)(uVar10 + puVar6[3])) {
            iVar17 = iVar26 + uVar22;
          }
          iVar17 = iVar17 - uVar5;
          if (((-1 < iVar17) && (iVar18 != 0)) && (iVar17 != 0)) {
            puVar12 = (uint *)((long)(int)(uVar13 * local_78) +
                              (long)local_7c * (long)(int)uVar5 + local_90[0]);
            while( true ) {
              puVar14 = puVar12;
              iVar19 = iVar18 + 1;
              do {
                *puVar14 = param_5;
                puVar14 = (uint *)((long)puVar14 + (long)local_78);
                iVar19 = iVar19 + -1;
              } while (1 < iVar19);
              if (iVar17 < 2) break;
              puVar12 = (uint *)((long)puVar12 + (long)local_7c);
              iVar17 = iVar17 + -1;
            }
          }
        }
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar20);
    }
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x10);
    iVar18 = *(int *)(param_1 + 0x1c);
    puVar20 = puVar6 + (long)iVar18 * 4;
    if (param_6 == '\0') {
      if (iVar18 != 0) {
        iVar18 = 0x100 - (param_5 >> 0x18);
        do {
          uVar23 = *puVar6;
          uVar10 = puVar6[1];
          uVar13 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            uVar13 = uVar2;
          }
          uVar5 = uVar10;
          if ((int)uVar10 < (int)uVar22) {
            uVar5 = uVar22;
          }
          iVar17 = uVar23 + puVar6[2];
          if ((int)(uVar2 + iVar25) < (int)(uVar23 + puVar6[2])) {
            iVar17 = uVar2 + iVar25;
          }
          uVar23 = iVar17 - uVar13;
          if (-1 < (int)uVar23) {
            iVar19 = uVar10 + puVar6[3];
            if ((int)(iVar26 + uVar22) < (int)(uVar10 + puVar6[3])) {
              iVar19 = iVar26 + uVar22;
            }
            iVar19 = iVar19 - uVar5;
            if (((-1 < iVar19) && (0 < (int)uVar23)) && (iVar19 != 0)) {
              lVar21 = (long)local_7c;
              lVar7 = (long)local_78;
              pbVar15 = (byte *)((int)uVar13 * lVar7 + (int)uVar5 * lVar21 + local_90[0]);
              if (param_5 < 0xff000000) {
                uVar10 = uVar23 & 3;
                do {
                  uVar5 = uVar23;
                  pbVar8 = pbVar15;
                  if (uVar10 != 0) {
                    iVar11 = -uVar10;
                    do {
                      *pbVar8 = (char)((uint)*pbVar8 * iVar18 >> 8) + bVar3;
                      pbVar8 = pbVar8 + lVar7;
                      iVar11 = iVar11 + 1;
                      uVar5 = iVar17 - (uVar13 + uVar10);
                    } while (iVar11 != 0);
                  }
                  if (2 < ~uVar13 + iVar17) {
                    iVar11 = uVar5 + 4;
                    do {
                      *pbVar8 = (char)((uint)*pbVar8 * iVar18 >> 8) + bVar3;
                      pbVar8[lVar7] = (char)((uint)pbVar8[lVar7] * iVar18 >> 8) + bVar3;
                      pbVar8[lVar7 * 2] = (char)((uint)pbVar8[lVar7 * 2] * iVar18 >> 8) + bVar3;
                      pbVar8[lVar7 * 3] = (char)((uint)pbVar8[lVar7 * 3] * iVar18 >> 8) + bVar3;
                      iVar11 = iVar11 + -4;
                      pbVar8 = pbVar8 + lVar7 * 4;
                    } while (4 < iVar11);
                  }
                  pbVar15 = pbVar15 + lVar21;
                  bVar27 = 1 < iVar19;
                  iVar19 = iVar19 + -1;
                } while (bVar27);
              }
              else {
                if (local_78 == 1) {
                  local_58 = (uint *)(CONCAT44(local_58._4_4_,uVar23) & 0xffffffff00000007);
                  local_60 = CONCAT44(local_60._4_4_,-(uVar23 & 7));
                  do {
                    memset(pbVar15,param_5 >> 0x18,(ulong)uVar23);
                    while( true ) {
                      if (iVar19 < 2) goto LAB_003b2860;
                      iVar19 = iVar19 + -1;
                      pbVar15 = pbVar15 + local_7c;
                      if (local_78 == 1) break;
                      lVar7 = (long)local_78;
                      pbVar8 = pbVar15;
                      uVar10 = uVar23;
                      if ((int)local_58 != 0) {
                        iVar11 = (int)local_60;
                        do {
                          *pbVar8 = bVar3;
                          pbVar8 = pbVar8 + lVar7;
                          iVar11 = iVar11 + 1;
                        } while (iVar11 != 0);
                        uVar10 = iVar17 - (uVar13 + (uVar23 & 7));
                      }
                      if (6 < ~uVar13 + iVar17) {
                        iVar11 = uVar10 + 8;
                        do {
                          *pbVar8 = bVar3;
                          pbVar8[lVar7] = bVar3;
                          pbVar8[lVar7 * 2] = bVar3;
                          pbVar8[lVar7 * 3] = bVar3;
                          pbVar8[lVar7 * 4] = bVar3;
                          pbVar8[lVar7 * 5] = bVar3;
                          pbVar8[lVar7 * 6] = bVar3;
                          pbVar8[lVar7 * 7] = bVar3;
                          pbVar8 = pbVar8 + lVar7 * 8;
                          iVar11 = iVar11 + -8;
                        } while (8 < iVar11);
                      }
                    }
                  } while( true );
                }
                uVar10 = uVar23 & 7;
                do {
                  uVar5 = uVar23;
                  pbVar8 = pbVar15;
                  if (uVar10 != 0) {
                    iVar11 = -uVar10;
                    do {
                      *pbVar8 = bVar3;
                      pbVar8 = pbVar8 + lVar7;
                      iVar11 = iVar11 + 1;
                      uVar5 = iVar17 - (uVar13 + uVar10);
                    } while (iVar11 != 0);
                  }
                  if (6 < ~uVar13 + iVar17) {
                    iVar11 = uVar5 + 8;
                    do {
                      *pbVar8 = bVar3;
                      pbVar8[lVar7] = bVar3;
                      pbVar8[lVar7 * 2] = bVar3;
                      pbVar8[lVar7 * 3] = bVar3;
                      pbVar8[lVar7 * 4] = bVar3;
                      pbVar8[lVar7 * 5] = bVar3;
                      pbVar8[lVar7 * 6] = bVar3;
                      pbVar8[lVar7 * 7] = bVar3;
                      pbVar8 = pbVar8 + lVar7 * 8;
                      iVar11 = iVar11 + -8;
                    } while (8 < iVar11);
                  }
                  pbVar15 = pbVar15 + lVar21;
                  bVar27 = 1 < iVar19;
                  iVar19 = iVar19 + -1;
                } while (bVar27);
              }
            }
          }
LAB_003b2860:
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar20);
      }
    }
    else if (iVar18 != 0) {
      do {
        uVar23 = *puVar6;
        uVar10 = puVar6[1];
        uVar13 = uVar23;
        if ((int)uVar23 < (int)uVar2) {
          uVar13 = uVar2;
        }
        uVar5 = uVar10;
        if ((int)uVar10 < (int)uVar22) {
          uVar5 = uVar22;
        }
        iVar18 = uVar23 + puVar6[2];
        if ((int)(uVar2 + iVar25) < (int)(uVar23 + puVar6[2])) {
          iVar18 = uVar2 + iVar25;
        }
        uVar23 = iVar18 - uVar13;
        if (-1 < (int)uVar23) {
          iVar17 = uVar10 + puVar6[3];
          if ((int)(iVar26 + uVar22) < (int)(uVar10 + puVar6[3])) {
            iVar17 = iVar26 + uVar22;
          }
          iVar17 = iVar17 - uVar5;
          if (((-1 < iVar17) && (0 < (int)uVar23)) && (iVar17 != 0)) {
            lVar7 = (long)local_78;
            pbVar15 = (byte *)((long)(int)(local_78 * uVar13) +
                              (long)(int)uVar5 * (long)local_7c + local_90[0]);
            if (lVar7 == 1) {
              do {
                memset(pbVar15,param_5 >> 0x18,(ulong)uVar23);
                while( true ) {
                  if (iVar17 < 2) goto LAB_003b24b0;
                  iVar17 = iVar17 + -1;
                  pbVar15 = pbVar15 + local_7c;
                  if (local_78 == 1) break;
                  lVar7 = (long)local_78;
                  pbVar8 = pbVar15;
                  uVar10 = uVar23;
                  if ((uVar23 & 7) != 0) {
                    iVar19 = -(uVar23 & 7);
                    do {
                      *pbVar8 = bVar3;
                      pbVar8 = pbVar8 + lVar7;
                      iVar19 = iVar19 + 1;
                    } while (iVar19 != 0);
                    uVar10 = iVar18 - (uVar13 + (uVar23 & 7));
                  }
                  if (6 < ~uVar13 + iVar18) {
                    iVar19 = uVar10 + 8;
                    do {
                      *pbVar8 = bVar3;
                      pbVar8[lVar7] = bVar3;
                      pbVar8[lVar7 * 2] = bVar3;
                      pbVar8[lVar7 * 3] = bVar3;
                      pbVar8[lVar7 * 4] = bVar3;
                      pbVar8[lVar7 * 5] = bVar3;
                      pbVar8[lVar7 * 6] = bVar3;
                      pbVar8[lVar7 * 7] = bVar3;
                      pbVar8 = pbVar8 + lVar7 * 8;
                      iVar19 = iVar19 + -8;
                    } while (8 < iVar19);
                  }
                }
              } while( true );
            }
            uVar10 = uVar23 & 7;
            do {
              uVar5 = uVar23;
              pbVar8 = pbVar15;
              if (uVar10 != 0) {
                iVar19 = -uVar10;
                do {
                  *pbVar8 = bVar3;
                  pbVar8 = pbVar8 + lVar7;
                  iVar19 = iVar19 + 1;
                  uVar5 = iVar18 - (uVar13 + uVar10);
                } while (iVar19 != 0);
              }
              if (6 < ~uVar13 + iVar18) {
                iVar19 = uVar5 + 8;
                do {
                  *pbVar8 = bVar3;
                  pbVar8[lVar7] = bVar3;
                  pbVar8[lVar7 * 2] = bVar3;
                  pbVar8[lVar7 * 3] = bVar3;
                  pbVar8[lVar7 * 4] = bVar3;
                  pbVar8[lVar7 * 5] = bVar3;
                  pbVar8[lVar7 * 6] = bVar3;
                  pbVar8[lVar7 * 7] = bVar3;
                  pbVar8 = pbVar8 + lVar7 * 8;
                  iVar19 = iVar19 + -8;
                } while (8 < iVar19);
              }
              pbVar15 = pbVar15 + local_7c;
              bVar27 = 1 < iVar17;
              iVar17 = iVar17 + -1;
            } while (bVar27);
          }
        }
LAB_003b24b0:
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar20);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  return;
}


