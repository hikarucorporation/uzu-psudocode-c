// Function : sort_r_simple<>
// Namespace: 
// Entry    : 003ebe70
// Prototype: void sort_r_simple<>(undefined1 * param_1, ulong param_2, ulong param_3, undefined * param_4)
// Body     : 003ebe70 - 003ed3be


/* WARNING: Removing unreachable block (ram,0x003ecf9c) */
/* WARNING: Removing unreachable block (ram,0x003ecc27) */
/* WARNING: Removing unreachable block (ram,0x003ec49d) */
/* WARNING: Removing unreachable block (ram,0x003ec6aa) */
/* WARNING: Removing unreachable block (ram,0x003ecf8b) */
/* WARNING: Removing unreachable block (ram,0x003ed2f4) */
/* WARNING: Removing unreachable block (ram,0x003ed2e3) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void sort_r_simple<>(void*, unsigned long, unsigned long, int (*)(void const*, void const*)) */

void __cdecl sort_r_simple<>(undefined1 *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *puVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
  undefined1 *puVar35;
  long lVar36;
  undefined1 *puVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  long lVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  long lVar47;
  long lVar48;
  undefined1 *local_f8;
  long local_d8;
  undefined1 *local_c8;
  long local_b0;
  long local_90;
  long local_88;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  
  puVar16 = param_1 + param_2 * param_3;
  if (9 < param_2) {
    lVar18 = -param_3;
    lVar39 = -param_3;
    lVar34 = lVar39 + 0x30;
    uVar22 = param_3 - 0x20;
    do {
      lVar44 = (param_2 - 1) * param_3;
      puVar17 = param_1 + lVar44;
      puVar24 = param_1 + param_3;
      puVar28 = param_1 + (param_2 >> 1) * param_3;
      iVar15 = (*(code *)param_4)(puVar24,puVar28,uVar22);
      if (iVar15 < 1) {
        puVar35 = puVar24;
      }
      else {
        puVar35 = puVar28;
        puVar28 = puVar24;
      }
      iVar15 = (*(code *)param_4)();
      if (0 < iVar15) {
        iVar15 = (*(code *)param_4)();
        puVar28 = puVar17 + lVar18;
        if (0 < iVar15) {
          puVar28 = puVar35;
        }
      }
      if (puVar28 != puVar17) {
        puVar24 = puVar28 + param_3;
        puVar35 = puVar28 + 1;
        if (puVar28 + 1 < puVar24) {
          puVar35 = puVar24;
        }
        uVar22 = (long)puVar35 - (long)puVar28;
        if (uVar22 < 8) {
          puVar41 = puVar17;
          puVar35 = puVar28;
        }
        else {
          if (uVar22 < 0x20) {
            uVar25 = 0;
          }
          else {
            uVar25 = uVar22 & 0xffffffffffffffe0;
            uVar31 = (uVar25 - 0x20 >> 5) + 1;
            if (uVar25 - 0x20 == 0) {
              lVar29 = 0;
LAB_003ec41e:
              puVar2 = (undefined4 *)(puVar28 + lVar29);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              uVar4 = *(undefined8 *)(puVar28 + lVar29 + 0x10);
              uVar9 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8);
              uVar10 = *(undefined8 *)((long)(puVar17 + lVar29) + 8);
              uVar11 = *(undefined8 *)(puVar17 + lVar29 + 0x10);
              uVar12 = *(undefined8 *)((long)(puVar17 + lVar29 + 0x10) + 8);
              *(undefined8 *)(puVar28 + lVar29) = *(undefined8 *)(puVar17 + lVar29);
              *(undefined8 *)((long)(puVar28 + lVar29) + 8) = uVar10;
              *(undefined8 *)(puVar28 + lVar29 + 0x10) = uVar11;
              *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8) = uVar12;
              puVar2 = (undefined4 *)(puVar17 + lVar29);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              *(undefined8 *)(puVar17 + lVar29 + 0x10) = uVar4;
              *(undefined8 *)((long)(puVar17 + lVar29 + 0x10) + 8) = uVar9;
            }
            else {
              uVar40 = uVar31 & 0xffffffffffffffe;
              lVar29 = 0;
              do {
                uVar4 = *(undefined8 *)(puVar28 + lVar29);
                uVar9 = *(undefined8 *)((long)(puVar28 + lVar29) + 8);
                uVar10 = *(undefined8 *)(puVar28 + lVar29 + 0x10);
                uVar11 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8);
                uVar12 = *(undefined8 *)((long)(param_1 + lVar29 + lVar44) + 8);
                uVar13 = *(undefined8 *)(param_1 + lVar29 + lVar44 + 0x10);
                uVar14 = *(undefined8 *)((long)(param_1 + lVar29 + lVar44 + 0x10) + 8);
                *(undefined8 *)(puVar28 + lVar29) = *(undefined8 *)(param_1 + lVar29 + lVar44);
                *(undefined8 *)((long)(puVar28 + lVar29) + 8) = uVar12;
                *(undefined8 *)(puVar28 + lVar29 + 0x10) = uVar13;
                *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8) = uVar14;
                *(undefined8 *)(param_1 + lVar29 + lVar44) = uVar4;
                *(undefined8 *)((long)(param_1 + lVar29 + lVar44) + 8) = uVar9;
                *(undefined8 *)(param_1 + lVar29 + lVar44 + 0x10) = uVar10;
                *(undefined8 *)((long)(param_1 + lVar29 + lVar44 + 0x10) + 8) = uVar11;
                puVar2 = (undefined4 *)(puVar28 + lVar29 + 0x20);
                uVar5 = *puVar2;
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                uVar4 = *(undefined8 *)(puVar28 + lVar29 + 0x30);
                uVar9 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x30) + 8);
                uVar10 = *(undefined8 *)((long)(param_1 + lVar29 + lVar44 + 0x20) + 8);
                uVar11 = *(undefined8 *)(param_1 + lVar29 + lVar44 + 0x30);
                uVar12 = *(undefined8 *)((long)(param_1 + lVar29 + lVar44 + 0x30) + 8);
                *(undefined8 *)(puVar28 + lVar29 + 0x20) =
                     *(undefined8 *)(param_1 + lVar29 + lVar44 + 0x20);
                *(undefined8 *)((long)(puVar28 + lVar29 + 0x20) + 8) = uVar10;
                *(undefined8 *)(puVar28 + lVar29 + 0x30) = uVar11;
                *(undefined8 *)((long)(puVar28 + lVar29 + 0x30) + 8) = uVar12;
                puVar2 = (undefined4 *)(param_1 + lVar29 + lVar44 + 0x20);
                *puVar2 = uVar5;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                *(undefined8 *)(param_1 + lVar29 + lVar44 + 0x30) = uVar4;
                *(undefined8 *)((long)(param_1 + lVar29 + lVar44 + 0x30) + 8) = uVar9;
                lVar29 = lVar29 + 0x40;
                uVar40 = uVar40 - 2;
              } while (uVar40 != 0);
              if ((uVar31 & 1) != 0) goto LAB_003ec41e;
            }
            if (uVar22 == uVar25) goto LAB_003ec4c7;
            if ((uVar22 & 0x18) == 0) {
              puVar41 = puVar17 + uVar25;
              puVar35 = puVar28 + uVar25;
              goto LAB_003ec4b0;
            }
          }
          uVar31 = uVar22 & 0xfffffffffffffff8;
          puVar35 = puVar28 + uVar31;
          do {
            uVar4 = *(undefined8 *)(puVar28 + uVar25);
            *(undefined8 *)(puVar28 + uVar25) = *(undefined8 *)(puVar17 + uVar25);
            *(undefined8 *)(puVar17 + uVar25) = uVar4;
            uVar25 = uVar25 + 8;
          } while (uVar31 != uVar25);
          if (uVar22 == uVar31) goto LAB_003ec4c7;
          puVar41 = puVar17 + uVar31;
        }
