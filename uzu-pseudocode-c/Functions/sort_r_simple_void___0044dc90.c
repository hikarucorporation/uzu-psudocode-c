// Function : sort_r_simple<void*>
// Namespace: 
// Entry    : 0044dc90
// Prototype: void sort_r_simple<void*>(ushort * param_1, ulong param_2, long param_3)
// Body     : 0044dc90 - 0044ea9b


/* WARNING: Removing unreachable block (ram,0x0044e6cb) */
/* WARNING: Removing unreachable block (ram,0x0044e6ba) */
/* WARNING: Removing unreachable block (ram,0x0044ea34) */
/* WARNING: Removing unreachable block (ram,0x0044ea23) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void sort_r_simple<void*>(void*, unsigned long, unsigned long, int (*)(void const*, void const*,
   void*), void*) */

void __cdecl sort_r_simple<void*>(ushort *param_1,ulong param_2,long param_3)

{
  uint *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ushort *puVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ushort *puVar23;
  ulong uVar24;
  ushort *puVar25;
  ushort *puVar26;
  long lVar27;
  ulong uVar28;
  char *pcVar29;
  ulong uVar30;
  char *pcVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ushort *puVar36;
  ushort *local_40;
  ushort *local_38;
  
  local_40 = param_1 + param_2;
  puVar23 = param_1;
  if (9 < param_2) {
    uVar30 = param_2 * 2;
    do {
      puVar23 = param_1 + 1;
      puVar25 = (ushort *)((param_2 & 0xfffffffffffffffe) + (long)param_1);
      puVar36 = (ushort *)((uVar30 - 4) + (long)param_1);
      iVar20 = OT::post::accelerator_t::cmp_gids(puVar23,puVar25,param_3);
      if (iVar20 < 1) {
        puVar26 = puVar23;
      }
      else {
        puVar26 = puVar25;
        puVar25 = puVar23;
      }
      iVar20 = OT::post::accelerator_t::cmp_gids(puVar25,puVar36,param_3);
      if (0 < iVar20) {
        iVar20 = OT::post::accelerator_t::cmp_gids(puVar26,puVar36,param_3);
        puVar25 = puVar36;
        if (0 < iVar20) {
          puVar25 = puVar26;
        }
      }
      puVar23 = (ushort *)((long)param_1 + (uVar30 - 2));
      if (puVar25 != puVar23) {
        uVar17 = *puVar25;
        *(char *)puVar25 = (char)*puVar23;
        *(char *)puVar23 = (char)uVar17;
        uVar5 = *(undefined1 *)((long)puVar25 + 1);
        *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)param_1 + (uVar30 - 1));
        *(undefined1 *)((long)param_1 + (uVar30 - 1)) = uVar5;
      }
      puVar25 = puVar23;
      puVar36 = param_1;
      local_38 = puVar23;
      if (0 < (long)(uVar30 - 2)) {
        puVar26 = param_1;
LAB_0044df98:
        do {
          if (puVar25 <= puVar26) break;
          uVar17 = *puVar26;
          uVar35 = (ulong)uVar17;
          uVar16 = *puVar23;
          uVar30 = (ulong)uVar16;
          iVar20 = *(int *)(param_3 + 8);
          if (iVar20 != 0x20000) {
            if (iVar20 == 0x10000) {
              if (uVar16 < 0x102) goto LAB_0044dff9;
              goto LAB_0044e080;
            }
            pcVar29 = (char *)0x0;
            uVar30 = 0;
            if (iVar20 != 0x20000) goto LAB_0044e090;
LAB_0044e02c:
            uVar18 = (uint)uVar30;
            uVar16 = **(ushort **)(param_3 + 0x10);
            if ((ushort)(uVar16 << 8 | uVar16 >> 8) <= uVar17) goto LAB_0044e0a0;
            uVar17 = (*(ushort **)(param_3 + 0x10))[uVar35 + 1];
            uVar17 = uVar17 << 8 | uVar17 >> 8;
            if (uVar17 < 0x102) {
              uVar35 = (ulong)(uint)uVar17;
LAB_0044e0b0:
              pcVar31 = ".notdef" + *(uint *)(format1_names_msgidx + uVar35 * 4);
              uVar19 = ~*(uint *)(format1_names_msgidx + uVar35 * 4) +
                       *(int *)(format1_names_msgidx + uVar35 * 4 + 4);
              uVar18 = (uint)uVar30;
              if (uVar19 == uVar18) goto LAB_0044e0dc;
              goto LAB_0044e340;
            }
            uVar19 = uVar17 - 0x102;
            if (*(uint *)(param_3 + 0x1c) <= uVar19) goto LAB_0044e0a0;
            uVar35 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar19 * 4);
            bVar6 = *(byte *)(*(long *)(param_3 + 0x28) + uVar35);
            uVar19 = (uint)bVar6;
            pcVar31 = (char *)(*(long *)(param_3 + 0x28) + uVar35 + 1);
            if (bVar6 != uVar18) goto LAB_0044e340;
LAB_0044e0dc:
            if (uVar30 != 0) {
              iVar20 = memcmp(pcVar31,pcVar29,uVar30);
              goto joined_r0x0044e0ec;
            }
LAB_0044e350:
            if (puVar36 < puVar26) {
              uVar17 = *puVar36;
              *(char *)puVar36 = (char)*puVar26;
              *(char *)puVar26 = (char)uVar17;
              uVar5 = *(undefined1 *)((long)puVar36 + 1);
              *(undefined1 *)((long)puVar36 + 1) = *(undefined1 *)((long)puVar26 + 1);
              *(undefined1 *)((long)puVar26 + 1) = uVar5;
            }
            puVar36 = puVar36 + 1;
LAB_0044df94:
            puVar26 = puVar26 + 1;
            goto LAB_0044df98;
          }
          uVar7 = **(ushort **)(param_3 + 0x10);
          if (uVar16 < (ushort)(uVar7 << 8 | uVar7 >> 8)) {
            uVar16 = (*(ushort **)(param_3 + 0x10))[uVar30 + 1];
            uVar16 = uVar16 << 8 | uVar16 >> 8;
            if (uVar16 < 0x102) {
              uVar30 = (ulong)(uint)uVar16;
LAB_0044dff9:
              pcVar29 = ".notdef" + *(uint *)(format1_names_msgidx + uVar30 * 4);
              uVar30 = (ulong)(~*(uint *)(format1_names_msgidx + uVar30 * 4) +
                              *(int *)(format1_names_msgidx + uVar30 * 4 + 4));
            }
            else {
              uVar18 = uVar16 - 0x102;
              if (*(uint *)(param_3 + 0x1c) <= uVar18) goto LAB_0044e080;
              uVar33 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar18 * 4);
              uVar30 = (ulong)*(byte *)(*(long *)(param_3 + 0x28) + uVar33);
              pcVar29 = (char *)(*(long *)(param_3 + 0x28) + uVar33 + 1);
            }
          }
          else {
LAB_0044e080:
            pcVar29 = (char *)0x0;
            uVar30 = 0;
          }
          iVar20 = *(int *)(param_3 + 8);
          if (iVar20 == 0x20000) goto LAB_0044e02c;
LAB_0044e090:
          if ((iVar20 == 0x10000) && (uVar17 < 0x102)) goto LAB_0044e0b0;
LAB_0044e0a0:
          pcVar31 = (char *)0x0;
          uVar19 = 0;
          uVar18 = (uint)uVar30;
          if (uVar18 == 0) goto LAB_0044e0dc;
LAB_0044e340:
          iVar20 = uVar19 - uVar18;
joined_r0x0044e0ec:
          if (iVar20 < 1) {
            if (iVar20 == 0) goto LAB_0044e350;
            goto LAB_0044df94;
          }
          if (puVar26 < puVar25) {
            puVar15 = puVar25 + -1;
            do {
              while( true ) {
                puVar25 = puVar15;
                uVar17 = *puVar25;
                uVar35 = (ulong)uVar17;
                uVar16 = *puVar23;
                uVar30 = (ulong)uVar16;
                iVar20 = *(int *)(param_3 + 8);
                if (iVar20 != 0x20000) break;
                uVar7 = **(ushort **)(param_3 + 0x10);
                if (uVar16 < (ushort)(uVar7 << 8 | uVar7 >> 8)) {
                  uVar16 = (*(ushort **)(param_3 + 0x10))[uVar30 + 1];
                  uVar16 = uVar16 << 8 | uVar16 >> 8;
                  if (uVar16 < 0x102) {
                    uVar30 = (ulong)(uint)uVar16;
LAB_0044e179:
                    pcVar29 = ".notdef" + *(uint *)(format1_names_msgidx + uVar30 * 4);
                    uVar30 = (ulong)(~*(uint *)(format1_names_msgidx + uVar30 * 4) +
                                    *(int *)(format1_names_msgidx + uVar30 * 4 + 4));
                  }
                  else {
                    uVar18 = uVar16 - 0x102;
                    if (*(uint *)(param_3 + 0x1c) <= uVar18) goto LAB_0044e200;
                    uVar33 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar18 * 4);
                    uVar30 = (ulong)*(byte *)(*(long *)(param_3 + 0x28) + uVar33);
                    pcVar29 = (char *)(*(long *)(param_3 + 0x28) + uVar33 + 1);
                  }
                }
                else {
LAB_0044e200:
                  pcVar29 = (char *)0x0;
                  uVar30 = 0;
                }
                iVar20 = *(int *)(param_3 + 8);
                if (iVar20 == 0x20000) goto LAB_0044e1ac;
LAB_0044e210:
                if ((iVar20 == 0x10000) && (uVar17 < 0x102)) goto LAB_0044e220;
LAB_0044e290:
                pcVar31 = (char *)0x0;
                uVar19 = 0;
                uVar18 = (uint)uVar30;
                if (uVar18 != 0) goto LAB_0044e280;
LAB_0044e29a:
                if ((uVar30 != 0) && (iVar20 = memcmp(pcVar31,pcVar29,uVar30), iVar20 != 0))
                goto LAB_0044e110;
LAB_0044e2ac:
                puVar2 = local_38 + -1;
                if (puVar25 + 1 < local_38) {
                  uVar17 = *puVar25;
                  *(char *)puVar25 = (char)local_38[-1];
                  *(char *)(local_38 + -1) = (char)uVar17;
                  uVar5 = *(undefined1 *)((long)puVar25 + 1);
                  *(undefined1 *)((long)puVar25 + 1) = *(undefined1 *)((long)local_38 + -1);
                  *(undefined1 *)((long)local_38 + -1) = uVar5;
                }
                puVar15 = puVar25 + -1;
                local_38 = puVar2;
                if (puVar25 <= puVar26) goto LAB_0044e2f4;
              }
              if (iVar20 == 0x10000) {
                if (uVar16 < 0x102) goto LAB_0044e179;
                goto LAB_0044e200;
              }
              pcVar29 = (char *)0x0;
              uVar30 = 0;
              if (iVar20 != 0x20000) goto LAB_0044e210;
LAB_0044e1ac:
              uVar18 = (uint)uVar30;
              uVar16 = **(ushort **)(param_3 + 0x10);
              if ((ushort)(uVar16 << 8 | uVar16 >> 8) <= uVar17) goto LAB_0044e290;
              uVar17 = (*(ushort **)(param_3 + 0x10))[uVar35 + 1];
              uVar17 = uVar17 << 8 | uVar17 >> 8;
              if (uVar17 < 0x102) {
                uVar35 = (ulong)(uint)uVar17;
LAB_0044e220:
                pcVar31 = ".notdef" + *(uint *)(format1_names_msgidx + uVar35 * 4);
                uVar19 = ~*(uint *)(format1_names_msgidx + uVar35 * 4) +
                         *(int *)(format1_names_msgidx + uVar35 * 4 + 4);
                uVar18 = (uint)uVar30;
                if (uVar19 != uVar18) goto LAB_0044e280;
                goto LAB_0044e29a;
              }
              uVar19 = uVar17 - 0x102;
              if (*(uint *)(param_3 + 0x1c) <= uVar19) goto LAB_0044e290;
              uVar35 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar19 * 4);
              uVar19 = (uint)*(byte *)(*(long *)(param_3 + 0x28) + uVar35);
              pcVar31 = (char *)(*(long *)(param_3 + 0x28) + uVar35 + 1);
              if (uVar19 == uVar18) goto LAB_0044e29a;
LAB_0044e280:
              iVar20 = uVar19 - uVar18;
              if (iVar20 == 0) goto LAB_0044e2ac;
LAB_0044e110:
              if (iVar20 < 0) {
                if (puVar26 < puVar25) {
                  uVar17 = *puVar26;
                  *(char *)puVar26 = (char)*puVar25;
                  *(char *)puVar25 = (char)uVar17;
                  uVar5 = *(undefined1 *)((long)puVar26 + 1);
                  *(undefined1 *)((long)puVar26 + 1) = *(undefined1 *)((long)puVar25 + 1);
                  *(undefined1 *)((long)puVar25 + 1) = uVar5;
                }
                puVar26 = puVar26 + 1;
                if (puVar26 < puVar25) goto LAB_0044df98;
                goto LAB_0044e3c2;
              }
              puVar15 = puVar25 + -1;
            } while (puVar26 < puVar25);
          }
