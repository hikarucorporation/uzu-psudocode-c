// Function : renderImageUntransformed
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b86c0
// Prototype: byte * renderImageUntransformed(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, long * param_2, byte * param_4_00, int param_4, int param_5, byte param_6)
// Body     : 003b86c0 - 003bb6ae


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageUntransformed(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Image const&, int, int, int, bool) const */

byte * __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageUntransformed
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          long param_1,long *param_2,byte *param_4_00,int param_4,int param_5,byte param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint *__src;
  uint3 *__src_00;
  undefined2 *__src_01;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  byte *pbVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  int local_c8;
  long local_a0 [2];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  long *local_78;
  long local_70;
  long local_68 [2];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  long *local_40;
  long local_38;
  
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 == (long *)0x0) {
    local_4c = 0;
    local_48 = 0;
  }
  else {
    local_4c = (undefined4)plVar3[2];
    local_48 = *(undefined4 *)((long)plVar3 + 0x14);
  }
  local_40 = (long *)0x0;
                    /* try { // try from 003b871f to 003b8733 has its CatchHandler @ 003bb6e0 */
  (**(code **)(*plVar3 + 0x38))(plVar3,local_68,0,0,2);
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    local_84 = 0;
    local_80 = 0;
  }
  else {
    local_84 = (int)plVar3[2];
    local_80 = *(int *)((long)plVar3 + 0x14);
  }
  local_78 = (long *)0x0;
                    /* try { // try from 003b8766 to 003b8774 has its CatchHandler @ 003bb6af */
  uVar7 = (**(code **)(*plVar3 + 0x38))(plVar3,local_a0,0,0,0);
  pbVar8 = (byte *)CONCAT71((int7)((ulong)uVar7 >> 8),param_6);
  local_c8 = (int)param_4_00;
  if (local_58 == 1) {
    if (local_90 == 1) {
      iVar34 = local_c8 + 1;
      if (param_6 == 0) {
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar19 = *piVar11;
              iVar12 = piVar11[2];
              iVar35 = piVar11[1];
              lVar25 = (long)iVar35;
              iVar36 = iVar19 - param_4;
              iVar28 = iVar12 + 1;
              lVar37 = lVar25 - param_5;
              do {
                lVar31 = local_54 * lVar25;
                lVar23 = (long)local_50;
                lVar26 = lVar23 * iVar19;
                lVar29 = (long)local_88;
                if (local_c8 < 0xfd) {
                  pbVar18 = (byte *)(iVar36 * lVar29 + local_8c * lVar37 + local_a0[0] + 2);
                  pbVar22 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                  iVar24 = iVar28;
                  do {
                    uVar5 = (pbVar18[-1] | 0xff0000) * iVar34;
                    iVar32 = 0x100 - (uVar5 >> 0x18);
                    iVar13 = ((uint)pbVar22[-1] * iVar32 >> 8) + (uVar5 >> 8 & 0xff00ff);
                    uVar5 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * iVar32 >> 8 & 0xff00ff)
                            + (((uint)*pbVar18 << 0x10 | (uint)pbVar18[-2]) * iVar34 >> 8 & 0xff00ff
                              );
                    uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                    pbVar22[-1] = -(char)((uint)iVar13 >> 8) | (byte)iVar13;
                    pbVar8 = (byte *)(ulong)(uVar5 >> 0x10);
                    *pbVar22 = (byte)(uVar5 >> 0x10);
                    pbVar22[-2] = (byte)uVar5;
                    pbVar18 = pbVar18 + lVar29;
                    iVar24 = iVar24 + -1;
                    pbVar22 = pbVar22 + lVar23;
                  } while (1 < iVar24);
                }
                else {
                  __src_01 = (undefined2 *)
                             ((long)(local_88 * iVar36) +
                             local_a0[0] + (lVar25 - param_5) * (long)local_8c);
                  if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                    pbVar8 = memcpy((void *)(local_68[0] + lVar31 + lVar26),__src_01,
                                    (long)(local_50 * iVar12));
                  }
                  else {
                    pbVar18 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                    iVar24 = iVar28;
                    do {
                      bVar4 = *(byte *)(__src_01 + 1);
                      pbVar8 = (byte *)(ulong)bVar4;
                      uVar2 = *__src_01;
                      pbVar18[-2] = (byte)uVar2;
                      pbVar18[-1] = (byte)((ushort)uVar2 >> 8);
                      *pbVar18 = bVar4;
                      __src_01 = (undefined2 *)((long)__src_01 + lVar29);
                      iVar24 = iVar24 + -1;
                      pbVar18 = pbVar18 + lVar23;
                    } while (1 < iVar24);
                  }
                }
                lVar25 = lVar25 + 1;
                lVar37 = lVar37 + 1;
              } while (lVar25 < (int)(uVar6 + iVar35));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
      else {
        iVar19 = param_4 % local_84;
        local_70 = CONCAT44(local_70._4_4_,iVar19);
        iVar12 = local_84;
        if (iVar19 < 0) {
          iVar12 = 0;
        }
        pbVar8 = (byte *)((long)param_5 / (long)local_80 & 0xffffffff);
        iVar35 = 0;
        if (-1 < param_5 % local_80) {
          iVar35 = local_80;
        }
        if ((long)*(int *)(this + 0x1c) != 0) {
          iVar19 = iVar19 - iVar12;
          local_70 = CONCAT44(local_70._4_4_,iVar19);
          iVar35 = param_5 % local_80 - iVar35;
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          lVar37 = (long)local_54;
          lVar25 = (long)local_50;
          if (local_c8 < 0xfd) {
            local_38 = local_68[0] + 2;
            do {
              uVar6 = piVar11[3];
              pbVar8 = (byte *)(ulong)uVar6;
              if (0 < (int)uVar6) {
                iVar12 = *piVar11;
                iVar36 = piVar11[2];
                iVar28 = piVar11[1];
                lVar31 = (long)iVar28;
                pbVar18 = (byte *)(lVar37 * lVar31 + iVar12 * lVar25 + local_38);
                do {
                  lVar26 = (long)(((int)lVar31 - iVar35) % local_80) * (long)local_8c + local_a0[0];
                  pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar19);
                  pbVar22 = pbVar18;
                  iVar24 = iVar36 + 1;
                  do {
                    lVar23 = (long)(((int)pbVar8 % local_84) * local_88);
                    uVar5 = (*(byte *)(lVar26 + 1 + lVar23) | 0xff0000) * iVar34;
                    iVar13 = 0x100 - (uVar5 >> 0x18);
                    iVar32 = ((uint)pbVar22[-1] * iVar13 >> 8) + (uVar5 >> 8 & 0xff00ff);
                    uVar5 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * iVar13 >> 8 & 0xff00ff)
                            + (((uint)*(byte *)(lVar26 + 2 + lVar23) << 0x10 |
                               (uint)*(byte *)(lVar26 + lVar23)) * iVar34 >> 8 & 0xff00ff);
                    uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                    pbVar22[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                    *pbVar22 = (byte)(uVar5 >> 0x10);
                    pbVar22[-2] = (byte)uVar5;
                    pbVar22 = pbVar22 + lVar25;
                    iVar24 = iVar24 + -1;
                    pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                  } while (1 < iVar24);
                  lVar31 = lVar31 + 1;
                  pbVar18 = pbVar18 + lVar37;
                } while (lVar31 < (int)(uVar6 + iVar28));
              }
              piVar11 = piVar11 + 4;
            } while (piVar11 != piVar9);
          }
          else {
            local_38 = local_68[0] + 2;
            do {
              uVar6 = piVar11[3];
              pbVar8 = (byte *)(ulong)uVar6;
              if (0 < (int)uVar6) {
                iVar34 = *piVar11;
                iVar12 = piVar11[2];
                iVar36 = piVar11[1];
                lVar31 = (long)iVar36;
                puVar14 = (undefined1 *)(lVar37 * lVar31 + (long)(local_50 * iVar34) + local_38);
                do {
                  lVar26 = (long)(((int)lVar31 - iVar35) % local_80) * (long)local_8c + local_a0[0];
                  pbVar8 = (byte *)(ulong)(uint)(iVar34 - iVar19);
                  puVar20 = puVar14;
                  iVar28 = iVar12 + 1;
                  do {
                    lVar23 = (long)(((int)pbVar8 % local_84) * local_88);
                    uVar1 = *(undefined1 *)(lVar26 + 2 + lVar23);
                    uVar2 = *(undefined2 *)(lVar26 + lVar23);
                    puVar20[-2] = (char)uVar2;
                    puVar20[-1] = (char)((ushort)uVar2 >> 8);
                    *puVar20 = uVar1;
                    puVar20 = puVar20 + lVar25;
                    iVar28 = iVar28 + -1;
                    pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                  } while (1 < iVar28);
                  lVar31 = lVar31 + 1;
                  puVar14 = puVar14 + lVar37;
                } while (lVar31 < (int)(uVar6 + iVar36));
              }
              piVar11 = piVar11 + 4;
            } while (piVar11 != piVar9);
          }
        }
      }
    }
    else if (local_90 == 2) {
      iVar34 = local_c8 + 1;
      if (param_6 == 0) {
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar19 = *piVar11;
              iVar12 = piVar11[2];
              iVar35 = piVar11[1];
              lVar25 = (long)iVar35;
              iVar36 = iVar19 - param_4;
              iVar28 = iVar12 + 1;
              lVar37 = lVar25 - param_5;
              do {
                lVar31 = local_54 * lVar25;
                lVar23 = (long)local_50;
                lVar26 = lVar23 * iVar19;
                lVar29 = (long)local_88;
                if (local_c8 < 0xfd) {
                  puVar21 = (uint *)(local_a0[0] + iVar36 * lVar29 + local_8c * lVar37);
                  pbVar18 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                  iVar24 = iVar28;
                  do {
                    uVar5 = (*puVar21 >> 8 & 0xff00ff) * iVar34;
                    iVar13 = 0x100 - (uVar5 >> 0x18);
                    iVar32 = ((uint)pbVar18[-1] * iVar13 >> 8) + (uVar5 >> 8 & 0xff00ff);
                    uVar5 = (((uint)*pbVar18 << 0x10 | (uint)pbVar18[-2]) * iVar13 >> 8 & 0xff00ff)
                            + ((*puVar21 & 0xff00ff) * iVar34 >> 8 & 0xff00ff);
                    uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                    pbVar18[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                    pbVar8 = (byte *)(ulong)(uVar5 >> 0x10);
                    *pbVar18 = (byte)(uVar5 >> 0x10);
                    pbVar18[-2] = (byte)uVar5;
                    puVar21 = (uint *)((long)puVar21 + lVar29);
                    iVar24 = iVar24 + -1;
                    pbVar18 = pbVar18 + lVar23;
                  } while (1 < iVar24);
                }
                else {
                  puVar21 = (uint *)((long)(local_88 * iVar36) +
                                    local_a0[0] + (lVar25 - param_5) * (long)local_8c);
                  if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                    pbVar8 = memcpy((void *)(local_68[0] + lVar31 + lVar26),puVar21,
                                    (long)(local_50 * iVar12));
                  }
                  else {
                    pbVar18 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                    iVar24 = iVar28;
                    do {
                      iVar32 = 0x100 - (uint)*(byte *)((long)puVar21 + 3);
                      uVar5 = (((uint)*pbVar18 << 0x10 | (uint)pbVar18[-2]) * iVar32 >> 8 & 0xff00ff
                              ) + (*puVar21 & 0xff00ff);
                      uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                      iVar32 = ((uint)pbVar18[-1] * iVar32 >> 8) + (*puVar21 >> 8 & 0xff00ff);
                      pbVar18[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                      pbVar8 = (byte *)(ulong)(uVar5 >> 0x10);
                      *pbVar18 = (byte)(uVar5 >> 0x10);
                      pbVar18[-2] = (byte)uVar5;
                      puVar21 = (uint *)((long)puVar21 + lVar29);
                      iVar24 = iVar24 + -1;
                      pbVar18 = pbVar18 + lVar23;
                    } while (1 < iVar24);
                  }
                }
                lVar25 = lVar25 + 1;
                lVar37 = lVar37 + 1;
              } while (lVar25 < (int)(uVar6 + iVar35));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
      else {
        iVar19 = local_84;
        if (param_4 % local_84 < 0) {
          iVar19 = 0;
        }
        pbVar8 = (byte *)((long)param_5 / (long)local_80 & 0xffffffff);
        iVar12 = 0;
        if (-1 < param_5 % local_80) {
          iVar12 = local_80;
        }
        if ((long)*(int *)(this + 0x1c) != 0) {
          iVar19 = param_4 % local_84 - iVar19;
          iVar12 = param_5 % local_80 - iVar12;
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          lVar37 = (long)local_54;
          lVar25 = (long)local_50;
          if (local_c8 < 0xfd) {
            local_70 = local_68[0] + 2;
            do {
              uVar6 = piVar11[3];
              pbVar8 = (byte *)(ulong)uVar6;
              if (0 < (int)uVar6) {
                iVar35 = *piVar11;
                iVar36 = piVar11[2];
                iVar28 = piVar11[1];
                lVar31 = (long)iVar28;
                pbVar18 = (byte *)(lVar37 * lVar31 + iVar35 * lVar25 + local_70);
                do {
                  pbVar8 = (byte *)(ulong)(uint)(iVar35 - iVar19);
                  pbVar22 = pbVar18;
                  iVar24 = iVar36 + 1;
                  do {
                    uVar5 = *(uint *)((long)(((int)lVar31 - iVar12) % local_80) * (long)local_8c +
                                      local_a0[0] + (long)(((int)pbVar8 % local_84) * local_88));
                    uVar16 = (uVar5 >> 8 & 0xff00ff) * iVar34;
                    iVar13 = 0x100 - (uVar16 >> 0x18);
                    iVar32 = ((uint)pbVar22[-1] * iVar13 >> 8) + (uVar16 >> 8 & 0xff00ff);
                    uVar5 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * iVar13 >> 8 & 0xff00ff)
                            + ((uVar5 & 0xff00ff) * iVar34 >> 8 & 0xff00ff);
                    uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                    pbVar22[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                    *pbVar22 = (byte)(uVar5 >> 0x10);
                    pbVar22[-2] = (byte)uVar5;
                    pbVar22 = pbVar22 + lVar25;
                    iVar24 = iVar24 + -1;
                    pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                  } while (1 < iVar24);
                  lVar31 = lVar31 + 1;
                  pbVar18 = pbVar18 + lVar37;
                } while (lVar31 < (int)(uVar6 + iVar28));
              }
              piVar11 = piVar11 + 4;
            } while (piVar11 != piVar9);
          }
          else {
            local_70 = local_68[0] + 2;
            do {
              uVar6 = piVar11[3];
              pbVar8 = (byte *)(ulong)uVar6;
              if (0 < (int)uVar6) {
                iVar34 = *piVar11;
                iVar35 = piVar11[2];
                iVar36 = piVar11[1];
                lVar31 = (long)iVar36;
                pbVar18 = (byte *)(lVar37 * lVar31 + (long)(local_50 * iVar34) + local_70);
                do {
                  lVar26 = (long)(((int)lVar31 - iVar12) % local_80) * (long)local_8c + local_a0[0];
                  pbVar8 = (byte *)(ulong)(uint)(iVar34 - iVar19);
                  pbVar22 = pbVar18;
                  iVar28 = iVar35 + 1;
                  do {
                    lVar23 = (long)(((int)pbVar8 % local_84) * local_88);
                    iVar24 = 0x100 - (uint)*(byte *)(lVar26 + 3 + lVar23);
                    uVar5 = *(uint *)(lVar26 + lVar23);
                    uVar16 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * iVar24 >> 8 & 0xff00ff)
                             + (uVar5 & 0xff00ff);
                    uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                    iVar24 = ((uint)pbVar22[-1] * iVar24 >> 8) + (uVar5 >> 8 & 0xff00ff);
                    pbVar22[-1] = -(char)((uint)iVar24 >> 8) | (byte)iVar24;
                    *pbVar22 = (byte)(uVar16 >> 0x10);
                    pbVar22[-2] = (byte)uVar16;
                    pbVar22 = pbVar22 + lVar25;
                    iVar28 = iVar28 + -1;
                    pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                  } while (1 < iVar28);
                  lVar31 = lVar31 + 1;
                  pbVar18 = pbVar18 + lVar37;
                } while (lVar31 < (int)(uVar6 + iVar36));
              }
              piVar11 = piVar11 + 4;
            } while (piVar11 != piVar9);
          }
        }
      }
    }
    else if (param_6 == 0) {
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar11 = *(int **)(this + 0x10);
        piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
        local_70 = -(long)param_5;
        do {
          uVar6 = piVar11[3];
          pbVar8 = (byte *)(ulong)uVar6;
          if (0 < (int)uVar6) {
            iVar34 = *piVar11;
            iVar19 = piVar11[2];
            iVar12 = piVar11[1];
            lVar25 = (long)iVar12;
            iVar35 = iVar34 - param_4;
            iVar36 = iVar19 + 1;
            lVar37 = local_70 + lVar25;
            do {
              lVar31 = local_54 * lVar25;
              lVar23 = (long)local_8c;
              lVar29 = (long)local_50;
              lVar26 = lVar29 * iVar34;
              lVar33 = (long)local_88;
              if (local_c8 < 0xfd) {
                pbVar22 = (byte *)(local_a0[0] + iVar35 * lVar33 + lVar23 * lVar37);
                pbVar18 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                iVar28 = iVar36;
                do {
                  uVar5 = ((uint)*pbVar22 << 0x10 | (uint)*pbVar22) * (local_c8 + 1);
                  uVar16 = uVar5 >> 8 & 0xff00ff;
                  iVar24 = 0x100 - (uVar5 >> 0x18);
                  iVar32 = ((uint)pbVar18[-1] * iVar24 >> 8) + uVar16;
                  uVar16 = (((uint)*pbVar18 << 0x10 | (uint)pbVar18[-2]) * iVar24 >> 8 & 0xff00ff) +
                           uVar16;
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                  pbVar18[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                  pbVar8 = (byte *)(ulong)(uVar16 >> 0x10);
                  *pbVar18 = (byte)(uVar16 >> 0x10);
                  pbVar18[-2] = (byte)uVar16;
                  pbVar22 = pbVar22 + lVar33;
                  iVar28 = iVar28 + -1;
                  pbVar18 = pbVar18 + lVar29;
                } while (1 < iVar28);
              }
              else {
                lVar27 = (long)(local_88 * iVar35);
                if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                  pbVar8 = memcpy((void *)(local_68[0] + lVar31 + lVar26),
                                  (void *)(local_a0[0] + (lVar25 - param_5) * lVar23 + lVar27),
                                  (long)(local_50 * iVar19));
                }
                else {
                  pbVar22 = (byte *)(local_a0[0] + lVar23 * lVar37 + lVar27);
                  pbVar18 = (byte *)(local_68[0] + lVar31 + lVar26 + 2);
                  iVar28 = iVar36;
                  do {
                    bVar4 = *pbVar22;
                    uVar5 = (uint)bVar4 << 0x10 | (uint)bVar4;
                    uVar16 = (((uint)*pbVar18 << 0x10 | (uint)pbVar18[-2]) * (0x100 - (uint)bVar4)
                              >> 8 & 0xff00ff) + uVar5;
                    uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                    iVar24 = ((uint)pbVar18[-1] * (0x100 - (uint)bVar4) >> 8) + uVar5;
                    pbVar18[-1] = -(char)((uint)iVar24 >> 8) | (byte)iVar24;
                    pbVar8 = (byte *)(ulong)(uVar16 >> 0x10);
                    *pbVar18 = (byte)(uVar16 >> 0x10);
                    pbVar18[-2] = (byte)uVar16;
                    iVar28 = iVar28 + -1;
                    pbVar22 = pbVar22 + lVar33;
                    pbVar18 = pbVar18 + lVar29;
                  } while (1 < iVar28);
                }
              }
              lVar25 = lVar25 + 1;
              lVar37 = lVar37 + 1;
            } while (lVar25 < (int)(uVar6 + iVar12));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
    else {
      iVar34 = local_84;
      if (param_4 % local_84 < 0) {
        iVar34 = 0;
      }
      pbVar8 = (byte *)((long)param_5 / (long)local_80 & 0xffffffff);
      iVar19 = 0;
      if (-1 < param_5 % local_80) {
        iVar19 = local_80;
      }
      if ((long)*(int *)(this + 0x1c) != 0) {
        iVar34 = param_4 % local_84 - iVar34;
        iVar19 = param_5 % local_80 - iVar19;
        piVar11 = *(int **)(this + 0x10);
        piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
        lVar37 = (long)local_54;
        lVar25 = (long)local_50;
        if (local_c8 < 0xfd) {
          local_70 = local_68[0] + 2;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar12 = *piVar11;
              iVar35 = piVar11[2];
              iVar36 = piVar11[1];
              lVar31 = (long)iVar36;
              pbVar18 = (byte *)(lVar37 * lVar31 + iVar12 * lVar25 + local_70);
              do {
                pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
                pbVar22 = pbVar18;
                iVar28 = iVar35 + 1;
                do {
                  bVar4 = *(byte *)((long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c +
                                    local_a0[0] + (long)(((int)pbVar8 % local_84) * local_88));
                  uVar16 = ((uint)bVar4 << 0x10 | (uint)bVar4) * (local_c8 + 1);
                  uVar5 = uVar16 >> 8 & 0xff00ff;
                  iVar24 = 0x100 - (uVar16 >> 0x18);
                  iVar32 = ((uint)pbVar22[-1] * iVar24 >> 8) + uVar5;
                  uVar5 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * iVar24 >> 8 & 0xff00ff) +
                          uVar5;
                  uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                  pbVar22[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                  *pbVar22 = (byte)(uVar5 >> 0x10);
                  pbVar22[-2] = (byte)uVar5;
                  pbVar22 = pbVar22 + lVar25;
                  iVar28 = iVar28 + -1;
                  pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                } while (1 < iVar28);
                lVar31 = lVar31 + 1;
                pbVar18 = pbVar18 + lVar37;
              } while (lVar31 < (int)(uVar6 + iVar36));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
        else {
          local_70 = local_68[0] + 2;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar12 = *piVar11;
              iVar35 = piVar11[2];
              iVar36 = piVar11[1];
              lVar31 = (long)iVar36;
              pbVar18 = (byte *)(lVar37 * lVar31 + (long)(local_50 * iVar12) + local_70);
              do {
                pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
                pbVar22 = pbVar18;
                iVar28 = iVar35 + 1;
                do {
                  bVar4 = *(byte *)((long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c +
                                    local_a0[0] + (long)(((int)pbVar8 % local_84) * local_88));
                  uVar5 = (uint)bVar4 << 0x10 | (uint)bVar4;
                  uVar16 = (((uint)*pbVar22 << 0x10 | (uint)pbVar22[-2]) * (0x100 - (uint)bVar4) >>
                            8 & 0xff00ff) + uVar5;
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                  iVar24 = ((uint)pbVar22[-1] * (0x100 - (uint)bVar4) >> 8) + uVar5;
                  pbVar22[-1] = -(char)((uint)iVar24 >> 8) | (byte)iVar24;
                  *pbVar22 = (byte)(uVar16 >> 0x10);
                  pbVar22[-2] = (byte)uVar16;
                  pbVar22 = pbVar22 + lVar25;
                  iVar28 = iVar28 + -1;
                  pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                } while (1 < iVar28);
                lVar31 = lVar31 + 1;
                pbVar18 = pbVar18 + lVar37;
              } while (lVar31 < (int)(uVar6 + iVar36));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
    }
  }
  else if (local_58 == 2) {
    if (local_90 == 1) {
      iVar34 = local_c8 + 1;
      if (param_6 == 0) {
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar19 = *piVar11;
              iVar12 = piVar11[2];
              iVar35 = piVar11[1];
              lVar37 = (long)iVar35;
              iVar36 = iVar19 - param_4;
              do {
                lVar25 = (long)local_8c * (lVar37 - param_5) + local_a0[0];
                lVar31 = (long)local_50;
                puVar21 = (uint *)(lVar31 * iVar19 + local_54 * lVar37 + local_68[0]);
                if (local_c8 < 0xfd) {
                  iVar28 = iVar36;
                  iVar24 = iVar12;
                  while( true ) {
                    lVar26 = (long)iVar28 * (long)local_88;
                    uVar5 = (*(byte *)(lVar25 + 1 + lVar26) | 0xff0000) * iVar34;
                    iVar32 = 0x100 - (uVar5 >> 0x18);
                    uVar16 = ((*puVar21 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) +
                             (((uint)*(byte *)(lVar25 + 2 + lVar26) << 0x10 |
                              (uint)*(byte *)(lVar25 + lVar26)) * iVar34 >> 8 & 0xff00ff);
                    uVar17 = ((*puVar21 >> 8 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) +
                             (uVar5 >> 8 & 0xff00ff);
                    uVar5 = uVar17 >> 8 & 0x10001;
                    pbVar8 = (byte *)(ulong)uVar5;
                    *puVar21 = ((0x100 - uVar5 | uVar17) & 0xff00ff) << 8 |
                               (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
                    if (iVar24 < 2) break;
                    iVar24 = iVar24 + -1;
                    puVar21 = (uint *)((long)puVar21 + lVar31);
                    iVar28 = iVar28 + 1;
                  }
                }
                else {
                  __src_00 = (uint3 *)(lVar25 + local_88 * iVar36);
                  if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                    pbVar8 = memcpy(puVar21,__src_00,(long)(local_50 * iVar12));
                  }
                  else {
                    iVar28 = iVar12 + 1;
                    do {
                      pbVar8 = (byte *)(ulong)(ushort)*__src_00;
                      *puVar21 = *__src_00 | 0xff000000;
                      puVar21 = (uint *)((long)puVar21 + lVar31);
                      __src_00 = (uint3 *)((long)__src_00 + (long)local_88);
                      iVar28 = iVar28 + -1;
                    } while (1 < iVar28);
                  }
                }
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)(uVar6 + iVar35));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
      else {
        iVar19 = local_84;
        if (param_4 % local_84 < 0) {
          iVar19 = 0;
        }
        iVar12 = local_80;
        if (param_5 % local_80 < 0) {
          iVar12 = 0;
        }
        pbVar8 = (byte *)0x0;
        if ((long)*(int *)(this + 0x1c) != 0) {
          iVar19 = iVar19 - param_4 % local_84;
          pbVar8 = *(byte **)(this + 0x10);
          pbVar18 = pbVar8 + (long)*(int *)(this + 0x1c) * 0x10;
          do {
            iVar35 = *(int *)(pbVar8 + 0xc);
            if (0 < iVar35) {
              iVar36 = *(int *)pbVar8;
              iVar28 = *(int *)(pbVar8 + 8);
              iVar24 = *(int *)(pbVar8 + 4);
              lVar37 = (long)iVar24;
              iVar32 = iVar19 + iVar36;
              do {
                lVar25 = (long)local_8c *
                         (long)(((iVar12 - param_5 % local_80) + (int)lVar37) % local_80) +
                         local_a0[0];
                lVar31 = (long)local_50;
                puVar21 = (uint *)(local_68[0] + local_54 * lVar37 + lVar31 * iVar36);
                if (local_c8 < 0xfd) {
                  iVar13 = iVar28;
                  iVar10 = iVar32;
                  while( true ) {
                    lVar26 = (long)(iVar10 % local_84) * (long)local_88;
                    uVar6 = (*(byte *)(lVar25 + 1 + lVar26) | 0xff0000) * iVar34;
                    iVar30 = 0x100 - (uVar6 >> 0x18);
                    uVar5 = ((*puVar21 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) +
                            (((uint)*(byte *)(lVar25 + 2 + lVar26) << 0x10 |
                             (uint)*(byte *)(lVar25 + lVar26)) * iVar34 >> 8 & 0xff00ff);
                    uVar6 = ((*puVar21 >> 8 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) +
                            (uVar6 >> 8 & 0xff00ff);
                    *puVar21 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                               (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff;
                    if (iVar13 < 2) break;
                    iVar13 = iVar13 + -1;
                    puVar21 = (uint *)((long)puVar21 + lVar31);
                    iVar10 = iVar10 + 1;
                  }
                }
                else {
                  lVar26 = (long)(iVar32 % local_84) * (long)local_88;
                  *puVar21 = CONCAT12(*(undefined1 *)(lVar25 + 2 + lVar26),
                                      *(undefined2 *)(lVar25 + lVar26)) | 0xff000000;
                  if (1 < iVar28) {
                    puVar21 = (uint *)(local_68[0] + local_54 * lVar37 + lVar31 + lVar31 * iVar36);
                    iVar13 = iVar28 + 1;
                    iVar10 = iVar19 + 1 + iVar36;
                    do {
                      lVar26 = (long)(iVar10 % local_84) * (long)local_88;
                      *puVar21 = CONCAT12(*(undefined1 *)(lVar25 + 2 + lVar26),
                                          *(undefined2 *)(lVar25 + lVar26)) | 0xff000000;
                      iVar10 = iVar10 + 1;
                      iVar13 = iVar13 + -1;
                      puVar21 = (uint *)((long)puVar21 + lVar31);
                    } while (2 < iVar13);
                  }
                }
                lVar37 = lVar37 + 1;
              } while (lVar37 < iVar35 + iVar24);
            }
            pbVar8 = pbVar8 + 0x10;
          } while (pbVar8 != pbVar18);
        }
      }
    }
    else if (local_90 == 2) {
      iVar34 = local_c8 + 1;
      if (param_6 == 0) {
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar11 = *(int **)(this + 0x10);
          piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar19 = *piVar11;
              iVar12 = piVar11[2];
              iVar35 = piVar11[1];
              lVar37 = (long)iVar35;
              iVar36 = iVar19 - param_4;
              do {
                lVar25 = (long)local_8c * (lVar37 - param_5) + local_a0[0];
                lVar31 = (long)local_50;
                puVar21 = (uint *)(lVar31 * iVar19 + local_54 * lVar37 + local_68[0]);
                if (local_c8 < 0xfd) {
                  iVar28 = iVar36;
                  iVar24 = iVar12;
                  while( true ) {
                    uVar5 = *(uint *)(lVar25 + (long)iVar28 * (long)local_88);
                    uVar16 = (uVar5 >> 8 & 0xff00ff) * iVar34;
                    iVar32 = 0x100 - (uVar16 >> 0x18);
                    uVar17 = ((*puVar21 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) +
                             ((uVar5 & 0xff00ff) * iVar34 >> 8 & 0xff00ff);
                    uVar16 = ((*puVar21 >> 8 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) +
                             (uVar16 >> 8 & 0xff00ff);
                    uVar5 = uVar16 >> 8 & 0x10001;
                    pbVar8 = (byte *)(ulong)uVar5;
                    *puVar21 = ((0x100 - uVar5 | uVar16) & 0xff00ff) << 8 |
                               (0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff;
                    if (iVar24 < 2) break;
                    iVar24 = iVar24 + -1;
                    puVar21 = (uint *)((long)puVar21 + lVar31);
                    iVar28 = iVar28 + 1;
                  }
                }
                else {
                  __src = (uint *)(lVar25 + local_88 * iVar36);
                  if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                    pbVar8 = memcpy(puVar21,__src,(long)(local_50 * iVar12));
                  }
                  else {
                    iVar28 = iVar12 + 1;
                    do {
                      uVar5 = *__src;
                      iVar24 = 0x100 - (uVar5 >> 0x18);
                      uVar16 = ((*puVar21 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) + (uVar5 & 0xff00ff)
                      ;
                      uVar17 = ((*puVar21 >> 8 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) +
                               (uVar5 >> 8 & 0xff00ff);
                      uVar5 = uVar17 >> 8 & 0x10001;
                      pbVar8 = (byte *)(ulong)uVar5;
                      *puVar21 = ((0x100 - uVar5 | uVar17) & 0xff00ff) << 8 |
                                 (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
                      puVar21 = (uint *)((long)puVar21 + lVar31);
                      __src = (uint *)((long)__src + (long)local_88);
                      iVar28 = iVar28 + -1;
                    } while (1 < iVar28);
                  }
                }
                lVar37 = lVar37 + 1;
              } while (lVar37 < (int)(uVar6 + iVar35));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
      else {
        iVar19 = local_84;
        if (param_4 % local_84 < 0) {
          iVar19 = 0;
        }
        iVar12 = local_80;
        if (param_5 % local_80 < 0) {
          iVar12 = 0;
        }
        pbVar8 = (byte *)0x0;
        if ((long)*(int *)(this + 0x1c) != 0) {
          pbVar8 = *(byte **)(this + 0x10);
          pbVar18 = pbVar8 + (long)*(int *)(this + 0x1c) * 0x10;
          do {
            iVar35 = *(int *)(pbVar8 + 0xc);
            if (0 < iVar35) {
              iVar36 = *(int *)pbVar8;
              iVar28 = *(int *)(pbVar8 + 8);
              iVar24 = *(int *)(pbVar8 + 4);
              lVar37 = (long)iVar24;
              iVar32 = (iVar19 - param_4 % local_84) + iVar36;
              do {
                lVar31 = (long)local_8c *
                         (long)(((iVar12 - param_5 % local_80) + (int)lVar37) % local_80) +
                         local_a0[0];
                lVar25 = (long)local_50;
                puVar21 = (uint *)(lVar25 * iVar36 + local_54 * lVar37 + local_68[0]);
                if (local_c8 < 0xfd) {
                  iVar10 = iVar32;
                  for (iVar13 = iVar28;
                      uVar6 = *(uint *)(lVar31 + (long)(iVar10 % local_84) * (long)local_88),
                      uVar5 = (uVar6 >> 8 & 0xff00ff) * iVar34, iVar30 = 0x100 - (uVar5 >> 0x18),
                      uVar16 = ((*puVar21 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) +
                               ((uVar6 & 0xff00ff) * iVar34 >> 8 & 0xff00ff),
                      uVar6 = ((*puVar21 >> 8 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) +
                              (uVar5 >> 8 & 0xff00ff),
                      *puVar21 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                                 (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff, 1 < iVar13;
                      iVar13 = iVar13 + -1) {
                    puVar21 = (uint *)((long)puVar21 + lVar25);
                    iVar10 = iVar10 + 1;
                  }
                }
                else {
                  iVar13 = iVar28;
                  iVar10 = iVar32;
                  while( true ) {
                    uVar6 = *(uint *)(lVar31 + (long)(iVar10 % local_84) * (long)local_88);
                    iVar30 = 0x100 - (uVar6 >> 0x18);
                    uVar5 = ((*puVar21 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) + (uVar6 & 0xff00ff);
                    uVar6 = ((*puVar21 >> 8 & 0xff00ff) * iVar30 >> 8 & 0xff00ff) +
                            (uVar6 >> 8 & 0xff00ff);
                    *puVar21 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                               (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff;
                    if (iVar13 < 2) break;
                    iVar13 = iVar13 + -1;
                    puVar21 = (uint *)((long)puVar21 + lVar25);
                    iVar10 = iVar10 + 1;
                  }
                }
                lVar37 = lVar37 + 1;
              } while (lVar37 < iVar35 + iVar24);
            }
            pbVar8 = pbVar8 + 0x10;
          } while (pbVar8 != pbVar18);
        }
      }
    }
    else if (param_6 == 0) {
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar11 = *(int **)(this + 0x10);
        piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
        do {
          uVar6 = piVar11[3];
          pbVar8 = (byte *)(ulong)uVar6;
          if (0 < (int)uVar6) {
            iVar34 = *piVar11;
            iVar19 = piVar11[2];
            iVar12 = piVar11[1];
            lVar25 = (long)iVar12;
            iVar35 = iVar34 - param_4;
            lVar37 = lVar25 - param_5;
            do {
              lVar31 = (lVar25 - param_5) * (long)local_8c + local_a0[0];
              lVar26 = (long)local_50;
              puVar21 = (uint *)(lVar26 * iVar34 + local_54 * lVar25 + local_68[0]);
              if (local_c8 < 0xfd) {
                iVar36 = iVar35;
                iVar28 = iVar19;
                while( true ) {
                  bVar4 = *(byte *)(lVar31 + (long)iVar36 * (long)local_88);
                  uVar16 = ((uint)bVar4 << 0x10 | (uint)bVar4) * (local_c8 + 1);
                  uVar5 = uVar16 >> 8 & 0xff00ff;
                  iVar24 = 0x100 - (uVar16 >> 0x18);
                  uVar17 = ((*puVar21 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) + uVar5;
                  uVar5 = ((*puVar21 >> 8 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) + uVar5;
                  uVar16 = uVar5 >> 8 & 0x10001;
                  pbVar8 = (byte *)(ulong)uVar16;
                  *puVar21 = ((0x100 - uVar16 | uVar5) & 0xff00ff) << 8 |
                             (0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff;
                  if (iVar28 < 2) break;
                  iVar28 = iVar28 + -1;
                  puVar21 = (uint *)((long)puVar21 + lVar26);
                  iVar36 = iVar36 + 1;
                }
              }
              else {
                lVar23 = (long)(local_88 * iVar35);
                if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                  pbVar8 = memcpy(puVar21,(void *)(lVar31 + lVar23),(long)(local_50 * iVar19));
                }
                else {
                  pbVar18 = (byte *)(local_a0[0] + local_8c * lVar37 + lVar23);
                  iVar36 = iVar19 + 1;
                  do {
                    bVar4 = *pbVar18;
                    uVar5 = (uint)bVar4 << 0x10 | (uint)bVar4;
                    uVar17 = ((*puVar21 & 0xff00ff) * (0x100 - (uint)bVar4) >> 8 & 0xff00ff) + uVar5
                    ;
                    uVar5 = ((*puVar21 >> 8 & 0xff00ff) * (0x100 - (uint)bVar4) >> 8 & 0xff00ff) +
                            uVar5;
                    uVar16 = uVar5 >> 8 & 0x10001;
                    pbVar8 = (byte *)(ulong)uVar16;
                    *puVar21 = ((0x100 - uVar16 | uVar5) & 0xff00ff) << 8 |
                               (0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff;
                    puVar21 = (uint *)((long)puVar21 + lVar26);
                    iVar36 = iVar36 + -1;
                    pbVar18 = pbVar18 + local_88;
                  } while (1 < iVar36);
                }
              }
              lVar25 = lVar25 + 1;
              lVar37 = lVar37 + 1;
            } while (lVar25 < (int)(uVar6 + iVar12));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
    else {
      iVar34 = local_84;
      if (param_4 % local_84 < 0) {
        iVar34 = 0;
      }
      iVar19 = local_80;
      if (param_5 % local_80 < 0) {
        iVar19 = 0;
      }
      pbVar8 = (byte *)0x0;
      if ((long)*(int *)(this + 0x1c) != 0) {
        pbVar8 = *(byte **)(this + 0x10);
        pbVar18 = pbVar8 + (long)*(int *)(this + 0x1c) * 0x10;
        do {
          iVar12 = *(int *)(pbVar8 + 0xc);
          if (0 < iVar12) {
            iVar35 = *(int *)pbVar8;
            iVar36 = *(int *)(pbVar8 + 8);
            iVar28 = *(int *)(pbVar8 + 4);
            lVar37 = (long)iVar28;
            iVar24 = (iVar34 - param_4 % local_84) + iVar35;
            do {
              lVar25 = (long)local_8c *
                       (long)(((iVar19 - param_5 % local_80) + (int)lVar37) % local_80) +
                       local_a0[0];
              lVar31 = (long)local_50;
              puVar21 = (uint *)(lVar31 * iVar35 + local_54 * lVar37 + local_68[0]);
              if (local_c8 < 0xfd) {
                iVar13 = iVar24;
                for (iVar32 = iVar36;
                    bVar4 = *(byte *)(lVar25 + (long)(iVar13 % local_84) * (long)local_88),
                    uVar5 = ((uint)bVar4 << 0x10 | (uint)bVar4) * (local_c8 + 1),
                    uVar6 = uVar5 >> 8 & 0xff00ff, iVar10 = 0x100 - (uVar5 >> 0x18),
                    uVar5 = ((*puVar21 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar6,
                    uVar6 = ((*puVar21 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar6,
                    *puVar21 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                               (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff, 1 < iVar32;
                    iVar32 = iVar32 + -1) {
                  puVar21 = (uint *)((long)puVar21 + lVar31);
                  iVar13 = iVar13 + 1;
                }
              }
              else {
                iVar32 = iVar36;
                iVar13 = iVar24;
                while( true ) {
                  bVar4 = *(byte *)(lVar25 + (long)(iVar13 % local_84) * (long)local_88);
                  uVar6 = (uint)bVar4 << 0x10 | (uint)bVar4;
                  uVar5 = ((*puVar21 & 0xff00ff) * (0x100 - (uint)bVar4) >> 8 & 0xff00ff) + uVar6;
                  uVar6 = ((*puVar21 >> 8 & 0xff00ff) * (0x100 - (uint)bVar4) >> 8 & 0xff00ff) +
                          uVar6;
                  *puVar21 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                             (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff;
                  if (iVar32 < 2) break;
                  iVar32 = iVar32 + -1;
                  puVar21 = (uint *)((long)puVar21 + lVar31);
                  iVar13 = iVar13 + 1;
                }
              }
              lVar37 = lVar37 + 1;
            } while (lVar37 < iVar12 + iVar28);
          }
          pbVar8 = pbVar8 + 0x10;
        } while (pbVar8 != pbVar18);
      }
    }
  }
  else if (local_90 == 1) {
    piVar11 = *(int **)(this + 0x10);
    iVar34 = *(int *)(this + 0x1c);
    piVar9 = piVar11 + (long)iVar34 * 4;
    if (param_6 == 0) {
      if (iVar34 != 0) {
        uVar6 = local_c8 * 0xff + 0x1fe;
        pbVar8 = param_4_00;
        do {
          if (0 < (long)piVar11[3]) {
            iVar34 = *piVar11;
            iVar19 = piVar11[2];
            lVar37 = (long)piVar11[1];
            lVar25 = piVar11[3] + lVar37;
            if (local_c8 < 0xfd) {
              pbVar18 = (byte *)(lVar37 * local_54 + (long)iVar34 * (long)local_50 + local_68[0]);
              do {
                pbVar8 = (byte *)(ulong)(iVar19 + 1);
                pbVar22 = pbVar18;
                do {
                  *pbVar22 = (char)((uint)*pbVar22 * (0x100 - (uVar6 >> 8)) >> 8) +
                             (char)(uVar6 >> 8);
                  uVar5 = (int)pbVar8 - 1;
                  pbVar8 = (byte *)(ulong)uVar5;
                  pbVar22 = pbVar22 + local_50;
                } while (1 < (int)uVar5);
                lVar37 = lVar37 + 1;
                pbVar18 = pbVar18 + local_54;
              } while (lVar37 < (int)lVar25);
            }
            else {
              do {
                pbVar8 = (byte *)(long)local_50;
                if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                  pbVar8 = memcpy((void *)(local_68[0] + local_54 * lVar37 +
                                          (long)(local_50 * iVar34)),
                                  (void *)((long)(local_88 * (iVar34 - param_4)) +
                                          (long)local_8c * (lVar37 - param_5) + local_a0[0]),
                                  (long)(local_50 * iVar19));
                }
                else {
                  puVar14 = (undefined1 *)
                            (local_68[0] + local_54 * lVar37 + (long)(local_50 * iVar34));
                  iVar12 = iVar19 + 1;
                  do {
                    *puVar14 = 0xff;
                    iVar12 = iVar12 + -1;
                    puVar14 = puVar14 + (long)pbVar8;
                  } while (1 < iVar12);
                }
                lVar37 = lVar37 + 1;
              } while (lVar37 < lVar25);
            }
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
    else if (iVar34 != 0) {
      lVar25 = (long)local_54;
      lVar37 = (long)local_50;
      pbVar8 = param_4_00;
      if (local_c8 < 0xfd) {
        uVar6 = local_c8 * 0xff + 0x1fe;
        do {
          uVar5 = piVar11[3];
          pbVar8 = (byte *)(ulong)uVar5;
          if (0 < (int)uVar5) {
            iVar34 = piVar11[2];
            iVar19 = piVar11[1];
            lVar31 = (long)iVar19;
            pbVar8 = (byte *)(lVar25 * lVar31 + *piVar11 * lVar37 + local_68[0]);
            do {
              pbVar18 = pbVar8;
              iVar12 = iVar34 + 1;
              do {
                *pbVar18 = (char)((uint)*pbVar18 * (0x100 - (uVar6 >> 8)) >> 8) + (char)(uVar6 >> 8)
                ;
                pbVar18 = pbVar18 + lVar37;
                iVar12 = iVar12 + -1;
              } while (1 < iVar12);
              lVar31 = lVar31 + 1;
              pbVar8 = pbVar8 + lVar25;
            } while (lVar31 < (int)(uVar5 + iVar19));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
      else {
        do {
          iVar34 = piVar11[3];
          if (0 < iVar34) {
            iVar19 = piVar11[2];
            iVar12 = piVar11[1];
            pbVar8 = (byte *)(long)iVar12;
            puVar14 = (undefined1 *)(lVar25 * (long)pbVar8 + *piVar11 * lVar37 + local_68[0]);
            do {
              puVar20 = puVar14;
              iVar35 = iVar19 + 1;
              do {
                *puVar20 = 0xff;
                puVar20 = puVar20 + lVar37;
                iVar35 = iVar35 + -1;
              } while (1 < iVar35);
              pbVar8 = pbVar8 + 1;
              puVar14 = puVar14 + lVar25;
            } while ((long)pbVar8 < (long)(iVar34 + iVar12));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
  }
  else if (local_90 == 2) {
    if (param_6 == 0) {
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar11 = *(int **)(this + 0x10);
        piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
        lVar37 = -(long)param_5;
        pbVar8 = param_4_00;
        do {
          if (0 < (long)piVar11[3]) {
            iVar34 = *piVar11;
            iVar19 = piVar11[2];
            lVar25 = (long)piVar11[1];
            lVar31 = piVar11[3] + lVar25;
            if (local_c8 < 0xfd) {
              pbVar18 = (byte *)(local_a0[0] +
                                 (long)(iVar34 - param_4) * (long)local_88 +
                                 (lVar37 + lVar25) * (long)local_8c + 3);
              pbVar22 = (byte *)(lVar25 * local_54 + (long)iVar34 * (long)local_50 + local_68[0]);
              do {
                pbVar8 = pbVar22;
                pbVar15 = pbVar18;
                iVar34 = iVar19 + 1;
                do {
                  uVar6 = (uint)*pbVar15 * (local_c8 + 2);
                  *pbVar8 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar8 >> 8) + (char)(uVar6 >> 8)
                  ;
                  pbVar15 = pbVar15 + local_88;
                  iVar34 = iVar34 + -1;
                  pbVar8 = pbVar8 + local_50;
                } while (1 < iVar34);
                lVar25 = lVar25 + 1;
                pbVar18 = pbVar18 + local_8c;
                pbVar22 = pbVar22 + local_54;
              } while (lVar25 < (int)lVar31);
            }
            else {
              lVar26 = lVar37 + lVar25;
              do {
                lVar23 = (long)(local_88 * (iVar34 - param_4));
                if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                  pbVar8 = memcpy((void *)(local_68[0] + local_54 * lVar25 +
                                          (long)(local_50 * iVar34)),
                                  (void *)(local_a0[0] + (lVar25 - param_5) * (long)local_8c +
                                          lVar23),(long)(local_50 * iVar19));
                }
                else {
                  pbVar18 = (byte *)(local_a0[0] + local_8c * lVar26 + lVar23 + 3);
                  pbVar22 = (byte *)(local_68[0] + local_54 * lVar25 + (long)(local_50 * iVar34));
                  iVar12 = iVar19 + 1;
                  do {
                    iVar35 = (0x100 - (uint)*pbVar18) * (uint)*pbVar22;
                    bVar4 = (char)((uint)iVar35 >> 8) + *pbVar18;
                    pbVar8 = (byte *)(ulong)CONCAT21((short)((uint)iVar35 >> 0x10),bVar4);
                    *pbVar22 = bVar4;
                    iVar12 = iVar12 + -1;
                    pbVar18 = pbVar18 + local_88;
                    pbVar22 = pbVar22 + local_50;
                  } while (1 < iVar12);
                }
                lVar25 = lVar25 + 1;
                lVar26 = lVar26 + 1;
              } while (lVar25 < lVar31);
            }
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
    else {
      iVar34 = local_84;
      if (param_4 % local_84 < 0) {
        iVar34 = 0;
      }
      pbVar8 = (byte *)((long)param_5 / (long)local_80 & 0xffffffff);
      iVar19 = 0;
      if (-1 < param_5 % local_80) {
        iVar19 = local_80;
      }
      if ((long)*(int *)(this + 0x1c) != 0) {
        iVar34 = param_4 % local_84 - iVar34;
        iVar19 = param_5 % local_80 - iVar19;
        piVar11 = *(int **)(this + 0x10);
        piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
        lVar37 = (long)local_54;
        lVar25 = (long)local_50;
        if (local_c8 < 0xfd) {
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar12 = *piVar11;
              iVar35 = piVar11[2];
              iVar36 = piVar11[1];
              lVar31 = (long)iVar36;
              pbVar18 = (byte *)(lVar37 * lVar31 + iVar12 * lVar25 + local_68[0]);
              do {
                pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
                pbVar22 = pbVar18;
                iVar28 = iVar35 + 1;
                do {
                  uVar5 = (uint)*(byte *)(local_a0[0] +
                                          (long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c
                                          + 3 + (long)(((int)pbVar8 % local_84) * local_88)) *
                          (local_c8 + 2);
                  *pbVar22 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar22 >> 8) +
                             (char)(uVar5 >> 8);
                  pbVar22 = pbVar22 + lVar25;
                  iVar28 = iVar28 + -1;
                  pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                } while (1 < iVar28);
                lVar31 = lVar31 + 1;
                pbVar18 = pbVar18 + lVar37;
              } while (lVar31 < (int)(uVar6 + iVar36));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
        else {
          do {
            uVar6 = piVar11[3];
            pbVar8 = (byte *)(ulong)uVar6;
            if (0 < (int)uVar6) {
              iVar12 = *piVar11;
              iVar35 = piVar11[2];
              iVar36 = piVar11[1];
              lVar31 = (long)iVar36;
              pbVar18 = (byte *)(lVar37 * lVar31 + (long)(local_50 * iVar12) + local_68[0]);
              do {
                pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
                pbVar22 = pbVar18;
                iVar28 = iVar35 + 1;
                do {
                  bVar4 = *(byte *)(local_a0[0] +
                                    (long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c + 3 +
                                   (long)(((int)pbVar8 % local_84) * local_88));
                  *pbVar22 = (char)((0x100 - (uint)bVar4) * (uint)*pbVar22 >> 8) + bVar4;
                  pbVar22 = pbVar22 + lVar25;
                  iVar28 = iVar28 + -1;
                  pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
                } while (1 < iVar28);
                lVar31 = lVar31 + 1;
                pbVar18 = pbVar18 + lVar37;
              } while (lVar31 < (int)(uVar6 + iVar36));
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar9);
        }
      }
    }
  }
  else if (param_6 == 0) {
    if ((long)*(int *)(this + 0x1c) != 0) {
      piVar11 = *(int **)(this + 0x10);
      piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
      lVar37 = -(long)param_5;
      pbVar8 = param_4_00;
      do {
        if (0 < (long)piVar11[3]) {
          iVar34 = *piVar11;
          iVar19 = piVar11[2];
          lVar25 = (long)piVar11[1];
          lVar31 = piVar11[3] + lVar25;
          if (local_c8 < 0xfd) {
            pbVar18 = (byte *)((long)(iVar34 - param_4) * (long)local_88 +
                               (lVar37 + lVar25) * (long)local_8c + local_a0[0]);
            pbVar22 = (byte *)(lVar25 * local_54 + (long)iVar34 * (long)local_50 + local_68[0]);
            do {
              pbVar8 = pbVar22;
              pbVar15 = pbVar18;
              iVar34 = iVar19 + 1;
              do {
                uVar6 = (uint)*pbVar15 * (local_c8 + 2);
                *pbVar8 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar8 >> 8) + (char)(uVar6 >> 8);
                pbVar15 = pbVar15 + local_88;
                iVar34 = iVar34 + -1;
                pbVar8 = pbVar8 + local_50;
              } while (1 < iVar34);
              lVar25 = lVar25 + 1;
              pbVar18 = pbVar18 + local_8c;
              pbVar22 = pbVar22 + local_54;
            } while (lVar25 < (int)lVar31);
          }
          else {
            lVar26 = lVar37 + lVar25;
            do {
              lVar23 = (long)(local_88 * (iVar34 - param_4));
              if (((local_50 == local_88) && (local_90 == 1)) && (local_58 == 1)) {
                pbVar8 = memcpy((void *)(local_68[0] + local_54 * lVar25 + (long)(local_50 * iVar34)
                                        ),
                                (void *)(local_a0[0] + (lVar25 - param_5) * (long)local_8c + lVar23)
                                ,(long)(local_50 * iVar19));
              }
              else {
                pbVar18 = (byte *)(local_a0[0] + local_8c * lVar26 + lVar23);
                pbVar22 = (byte *)(local_68[0] + local_54 * lVar25 + (long)(local_50 * iVar34));
                iVar12 = iVar19 + 1;
                do {
                  iVar35 = (0x100 - (uint)*pbVar18) * (uint)*pbVar22;
                  bVar4 = (char)((uint)iVar35 >> 8) + *pbVar18;
                  pbVar8 = (byte *)(ulong)CONCAT21((short)((uint)iVar35 >> 0x10),bVar4);
                  *pbVar22 = bVar4;
                  iVar12 = iVar12 + -1;
                  pbVar18 = pbVar18 + local_88;
                  pbVar22 = pbVar22 + local_50;
                } while (1 < iVar12);
              }
              lVar25 = lVar25 + 1;
              lVar26 = lVar26 + 1;
            } while (lVar25 < lVar31);
          }
        }
        piVar11 = piVar11 + 4;
      } while (piVar11 != piVar9);
    }
  }
  else {
    iVar34 = local_84;
    if (param_4 % local_84 < 0) {
      iVar34 = 0;
    }
    pbVar8 = (byte *)((long)param_5 / (long)local_80 & 0xffffffff);
    iVar19 = 0;
    if (-1 < param_5 % local_80) {
      iVar19 = local_80;
    }
    if ((long)*(int *)(this + 0x1c) != 0) {
      iVar34 = param_4 % local_84 - iVar34;
      iVar19 = param_5 % local_80 - iVar19;
      piVar11 = *(int **)(this + 0x10);
      piVar9 = piVar11 + (long)*(int *)(this + 0x1c) * 4;
      lVar37 = (long)local_54;
      lVar25 = (long)local_50;
      if (local_c8 < 0xfd) {
        do {
          uVar6 = piVar11[3];
          pbVar8 = (byte *)(ulong)uVar6;
          if (0 < (int)uVar6) {
            iVar12 = *piVar11;
            iVar35 = piVar11[2];
            iVar36 = piVar11[1];
            lVar31 = (long)iVar36;
            pbVar18 = (byte *)(lVar37 * lVar31 + iVar12 * lVar25 + local_68[0]);
            do {
              pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
              pbVar22 = pbVar18;
              iVar28 = iVar35 + 1;
              do {
                uVar5 = (uint)*(byte *)((long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c +
                                        local_a0[0] + (long)(((int)pbVar8 % local_84) * local_88)) *
                        (local_c8 + 2);
                *pbVar22 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar22 >> 8) + (char)(uVar5 >> 8)
                ;
                pbVar22 = pbVar22 + lVar25;
                iVar28 = iVar28 + -1;
                pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
              } while (1 < iVar28);
              lVar31 = lVar31 + 1;
              pbVar18 = pbVar18 + lVar37;
            } while (lVar31 < (int)(uVar6 + iVar36));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
      else {
        do {
          uVar6 = piVar11[3];
          pbVar8 = (byte *)(ulong)uVar6;
          if (0 < (int)uVar6) {
            iVar12 = *piVar11;
            iVar35 = piVar11[2];
            iVar36 = piVar11[1];
            lVar31 = (long)iVar36;
            pbVar18 = (byte *)(lVar37 * lVar31 + (long)(local_50 * iVar12) + local_68[0]);
            do {
              pbVar8 = (byte *)(ulong)(uint)(iVar12 - iVar34);
              pbVar22 = pbVar18;
              iVar28 = iVar35 + 1;
              do {
                bVar4 = *(byte *)((long)(((int)lVar31 - iVar19) % local_80) * (long)local_8c +
                                  local_a0[0] + (long)(((int)pbVar8 % local_84) * local_88));
                *pbVar22 = (char)((0x100 - (uint)bVar4) * (uint)*pbVar22 >> 8) + bVar4;
                pbVar22 = pbVar22 + lVar25;
                iVar28 = iVar28 + -1;
                pbVar8 = (byte *)(ulong)((int)pbVar8 + 1);
              } while (1 < iVar28);
              lVar31 = lVar31 + 1;
              pbVar18 = pbVar18 + lVar37;
            } while (lVar31 < (int)(uVar6 + iVar36));
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar9);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    pbVar8 = (byte *)(**(code **)(*local_78 + 8))();
  }
  if (local_40 != (long *)0x0) {
    pbVar8 = (byte *)(**(code **)(*local_40 + 8))();
  }
  return pbVar8;
}