LAB_003ec4b0:
        do {
          uVar3 = *puVar35;
          *puVar35 = *puVar41;
          *puVar41 = uVar3;
          puVar35 = puVar35 + 1;
          puVar41 = puVar41 + 1;
        } while (puVar35 < puVar24);
      }
LAB_003ec4c7:
      puVar24 = puVar17;
      puVar28 = param_1;
      if (0 < lVar44) {
        puVar35 = param_1;
LAB_003ec4de:
        do {
          if (puVar24 <= puVar35) {
LAB_003ecc70:
            break;
          }
          puVar41 = puVar35 + 1;
          lVar44 = -(long)puVar35;
          puVar42 = puVar35;
          while( true ) {
            puVar42 = puVar42 + param_3;
            iVar15 = (*(code *)param_4)();
            if (0 < iVar15) break;
            if (iVar15 == 0) {
              if (puVar28 < puVar35) {
                puVar45 = puVar28 + param_3;
                puVar46 = puVar28 + 1;
                if (puVar28 + 1 < puVar45) {
                  puVar46 = puVar45;
                }
                uVar22 = (long)puVar46 - (long)puVar28;
                puVar32 = puVar35;
                puVar46 = puVar28;
                if (7 < uVar22) {
                  if (uVar22 < 0x20) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = uVar22 & 0xffffffffffffffe0;
                    uVar31 = (uVar25 - 0x20 >> 5) + 1;
                    if (uVar25 - 0x20 == 0) {
                      lVar29 = 0;
LAB_003ec618:
                      puVar2 = (undefined4 *)(puVar28 + lVar29);
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      uVar7 = puVar2[2];
                      uVar8 = puVar2[3];
                      uVar4 = *(undefined8 *)(puVar28 + lVar29 + 0x10);
                      uVar9 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8);
                      uVar10 = *(undefined8 *)((long)(puVar35 + lVar29) + 8);
                      uVar11 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
                      uVar12 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
                      *(undefined8 *)(puVar28 + lVar29) = *(undefined8 *)(puVar35 + lVar29);
                      *(undefined8 *)((long)(puVar28 + lVar29) + 8) = uVar10;
                      *(undefined8 *)(puVar28 + lVar29 + 0x10) = uVar11;
                      *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8) = uVar12;
                      puVar2 = (undefined4 *)(puVar35 + lVar29);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      puVar2[2] = uVar7;
                      puVar2[3] = uVar8;
                      *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar4;
                      *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar9;
                    }
                    else {
                      uVar40 = uVar31 & 0xffffffffffffffe;
                      lVar29 = 0;
                      do {
                        uVar4 = *(undefined8 *)(puVar28 + lVar29);
                        uVar9 = *(undefined8 *)((long)(puVar28 + lVar29) + 8);
                        uVar10 = *(undefined8 *)(puVar28 + lVar29 + 0x10);
                        uVar11 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8);
                        uVar12 = *(undefined8 *)((long)(puVar35 + lVar29) + 8);
                        uVar13 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
                        uVar14 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
                        *(undefined8 *)(puVar28 + lVar29) = *(undefined8 *)(puVar35 + lVar29);
                        *(undefined8 *)((long)(puVar28 + lVar29) + 8) = uVar12;
                        *(undefined8 *)(puVar28 + lVar29 + 0x10) = uVar13;
                        *(undefined8 *)((long)(puVar28 + lVar29 + 0x10) + 8) = uVar14;
                        *(undefined8 *)(puVar35 + lVar29) = uVar4;
                        *(undefined8 *)((long)(puVar35 + lVar29) + 8) = uVar9;
                        *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar10;
                        *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar11;
                        puVar2 = (undefined4 *)(puVar28 + lVar29 + 0x20);
                        uVar5 = *puVar2;
                        uVar6 = puVar2[1];
                        uVar7 = puVar2[2];
                        uVar8 = puVar2[3];
                        uVar4 = *(undefined8 *)(puVar28 + lVar29 + 0x30);
                        uVar9 = *(undefined8 *)((long)(puVar28 + lVar29 + 0x30) + 8);
                        uVar10 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x20) + 8);
                        uVar11 = *(undefined8 *)(puVar35 + lVar29 + 0x30);
                        uVar12 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8);
                        *(undefined8 *)(puVar28 + lVar29 + 0x20) =
                             *(undefined8 *)(puVar35 + lVar29 + 0x20);
                        *(undefined8 *)((long)(puVar28 + lVar29 + 0x20) + 8) = uVar10;
                        *(undefined8 *)(puVar28 + lVar29 + 0x30) = uVar11;
                        *(undefined8 *)((long)(puVar28 + lVar29 + 0x30) + 8) = uVar12;
                        puVar2 = (undefined4 *)(puVar35 + lVar29 + 0x20);
                        *puVar2 = uVar5;
                        puVar2[1] = uVar6;
                        puVar2[2] = uVar7;
                        puVar2[3] = uVar8;
                        *(undefined8 *)(puVar35 + lVar29 + 0x30) = uVar4;
                        *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8) = uVar9;
                        lVar29 = lVar29 + 0x40;
                        uVar40 = uVar40 - 2;
                      } while (uVar40 != 0);
                      if ((uVar31 & 1) != 0) goto LAB_003ec618;
                    }
                    if (uVar22 == uVar25) goto LAB_003ec500;
                    if ((uVar22 & 0x18) == 0) {
                      puVar32 = puVar35 + uVar25;
                      puVar46 = puVar28 + uVar25;
                      goto LAB_003ec6c0;
                    }
                  }
                  uVar31 = uVar22 & 0xfffffffffffffff8;
                  puVar46 = puVar28 + uVar31;
                  do {
                    uVar4 = *(undefined8 *)(puVar28 + uVar25);
                    *(undefined8 *)(puVar28 + uVar25) = *(undefined8 *)(puVar35 + uVar25);
                    *(undefined8 *)(puVar35 + uVar25) = uVar4;
                    uVar25 = uVar25 + 8;
                  } while (uVar31 != uVar25);
                  if (uVar22 == uVar31) goto LAB_003ec500;
                  puVar32 = puVar35 + uVar31;
                }
LAB_003ec6c0:
                do {
                  uVar3 = *puVar46;
                  *puVar46 = *puVar32;
                  *puVar32 = uVar3;
                  puVar46 = puVar46 + 1;
                  puVar32 = puVar32 + 1;
                } while (puVar46 < puVar45);
              }