LAB_0044e2f4:
          if (puVar25 <= puVar26) break;
        } while( true );
      }
LAB_0044e3c2:
      uVar30 = (long)puVar25 - (long)puVar36;
      uVar35 = (long)puVar36 - (long)param_1;
      if ((uVar35 != 0) && (uVar30 != 0)) {
        if (uVar30 < uVar35) {
          if ((long)uVar30 < 1) goto LAB_0044e730;
          uVar33 = (long)((long)puVar25 + (long)param_1) - (long)puVar36;
          if (uVar33 <= (long)param_1 + 1U) {
            uVar33 = (long)param_1 + 1U;
          }
          puVar21 = (undefined1 *)((long)param_1 + uVar35);
          uVar33 = uVar33 - (long)param_1;
          if (uVar33 < 8) {
            puVar23 = param_1;
          }
          else {
            if (uVar33 < 0x20) {
              uVar34 = 0;
            }
            else {
              uVar34 = uVar33 & 0xffffffffffffffe0;
              uVar32 = (uVar34 - 0x20 >> 5) + 1;
              if (uVar34 - 0x20 == 0) {
                lVar27 = 0;
LAB_0044e50c:
                uVar8 = *(undefined8 *)((long)param_1 + lVar27);
                uVar9 = ((undefined8 *)((long)param_1 + lVar27))[1];
                puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = *(undefined8 *)((long)(puVar21 + lVar27) + 8);
                uVar13 = *(undefined8 *)(puVar21 + lVar27 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8);
                *(undefined8 *)((long)param_1 + lVar27) = *(undefined8 *)(puVar21 + lVar27);
                ((undefined8 *)((long)param_1 + lVar27))[1] = uVar12;
                puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                *puVar3 = uVar13;
                puVar3[1] = uVar14;
                *(undefined8 *)(puVar21 + lVar27) = uVar8;
                *(undefined8 *)((long)(puVar21 + lVar27) + 8) = uVar9;
                *(undefined8 *)(puVar21 + lVar27 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8) = uVar11;
              }
              else {
                uVar24 = uVar32 & 0xffffffffffffffe;
                lVar27 = 0;
                do {
                  uVar8 = *(undefined8 *)((long)param_1 + lVar27);
                  uVar9 = ((undefined8 *)((long)param_1 + lVar27))[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35);
                  uVar12 = puVar3[1];
                  puVar4 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x10);
                  uVar13 = *puVar4;
                  uVar14 = puVar4[1];
                  *(undefined8 *)((long)param_1 + lVar27) = *puVar3;
                  ((undefined8 *)((long)param_1 + lVar27))[1] = uVar12;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x10);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x20);
                  uVar8 = *puVar3;
                  uVar9 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x30);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar4 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x20);
                  uVar12 = puVar4[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x30);
                  uVar13 = *puVar3;
                  uVar14 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x20);
                  *puVar3 = *puVar4;
                  puVar3[1] = uVar12;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x30);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x20);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar35 + 0x30);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  lVar27 = lVar27 + 0x40;
                  uVar24 = uVar24 - 2;
                } while (uVar24 != 0);
                if ((uVar32 & 1) != 0) goto LAB_0044e50c;
              }
              if (uVar33 == uVar34) goto LAB_0044e730;
              if ((uVar33 & 0x18) == 0) {
                puVar21 = puVar21 + uVar34;
                puVar23 = (ushort *)(uVar34 + (long)param_1);
                goto LAB_0044e6db;
              }
            }
            uVar35 = uVar33 & 0xfffffffffffffff8;
            puVar23 = (ushort *)((long)param_1 + uVar35);
            do {
              uVar8 = *(undefined8 *)((long)param_1 + uVar34);
              *(undefined8 *)((long)param_1 + uVar34) = *(undefined8 *)(puVar21 + uVar34);
              *(undefined8 *)(puVar21 + uVar34) = uVar8;
              uVar34 = uVar34 + 8;
            } while (uVar35 != uVar34);
            if (uVar33 == uVar35) goto LAB_0044e730;
            puVar21 = puVar21 + uVar35;
          }
