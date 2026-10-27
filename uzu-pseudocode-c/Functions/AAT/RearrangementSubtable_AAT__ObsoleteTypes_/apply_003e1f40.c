// Function : apply
// Namespace: AAT:RearrangementSubtable_AAT__ObsoleteTypes_
// Entry    : 003e1f40
// Prototype: undefined apply(RearrangementSubtable<AAT::ObsoleteTypes> * this, long param_1)
// Body     : 003e1f40 - 003e27ff


/* AAT::RearrangementSubtable<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*) const */

void __thiscall
AAT::RearrangementSubtable<AAT::ObsoleteTypes>::apply
          (RearrangementSubtable<AAT::ObsoleteTypes> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  hb_buffer_t hVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  hb_buffer_t *this_00;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint *puVar24;
  ushort uVar25;
  uint *puVar26;
  void *__src;
  uint *puVar27;
  void *__dest;
  int iVar28;
  ulong uVar29;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_70 [48];
  ushort *local_40 [2];
  
  StateTableDriver<AAT::ObsoleteTypes,void>::StateTableDriver
            ((StateTableDriver<AAT::ObsoleteTypes,void> *)local_40,this,*(long *)(param_1 + 0x18));
  uVar12 = local_40[0][2] << 8 | local_40[0][2] >> 8;
  uVar5 = *(ushort *)
           ((long)local_40[0] +
           (ulong)*(byte *)((long)local_40[0] + (ulong)uVar12 + 1) * 4 +
           (ulong)(ushort)(local_40[0][3] << 8 | local_40[0][3] >> 8));
  if (((int)((uint)(ushort)(uVar5 << 8 | uVar5 >> 8) - (uint)uVar12) /
       (int)(uint)(ushort)(*local_40[0] << 8 | *local_40[0] >> 8) != 0) ||
     ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
       ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
      ((*(ulong *)(param_1 + 0xa8) & *(ulong *)(param_1 + 0x90)) != 0)))) {
    this_00 = *(hb_buffer_t **)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x78);
    if ((lVar9 == 0) || (*(uint *)(lVar9 + 4) < 2)) {
      puVar24 = (uint *)0x0;
      *(undefined4 *)(this_00 + 0x5c) = 0;
      hVar4 = this_00[0x58];
    }
    else {
      puVar24 = *(uint **)(lVar9 + 8);
      *(undefined4 *)(this_00 + 0x5c) = 0;
      hVar4 = this_00[0x58];
    }
    if (hVar4 != (hb_buffer_t)0x0) {
      uVar17 = 0;
      uVar8 = 0;
      uVar11 = 0;
      iVar28 = 0;
      uVar13 = *(uint *)(this_00 + 0x60);
      uVar29 = 0;
      iVar15 = 0;
      if (puVar24 == (uint *)0x0) goto LAB_003e2150;
LAB_003e2030:
      iVar28 = iVar15;
      if (uVar17 < uVar13) {
        uVar14 = *(uint *)(*(long *)(this_00 + 0x70) + 8 + uVar29 * 0x14);
        puVar27 = puVar24 + 3;
        puVar26 = puVar24;
        do {
          puVar26 = puVar26 + -3;
          puVar24 = puVar27 + -2;
          puVar27 = puVar27 + -3;
        } while (uVar14 < *puVar24);
        do {
          puVar24 = puVar26 + 3;
          puVar27 = puVar26 + 5;
          puVar26 = puVar24;
        } while (*puVar27 < uVar14);
      }
      if ((*puVar24 & *(uint *)(param_1 + 0xe0)) != 0) goto LAB_003e2152;
      if (uVar17 != uVar13) {
        if (this_00[0x5a] == (hb_buffer_t)0x0) {
          iVar15 = 0;
          goto LAB_003e2731;
        }
        __dest = *(void **)(this_00 + 0x78);
        __src = *(void **)(this_00 + 0x70);
        if ((__dest == __src) && (iVar15 = 0, *(uint *)(this_00 + 100) == uVar17))
        goto LAB_003e2140;
        uVar13 = *(uint *)(this_00 + 100) + 1;
        if ((uVar13 == 0) || (uVar13 < *(uint *)(this_00 + 0x68))) {
          iVar15 = 0;
          if (__dest != __src) goto LAB_003e2700;
        }
        else {
          uVar16 = hb_buffer_t::enlarge(this_00,uVar13);
          if ((char)uVar16 == '\0') {
            iVar15 = 0;
            hVar4 = this_00[0x58];
            goto joined_r0x003e212f;
          }
          __src = *(void **)(this_00 + 0x70);
          __dest = *(void **)(this_00 + 0x78);
          iVar15 = 0;
          if (__dest != __src) goto LAB_003e2700;
        }
        iVar15 = 0;
        uVar13 = *(uint *)(this_00 + 100);
        if (uVar13 + 1 <= *(int *)(this_00 + 0x5c) + 1U) goto LAB_003e26f5;
        __dest = *(void **)(this_00 + 0x80);
        *(void **)(this_00 + 0x78) = __dest;
        iVar15 = 0;
joined_r0x003e20f2:
        if (uVar13 != 0) {
          memcpy(__dest,__src,(ulong)uVar13 * 0x14);
          __src = *(void **)(this_00 + 0x70);
          __dest = *(void **)(this_00 + 0x78);
        }
LAB_003e2700:
        uVar13 = *(uint *)(this_00 + 0x5c);
        uVar17 = *(uint *)(this_00 + 100);
        *(undefined4 *)((long)__dest + (ulong)uVar17 * 0x14 + 0x10) =
             *(undefined4 *)((long)__src + (ulong)uVar13 * 0x14 + 0x10);
        puVar2 = (undefined8 *)((long)__src + (ulong)uVar13 * 0x14);
        uVar16 = puVar2[1];
        puVar3 = (undefined8 *)((long)__dest + (ulong)uVar17 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar16;
        uVar17 = *(uint *)(this_00 + 0x5c);
        uVar13 = *(uint *)(this_00 + 100);
LAB_003e2728:
        *(uint *)(this_00 + 100) = uVar13 + 1;
LAB_003e2731:
        *(uint *)(this_00 + 0x5c) = uVar17 + 1;
LAB_003e2738:
        hVar4 = this_00[0x58];
joined_r0x003e212f:
        iVar28 = iVar15;
        if (hVar4 != (hb_buffer_t)0x0) {
          do {
            uVar17 = *(uint *)(this_00 + 0x5c);
            uVar13 = *(uint *)(this_00 + 0x60);
            uVar29 = (ulong)uVar17;
            iVar15 = iVar28;
            if (puVar24 != (uint *)0x0) goto LAB_003e2030;
LAB_003e2150:
            puVar24 = (uint *)0x0;
LAB_003e2152:
            if (uVar17 < uVar13) {
              uVar14 = *(uint *)(*(long *)(this_00 + 0x70) + uVar29 * 0x14);
              if ((ulong)uVar14 == 0xffff) {
                uVar29 = 2;
              }
              else {
                uVar29 = 1;
                if ((((*(ulong *)(param_1 + 0x98) >> ((ulong)(uVar14 >> 4) & 0x3f) & 1) != 0) &&
                    ((*(ulong *)(param_1 + 0xa0) >> ((ulong)uVar14 & 0x3f) & 1) != 0)) &&
                   ((*(ulong *)(param_1 + 0xa8) >> ((ulong)(uVar14 >> 9) & 0x3f) & 1) != 0)) {
                  uVar22 = (ulong)(ushort)(local_40[0][1] << 8 | local_40[0][1] >> 8);
                  uVar5 = *(ushort *)((long)local_40[0] + uVar22 + 2);
                  uVar14 = uVar14 - (ushort)(*(ushort *)((long)local_40[0] + uVar22) << 8 |
                                            *(ushort *)((long)local_40[0] + uVar22) >> 8);
                  if (uVar14 < (ushort)(uVar5 << 8 | uVar5 >> 8)) {
                    uVar29 = (ulong)*(byte *)((long)local_40[0] + (ulong)uVar14 + uVar22 + 4);
                  }
                }
              }
            }
            else {
              uVar29 = 0;
            }
            uVar5 = *local_40[0];
            uVar12 = uVar5 << 8 | uVar5 >> 8;
            uVar20 = (uint)uVar29;
            uVar14 = uVar20;
            if (uVar12 <= uVar20) {
              uVar14 = 1;
            }
            uVar19 = local_40[0][2] << 8 | local_40[0][2] >> 8;
            uVar25 = local_40[0][3] << 8 | local_40[0][3] >> 8;
            iVar23 = iVar28 * (uint)uVar12;
            uVar22 = (ulong)*(byte *)((long)local_40[0] + (ulong)(uVar14 + iVar23) + (ulong)uVar19);
            uVar6 = *(ushort *)((long)local_40[0] + uVar22 * 4 + (ulong)uVar25);
            uVar14 = (uint)uVar12;
            iVar15 = (int)((uint)(ushort)(uVar6 << 8 | uVar6 >> 8) - (uint)uVar19) / (int)uVar14;
            uVar12 = *(ushort *)((long)local_40[0] + uVar22 * 4 + (ulong)uVar25 + 2);
            if (((uVar12 & 0xf00) == 0) || (uVar11 <= uVar8)) {
              if ((iVar28 != 0) && (((uVar12 & 0x40) == 0 || (iVar15 != 0)))) {
                if (uVar14 <= uVar20) {
                  uVar29 = 1;
                }
                uVar29 = (ulong)*(byte *)((long)local_40[0] + uVar29 + uVar19);
                uVar6 = *(ushort *)((long)local_40[0] + uVar29 * 4 + (ulong)uVar25 + 2);
                if (((((uVar6 & 0xf00) != 0) && (uVar8 < uVar11)) ||
                    (uVar7 = *(ushort *)((long)local_40[0] + uVar29 * 4 + (ulong)uVar25),
                    iVar15 != (int)((uint)(ushort)(uVar7 << 8 | uVar7 >> 8) - (uint)uVar19) /
                              (int)uVar14)) || (((uVar6 ^ uVar12) & 0x40) != 0)) goto LAB_003e2320;
              }
              if (((*(byte *)((long)local_40[0] +
                             (ulong)*(byte *)((long)local_40[0] +
                                             (ulong)((uint)(uVar5 == 0) + iVar23) + (ulong)uVar19) *
                             4 + (ulong)uVar25 + 3) & 0xf) != 0) && (uVar8 < uVar11))
              goto LAB_003e2320;
            }
            else {
LAB_003e2320:
              uVar14 = uVar17;
              if (this_00[0x5a] != (hb_buffer_t)0x0) {
                uVar14 = *(uint *)(this_00 + 100);
              }
              if ((uVar14 != 0) && (uVar17 < uVar13)) {
                hb_buffer_t::_set_glyph_flags(this_00,3,uVar14 - 1,uVar17 + 1,'\x01');
                uVar12 = *(ushort *)((long)local_40[0] + uVar22 * 4 + (ulong)uVar25 + 2);
              }
            }
            if ((uVar12 << 8 & 0x8000) != 0) {
              uVar8 = *(uint *)(this_00 + 0x5c);
            }
            if ((uVar12 << 8 & 0x2000) != 0) {
              uVar11 = *(int *)(this_00 + 0x5c) + 1U;
              if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
                uVar11 = *(uint *)(this_00 + 0x60);
              }
            }
            if ((uVar12 >> 8 & 0xf) != 0) {
              uVar13 = uVar11 - uVar8;
              if (uVar8 < uVar11) {
                uVar17 = (uint)((byte)(&DAT_005de390)[(ulong)(uVar12 >> 8) & 0xf] >> 4);
                uVar29 = 2;
                if (uVar17 < 2) {
                  uVar29 = (ulong)uVar17;
                }
                uVar20 = (byte)(&DAT_005de390)[(ulong)(uVar12 >> 8) & 0xf] & 0xf;
                uVar14 = 2;
                if (uVar20 < 2) {
                  uVar14 = uVar20;
                }
                if (uVar13 < 0x41) {
                  uVar10 = (uint)uVar29;
                  if (uVar10 + uVar14 <= uVar13) {
                    uVar21 = *(int *)(this_00 + 0x5c) + 1U;
                    if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
                      uVar21 = *(uint *)(this_00 + 0x60);
                    }
                    if (1 < uVar21 - uVar8) {
                      hb_buffer_t::merge_clusters_impl(this_00,uVar8,uVar21);
                    }
                    if (1 < uVar13) {
                      hb_buffer_t::merge_clusters_impl(this_00,uVar8,uVar11);
                    }
                    lVar9 = *(long *)(this_00 + 0x70);
                    puVar2 = (undefined8 *)(lVar9 + (ulong)uVar8 * 0x14);
                    if (uVar10 != 0) {
                      memcpy(&local_98,puVar2,uVar29 * 0x14);
                    }
                    uVar18 = (ulong)uVar14;
                    if (uVar14 != 0) {
                      memcpy(local_70,(void *)(lVar9 + (ulong)uVar11 * 0x14 + uVar18 * -0x14),
                             uVar18 * 0x14);
                    }
                    if (uVar10 != uVar14) {
                      memmove((void *)((long)puVar2 + uVar18 * 0x14),
                              (void *)((long)puVar2 + uVar29 * 0x14),
                              (ulong)(uVar11 - (uVar10 + uVar14 + uVar8)) * 0x14);
                    }
                    if (uVar14 != 0) {
                      memcpy(puVar2,local_70,uVar18 * 0x14);
                    }
                    if (uVar10 != 0) {
                      memcpy((void *)(lVar9 + (ulong)uVar11 * 0x14 + uVar29 * -0x14),&local_98,
                             uVar29 * 0x14);
                    }
                    if (uVar17 == 3) {
                      uVar29 = (ulong)(uVar11 - 1);
                      local_88 = *(undefined4 *)(lVar9 + 0x10 + uVar29 * 0x14);
                      puVar3 = (undefined8 *)(lVar9 + uVar29 * 0x14);
                      local_98 = *puVar3;
                      uStack_90 = puVar3[1];
                      uVar18 = (ulong)(uVar11 - 2);
                      *(undefined4 *)(lVar9 + 0x10 + uVar29 * 0x14) =
                           *(undefined4 *)(lVar9 + 0x10 + uVar18 * 0x14);
                      puVar3 = (undefined8 *)(lVar9 + uVar18 * 0x14);
                      uVar16 = puVar3[1];
                      puVar1 = (undefined8 *)(lVar9 + uVar29 * 0x14);
                      *puVar1 = *puVar3;
                      puVar1[1] = uVar16;
                      *(undefined4 *)(lVar9 + 0x10 + uVar18 * 0x14) = local_88;
                      puVar3 = (undefined8 *)(lVar9 + uVar18 * 0x14);
                      *puVar3 = local_98;
                      puVar3[1] = uStack_90;
                    }
                    if (uVar20 == 3) {
                      local_88 = *(undefined4 *)(puVar2 + 2);
                      local_98 = *puVar2;
                      uStack_90 = puVar2[1];
                      uVar29 = (ulong)(uVar8 + 1);
                      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar9 + 0x10 + uVar29 * 0x14);
                      puVar3 = (undefined8 *)(lVar9 + uVar29 * 0x14);
                      uVar16 = puVar3[1];
                      *puVar2 = *puVar3;
                      puVar2[1] = uVar16;
                      *(undefined4 *)(lVar9 + 0x10 + uVar29 * 0x14) = local_88;
                      puVar2 = (undefined8 *)(lVar9 + uVar29 * 0x14);
                      *puVar2 = local_98;
                      puVar2[1] = uStack_90;
                    }
                  }
                }
              }
            }
            uVar17 = *(uint *)(this_00 + 0x5c);
            if (uVar17 == *(uint *)(this_00 + 0x60)) {
              return;
            }
            if (this_00[0x58] == (hb_buffer_t)0x0) {
              return;
            }
            if (((*(byte *)((long)local_40[0] + uVar22 * 4 + (ulong)uVar25 + 2) & 0x40) == 0) ||
               (iVar28 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar28 + -1, iVar28 < 1)
               ) goto LAB_003e2680;
            iVar28 = iVar15;
            if (this_00[0x58] == (hb_buffer_t)0x0) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
LAB_003e2680:
  if (this_00[0x5a] == (hb_buffer_t)0x0) goto LAB_003e2731;
  __dest = *(void **)(this_00 + 0x78);
  __src = *(void **)(this_00 + 0x70);
  if ((__dest == __src) && (*(uint *)(this_00 + 100) == uVar17)) goto LAB_003e2140;
  uVar13 = *(uint *)(this_00 + 100) + 1;
  if ((uVar13 == 0) || (uVar13 < *(uint *)(this_00 + 0x68))) {
    if (__dest != __src) goto LAB_003e2700;
  }
  else {
    uVar16 = hb_buffer_t::enlarge(this_00,uVar13);
    if ((char)uVar16 == '\0') goto LAB_003e2738;
    __src = *(void **)(this_00 + 0x70);
    __dest = *(void **)(this_00 + 0x78);
    if (__dest != __src) goto LAB_003e2700;
  }
  uVar13 = *(uint *)(this_00 + 100);
  if (uVar13 + 1 <= *(int *)(this_00 + 0x5c) + 1U) goto LAB_003e26f5;
  __dest = *(void **)(this_00 + 0x80);
  *(void **)(this_00 + 0x78) = __dest;
  goto joined_r0x003e20f2;
LAB_003e2140:
  uVar13 = uVar17;
  goto LAB_003e2728;
LAB_003e26f5:
  __dest = __src;
  goto LAB_003e2700;
}