LAB_003ec500:
              puVar28 = puVar28 + param_3;
            }
            puVar35 = puVar35 + param_3;
            puVar41 = puVar41 + param_3;
            lVar44 = lVar44 - param_3;
            if (puVar24 <= puVar35) goto LAB_003ecc70;
          }
          if (puVar35 < puVar24) {
            puVar45 = puVar24 + lVar34;
            puVar46 = puVar24 + (1 - param_3);
            lVar47 = (param_3 - 0x20) - (long)puVar24;
            lVar29 = 0;
            puVar20 = puVar24;
            puVar43 = puVar24;
            puVar33 = puVar17;
            local_90 = param_3 - (long)puVar24;
            puVar32 = puVar24;
            while( true ) {
              puVar32 = puVar32 + lVar18;
              puVar19 = puVar46;
              if (puVar46 < puVar20) {
                puVar19 = puVar20;
              }
              lVar48 = lVar29 * param_3;
              puVar30 = puVar24 + (1 - (lVar48 + param_3));
              if (puVar24 + (1 - (lVar48 + param_3)) < puVar24 + -lVar48) {
                puVar30 = puVar24 + -lVar48;
              }
              puVar23 = puVar43 + lVar18;
              iVar15 = (*(code *)param_4)();
              if (iVar15 != 0) break;
              puVar17 = puVar33 + lVar18;
              if (puVar43 < puVar33) {
                lVar48 = lVar48 + (param_3 - (long)puVar24);
                puVar1 = puVar30 + lVar48;
                puVar26 = puVar17;
                puVar37 = puVar23;
                if ((undefined1 *)0x7 < puVar1) {
                  if (puVar1 < (undefined1 *)0x20) {
                    puVar33 = (undefined1 *)0x0;
                  }
                  else {
                    if (puVar30 + lVar48 + -0x20 < (undefined1 *)0x20) {
                      lVar36 = 0;
                    }
                    else {
                      uVar22 = ((ulong)(puVar19 + lVar47) >> 5) + 1 & 0xfffffffffffffffe;
                      lVar36 = 0;
                      do {
                        uVar4 = *(undefined8 *)(puVar45 + lVar36 + -0x30);
                        uVar9 = *(undefined8 *)((long)(puVar45 + lVar36 + -0x30) + 8);
                        uVar10 = *(undefined8 *)(puVar45 + lVar36 + -0x20);
                        uVar11 = *(undefined8 *)((long)(puVar45 + lVar36 + -0x20) + 8);
                        uVar12 = *(undefined8 *)((long)(puVar33 + lVar36 + lVar39) + 8);
                        uVar13 = *(undefined8 *)(puVar33 + lVar36 + lVar39 + 0x10);
                        uVar14 = *(undefined8 *)((long)(puVar33 + lVar36 + lVar39 + 0x10) + 8);
                        *(undefined8 *)(puVar45 + lVar36 + -0x30) =
                             *(undefined8 *)(puVar33 + lVar36 + lVar39);
                        *(undefined8 *)((long)(puVar45 + lVar36 + -0x30) + 8) = uVar12;
                        *(undefined8 *)(puVar45 + lVar36 + -0x20) = uVar13;
                        *(undefined8 *)((long)(puVar45 + lVar36 + -0x20) + 8) = uVar14;
                        *(undefined8 *)(puVar33 + lVar36 + lVar39) = uVar4;
                        *(undefined8 *)((long)(puVar33 + lVar36 + lVar39) + 8) = uVar9;
                        *(undefined8 *)(puVar33 + lVar36 + lVar39 + 0x10) = uVar10;
                        *(undefined8 *)((long)(puVar33 + lVar36 + lVar39 + 0x10) + 8) = uVar11;
                        puVar2 = (undefined4 *)(puVar45 + lVar36 + -0x10);
                        uVar5 = *puVar2;
                        uVar6 = puVar2[1];
                        uVar7 = puVar2[2];
                        uVar8 = puVar2[3];
                        uVar4 = *(undefined8 *)(puVar45 + lVar36);
                        uVar9 = *(undefined8 *)((long)(puVar45 + lVar36) + 8);
                        uVar10 = *(undefined8 *)((long)(puVar33 + lVar36 + lVar39 + 0x20) + 8);
                        uVar11 = *(undefined8 *)(puVar33 + lVar36 + lVar34);
                        uVar12 = *(undefined8 *)((long)(puVar33 + lVar36 + lVar34) + 8);
                        *(undefined8 *)(puVar45 + lVar36 + -0x10) =
                             *(undefined8 *)(puVar33 + lVar36 + lVar39 + 0x20);
                        *(undefined8 *)((long)(puVar45 + lVar36 + -0x10) + 8) = uVar10;
                        *(undefined8 *)(puVar45 + lVar36) = uVar11;
                        *(undefined8 *)((long)(puVar45 + lVar36) + 8) = uVar12;
                        puVar2 = (undefined4 *)(puVar33 + lVar36 + lVar39 + 0x20);
                        *puVar2 = uVar5;
                        puVar2[1] = uVar6;
                        puVar2[2] = uVar7;
                        puVar2[3] = uVar8;
                        *(undefined8 *)(puVar33 + lVar36 + lVar34) = uVar4;
                        *(undefined8 *)((long)(puVar33 + lVar36 + lVar34) + 8) = uVar9;
                        lVar36 = lVar36 + 0x40;
                        uVar22 = uVar22 - 2;
                      } while (uVar22 != 0);
                    }
                    puVar33 = (undefined1 *)((ulong)puVar1 & 0xffffffffffffffe0);
                    if ((((ulong)(puVar30 + lVar48 + -0x20) >> 5) + 1 & 1) != 0) {
                      puVar2 = (undefined4 *)(puVar23 + lVar36);
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      uVar7 = puVar2[2];
                      uVar8 = puVar2[3];
                      uVar4 = *(undefined8 *)(puVar23 + lVar36 + 0x10);
                      uVar9 = *(undefined8 *)((long)(puVar23 + lVar36 + 0x10) + 8);
                      uVar10 = *(undefined8 *)((long)(puVar17 + lVar36) + 8);
                      uVar11 = *(undefined8 *)(puVar17 + lVar36 + 0x10);
                      uVar12 = *(undefined8 *)((long)(puVar17 + lVar36 + 0x10) + 8);
                      *(undefined8 *)(puVar23 + lVar36) = *(undefined8 *)(puVar17 + lVar36);
                      *(undefined8 *)((long)(puVar23 + lVar36) + 8) = uVar10;
                      *(undefined8 *)(puVar23 + lVar36 + 0x10) = uVar11;
                      *(undefined8 *)((long)(puVar23 + lVar36 + 0x10) + 8) = uVar12;
                      puVar2 = (undefined4 *)(puVar17 + lVar36);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      puVar2[2] = uVar7;
                      puVar2[3] = uVar8;
                      *(undefined8 *)(puVar17 + lVar36 + 0x10) = uVar4;
                      *(undefined8 *)((long)(puVar17 + lVar36 + 0x10) + 8) = uVar9;
                    }
                    if (puVar1 == puVar33) goto LAB_003ec774;
                    if (((ulong)puVar1 & 0x18) == 0) {
                      puVar26 = puVar17 + (long)puVar33;
                      puVar37 = puVar23 + (long)puVar33;
                      goto LAB_003eca20;
                    }
                  }
                  puVar26 = (undefined1 *)((ulong)puVar1 & 0xfffffffffffffff8);
                  puVar37 = puVar23 + (long)puVar26;
                  do {
                    uVar4 = *(undefined8 *)(puVar32 + (long)puVar33);
                    *(undefined8 *)(puVar32 + (long)puVar33) =
                         *(undefined8 *)(puVar17 + (long)puVar33);
                    *(undefined8 *)(puVar17 + (long)puVar33) = uVar4;
                    puVar33 = puVar33 + 8;
                  } while ((undefined1 *)((ulong)(puVar19 + local_90) & 0xfffffffffffffff8) !=
                           puVar33);
                  if (puVar1 == puVar26) goto LAB_003ec774;
                  puVar26 = puVar17 + (long)puVar26;
                }
LAB_003eca20:
                do {
                  uVar3 = *puVar37;
                  *puVar37 = *puVar26;
                  *puVar26 = uVar3;
                  puVar37 = puVar37 + 1;
                  puVar26 = puVar26 + 1;
                } while (puVar37 < puVar43);
              }
LAB_003ec774:
              lVar29 = lVar29 + 1;
              puVar45 = puVar45 + lVar18;
              puVar20 = puVar20 + -param_3;
              puVar46 = puVar46 + -param_3;
              lVar47 = lVar47 + param_3;
              local_90 = local_90 + param_3;
              puVar43 = puVar23;
              puVar33 = puVar17;
              if (puVar23 <= puVar35) goto joined_r0x003ecc60;
            }
            puVar17 = puVar33;
            if (-1 < iVar15) goto LAB_003ec774;
            if (puVar23 <= puVar35) goto LAB_003ecc57;
            puVar24 = puVar35 + param_3;
            puVar46 = puVar35 + 1;
            if (puVar35 + 1 < puVar24) {
              puVar46 = puVar24;
            }
            uVar22 = (long)puVar46 - (long)puVar35;
            puVar20 = puVar23;
            puVar46 = puVar35;
            if (uVar22 < 8) goto LAB_003ecc40;
            if (uVar22 < 0x20) {
              uVar25 = 0;
              goto LAB_003ecbb7;
            }
            uVar25 = uVar22 & 0xffffffffffffffe0;
            if (uVar25 - 0x20 == 0) {
              lVar29 = 0;
              goto LAB_003ecb7e;
            }
            puVar46 = puVar41;
            if (puVar41 < puVar42) {
              puVar46 = puVar42;
            }
            uVar31 = (((ulong)(puVar46 + lVar44) & 0xffffffffffffffe0) - 0x20 >> 5) + 1 &
                     0xfffffffffffffffe;
            lVar29 = 0;
            do {
              uVar4 = *(undefined8 *)(puVar35 + lVar29);
              uVar9 = *(undefined8 *)((long)(puVar35 + lVar29) + 8);
              uVar10 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
              uVar11 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
              uVar12 = *(undefined8 *)((long)(puVar45 + lVar29 + -0x30) + 8);
              uVar13 = *(undefined8 *)(puVar45 + lVar29 + -0x20);
              uVar14 = *(undefined8 *)((long)(puVar45 + lVar29 + -0x20) + 8);
              *(undefined8 *)(puVar35 + lVar29) = *(undefined8 *)(puVar45 + lVar29 + -0x30);
              *(undefined8 *)((long)(puVar35 + lVar29) + 8) = uVar12;
              *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar13;
              *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar14;
              *(undefined8 *)(puVar45 + lVar29 + -0x30) = uVar4;
              *(undefined8 *)((long)(puVar45 + lVar29 + -0x30) + 8) = uVar9;
              *(undefined8 *)(puVar45 + lVar29 + -0x20) = uVar10;
              *(undefined8 *)((long)(puVar45 + lVar29 + -0x20) + 8) = uVar11;
              puVar2 = (undefined4 *)(puVar35 + lVar29 + 0x20);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              uVar4 = *(undefined8 *)(puVar35 + lVar29 + 0x30);
              uVar9 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8);
              uVar10 = *(undefined8 *)((long)(puVar45 + lVar29 + -0x10) + 8);
              uVar11 = *(undefined8 *)(puVar45 + lVar29);
              uVar12 = *(undefined8 *)((long)(puVar45 + lVar29) + 8);
              *(undefined8 *)(puVar35 + lVar29 + 0x20) = *(undefined8 *)(puVar45 + lVar29 + -0x10);
              *(undefined8 *)((long)(puVar35 + lVar29 + 0x20) + 8) = uVar10;
              *(undefined8 *)(puVar35 + lVar29 + 0x30) = uVar11;
              *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8) = uVar12;
              puVar2 = (undefined4 *)(puVar45 + lVar29 + -0x10);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              *(undefined8 *)(puVar45 + lVar29) = uVar4;
              *(undefined8 *)((long)(puVar45 + lVar29) + 8) = uVar9;
              lVar29 = lVar29 + 0x40;
              uVar31 = uVar31 - 2;
            } while (uVar31 != 0);
            if (((uVar25 - 0x20 >> 5) + 1 & 1) != 0) {
LAB_003ecb7e:
              puVar2 = (undefined4 *)(puVar35 + lVar29);
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              uVar4 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
              uVar9 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
              uVar10 = *(undefined8 *)((long)(puVar23 + lVar29) + 8);
              uVar11 = *(undefined8 *)(puVar23 + lVar29 + 0x10);
              uVar12 = *(undefined8 *)((long)(puVar23 + lVar29 + 0x10) + 8);
              *(undefined8 *)(puVar35 + lVar29) = *(undefined8 *)(puVar23 + lVar29);
              *(undefined8 *)((long)(puVar35 + lVar29) + 8) = uVar10;
              *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar11;
              *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar12;
              puVar2 = (undefined4 *)(puVar23 + lVar29);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              *(undefined8 *)(puVar23 + lVar29 + 0x10) = uVar4;
              *(undefined8 *)((long)(puVar23 + lVar29 + 0x10) + 8) = uVar9;
            }
            if (uVar22 != uVar25) {
              if ((uVar22 & 0x18) == 0) {
                puVar20 = puVar23 + uVar25;
                puVar46 = puVar35 + uVar25;
              }
              else {
LAB_003ecbb7:
                uVar31 = uVar22 & 0xfffffffffffffff8;
                if (puVar41 < puVar42) {
                  puVar41 = puVar42;
                }
                puVar46 = puVar35 + uVar31;
                do {
                  uVar4 = *(undefined8 *)(puVar35 + uVar25);
                  *(undefined8 *)(puVar35 + uVar25) = *(undefined8 *)(puVar32 + uVar25);
                  *(undefined8 *)(puVar32 + uVar25) = uVar4;
                  uVar25 = uVar25 + 8;
                } while (((ulong)(puVar41 + lVar44) & 0xfffffffffffffff8) != uVar25);
                if (uVar22 == uVar31) goto LAB_003ecc57;
                puVar20 = puVar23 + uVar31;
              }
LAB_003ecc40:
              do {
                uVar3 = *puVar46;
                *puVar46 = *puVar20;
                *puVar20 = uVar3;
                puVar46 = puVar46 + 1;
                puVar20 = puVar20 + 1;
              } while (puVar46 < puVar24);
            }