LAB_0044e6db:
          do {
            uVar17 = *puVar23;
            *(undefined1 *)puVar23 = *puVar21;
            *puVar21 = (char)uVar17;
            puVar23 = (ushort *)((long)puVar23 + 1);
            puVar21 = puVar21 + 1;
          } while (puVar23 < (ushort *)((long)param_1 + uVar30));
        }
        else {
          if ((long)uVar35 < 1) goto LAB_0044e730;
          puVar23 = (ushort *)((long)param_1 + 1U);
          if ((ushort *)((long)param_1 + 1U) < puVar36) {
            puVar23 = puVar36;
          }
          puVar21 = (undefined1 *)((long)param_1 + uVar30);
          uVar33 = (long)puVar23 - (long)param_1;
          if (uVar33 < 8) {
            puVar23 = param_1;
          }
          else {
            if (uVar33 < 0x20) {
              uVar34 = 0;
            }
            else {
              uVar34 = uVar33 & 0xffffffffffffffe0;
              uVar32 = (uVar34 - 0x20 >> 5) + 1;
              if (uVar34 - 0x20 == 0) {
                lVar27 = 0;
LAB_0044e62c:
                uVar8 = *(undefined8 *)((long)param_1 + lVar27);
                uVar9 = ((undefined8 *)((long)param_1 + lVar27))[1];
                puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = *(undefined8 *)((long)(puVar21 + lVar27) + 8);
                uVar13 = *(undefined8 *)(puVar21 + lVar27 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8);
                *(undefined8 *)((long)param_1 + lVar27) = *(undefined8 *)(puVar21 + lVar27);
                ((undefined8 *)((long)param_1 + lVar27))[1] = uVar12;
                puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                *puVar3 = uVar13;
                puVar3[1] = uVar14;
                *(undefined8 *)(puVar21 + lVar27) = uVar8;
                *(undefined8 *)((long)(puVar21 + lVar27) + 8) = uVar9;
                *(undefined8 *)(puVar21 + lVar27 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8) = uVar11;
              }
              else {
                uVar24 = uVar32 & 0xffffffffffffffe;
                lVar27 = 0;
                do {
                  uVar8 = *(undefined8 *)((long)param_1 + lVar27);
                  uVar9 = ((undefined8 *)((long)param_1 + lVar27))[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30);
                  uVar12 = puVar3[1];
                  puVar4 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x10);
                  uVar13 = *puVar4;
                  uVar14 = puVar4[1];
                  *(undefined8 *)((long)param_1 + lVar27) = *puVar3;
                  ((undefined8 *)((long)param_1 + lVar27))[1] = uVar12;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x10);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x10);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x20);
                  uVar8 = *puVar3;
                  uVar9 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x30);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar4 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x20);
                  uVar12 = puVar4[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x30);
                  uVar13 = *puVar3;
                  uVar14 = puVar3[1];
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x20);
                  *puVar3 = *puVar4;
                  puVar3[1] = uVar12;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + 0x30);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x20);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)param_1 + lVar27 + uVar30 + 0x30);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  lVar27 = lVar27 + 0x40;
                  uVar24 = uVar24 - 2;
                } while (uVar24 != 0);
                if ((uVar32 & 1) != 0) goto LAB_0044e62c;
              }
              if (uVar33 == uVar34) goto LAB_0044e730;
              if ((uVar33 & 0x18) == 0) {
                puVar21 = puVar21 + uVar34;
                puVar23 = (ushort *)(uVar34 + (long)param_1);
                goto LAB_0044e707;
              }
            }
            uVar32 = uVar33 & 0xfffffffffffffff8;
            puVar23 = (ushort *)(uVar32 + (long)param_1);
            do {
              uVar8 = *(undefined8 *)((long)param_1 + uVar34);
              *(undefined8 *)((long)param_1 + uVar34) = *(undefined8 *)(puVar21 + uVar34);
              *(undefined8 *)(puVar21 + uVar34) = uVar8;
              uVar34 = uVar34 + 8;
            } while (uVar32 != uVar34);
            if (uVar33 == uVar32) goto LAB_0044e730;
            puVar21 = puVar21 + uVar32;
          }
