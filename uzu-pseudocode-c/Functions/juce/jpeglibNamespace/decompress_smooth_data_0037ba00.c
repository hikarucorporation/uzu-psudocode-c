// Function : decompress_smooth_data
// Namespace: juce:jpeglibNamespace
// Entry    : 0037ba00
// Prototype: char decompress_smooth_data(long param_1, long param_2)
// Body     : 0037ba00 - 0037c2d3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::decompress_smooth_data(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***) */

char __cdecl juce::jpeglibNamespace::decompress_smooth_data(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ushort *puVar4;
  code *pcVar5;
  long lVar6;
  short *psVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  short *psVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  ulong uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  bool bVar46;
  int local_1bc;
  int local_1b8;
  long local_1b0;
  short *local_160;
  long local_150;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_1 + 0x230);
  uVar12 = *(int *)(param_1 + 400) - 1;
  while( true ) {
    if (((*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x9c)) ||
        (*(char *)((long)*(undefined8 **)(param_1 + 0x240) + 0x21) != '\0')) ||
       ((*(int *)(param_1 + 0x9c) == *(int *)(param_1 + 0xa4) &&
        (*(int *)(param_1 + 0xa8) + (uint)(*(int *)(param_1 + 0x1fc) == 0) <
         *(uint *)(param_1 + 0xa0))))) break;
    iVar13 = (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    if (iVar13 == 0) {
      return '\0';
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar34 = *(long *)(param_1 + 0x120);
    local_1b0 = 0;
    do {
      if (*(char *)(lVar34 + 0x34) != '\0') {
        uVar15 = *(uint *)(param_1 + 0xa8);
        if (uVar15 < uVar12) {
          uVar14 = *(uint *)(lVar34 + 0xc);
          uVar17 = (ulong)(uVar14 * 2);
          uVar23 = uVar14;
          uVar24 = uVar14 * 2;
          if (uVar15 == 0) goto LAB_0037bb5d;
LAB_0037bb01:
          lVar16 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                             (param_1,*(undefined8 *)(lVar3 + 0x88 + local_1b0 * 8),
                              (uVar15 - 1) * uVar14,uVar24 + uVar14);
          lVar16 = lVar16 + (long)*(int *)(lVar34 + 0xc) * 8;
        }
        else {
          uVar14 = *(uint *)(lVar34 + 0xc);
          uVar17 = (ulong)*(uint *)(lVar34 + 0x20) % (ulong)uVar14;
          if ((int)uVar17 == 0) {
            uVar17 = (ulong)uVar14;
          }
          uVar23 = (uint)uVar17;
          uVar24 = uVar23;
          if (uVar15 != 0) goto LAB_0037bb01;
LAB_0037bb5d:
          lVar16 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                             (param_1,*(undefined8 *)(lVar3 + 0x88 + local_1b0 * 8),0,uVar17,0);
        }
        if (0 < (int)uVar23) {
          uVar17 = (ulong)(uint)((int)local_1b0 * 6);
          puVar4 = *(ushort **)(lVar34 + 0x50);
          uVar38 = (ulong)*puVar4;
          pcVar5 = *(code **)(*(long *)(param_1 + 600) + 8 + local_1b0 * 8);
          lVar25 = (ulong)puVar4[1] * 0x80;
          uVar33 = (ulong)puVar4[1] << 8;
          lVar26 = (ulong)puVar4[8] * 0x80;
          uVar30 = (ulong)puVar4[8] << 8;
          lVar27 = (ulong)puVar4[0x10] * 0x80;
          uVar18 = (ulong)puVar4[0x10] << 8;
          lVar19 = (ulong)puVar4[9] * 0x80;
          uVar39 = (ulong)puVar4[9] << 8;
          lVar20 = (ulong)puVar4[2] * 0x80;
          uVar42 = (ulong)puVar4[2] << 8;
          lVar6 = *(long *)(lVar3 + 0xd8);
          local_150 = *(long *)(param_2 + local_1b0 * 8);
          uVar28 = 0;
          do {
            psVar7 = *(short **)(lVar16 + uVar28 * 8);
            if ((uVar15 != 0) || (local_160 = psVar7, uVar28 != 0)) {
              local_160 = *(short **)(lVar16 + -8 + uVar28 * 8);
            }
            psVar31 = psVar7;
            if (uVar15 < uVar12 || uVar28 != uVar23 - 1) {
              psVar31 = *(short **)(lVar16 + 8 + uVar28 * 8);
            }
            local_1bc = (int)*psVar7;
            uVar14 = *(int *)(lVar34 + 0x1c) - 1;
            uVar24 = 0;
            lVar32 = 0x80;
            iVar41 = (int)*local_160;
            iVar44 = (int)*psVar31;
            iVar45 = (int)*psVar31;
            local_1b8 = (int)*local_160;
            iVar13 = local_1bc;
            do {
              iVar43 = iVar44;
              iVar40 = iVar41;
              iVar10 = local_1bc;
              puVar1 = (undefined8 *)((long)psVar7 + lVar32 + -0x10);
              local_48 = *puVar1;
              uStack_40 = puVar1[1];
              puVar1 = (undefined8 *)((long)psVar7 + lVar32 + -0x20);
              local_58 = *puVar1;
              uStack_50 = puVar1[1];
              puVar1 = (undefined8 *)((long)psVar7 + lVar32 + -0x30);
              local_68 = *puVar1;
              uStack_60 = puVar1[1];
              puVar1 = (undefined8 *)((long)psVar7 + lVar32 + -0x40);
              local_78 = *puVar1;
              uStack_70 = puVar1[1];
              puVar2 = (undefined4 *)((long)psVar7 + lVar32 + -0x80);
              uVar8 = *puVar2;
              uStack_b4 = puVar2[1];
              uStack_b0 = puVar2[2];
              uStack_ac = puVar2[3];
              puVar2 = (undefined4 *)((long)psVar7 + lVar32 + -0x70);
              local_a8 = *puVar2;
              uStack_a4 = puVar2[1];
              uStack_a0 = puVar2[2];
              uStack_9c = puVar2[3];
              puVar2 = (undefined4 *)((long)psVar7 + lVar32 + -0x60);
              local_98 = *puVar2;
              uStack_94 = puVar2[1];
              uStack_90 = puVar2[2];
              uStack_8c = puVar2[3];
              puVar2 = (undefined4 *)((long)psVar7 + lVar32 + -0x50);
              local_88 = *puVar2;
              uStack_84 = puVar2[1];
              uStack_80 = puVar2[2];
              uStack_7c = puVar2[3];
              iVar41 = iVar40;
              iVar44 = iVar43;
              if (uVar24 < uVar14) {
                iVar41 = (int)*(short *)((long)local_160 + lVar32);
                local_1bc = (int)*(short *)((long)psVar7 + lVar32);
                iVar44 = (int)*(short *)((long)psVar31 + lVar32);
              }
              iVar29 = *(int *)(lVar6 + 4 + uVar17 * 4);
              local_b8 = uVar8;
              if ((iVar29 != 0) &&
                 (local_b8._2_2_ = (short)((uint)uVar8 >> 0x10), bVar46 = local_b8._2_2_ == 0,
                 bVar46)) {
                lVar21 = (long)(iVar13 - local_1bc) * uVar38 * 0x24;
                if (lVar21 < 0) {
                  uVar22 = lVar25 - lVar21;
                  if (uVar22 >> 0x20 == 0) {
                    iVar35 = (int)((uVar22 & 0xffffffff) / uVar33);
                  }
                  else {
                    iVar35 = (int)((long)uVar22 / (long)uVar33);
                  }
                  iVar36 = 1 << ((byte)iVar29 & 0x1f);
                  iVar37 = iVar36 + -1;
                  if (iVar35 < iVar36) {
                    iVar37 = iVar35;
                  }
                  if (iVar29 < 1) {
                    iVar37 = iVar35;
                  }
                  sVar11 = -(short)iVar37;
                }
                else {
                  uVar22 = lVar21 + lVar25;
                  if (uVar22 >> 0x20 == 0) {
                    uVar22 = (uVar22 & 0xffffffff) / uVar33;
                    iVar35 = (int)uVar22;
                  }
                  else {
                    uVar22 = (long)uVar22 / (long)uVar33;
                    iVar35 = (int)uVar22;
                  }
                  sVar11 = (short)uVar22;
                  if (0 < iVar29) {
                    iVar37 = 1 << ((byte)iVar29 & 0x1f);
                    iVar29 = iVar37 + -1;
                    if (iVar35 < iVar37) {
                      iVar29 = iVar35;
                    }
                    sVar11 = (short)iVar29;
                  }
                }
                local_b8 = CONCAT22(sVar11,(short)uVar8);
              }
              iVar29 = *(int *)(lVar6 + 8 + uVar17 * 4);
              if ((iVar29 != 0) && ((short)local_a8 == 0)) {
                lVar21 = (long)(iVar40 - iVar43) * uVar38 * 0x24;
                if (lVar21 < 0) {
                  uVar22 = lVar26 - lVar21;
                  if (uVar22 >> 0x20 == 0) {
                    iVar35 = (int)((uVar22 & 0xffffffff) / uVar30);
                  }
                  else {
                    iVar35 = (int)((long)uVar22 / (long)uVar30);
                  }
                  iVar36 = 1 << ((byte)iVar29 & 0x1f);
                  iVar37 = iVar36 + -1;
                  if (iVar35 < iVar36) {
                    iVar37 = iVar35;
                  }
                  if (iVar29 < 1) {
                    iVar37 = iVar35;
                  }
                  sVar11 = -(short)iVar37;
                }
                else {
                  uVar22 = lVar21 + lVar26;
                  if (uVar22 >> 0x20 == 0) {
                    uVar22 = (uVar22 & 0xffffffff) / uVar30;
                    iVar35 = (int)uVar22;
                  }
                  else {
                    uVar22 = (long)uVar22 / (long)uVar30;
                    iVar35 = (int)uVar22;
                  }
                  sVar11 = (short)uVar22;
                  if (0 < iVar29) {
                    iVar37 = 1 << ((byte)iVar29 & 0x1f);
                    iVar29 = iVar37 + -1;
                    if (iVar35 < iVar37) {
                      iVar29 = iVar35;
                    }
                    sVar11 = (short)iVar29;
                  }
                }
                local_a8._2_2_ = (short)((uint)local_a8 >> 0x10);
                local_a8 = CONCAT22(local_a8._2_2_,sVar11);
              }
              iVar29 = *(int *)(lVar6 + 0xc + uVar17 * 4);
              if ((iVar29 != 0) && ((short)local_98 == 0)) {
                lVar21 = (long)(iVar40 + iVar10 * -2 + iVar43) * uVar38 * 9;
                if (lVar21 < 0) {
                  uVar22 = lVar27 - lVar21;
                  if (uVar22 >> 0x20 == 0) {
                    iVar35 = (int)((uVar22 & 0xffffffff) / uVar18);
                  }
                  else {
                    iVar35 = (int)((long)uVar22 / (long)uVar18);
                  }
                  iVar36 = 1 << ((byte)iVar29 & 0x1f);
                  iVar37 = iVar36 + -1;
                  if (iVar35 < iVar36) {
                    iVar37 = iVar35;
                  }
                  if (iVar29 < 1) {
                    iVar37 = iVar35;
                  }
                  sVar11 = -(short)iVar37;
                }
                else {
                  uVar22 = lVar21 + lVar27;
                  if (uVar22 >> 0x20 == 0) {
                    uVar22 = (uVar22 & 0xffffffff) / uVar18;
                    iVar35 = (int)uVar22;
                  }
                  else {
                    uVar22 = (long)uVar22 / (long)uVar18;
                    iVar35 = (int)uVar22;
                  }
                  sVar11 = (short)uVar22;
                  if (0 < iVar29) {
                    iVar37 = 1 << ((byte)iVar29 & 0x1f);
                    iVar29 = iVar37 + -1;
                    if (iVar35 < iVar37) {
                      iVar29 = iVar35;
                    }
                    sVar11 = (short)iVar29;
                  }
                }
                uVar9 = (uint)local_98 >> 0x10;
                local_98 = CONCAT22((short)uVar9,sVar11);
              }
              iVar29 = *(int *)(lVar6 + 0x10 + uVar17 * 4);
              if ((iVar29 != 0) && (local_a8._2_2_ == 0)) {
                lVar21 = (long)((local_1b8 - (iVar45 + iVar41)) + iVar44) * uVar38 * 5;
                if (lVar21 < 0) {
                  uVar22 = lVar19 - lVar21;
                  if (uVar22 >> 0x20 == 0) {
                    iVar45 = (int)((uVar22 & 0xffffffff) / uVar39);
                  }
                  else {
                    iVar45 = (int)((long)uVar22 / (long)uVar39);
                  }
                  iVar37 = 1 << ((byte)iVar29 & 0x1f);
                  iVar35 = iVar37 + -1;
                  if (iVar45 < iVar37) {
                    iVar35 = iVar45;
                  }
                  if (iVar29 < 1) {
                    iVar35 = iVar45;
                  }
                  sVar11 = -(short)iVar35;
                }
                else {
                  uVar22 = lVar21 + lVar19;
                  if (uVar22 >> 0x20 == 0) {
                    uVar22 = (uVar22 & 0xffffffff) / uVar39;
                    iVar45 = (int)uVar22;
                  }
                  else {
                    uVar22 = (long)uVar22 / (long)uVar39;
                    iVar45 = (int)uVar22;
                  }
                  sVar11 = (short)uVar22;
                  if (0 < iVar29) {
                    iVar35 = 1 << ((byte)iVar29 & 0x1f);
                    iVar29 = iVar35 + -1;
                    if (iVar45 < iVar35) {
                      iVar29 = iVar45;
                    }
                    sVar11 = (short)iVar29;
                  }
                }
                local_a8 = CONCAT22(sVar11,(short)local_a8);
              }
              iVar45 = *(int *)(lVar6 + 0x14 + uVar17 * 4);
              if ((iVar45 != 0) && ((short)uStack_b4 == 0)) {
                lVar21 = (long)(iVar13 + iVar10 * -2 + local_1bc) * uVar38 * 9;
                if (lVar21 < 0) {
                  uVar22 = lVar20 - lVar21;
                  if (uVar22 >> 0x20 == 0) {
                    iVar13 = (int)((uVar22 & 0xffffffff) / uVar42);
                  }
                  else {
                    iVar13 = (int)((long)uVar22 / (long)uVar42);
                  }
                  iVar35 = 1 << ((byte)iVar45 & 0x1f);
                  iVar29 = iVar35 + -1;
                  if (iVar13 < iVar35) {
                    iVar29 = iVar13;
                  }
                  if (iVar45 < 1) {
                    iVar29 = iVar13;
                  }
                  sVar11 = -(short)iVar29;
                }
                else {
                  uVar22 = lVar21 + lVar20;
                  if (uVar22 >> 0x20 == 0) {
                    uVar22 = (uVar22 & 0xffffffff) / uVar42;
                    iVar13 = (int)uVar22;
                  }
                  else {
                    uVar22 = (long)uVar22 / (long)uVar42;
                    iVar13 = (int)uVar22;
                  }
                  sVar11 = (short)uVar22;
                  if (0 < iVar45) {
                    iVar29 = 1 << ((byte)iVar45 & 0x1f);
                    iVar45 = iVar29 + -1;
                    if (iVar13 < iVar29) {
                      iVar45 = iVar13;
                    }
                    sVar11 = (short)iVar45;
                  }
                }
                uVar9 = (uint)uStack_b4 >> 0x10;
                uStack_b4 = CONCAT22((short)uVar9,sVar11);
              }
              (*pcVar5)(param_1,lVar34,&local_b8,local_150);
              uVar24 = uVar24 + 1;
              lVar32 = lVar32 + 0x80;
              iVar45 = iVar43;
              local_1b8 = iVar40;
              iVar13 = iVar10;
            } while (uVar24 <= uVar14);
            local_150 = local_150 + (long)*(int *)(lVar34 + 0x28) * 8;
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar23);
        }
      }
      local_1b0 = local_1b0 + 1;
      lVar34 = lVar34 + 0x60;
    } while (local_1b0 < *(int *)(param_1 + 0x38));
  }
  uVar15 = *(int *)(param_1 + 0xa8) + 1;
  *(uint *)(param_1 + 0xa8) = uVar15;
  return (uVar12 < uVar15) + '\x03';
}