LAB_003ecc57:
            puVar35 = puVar35 + param_3;
joined_r0x003ecc60:
            puVar24 = puVar23;
            if (puVar23 <= puVar35) break;
            goto LAB_003ec4de;
          }
        } while (puVar35 < puVar24);
      }
      uVar25 = (long)puVar24 - (long)puVar28;
      uVar22 = (long)puVar28 - (long)param_1;
      if ((uVar22 != 0) && (uVar25 != 0)) {
        if (uVar25 < uVar22) {
          if ((long)uVar25 < 1) goto LAB_003ed000;
          puVar35 = puVar24 + (long)param_1 + -(long)puVar28;
          if (puVar24 + (long)param_1 + -(long)puVar28 <= param_1 + 1) {
            puVar35 = param_1 + 1;
          }
          puVar28 = param_1 + uVar22;
          uVar31 = (long)puVar35 - (long)param_1;
          if (uVar31 < 8) {
            puVar35 = param_1;
          }
          else {
            if (uVar31 < 0x20) {
              uVar40 = 0;
            }
            else {
              uVar40 = uVar31 & 0xffffffffffffffe0;
              uVar21 = (uVar40 - 0x20 >> 5) + 1;
              if (uVar40 - 0x20 == 0) {
                lVar44 = 0;
LAB_003ecdcc:
                uVar4 = *(undefined8 *)(param_1 + lVar44);
                uVar9 = *(undefined8 *)((long)(param_1 + lVar44) + 8);
                uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x10);
                uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8);
                uVar12 = *(undefined8 *)((long)(puVar28 + lVar44) + 8);
                uVar13 = *(undefined8 *)(puVar28 + lVar44 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar28 + lVar44 + 0x10) + 8);
                *(undefined8 *)(param_1 + lVar44) = *(undefined8 *)(puVar28 + lVar44);
                *(undefined8 *)((long)(param_1 + lVar44) + 8) = uVar12;
                *(undefined8 *)(param_1 + lVar44 + 0x10) = uVar13;
                *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8) = uVar14;
                *(undefined8 *)(puVar28 + lVar44) = uVar4;
                *(undefined8 *)((long)(puVar28 + lVar44) + 8) = uVar9;
                *(undefined8 *)(puVar28 + lVar44 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar28 + lVar44 + 0x10) + 8) = uVar11;
              }
              else {
                uVar38 = uVar21 & 0xffffffffffffffe;
                lVar44 = 0;
                do {
                  uVar4 = *(undefined8 *)(param_1 + lVar44);
                  uVar9 = *(undefined8 *)((long)(param_1 + lVar44) + 8);
                  uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x10);
                  uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8);
                  uVar12 = *(undefined8 *)((long)(param_1 + lVar44 + uVar22) + 8);
                  uVar13 = *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x10);
                  uVar14 = *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x10) + 8);
                  *(undefined8 *)(param_1 + lVar44) = *(undefined8 *)(param_1 + lVar44 + uVar22);
                  *(undefined8 *)((long)(param_1 + lVar44) + 8) = uVar12;
                  *(undefined8 *)(param_1 + lVar44 + 0x10) = uVar13;
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8) = uVar14;
                  *(undefined8 *)(param_1 + lVar44 + uVar22) = uVar4;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar22) + 8) = uVar9;
                  *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x10) = uVar10;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x10) + 8) = uVar11;
                  uVar4 = *(undefined8 *)(param_1 + lVar44 + 0x20);
                  uVar9 = *(undefined8 *)((long)(param_1 + lVar44 + 0x20) + 8);
                  uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x30);
                  uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x30) + 8);
                  uVar12 = *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x20) + 8);
                  uVar13 = *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x30);
                  uVar14 = *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x30) + 8);
                  *(undefined8 *)(param_1 + lVar44 + 0x20) =
                       *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x20);
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x20) + 8) = uVar12;
                  *(undefined8 *)(param_1 + lVar44 + 0x30) = uVar13;
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x30) + 8) = uVar14;
                  *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x20) = uVar4;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x20) + 8) = uVar9;
                  *(undefined8 *)(param_1 + lVar44 + uVar22 + 0x30) = uVar10;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar22 + 0x30) + 8) = uVar11;
                  lVar44 = lVar44 + 0x40;
                  uVar38 = uVar38 - 2;
                } while (uVar38 != 0);
                if ((uVar21 & 1) != 0) goto LAB_003ecdcc;
              }
              if (uVar31 == uVar40) goto LAB_003ed000;
              if ((uVar31 & 0x18) == 0) {
                puVar28 = puVar28 + uVar40;
                puVar35 = param_1 + uVar40;
                goto LAB_003ecfac;
              }
            }
            uVar22 = uVar31 & 0xfffffffffffffff8;
            puVar35 = param_1 + uVar22;
            do {
              uVar4 = *(undefined8 *)(param_1 + uVar40);
              *(undefined8 *)(param_1 + uVar40) = *(undefined8 *)(puVar28 + uVar40);
              *(undefined8 *)(puVar28 + uVar40) = uVar4;
              uVar40 = uVar40 + 8;
            } while (uVar22 != uVar40);
            if (uVar31 == uVar22) goto LAB_003ed000;
            puVar28 = puVar28 + uVar22;
          }