LAB_0044e707:
          do {
            uVar17 = *puVar23;
            *(undefined1 *)puVar23 = *puVar21;
            *puVar21 = (char)uVar17;
            puVar23 = (ushort *)((long)puVar23 + 1);
            puVar21 = puVar21 + 1;
          } while (puVar23 < (ushort *)(uVar35 + (long)param_1));
        }
      }
LAB_0044e730:
      uVar35 = (long)local_38 - (long)puVar25;
      if ((uVar35 != 0) && (uVar33 = (long)local_40 - (long)local_38, uVar33 != 0)) {
        if (uVar33 < uVar35) {
          if ((long)uVar33 < 1) goto LAB_0044dea0;
          puVar21 = (undefined1 *)((long)puVar25 + (long)local_40) + -(long)local_38;
          if ((undefined1 *)((long)puVar25 + (long)local_40) + -(long)local_38 <=
              (undefined1 *)((long)puVar25 + 1U)) {
            puVar21 = (undefined1 *)((long)puVar25 + 1U);
          }
          puVar22 = (undefined1 *)((long)puVar25 + uVar35);
          uVar34 = (long)puVar21 - (long)puVar25;
          if (uVar34 < 8) {
            puVar23 = puVar25;
          }
          else {
            if (uVar34 < 0x20) {
              uVar32 = 0;
            }
            else {
              uVar32 = uVar34 & 0xffffffffffffffe0;
              uVar24 = (uVar32 - 0x20 >> 5) + 1;
              if (uVar32 - 0x20 == 0) {
                lVar27 = 0;
LAB_0044e884:
                uVar8 = *(undefined8 *)((long)puVar25 + lVar27);
                uVar9 = ((undefined8 *)((long)puVar25 + lVar27))[1];
                puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = *(undefined8 *)((long)(puVar22 + lVar27) + 8);
                uVar13 = *(undefined8 *)(puVar22 + lVar27 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar22 + lVar27 + 0x10) + 8);
                *(undefined8 *)((long)puVar25 + lVar27) = *(undefined8 *)(puVar22 + lVar27);
                ((undefined8 *)((long)puVar25 + lVar27))[1] = uVar12;
                puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                *puVar3 = uVar13;
                puVar3[1] = uVar14;
                *(undefined8 *)(puVar22 + lVar27) = uVar8;
                *(undefined8 *)((long)(puVar22 + lVar27) + 8) = uVar9;
                *(undefined8 *)(puVar22 + lVar27 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar22 + lVar27 + 0x10) + 8) = uVar11;
              }
              else {
                uVar28 = uVar24 & 0xffffffffffffffe;
                lVar27 = 0;
                do {
                  uVar8 = *(undefined8 *)((long)puVar25 + lVar27);
                  uVar9 = ((undefined8 *)((long)puVar25 + lVar27))[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35);
                  uVar12 = puVar3[1];
                  puVar4 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x10);
                  uVar13 = *puVar4;
                  uVar14 = puVar4[1];
                  *(undefined8 *)((long)puVar25 + lVar27) = *puVar3;
                  ((undefined8 *)((long)puVar25 + lVar27))[1] = uVar12;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x10);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x20);
                  uVar8 = *puVar3;
                  uVar9 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x30);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar4 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x20);
                  uVar12 = puVar4[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x30);
                  uVar13 = *puVar3;
                  uVar14 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x20);
                  *puVar3 = *puVar4;
                  puVar3[1] = uVar12;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x30);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x20);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar35 + 0x30);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  lVar27 = lVar27 + 0x40;
                  uVar28 = uVar28 - 2;
                } while (uVar28 != 0);
                if ((uVar24 & 1) != 0) goto LAB_0044e884;
              }
              if (uVar34 == uVar32) goto LAB_0044dea0;
              if ((uVar34 & 0x18) == 0) {
                puVar22 = puVar22 + uVar32;
                puVar23 = (ushort *)(uVar32 + (long)puVar25);
                goto LAB_0044ea3f;
              }
            }
            uVar24 = uVar34 & 0xfffffffffffffff8;
            puVar23 = (ushort *)((long)puVar25 + uVar24);
            do {
              uVar8 = *(undefined8 *)((long)puVar25 + uVar32);
              *(undefined8 *)((long)puVar25 + uVar32) = *(undefined8 *)(puVar22 + uVar32);
              *(undefined8 *)(puVar22 + uVar32) = uVar8;
              uVar32 = uVar32 + 8;
            } while (uVar24 != uVar32);
            if (uVar34 == uVar24) goto LAB_0044dea0;
            puVar22 = puVar22 + uVar24;
          }