LAB_003ecfac:
          do {
            uVar3 = *puVar35;
            *puVar35 = *puVar28;
            *puVar28 = uVar3;
            puVar35 = puVar35 + 1;
            puVar28 = puVar28 + 1;
          } while (puVar35 < param_1 + uVar25);
        }
        else {
          if ((long)uVar22 < 1) goto LAB_003ed000;
          puVar35 = param_1 + 1;
          if (param_1 + 1 < puVar28) {
            puVar35 = puVar28;
          }
          puVar28 = param_1 + uVar25;
          uVar31 = (long)puVar35 - (long)param_1;
          if (uVar31 < 8) {
            puVar35 = param_1;
          }
          else {
            if (uVar31 < 0x20) {
              uVar40 = 0;
            }
            else {
              uVar40 = uVar31 & 0xffffffffffffffe0;
              uVar21 = (uVar40 - 0x20 >> 5) + 1;
              if (uVar40 - 0x20 == 0) {
                lVar44 = 0;
LAB_003ecef6:
                uVar4 = *(undefined8 *)(param_1 + lVar44);
                uVar9 = *(undefined8 *)((long)(param_1 + lVar44) + 8);
                uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x10);
                uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8);
                uVar12 = *(undefined8 *)((long)(puVar28 + lVar44) + 8);
                uVar13 = *(undefined8 *)(puVar28 + lVar44 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar28 + lVar44 + 0x10) + 8);
                *(undefined8 *)(param_1 + lVar44) = *(undefined8 *)(puVar28 + lVar44);
                *(undefined8 *)((long)(param_1 + lVar44) + 8) = uVar12;
                *(undefined8 *)(param_1 + lVar44 + 0x10) = uVar13;
                *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8) = uVar14;
                *(undefined8 *)(puVar28 + lVar44) = uVar4;
                *(undefined8 *)((long)(puVar28 + lVar44) + 8) = uVar9;
                *(undefined8 *)(puVar28 + lVar44 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar28 + lVar44 + 0x10) + 8) = uVar11;
              }
              else {
                uVar38 = uVar21 & 0xffffffffffffffe;
                lVar44 = 0;
                do {
                  uVar4 = *(undefined8 *)(param_1 + lVar44);
                  uVar9 = *(undefined8 *)((long)(param_1 + lVar44) + 8);
                  uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x10);
                  uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8);
                  uVar12 = *(undefined8 *)((long)(param_1 + lVar44 + uVar25) + 8);
                  uVar13 = *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x10);
                  uVar14 = *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x10) + 8);
                  *(undefined8 *)(param_1 + lVar44) = *(undefined8 *)(param_1 + lVar44 + uVar25);
                  *(undefined8 *)((long)(param_1 + lVar44) + 8) = uVar12;
                  *(undefined8 *)(param_1 + lVar44 + 0x10) = uVar13;
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x10) + 8) = uVar14;
                  *(undefined8 *)(param_1 + lVar44 + uVar25) = uVar4;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar25) + 8) = uVar9;
                  *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x10) = uVar10;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x10) + 8) = uVar11;
                  uVar4 = *(undefined8 *)(param_1 + lVar44 + 0x20);
                  uVar9 = *(undefined8 *)((long)(param_1 + lVar44 + 0x20) + 8);
                  uVar10 = *(undefined8 *)(param_1 + lVar44 + 0x30);
                  uVar11 = *(undefined8 *)((long)(param_1 + lVar44 + 0x30) + 8);
                  uVar12 = *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x20) + 8);
                  uVar13 = *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x30);
                  uVar14 = *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x30) + 8);
                  *(undefined8 *)(param_1 + lVar44 + 0x20) =
                       *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x20);
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x20) + 8) = uVar12;
                  *(undefined8 *)(param_1 + lVar44 + 0x30) = uVar13;
                  *(undefined8 *)((long)(param_1 + lVar44 + 0x30) + 8) = uVar14;
                  *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x20) = uVar4;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x20) + 8) = uVar9;
                  *(undefined8 *)(param_1 + lVar44 + uVar25 + 0x30) = uVar10;
                  *(undefined8 *)((long)(param_1 + lVar44 + uVar25 + 0x30) + 8) = uVar11;
                  lVar44 = lVar44 + 0x40;
                  uVar38 = uVar38 - 2;
                } while (uVar38 != 0);
                if ((uVar21 & 1) != 0) goto LAB_003ecef6;
              }
              if (uVar31 == uVar40) goto LAB_003ed000;
              if ((uVar31 & 0x18) == 0) {
                puVar28 = puVar28 + uVar40;
                puVar35 = param_1 + uVar40;
                goto LAB_003ecfd7;
              }
            }
            uVar21 = uVar31 & 0xfffffffffffffff8;
            puVar35 = param_1 + uVar21;
            do {
              uVar4 = *(undefined8 *)(param_1 + uVar40);
              *(undefined8 *)(param_1 + uVar40) = *(undefined8 *)(puVar28 + uVar40);
              *(undefined8 *)(puVar28 + uVar40) = uVar4;
              uVar40 = uVar40 + 8;
            } while (uVar21 != uVar40);
            if (uVar31 == uVar21) goto LAB_003ed000;
            puVar28 = puVar28 + uVar21;
          }
LAB_003ecfd7:
          do {
            uVar3 = *puVar35;
            *puVar35 = *puVar28;
            *puVar28 = uVar3;
            puVar35 = puVar35 + 1;
            puVar28 = puVar28 + 1;
          } while (puVar35 < param_1 + uVar22);
        }
      }
LAB_003ed000:
      uVar22 = (long)puVar17 - (long)puVar24;
      if ((uVar22 != 0) && (uVar31 = (long)puVar16 - (long)puVar17, uVar31 != 0)) {
        if (uVar31 < uVar22) {
          if ((long)uVar31 < 1) goto LAB_003ed360;
          puVar28 = puVar24 + (long)puVar16 + -(long)puVar17;
          if (puVar24 + (long)puVar16 + -(long)puVar17 <= puVar24 + 1) {
            puVar28 = puVar24 + 1;
          }
          puVar17 = puVar24 + uVar22;
          uVar40 = (long)puVar28 - (long)puVar24;
          if (uVar40 < 8) {
            puVar28 = puVar24;
          }
          else {
            if (uVar40 < 0x20) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar40 & 0xffffffffffffffe0;
              uVar38 = (uVar21 - 0x20 >> 5) + 1;
              if (uVar21 - 0x20 == 0) {
                lVar44 = 0;
LAB_003ed146:
                uVar4 = *(undefined8 *)(puVar24 + lVar44);
                uVar9 = *(undefined8 *)((long)(puVar24 + lVar44) + 8);
                uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x10);
                uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8);
                uVar12 = *(undefined8 *)((long)(puVar17 + lVar44) + 8);
                uVar13 = *(undefined8 *)(puVar17 + lVar44 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar17 + lVar44 + 0x10) + 8);
                *(undefined8 *)(puVar24 + lVar44) = *(undefined8 *)(puVar17 + lVar44);
                *(undefined8 *)((long)(puVar24 + lVar44) + 8) = uVar12;
                *(undefined8 *)(puVar24 + lVar44 + 0x10) = uVar13;
                *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8) = uVar14;
                *(undefined8 *)(puVar17 + lVar44) = uVar4;
                *(undefined8 *)((long)(puVar17 + lVar44) + 8) = uVar9;
                *(undefined8 *)(puVar17 + lVar44 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar17 + lVar44 + 0x10) + 8) = uVar11;
              }
              else {
                uVar27 = uVar38 & 0xffffffffffffffe;
                lVar44 = 0;
                do {
                  uVar4 = *(undefined8 *)(puVar24 + lVar44);
                  uVar9 = *(undefined8 *)((long)(puVar24 + lVar44) + 8);
                  uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x10);
                  uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8);
                  uVar12 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar22) + 8);
                  uVar13 = *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x10);
                  uVar14 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x10) + 8);
                  *(undefined8 *)(puVar24 + lVar44) = *(undefined8 *)(puVar24 + lVar44 + uVar22);
                  *(undefined8 *)((long)(puVar24 + lVar44) + 8) = uVar12;
                  *(undefined8 *)(puVar24 + lVar44 + 0x10) = uVar13;
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8) = uVar14;
                  *(undefined8 *)(puVar24 + lVar44 + uVar22) = uVar4;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar22) + 8) = uVar9;
                  *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x10) = uVar10;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x10) + 8) = uVar11;
                  uVar4 = *(undefined8 *)(puVar24 + lVar44 + 0x20);
                  uVar9 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x20) + 8);
                  uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x30);
                  uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x30) + 8);
                  uVar12 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x20) + 8);
                  uVar13 = *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x30);
                  uVar14 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x30) + 8);
                  *(undefined8 *)(puVar24 + lVar44 + 0x20) =
                       *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x20);
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x20) + 8) = uVar12;
                  *(undefined8 *)(puVar24 + lVar44 + 0x30) = uVar13;
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x30) + 8) = uVar14;
                  *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x20) = uVar4;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x20) + 8) = uVar9;
                  *(undefined8 *)(puVar24 + lVar44 + uVar22 + 0x30) = uVar10;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar22 + 0x30) + 8) = uVar11;
                  lVar44 = lVar44 + 0x40;
                  uVar27 = uVar27 - 2;
                } while (uVar27 != 0);
                if ((uVar38 & 1) != 0) goto LAB_003ed146;
              }
              if (uVar40 == uVar21) goto LAB_003ed360;
              if ((uVar40 & 0x18) == 0) {
                puVar17 = puVar17 + uVar21;
                puVar28 = puVar24 + uVar21;
                goto LAB_003ed2ff;
              }
            }
            uVar38 = uVar40 & 0xfffffffffffffff8;
            puVar28 = puVar24 + uVar38;
            do {
              uVar4 = *(undefined8 *)(puVar24 + uVar21);
              *(undefined8 *)(puVar24 + uVar21) = *(undefined8 *)(puVar17 + uVar21);
              *(undefined8 *)(puVar17 + uVar21) = uVar4;
              uVar21 = uVar21 + 8;
            } while (uVar38 != uVar21);
            if (uVar40 == uVar38) goto LAB_003ed360;
            puVar17 = puVar17 + uVar38;
          }