LAB_0044ea3f:
          do {
            uVar17 = *puVar23;
            *(undefined1 *)puVar23 = *puVar22;
            *puVar22 = (char)uVar17;
            puVar23 = (ushort *)((long)puVar23 + 1);
            puVar22 = puVar22 + 1;
          } while (puVar23 < (ushort *)((long)puVar25 + uVar33));
        }
        else {
          if ((long)uVar35 < 1) goto LAB_0044dea0;
          puVar23 = (ushort *)((long)puVar25 + 1U);
          if ((ushort *)((long)puVar25 + 1U) < local_38) {
            puVar23 = local_38;
          }
          puVar21 = (undefined1 *)((long)puVar25 + uVar33);
          uVar34 = (long)puVar23 - (long)puVar25;
          if (uVar34 < 8) {
            puVar23 = puVar25;
          }
          else {
            if (uVar34 < 0x20) {
              uVar32 = 0;
            }
            else {
              uVar32 = uVar34 & 0xffffffffffffffe0;
              uVar24 = (uVar32 - 0x20 >> 5) + 1;
              if (uVar32 - 0x20 == 0) {
                lVar27 = 0;
LAB_0044e9a4:
                uVar8 = *(undefined8 *)((long)puVar25 + lVar27);
                uVar9 = ((undefined8 *)((long)puVar25 + lVar27))[1];
                puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = *(undefined8 *)((long)(puVar21 + lVar27) + 8);
                uVar13 = *(undefined8 *)(puVar21 + lVar27 + 0x10);
                uVar14 = *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8);
                *(undefined8 *)((long)puVar25 + lVar27) = *(undefined8 *)(puVar21 + lVar27);
                ((undefined8 *)((long)puVar25 + lVar27))[1] = uVar12;
                puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                *puVar3 = uVar13;
                puVar3[1] = uVar14;
                *(undefined8 *)(puVar21 + lVar27) = uVar8;
                *(undefined8 *)((long)(puVar21 + lVar27) + 8) = uVar9;
                *(undefined8 *)(puVar21 + lVar27 + 0x10) = uVar10;
                *(undefined8 *)((long)(puVar21 + lVar27 + 0x10) + 8) = uVar11;
              }
              else {
                uVar28 = uVar24 & 0xffffffffffffffe;
                lVar27 = 0;
                do {
                  uVar8 = *(undefined8 *)((long)puVar25 + lVar27);
                  uVar9 = ((undefined8 *)((long)puVar25 + lVar27))[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33);
                  uVar12 = puVar3[1];
                  puVar4 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x10);
                  uVar13 = *puVar4;
                  uVar14 = puVar4[1];
                  *(undefined8 *)((long)puVar25 + lVar27) = *puVar3;
                  ((undefined8 *)((long)puVar25 + lVar27))[1] = uVar12;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x10);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x10);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x20);
                  uVar8 = *puVar3;
                  uVar9 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x30);
                  uVar10 = *puVar3;
                  uVar11 = puVar3[1];
                  puVar4 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x20);
                  uVar12 = puVar4[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x30);
                  uVar13 = *puVar3;
                  uVar14 = puVar3[1];
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x20);
                  *puVar3 = *puVar4;
                  puVar3[1] = uVar12;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + 0x30);
                  *puVar3 = uVar13;
                  puVar3[1] = uVar14;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x20);
                  *puVar3 = uVar8;
                  puVar3[1] = uVar9;
                  puVar3 = (undefined8 *)((long)puVar25 + lVar27 + uVar33 + 0x30);
                  *puVar3 = uVar10;
                  puVar3[1] = uVar11;
                  lVar27 = lVar27 + 0x40;
                  uVar28 = uVar28 - 2;
                } while (uVar28 != 0);
                if ((uVar24 & 1) != 0) goto LAB_0044e9a4;
              }
              if (uVar34 == uVar32) goto LAB_0044dea0;
              if ((uVar34 & 0x18) == 0) {
                puVar21 = puVar21 + uVar32;
                puVar23 = (ushort *)(uVar32 + (long)puVar25);
                goto LAB_0044ea75;
              }
            }
            uVar33 = uVar34 & 0xfffffffffffffff8;
            puVar23 = (ushort *)((long)puVar25 + uVar33);
            do {
              uVar8 = *(undefined8 *)((long)puVar25 + uVar32);
              *(undefined8 *)((long)puVar25 + uVar32) = *(undefined8 *)(puVar21 + uVar32);
              *(undefined8 *)(puVar21 + uVar32) = uVar8;
              uVar32 = uVar32 + 8;
            } while (uVar33 != uVar32);
            if (uVar34 == uVar33) goto LAB_0044dea0;
            puVar21 = puVar21 + uVar33;
          }