LAB_003ed2ff:
          do {
            uVar3 = *puVar28;
            *puVar28 = *puVar17;
            *puVar17 = uVar3;
            puVar28 = puVar28 + 1;
            puVar17 = puVar17 + 1;
          } while (puVar28 < puVar24 + uVar31);
        }
        else {
          if ((long)uVar22 < 1) goto LAB_003ed360;
          puVar28 = puVar24 + 1;
          if (puVar24 + 1 < puVar17) {
            puVar28 = puVar17;
          }
          puVar17 = puVar24 + uVar31;
          uVar40 = (long)puVar28 - (long)puVar24;
          if (uVar40 < 8) {
            puVar28 = puVar24;
          }
          else {
            if (uVar40 < 0x20) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar40 & 0xffffffffffffffe0;
              uVar38 = (uVar21 - 0x20 >> 5) + 1;
              if (uVar21 - 0x20 == 0) {
                lVar44 = 0;
LAB_003ed266:
                uVar4 = *(undefined8 *)(puVar24 + lVar44);
                uVar9 = *(undefined8 *)((long)(puVar24 + lVar44) + 8);
                uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x10);
                uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8);
                uVar12 = *(undefined8 *)((long)(puVar17 + lVar44) + 8);
                uVar13 = *(undefined8 *)(puVar17 + lVar44 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar17 + lVar44 + 0x10) + 8);
                *(undefined8 *)(puVar24 + lVar44) = *(undefined8 *)(puVar17 + lVar44);
                *(undefined8 *)((long)(puVar24 + lVar44) + 8) = uVar12;
                *(undefined8 *)(puVar24 + lVar44 + 0x10) = uVar13;
                *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8) = uVar14;
                *(undefined8 *)(puVar17 + lVar44) = uVar4;
                *(undefined8 *)((long)(puVar17 + lVar44) + 8) = uVar9;
                *(undefined8 *)(puVar17 + lVar44 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar17 + lVar44 + 0x10) + 8) = uVar11;
              }
              else {
                uVar27 = uVar38 & 0xffffffffffffffe;
                lVar44 = 0;
                do {
                  uVar4 = *(undefined8 *)(puVar24 + lVar44);
                  uVar9 = *(undefined8 *)((long)(puVar24 + lVar44) + 8);
                  uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x10);
                  uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8);
                  uVar12 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar31) + 8);
                  uVar13 = *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x10);
                  uVar14 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x10) + 8);
                  *(undefined8 *)(puVar24 + lVar44) = *(undefined8 *)(puVar24 + lVar44 + uVar31);
                  *(undefined8 *)((long)(puVar24 + lVar44) + 8) = uVar12;
                  *(undefined8 *)(puVar24 + lVar44 + 0x10) = uVar13;
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x10) + 8) = uVar14;
                  *(undefined8 *)(puVar24 + lVar44 + uVar31) = uVar4;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar31) + 8) = uVar9;
                  *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x10) = uVar10;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x10) + 8) = uVar11;
                  uVar4 = *(undefined8 *)(puVar24 + lVar44 + 0x20);
                  uVar9 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x20) + 8);
                  uVar10 = *(undefined8 *)(puVar24 + lVar44 + 0x30);
                  uVar11 = *(undefined8 *)((long)(puVar24 + lVar44 + 0x30) + 8);
                  uVar12 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x20) + 8);
                  uVar13 = *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x30);
                  uVar14 = *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x30) + 8);
                  *(undefined8 *)(puVar24 + lVar44 + 0x20) =
                       *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x20);
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x20) + 8) = uVar12;
                  *(undefined8 *)(puVar24 + lVar44 + 0x30) = uVar13;
                  *(undefined8 *)((long)(puVar24 + lVar44 + 0x30) + 8) = uVar14;
                  *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x20) = uVar4;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x20) + 8) = uVar9;
                  *(undefined8 *)(puVar24 + lVar44 + uVar31 + 0x30) = uVar10;
                  *(undefined8 *)((long)(puVar24 + lVar44 + uVar31 + 0x30) + 8) = uVar11;
                  lVar44 = lVar44 + 0x40;
                  uVar27 = uVar27 - 2;
                } while (uVar27 != 0);
                if ((uVar38 & 1) != 0) goto LAB_003ed266;
              }
              if (uVar40 == uVar21) goto LAB_003ed360;
              if ((uVar40 & 0x18) == 0) {
                puVar17 = puVar17 + uVar21;
                puVar28 = puVar24 + uVar21;
                goto LAB_003ed332;
              }
            }
            uVar31 = uVar40 & 0xfffffffffffffff8;
            puVar28 = puVar24 + uVar31;
            do {
              uVar4 = *(undefined8 *)(puVar24 + uVar21);
              *(undefined8 *)(puVar24 + uVar21) = *(undefined8 *)(puVar17 + uVar21);
              *(undefined8 *)(puVar17 + uVar21) = uVar4;
              uVar21 = uVar21 + 8;
            } while (uVar31 != uVar21);
            if (uVar40 == uVar31) goto LAB_003ed360;
            puVar17 = puVar17 + uVar31;
          }
LAB_003ed332:
          do {
            uVar3 = *puVar28;
            *puVar28 = *puVar17;
            *puVar17 = uVar3;
            puVar28 = puVar28 + 1;
            puVar17 = puVar17 + 1;
          } while (puVar28 < puVar24 + uVar22);
        }
      }
LAB_003ed360:
      if ((uVar25 | param_3) >> 0x20 == 0) {
        uVar25 = (uVar25 & 0xffffffff) / (param_3 & 0xffffffff);
      }
      else {
        uVar25 = uVar25 / param_3;
      }
      sort_r_simple<>(param_1,uVar25,param_3,param_4);
      param_1 = puVar16 + -uVar22;
      if ((uVar22 | param_3) >> 0x20 == 0) {
        param_2 = (uVar22 & 0xffffffff) / (param_3 & 0xffffffff);
        uVar22 = (uVar22 & 0xffffffff) % (param_3 & 0xffffffff);
      }
      else {
        param_2 = uVar22 / param_3;
        uVar22 = uVar22 % param_3;
      }
      puVar16 = param_1 + param_2 * param_3;
    } while (9 < param_2);
  }
  puVar17 = param_1 + param_3;
  if (puVar17 < puVar16) {
    lVar39 = -param_3;
    puVar28 = param_1 + param_3;
    puVar24 = param_1 + 1;
    local_f8 = param_1 + 0x30;
    local_88 = -0x20 - (long)param_1;
    local_90 = -(long)param_1;
    local_58 = 0;
    local_c8 = param_1;
    local_68 = puVar28;
    local_60 = puVar24;
    do {
      if (param_1 < puVar17) {
        lVar18 = local_58 * param_3;
        local_d8 = local_90;
        local_b0 = local_88;
        lVar34 = 0;
        puVar35 = puVar17;
        puVar41 = local_60;
        puVar42 = local_68;
        puVar45 = local_c8;
        puVar46 = local_f8;
        do {
          puVar32 = puVar41;
          if (puVar41 < puVar42) {
            puVar32 = puVar42;
          }
          lVar44 = lVar34 * param_3;
          puVar20 = puVar24 + (lVar18 - lVar44);
          if (puVar24 + (lVar18 - lVar44) < puVar28 + (lVar18 - lVar44)) {
            puVar20 = puVar28 + (lVar18 - lVar44);
          }
          puVar43 = puVar35 + lVar39;
          iVar15 = (*(code *)param_4)(puVar43,puVar35);
          if (iVar15 < 1) break;
          puVar33 = puVar20 + (lVar44 - (long)(param_1 + lVar18));
          puVar19 = puVar35;
          puVar30 = puVar43;
          if (puVar33 < (undefined1 *)0x8) {
LAB_003ec230:
            do {
              uVar3 = *puVar30;
              *puVar30 = *puVar19;
              *puVar19 = uVar3;
              puVar30 = puVar30 + 1;
              puVar19 = puVar19 + 1;
            } while (puVar30 < puVar35);
          }
          else if (puVar33 < (undefined1 *)0x20) {
            puVar23 = (undefined1 *)0x0;
LAB_003ec1c4:
            puVar19 = (undefined1 *)((ulong)puVar33 & 0xfffffffffffffff8);
            puVar30 = puVar43 + (long)puVar19;
            do {
              uVar4 = *(undefined8 *)(puVar45 + (long)puVar23);
              *(undefined8 *)(puVar45 + (long)puVar23) = *(undefined8 *)(puVar35 + (long)puVar23);
              *(undefined8 *)(puVar35 + (long)puVar23) = uVar4;
              puVar23 = puVar23 + 8;
            } while ((undefined1 *)((ulong)(puVar32 + local_d8) & 0xfffffffffffffff8) != puVar23);
            if (puVar33 != puVar19) {
              puVar19 = puVar35 + (long)puVar19;
              goto LAB_003ec230;
            }
          }
          else {
            if (puVar20 + (lVar44 - (long)(param_1 + lVar18)) + -0x20 < (undefined1 *)0x20) {
              lVar29 = 0;
            }
            else {
              uVar22 = ((ulong)(puVar32 + local_b0) >> 5) + 1 & 0xfffffffffffffffe;
              lVar29 = 0;
              do {
                uVar4 = *(undefined8 *)(puVar46 + lVar29 + -0x30);
                uVar9 = *(undefined8 *)((long)(puVar46 + lVar29 + -0x30) + 8);
                uVar10 = *(undefined8 *)(puVar46 + lVar29 + -0x20);
                uVar11 = *(undefined8 *)((long)(puVar46 + lVar29 + -0x20) + 8);
                uVar12 = *(undefined8 *)((long)(puVar35 + lVar29) + 8);
                uVar13 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
                *(undefined8 *)(puVar46 + lVar29 + -0x30) = *(undefined8 *)(puVar35 + lVar29);
                *(undefined8 *)((long)(puVar46 + lVar29 + -0x30) + 8) = uVar12;
                *(undefined8 *)(puVar46 + lVar29 + -0x20) = uVar13;
                *(undefined8 *)((long)(puVar46 + lVar29 + -0x20) + 8) = uVar14;
                *(undefined8 *)(puVar35 + lVar29) = uVar4;
                *(undefined8 *)((long)(puVar35 + lVar29) + 8) = uVar9;
                *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar11;
                uVar4 = *(undefined8 *)(puVar46 + lVar29 + -0x10);
                uVar9 = *(undefined8 *)((long)(puVar46 + lVar29 + -0x10) + 8);
                uVar10 = *(undefined8 *)(puVar46 + lVar29);
                uVar11 = *(undefined8 *)((long)(puVar46 + lVar29) + 8);
                uVar12 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x20) + 8);
                uVar13 = *(undefined8 *)(puVar35 + lVar29 + 0x30);
                uVar14 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8);
                *(undefined8 *)(puVar46 + lVar29 + -0x10) = *(undefined8 *)(puVar35 + lVar29 + 0x20)
                ;
                *(undefined8 *)((long)(puVar46 + lVar29 + -0x10) + 8) = uVar12;
                *(undefined8 *)(puVar46 + lVar29) = uVar13;
                *(undefined8 *)((long)(puVar46 + lVar29) + 8) = uVar14;
                *(undefined8 *)(puVar35 + lVar29 + 0x20) = uVar4;
                *(undefined8 *)((long)(puVar35 + lVar29 + 0x20) + 8) = uVar9;
                *(undefined8 *)(puVar35 + lVar29 + 0x30) = uVar10;
                *(undefined8 *)((long)(puVar35 + lVar29 + 0x30) + 8) = uVar11;
                lVar29 = lVar29 + 0x40;
                uVar22 = uVar22 - 2;
              } while (uVar22 != 0);
            }
            puVar23 = (undefined1 *)((ulong)puVar33 & 0xffffffffffffffe0);
            if ((((ulong)(puVar20 + (lVar44 - (long)(param_1 + lVar18)) + -0x20) >> 5) + 1 & 1) != 0
               ) {
              uVar4 = *(undefined8 *)(puVar43 + lVar29);
              uVar9 = *(undefined8 *)((long)(puVar43 + lVar29) + 8);
              uVar10 = *(undefined8 *)(puVar43 + lVar29 + 0x10);
              uVar11 = *(undefined8 *)((long)(puVar43 + lVar29 + 0x10) + 8);
              uVar12 = *(undefined8 *)((long)(puVar35 + lVar29) + 8);
              uVar13 = *(undefined8 *)(puVar35 + lVar29 + 0x10);
              uVar14 = *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8);
              *(undefined8 *)(puVar43 + lVar29) = *(undefined8 *)(puVar35 + lVar29);
              *(undefined8 *)((long)(puVar43 + lVar29) + 8) = uVar12;
              *(undefined8 *)(puVar43 + lVar29 + 0x10) = uVar13;
              *(undefined8 *)((long)(puVar43 + lVar29 + 0x10) + 8) = uVar14;
              *(undefined8 *)(puVar35 + lVar29) = uVar4;
              *(undefined8 *)((long)(puVar35 + lVar29) + 8) = uVar9;
              *(undefined8 *)(puVar35 + lVar29 + 0x10) = uVar10;
              *(undefined8 *)((long)(puVar35 + lVar29 + 0x10) + 8) = uVar11;
            }
            if (puVar33 != puVar23) {
              if (((ulong)puVar33 & 0x18) == 0) {
                puVar19 = puVar35 + (long)puVar23;
                puVar30 = puVar43 + (long)puVar23;
                goto LAB_003ec230;
              }
              goto LAB_003ec1c4;
            }
          }
          lVar34 = lVar34 + 1;
          puVar46 = puVar46 + lVar39;
          puVar42 = puVar42 + -param_3;
          puVar41 = puVar41 + -param_3;
          local_b0 = local_b0 + param_3;
          local_d8 = local_d8 + param_3;
          puVar45 = puVar45 + lVar39;
          puVar35 = puVar43;
        } while (param_1 < puVar43);
      }
      puVar17 = puVar17 + param_3;
      local_58 = local_58 + 1;
      local_f8 = local_f8 + param_3;
      local_68 = local_68 + param_3;
      local_60 = local_60 + param_3;
      local_88 = local_88 - param_3;
      local_90 = local_90 - param_3;
      local_c8 = local_c8 + param_3;
    } while (puVar17 < puVar16);
  }
  return;
}