LAB_0044ea75:
          do {
            uVar17 = *puVar23;
            *(undefined1 *)puVar23 = *puVar21;
            *puVar21 = (char)uVar17;
            puVar23 = (ushort *)((long)puVar23 + 1);
            puVar21 = puVar21 + 1;
          } while (puVar23 < (ushort *)((long)puVar25 + uVar35));
        }
      }
LAB_0044dea0:
      sort_r_simple<void*>(param_1,uVar30 >> 1,param_3);
      param_1 = (ushort *)((long)local_40 - uVar35);
      param_2 = uVar35 >> 1;
      uVar30 = uVar35 & 0xfffffffffffffffe;
      local_40 = (ushort *)((long)param_1 + uVar30);
      puVar23 = param_1;
    } while (0x13 < uVar35);
  }
  do {
    do {
      param_1 = param_1 + 1;
      if (local_40 <= param_1) {
        return;
      }
    } while (param_1 <= puVar23);
    puVar25 = param_1;
    do {
      uVar17 = puVar25[-1];
      uVar35 = (ulong)uVar17;
      uVar16 = *puVar25;
      uVar30 = (ulong)uVar16;
      iVar20 = *(int *)(param_3 + 8);
      if (iVar20 == 0x20000) {
        uVar7 = **(ushort **)(param_3 + 0x10);
        if (uVar16 < (ushort)(uVar7 << 8 | uVar7 >> 8)) {
          uVar16 = (*(ushort **)(param_3 + 0x10))[uVar30 + 1];
          uVar16 = uVar16 << 8 | uVar16 >> 8;
          if (uVar16 < 0x102) {
            uVar30 = (ulong)(uint)uVar16;
            goto LAB_0044dd59;
          }
          uVar18 = uVar16 - 0x102;
          if (uVar18 < *(uint *)(param_3 + 0x1c)) {
            uVar30 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar18 * 4);
            uVar33 = (ulong)*(byte *)(*(long *)(param_3 + 0x28) + uVar30);
            pcVar29 = (char *)(*(long *)(param_3 + 0x28) + uVar30 + 1);
            goto LAB_0044ddd4;
          }
        }
LAB_0044ddd0:
        pcVar29 = (char *)0x0;
        uVar33 = 0;
LAB_0044ddd4:
        iVar20 = *(int *)(param_3 + 8);
        if (iVar20 != 0x20000) goto LAB_0044dde0;
LAB_0044dd7c:
        uVar18 = (uint)uVar33;
        uVar16 = **(ushort **)(param_3 + 0x10);
        if (uVar17 < (ushort)(uVar16 << 8 | uVar16 >> 8)) {
          uVar17 = (*(ushort **)(param_3 + 0x10))[uVar35 + 1];
          uVar17 = uVar17 << 8 | uVar17 >> 8;
          if (uVar17 < 0x102) {
            uVar35 = (ulong)(uint)uVar17;
            goto LAB_0044ddf0;
          }
          uVar19 = uVar17 - 0x102;
          if (*(uint *)(param_3 + 0x1c) <= uVar19) goto LAB_0044de50;
          uVar30 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar19 * 4);
          uVar19 = (uint)*(byte *)(*(long *)(param_3 + 0x28) + uVar30);
          pcVar31 = (char *)(*(long *)(param_3 + 0x28) + uVar30 + 1);
          if (uVar19 != uVar18) goto LAB_0044de40;
          goto LAB_0044de5a;
        }
LAB_0044de50:
        pcVar31 = (char *)0x0;
        uVar19 = 0;
        uVar18 = (uint)uVar33;
        if (uVar18 == 0) goto LAB_0044de5a;
LAB_0044de40:
        iVar20 = uVar19 - uVar18;
      }
      else {
        if (iVar20 == 0x10000) {
          if (0x101 < uVar16) goto LAB_0044ddd0;
LAB_0044dd59:
          pcVar29 = ".notdef" + *(uint *)(format1_names_msgidx + uVar30 * 4);
          uVar33 = (ulong)(~*(uint *)(format1_names_msgidx + uVar30 * 4) +
                          *(int *)(format1_names_msgidx + uVar30 * 4 + 4));
          goto LAB_0044ddd4;
        }
        pcVar29 = (char *)0x0;
        uVar33 = 0;
        if (iVar20 == 0x20000) goto LAB_0044dd7c;
LAB_0044dde0:
        if ((iVar20 != 0x10000) || (0x101 < uVar17)) goto LAB_0044de50;
LAB_0044ddf0:
        pcVar31 = ".notdef" + *(uint *)(format1_names_msgidx + uVar35 * 4);
        uVar19 = ~*(uint *)(format1_names_msgidx + uVar35 * 4) +
                 *(int *)(format1_names_msgidx + uVar35 * 4 + 4);
        uVar18 = (uint)uVar33;
        if (uVar19 != uVar18) goto LAB_0044de40;
LAB_0044de5a:
        if (uVar33 == 0) break;
        iVar20 = memcmp(pcVar31,pcVar29,uVar33);
      }
      if (iVar20 < 1) break;
      puVar1 = (uint *)(puVar25 + -1);
      *puVar1 = *puVar1 << 0x10 | *puVar1 >> 0x10;
      puVar25 = puVar25 + -1;
    } while (puVar23 < puVar25);
  } while( true );
}


