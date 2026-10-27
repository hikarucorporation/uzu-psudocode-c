// Function : apply
// Namespace: AAT:LigatureSubtable_AAT__ObsoleteTypes_
// Entry    : 003e34d0
// Prototype: undefined apply(LigatureSubtable<AAT::ObsoleteTypes> * this, long param_1)
// Body     : 003e34d0 - 003e44ec


/* AAT::LigatureSubtable<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*) const */

void __thiscall
AAT::LigatureSubtable<AAT::ObsoleteTypes>::apply
          (LigatureSubtable<AAT::ObsoleteTypes> *this,long param_1)

{
  LigatureSubtable<AAT::ObsoleteTypes> *pLVar1;
  LigatureSubtable<AAT::ObsoleteTypes> *pLVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  hb_buffer_t hVar6;
  ushort uVar7;
  ushort uVar8;
  hb_buffer_t *this_00;
  long lVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  void *pvVar21;
  undefined8 uVar22;
  void *pvVar23;
  ulong uVar24;
  int iVar25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ushort uVar32;
  int iVar33;
  uint *puVar34;
  void *pvVar35;
  uint uVar36;
  uint *puVar37;
  LigatureSubtable<AAT::ObsoleteTypes> *pLVar38;
  uint uVar39;
  uint *puVar40;
  uint uVar41;
  bool bVar42;
  uint local_200;
  uint local_1f0;
  uint local_1a0;
  uint local_188;
  uint local_180;
  ushort *local_178 [2];
  undefined1 local_168;
  long local_160;
  LigatureSubtable<AAT::ObsoleteTypes> *local_158;
  LigatureSubtable<AAT::ObsoleteTypes> *local_150;
  LigatureSubtable<AAT::ObsoleteTypes> *local_148;
  LigatureSubtable<AAT::ObsoleteTypes> *local_140;
  uint local_138;
  uint auStack_134 [65];
  
  local_168 = 0;
  uVar11 = *(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8;
  uVar12 = *(ushort *)(this + 10) << 8 | *(ushort *)(this + 10) >> 8;
  pLVar1 = this + uVar12;
  uVar13 = *(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8;
  pLVar2 = this + uVar13;
  local_138 = 0;
  local_160 = param_1;
  local_158 = this;
  local_150 = this + uVar11;
  local_148 = pLVar1;
  local_140 = pLVar2;
  StateTableDriver<AAT::ObsoleteTypes,void>::StateTableDriver
            ((StateTableDriver<AAT::ObsoleteTypes,void> *)local_178,this,*(long *)(param_1 + 0x18));
  uVar14 = local_178[0][2] << 8 | local_178[0][2] >> 8;
  uVar16 = *(uint *)((long)local_178[0] +
                    (ulong)*(byte *)((long)local_178[0] + (ulong)uVar14 + 1) * 4 +
                    (ulong)(ushort)(local_178[0][3] << 8 | local_178[0][3] >> 8));
  if ((((uVar16 & 0xff3f0000) == 0) &&
      (uVar15 = (ushort)uVar16,
      (int)((uint)(ushort)(uVar15 << 8 | uVar15 >> 8) - (uint)uVar14) /
      (int)(uint)(ushort)(*local_178[0] << 8 | *local_178[0] >> 8) == 0)) &&
     (((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) == 0 ||
      (((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) == 0 ||
       ((*(ulong *)(param_1 + 0xa8) & *(ulong *)(param_1 + 0x90)) == 0)))))) {
    return;
  }
  this_00 = *(hb_buffer_t **)(param_1 + 0x20);
  *(undefined2 *)(this_00 + 0x5a) = 1;
  *(undefined4 *)(this_00 + 0x5c) = 0;
  *(undefined4 *)(this_00 + 100) = 0;
  *(undefined8 *)(this_00 + 0x78) = *(undefined8 *)(this_00 + 0x70);
  lVar9 = *(long *)(param_1 + 0x78);
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 4) < 2)) {
    puVar40 = (uint *)0x0;
    hVar6 = this_00[0x58];
  }
  else {
    puVar40 = *(uint **)(lVar9 + 8);
    hVar6 = this_00[0x58];
  }
  if (hVar6 != (hb_buffer_t)0x0) {
    uVar19 = 0;
    local_200 = 0;
    local_1f0 = 0;
    uVar39 = 0;
    iVar25 = 0;
    uVar16 = *(uint *)(this_00 + 0x60);
    uVar20 = 0;
    iVar18 = 0;
    if (puVar40 == (uint *)0x0) goto LAB_003e3790;
LAB_003e3660:
    iVar25 = iVar18;
    if (uVar39 < uVar16) {
      uVar36 = *(uint *)(*(long *)(this_00 + 0x70) + 8 + uVar20 * 0x14);
      puVar37 = puVar40 + 3;
      puVar34 = puVar40;
      do {
        puVar34 = puVar34 + -3;
        puVar40 = puVar37 + -2;
        puVar37 = puVar37 + -3;
      } while (uVar36 < *puVar40);
      do {
        puVar40 = puVar34 + 3;
        puVar37 = puVar34 + 5;
        puVar34 = puVar40;
      } while (*puVar37 < uVar36);
    }
    if ((*puVar40 & *(uint *)(param_1 + 0xe0)) != 0) goto LAB_003e3793;
    if (uVar39 != uVar16) {
      if (this_00[0x5a] == (hb_buffer_t)0x0) {
        iVar18 = 0;
        goto LAB_003e4391;
      }
      pvVar21 = *(void **)(this_00 + 0x78);
      pvVar35 = *(void **)(this_00 + 0x70);
      if ((pvVar21 == pvVar35) && (iVar18 = 0, *(uint *)(this_00 + 100) == uVar39))
      goto LAB_003e3780;
      uVar16 = *(uint *)(this_00 + 100) + 1;
      if ((uVar16 == 0) || (uVar16 < *(uint *)(this_00 + 0x68))) {
        iVar18 = 0;
        if (pvVar21 != pvVar35) goto LAB_003e4360;
      }
      else {
        uVar22 = hb_buffer_t::enlarge(this_00,uVar16);
        if ((char)uVar22 == '\0') {
          iVar18 = 0;
          hVar6 = this_00[0x58];
          goto joined_r0x003e376b;
        }
        pvVar35 = *(void **)(this_00 + 0x70);
        pvVar21 = *(void **)(this_00 + 0x78);
        iVar18 = 0;
        if (pvVar21 != pvVar35) goto LAB_003e4360;
      }
      iVar18 = 0;
      uVar16 = *(uint *)(this_00 + 100);
      if (uVar16 + 1 <= *(int *)(this_00 + 0x5c) + 1U) goto LAB_003e4356;
      pvVar21 = *(void **)(this_00 + 0x80);
      *(void **)(this_00 + 0x78) = pvVar21;
      iVar18 = 0;
LAB_003e4329:
      if (uVar16 != 0) {
        memcpy(pvVar21,pvVar35,(ulong)uVar16 * 0x14);
        pvVar35 = *(void **)(this_00 + 0x70);
        pvVar21 = *(void **)(this_00 + 0x78);
      }
LAB_003e4360:
      uVar16 = *(uint *)(this_00 + 0x5c);
      uVar39 = *(uint *)(this_00 + 100);
      *(undefined4 *)((long)pvVar21 + (ulong)uVar39 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar35 + (ulong)uVar16 * 0x14 + 0x10);
      puVar3 = (undefined8 *)((long)pvVar35 + (ulong)uVar16 * 0x14);
      uVar22 = puVar3[1];
      puVar4 = (undefined8 *)((long)pvVar21 + (ulong)uVar39 * 0x14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar22;
      uVar39 = *(uint *)(this_00 + 0x5c);
      uVar16 = *(uint *)(this_00 + 100);
LAB_003e4388:
      *(uint *)(this_00 + 100) = uVar16 + 1;
LAB_003e4391:
      *(uint *)(this_00 + 0x5c) = uVar39 + 1;
LAB_003e4398:
      hVar6 = this_00[0x58];
joined_r0x003e376b:
      iVar25 = iVar18;
      if (hVar6 != (hb_buffer_t)0x0) {
        do {
          uVar39 = *(uint *)(this_00 + 0x5c);
          uVar16 = *(uint *)(this_00 + 0x60);
          uVar20 = (ulong)uVar39;
          iVar18 = iVar25;
          if (puVar40 != (uint *)0x0) goto LAB_003e3660;
LAB_003e3790:
          puVar40 = (uint *)0x0;
LAB_003e3793:
          if (uVar39 < uVar16) {
            uVar17 = *(uint *)(*(long *)(this_00 + 0x70) + uVar20 * 0x14);
            if ((ulong)uVar17 == 0xffff) {
              uVar36 = 2;
            }
            else {
              uVar36 = 1;
              if ((((*(ulong *)(param_1 + 0x98) >> ((ulong)(uVar17 >> 4) & 0x3f) & 1) != 0) &&
                  ((*(ulong *)(param_1 + 0xa0) >> ((ulong)uVar17 & 0x3f) & 1) != 0)) &&
                 ((*(ulong *)(param_1 + 0xa8) >> ((ulong)(uVar17 >> 9) & 0x3f) & 1) != 0)) {
                uVar20 = (ulong)(ushort)(local_178[0][1] << 8 | local_178[0][1] >> 8);
                uVar14 = *(ushort *)((long)local_178[0] + uVar20 + 2);
                uVar17 = uVar17 - (ushort)(*(ushort *)((long)local_178[0] + uVar20) << 8 |
                                          *(ushort *)((long)local_178[0] + uVar20) >> 8);
                if (uVar17 < (ushort)(uVar14 << 8 | uVar14 >> 8)) {
                  uVar36 = (uint)*(byte *)((long)local_178[0] + (ulong)uVar17 + uVar20 + 4);
                }
              }
            }
          }
          else {
            uVar36 = 0;
          }
          uVar14 = *local_178[0];
          uVar15 = uVar14 << 8 | uVar14 >> 8;
          uVar17 = uVar36;
          if (uVar15 <= uVar36) {
            uVar17 = 1;
          }
          uVar26 = local_178[0][2] << 8 | local_178[0][2] >> 8;
          uVar32 = local_178[0][3] << 8 | local_178[0][3] >> 8;
          iVar33 = iVar25 * (uint)uVar15;
          uVar20 = (ulong)*(byte *)((long)local_178[0] + (ulong)(uVar17 + iVar33) + (ulong)uVar26);
          uVar7 = *(ushort *)((long)local_178[0] + uVar20 * 4 + (ulong)uVar32);
          uVar17 = (uint)uVar15;
          iVar18 = (int)((uint)(ushort)(uVar7 << 8 | uVar7 >> 8) - (uint)uVar26) / (int)uVar17;
          uVar15 = *(ushort *)((long)local_178[0] + uVar20 * 4 + (ulong)uVar32 + 2);
          if ((uVar15 & 0xff3f) == 0) {
            if ((iVar25 != 0) && (((uVar15 & 0x40) == 0 || (iVar18 != 0)))) {
              if (uVar17 <= uVar36) {
                uVar36 = 1;
              }
              uVar24 = (ulong)*(byte *)((long)local_178[0] + (ulong)uVar36 + (ulong)uVar26);
              uVar7 = *(ushort *)((long)local_178[0] + uVar24 * 4 + (ulong)uVar32 + 2);
              if ((((uVar7 & 0xff3f) != 0) ||
                  (uVar8 = *(ushort *)((long)local_178[0] + uVar24 * 4 + (ulong)uVar32),
                  iVar18 != (int)((uint)(ushort)(uVar8 << 8 | uVar8 >> 8) - (uint)uVar26) /
                            (int)uVar17)) || (((uVar7 ^ uVar15) & 0x40) != 0)) goto LAB_003e3940;
            }
            if ((*(ushort *)
                  ((long)local_178[0] +
                  (ulong)*(byte *)((long)local_178[0] +
                                  (ulong)((uint)(uVar14 == 0) + iVar33) + (ulong)uVar26) * 4 +
                  (ulong)uVar32 + 2) & 0xff3f) != 0) goto LAB_003e3940;
          }
          else {
LAB_003e3940:
            uVar36 = uVar39;
            if (this_00[0x5a] != (hb_buffer_t)0x0) {
              uVar36 = *(uint *)(this_00 + 100);
            }
            if ((uVar36 != 0) && (uVar39 < uVar16)) {
              hb_buffer_t::_set_glyph_flags(this_00,3,uVar36 - 1,uVar39 + 1,'\x01');
              uVar15 = *(ushort *)((long)local_178[0] + uVar20 * 4 + (ulong)uVar32 + 2);
            }
          }
          if ((uVar15 & 0x80) == 0) {
            if ((uVar15 & 0xff3f) == 0) goto LAB_003e420f;
LAB_003e39a4:
            if (local_200 == 0) {
              local_200 = 0;
            }
            else if (*(uint *)(this_00 + 0x5c) < *(uint *)(this_00 + 0x60)) {
              uVar14 = (uVar15 & 0xff3f) << 8 | uVar15 >> 8;
              if (uVar14 < uVar11) {
                uVar24 = 0x1fffffff;
              }
              else {
                local_1a0 = (uint)uVar11;
                uVar24 = (ulong)(uVar14 - local_1a0 >> 2);
              }
              uVar16 = *(uint *)(this_00 + 100);
              pLVar38 = this + uVar11 + uVar24 * 4;
              uVar36 = 0;
              uVar39 = local_200;
LAB_003e3a03:
              do {
                bVar42 = uVar39 == 0;
                uVar39 = uVar39 - 1;
                if (bVar42) {
                  uVar19 = 0;
                  break;
                }
                uVar17 = auStack_134[uVar39 & 0x3f];
                local_200 = uVar19;
                if (this_00[0x5a] != (hb_buffer_t)0x0) {
                  if (this_00[0x58] != (hb_buffer_t)0x0) {
                    uVar29 = *(uint *)(this_00 + 100);
                    uVar28 = uVar29 - uVar17;
                    if (uVar29 < uVar17) {
                      if ((*(uint *)(this_00 + 0x68) <= uVar17) &&
                         (uVar22 = hb_buffer_t::enlarge(this_00,uVar17), (char)uVar22 == '\0'))
                      goto LAB_003e43cc;
                      uVar29 = uVar17 - uVar29;
                      pvVar35 = *(void **)(this_00 + 0x70);
                      pvVar23 = *(void **)(this_00 + 0x78);
                      pvVar21 = pvVar23;
                      if (pvVar23 == pvVar35) {
                        uVar28 = *(uint *)(this_00 + 100);
                        if (*(int *)(this_00 + 0x5c) + uVar29 < uVar28 + uVar29) {
                          pvVar21 = *(void **)(this_00 + 0x80);
                          *(void **)(this_00 + 0x78) = pvVar21;
                          if ((ulong)uVar28 == 0) {
                          }
                          else {
                            memcpy(pvVar21,pvVar35,(ulong)uVar28 * 0x14);
                            pvVar23 = *(void **)(this_00 + 0x70);
                            pvVar21 = *(void **)(this_00 + 0x78);
                          }
                        }
                      }
                      else {
                        pvVar23 = pvVar35;
                      }
                      memmove((void *)((long)pvVar21 + (ulong)*(uint *)(this_00 + 100) * 0x14),
                              (void *)((long)pvVar23 + (ulong)*(uint *)(this_00 + 0x5c) * 0x14),
                              (ulong)uVar29 * 0x14);
                      *(uint *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + uVar29;
                      *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar29;
                    }
                    else if (uVar28 != 0) {
                      uVar30 = *(uint *)(this_00 + 0x5c);
                      uVar27 = uVar28 - uVar30;
                      if (uVar30 <= uVar28 && uVar27 != 0) {
                        iVar25 = *(int *)(this_00 + 0x60);
                        uVar29 = iVar25 + uVar27;
                        if ((uVar29 != 0) && (*(uint *)(this_00 + 0x68) <= uVar29)) {
                          uVar22 = hb_buffer_t::enlarge(this_00,uVar29);
                          if ((char)uVar22 == '\0') goto LAB_003e43cc;
                          uVar30 = *(uint *)(this_00 + 0x5c);
                          iVar25 = *(int *)(this_00 + 0x60);
                        }
                        pvVar35 = (void *)((ulong)uVar30 * 0x14 + *(long *)(this_00 + 0x70));
                        memmove((void *)((long)pvVar35 + (ulong)uVar27 * 0x14),pvVar35,
                                (ulong)(iVar25 - uVar30) * 0x14);
                        uVar30 = *(int *)(this_00 + 0x5c) + uVar27;
                        uVar29 = *(uint *)(this_00 + 0x60);
                        if ((uVar29 <= uVar30 && uVar30 - uVar29 != 0) &&
                           (uVar31 = (uVar30 - uVar29) * 0x14, uVar31 != 0)) {
                          memset((void *)((ulong)uVar29 * 0x14 + *(long *)(this_00 + 0x70)),0,
                                 (ulong)uVar31);
                          uVar29 = *(uint *)(this_00 + 0x60);
                          uVar30 = *(int *)(this_00 + 0x5c) + uVar27;
                        }
                        *(uint *)(this_00 + 0x60) = uVar29 + uVar27;
                        uVar29 = *(uint *)(this_00 + 100);
                      }
                      *(uint *)(this_00 + 0x5c) = uVar30 - uVar28;
                      *(uint *)(this_00 + 100) = uVar29 - uVar28;
                      memmove((void *)((ulong)(uVar30 - uVar28) * 0x14 + *(long *)(this_00 + 0x70)),
                              (void *)((ulong)(uVar29 - uVar28) * 0x14 + *(long *)(this_00 + 0x78)),
                              (ulong)uVar28 * 0x14);
                    }
                    goto LAB_003e3bef;
                  }
LAB_003e43cc:
                  uVar39 = *(uint *)(this_00 + 0x5c);
                  uVar19 = local_200;
                  local_138 = local_200;
                  local_1f0 = local_200;
                  if (uVar39 == *(uint *)(this_00 + 0x60)) goto LAB_003e448e;
                  goto LAB_003e42a0;
                }
                *(uint *)(this_00 + 0x5c) = uVar17;
LAB_003e3bef:
                if ((LigatureSubtable<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x40) <
                    pLVar38 + (4 - *(long *)(param_1 + 0x30))) break;
                uVar29 = *(uint *)pLVar38;
                uVar28 = uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 | (uVar29 & 0xff00) << 8;
                uVar29 = uVar29 << 0x18;
                uVar30 = uVar28 | uVar29;
                uVar29 = ((uVar28 | uVar29 & 0x3fffffff) + (uVar29 & 0x20000000) * 2 +
                         *(int *)(*(long *)(this_00 + 0x70) +
                                 (ulong)*(uint *)(this_00 + 0x5c) * 0x14)) * 2;
                local_180 = (uint)uVar12;
                if (uVar29 < local_180) {
                  uVar29 = 0x3fffffff;
                }
                else {
                  uVar29 = uVar29 - local_180 >> 1;
                }
                if ((LigatureSubtable<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x40) <
                    pLVar1 + ((ulong)uVar29 * 2 - *(long *)(param_1 + 0x30)) + 2) break;
                uVar36 = uVar36 + (ushort)(*(ushort *)(pLVar1 + (ulong)uVar29 * 2) << 8 |
                                          *(ushort *)(pLVar1 + (ulong)uVar29 * 2) >> 8);
                if (uVar30 < 0x40000000) {
                  pLVar38 = pLVar38 + 4;
                  if ((int)uVar30 < 0) break;
                  goto LAB_003e3a03;
                }
                local_188 = (uint)uVar13;
                if (uVar36 < local_188) {
                  uVar36 = 0x3fffffff;
                }
                else {
                  uVar36 = uVar36 - local_188 >> 1;
                }
                if ((LigatureSubtable<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x40) <
                    pLVar2 + ((ulong)uVar36 * 2 - *(long *)(param_1 + 0x30)) + 2) break;
                uVar14 = *(ushort *)(pLVar2 + (ulong)uVar36 * 2);
                uVar29 = *(int *)(this_00 + 100) + 1;
                if (((uVar29 != 0) && (*(uint *)(this_00 + 0x68) <= uVar29)) &&
                   (uVar22 = hb_buffer_t::enlarge(this_00,uVar29), (char)uVar22 == '\0'))
                goto LAB_003e43cc;
                pvVar35 = *(void **)(this_00 + 0x70);
                pvVar21 = *(void **)(this_00 + 0x78);
                pvVar23 = pvVar21;
                if (pvVar21 == pvVar35) {
                  uVar29 = *(uint *)(this_00 + 100);
                  if (*(int *)(this_00 + 0x5c) + 1U < uVar29 + 1) {
                    pvVar23 = *(void **)(this_00 + 0x80);
                    *(void **)(this_00 + 0x78) = pvVar23;
                    if ((ulong)uVar29 != 0) {
                      memcpy(pvVar23,pvVar35,(ulong)uVar29 * 0x14);
                      pvVar23 = *(void **)(this_00 + 0x78);
                      pvVar35 = *(void **)(this_00 + 0x70);
                      goto LAB_003e3d30;
                    }
                  }
                  pvVar35 = pvVar21;
                }
                else {
                }
LAB_003e3d30:
                uVar29 = *(uint *)(this_00 + 0x5c);
                uVar28 = *(uint *)(this_00 + 100);
                uVar24 = (ulong)uVar28;
                uVar27 = uVar28 - 1;
                if (uVar28 == 0) {
                  uVar27 = 0;
                }
                if (uVar29 < *(uint *)(this_00 + 0x60)) {
                  uVar27 = uVar29;
                }
                if (uVar29 >= *(uint *)(this_00 + 0x60)) {
                  pvVar35 = pvVar23;
                }
                puVar3 = (undefined8 *)((long)pvVar35 + (ulong)uVar27 * 0x14);
                uVar22 = puVar3[1];
                puVar4 = (undefined8 *)((long)pvVar23 + uVar24 * 0x14);
                *puVar4 = *puVar3;
                puVar4[1] = uVar22;
                *(undefined4 *)((long)pvVar23 + uVar24 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar35 + (ulong)uVar27 * 0x14 + 0x10);
                *(uint *)((long)pvVar23 + uVar24 * 0x14) = (uint)(ushort)(uVar14 << 8 | uVar14 >> 8)
                ;
                uVar27 = *(int *)(this_00 + 0x5c) + 1;
                *(uint *)(this_00 + 0x5c) = uVar27;
                uVar28 = *(int *)(this_00 + 100) + 1;
                *(uint *)(this_00 + 100) = uVar28;
                uVar29 = auStack_134[uVar19 - 1 & 0x3f];
                uVar31 = uVar19;
                if (uVar39 < uVar19 - 1) {
                  do {
                    local_200 = uVar31 - 1;
                    uVar19 = auStack_134[local_200 & 0x3f];
                    if (this_00[0x5a] != (hb_buffer_t)0x0) {
                      if (this_00[0x58] != (hb_buffer_t)0x0) {
                        uVar41 = uVar28 - uVar19;
                        if (uVar28 < uVar19) {
                          if ((*(uint *)(this_00 + 0x68) <= uVar19) &&
                             (uVar22 = hb_buffer_t::enlarge(this_00,uVar19), (char)uVar22 == '\0'))
                          goto LAB_003e4229;
                          uVar28 = uVar19 - uVar28;
                          pvVar35 = *(void **)(this_00 + 0x70);
                          pvVar21 = *(void **)(this_00 + 0x78);
                          pvVar23 = pvVar21;
                          if (pvVar21 == pvVar35) {
                            uVar19 = *(uint *)(this_00 + 100);
                            if (*(int *)(this_00 + 0x5c) + uVar28 < uVar19 + uVar28) {
                              pvVar23 = *(void **)(this_00 + 0x80);
                              *(void **)(this_00 + 0x78) = pvVar23;
                              if ((ulong)uVar19 == 0) {
                                pvVar35 = pvVar21;
                              }
                              else {
                                memcpy(pvVar23,pvVar35,(ulong)uVar19 * 0x14);
                                pvVar23 = *(void **)(this_00 + 0x78);
                                pvVar35 = *(void **)(this_00 + 0x70);
                              }
                            }
                            else {
                              pvVar35 = pvVar21;
                            }
                          }
                          memmove((void *)((long)pvVar23 + (ulong)*(uint *)(this_00 + 100) * 0x14),
                                  (void *)((long)pvVar35 + (ulong)*(uint *)(this_00 + 0x5c) * 0x14),
                                  (ulong)uVar28 * 0x14);
                          uVar19 = *(int *)(this_00 + 0x5c) + uVar28;
                          *(uint *)(this_00 + 0x5c) = uVar19;
                          *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar28;
                        }
                        else {
                          if (uVar28 < uVar19 || uVar41 == 0) {
                            uVar19 = uVar27;
                            goto LAB_003e402f;
                          }
                          uVar19 = uVar41 - uVar27;
                          if (uVar27 <= uVar41 && uVar19 != 0) {
                            iVar25 = *(int *)(this_00 + 0x60);
                            uVar28 = iVar25 + uVar19;
                            if ((uVar28 != 0) && (*(uint *)(this_00 + 0x68) <= uVar28)) {
                              uVar22 = hb_buffer_t::enlarge(this_00,uVar28);
                              if ((char)uVar22 == '\0') goto LAB_003e4229;
                              uVar27 = *(uint *)(this_00 + 0x5c);
                              iVar25 = *(int *)(this_00 + 0x60);
                            }
                            pvVar35 = (void *)((ulong)uVar27 * 0x14 + *(long *)(this_00 + 0x70));
                            memmove((void *)((long)pvVar35 + (ulong)uVar19 * 0x14),pvVar35,
                                    (ulong)(iVar25 - uVar27) * 0x14);
                            uVar27 = *(int *)(this_00 + 0x5c) + uVar19;
                            uVar28 = *(uint *)(this_00 + 0x60);
                            if ((uVar28 <= uVar27 && uVar27 - uVar28 != 0) &&
                               (uVar10 = (uVar27 - uVar28) * 0x14, uVar10 != 0)) {
                              memset((void *)((ulong)uVar28 * 0x14 + *(long *)(this_00 + 0x70)),0,
                                     (ulong)uVar10);
                              uVar28 = *(uint *)(this_00 + 0x60);
                              uVar27 = *(int *)(this_00 + 0x5c) + uVar19;
                            }
                            *(uint *)(this_00 + 0x60) = uVar28 + uVar19;
                            uVar28 = *(uint *)(this_00 + 100);
                          }
                          *(uint *)(this_00 + 0x5c) = uVar27 - uVar41;
                          *(uint *)(this_00 + 100) = uVar28 - uVar41;
                          memmove((void *)((ulong)(uVar27 - uVar41) * 0x14 +
                                          *(long *)(this_00 + 0x70)),
                                  (void *)((ulong)(uVar28 - uVar41) * 0x14 +
                                          *(long *)(this_00 + 0x78)),(ulong)uVar41 * 0x14);
                          uVar19 = *(uint *)(this_00 + 0x5c);
                        }
                        goto LAB_003e402f;
                      }
LAB_003e4229:
                      uVar39 = *(uint *)(this_00 + 0x5c);
                      uVar19 = local_200;
                      local_138 = local_200;
                      local_1f0 = local_200;
                      if (uVar39 == *(uint *)(this_00 + 0x60)) goto LAB_003e448e;
                      goto LAB_003e42a0;
                    }
                    *(uint *)(this_00 + 0x5c) = uVar19;
LAB_003e402f:
                    puVar5 = (ushort *)(*(long *)(this_00 + 0x70) + 0x10 + (ulong)uVar19 * 0x14);
                    *puVar5 = *puVar5 | 0x20;
                    uVar19 = *(int *)(this_00 + 100) + 1;
                    if (((uVar19 != 0) && (*(uint *)(this_00 + 0x68) <= uVar19)) &&
                       (uVar22 = hb_buffer_t::enlarge(this_00,uVar19), (char)uVar22 == '\0'))
                    goto LAB_003e4229;
                    pvVar35 = *(void **)(this_00 + 0x70);
                    pvVar21 = *(void **)(this_00 + 0x78);
                    if (pvVar21 == pvVar35) {
                      uVar19 = *(uint *)(this_00 + 100);
                      if (*(int *)(this_00 + 0x5c) + 1U < uVar19 + 1) {
                        pvVar23 = *(void **)(this_00 + 0x80);
                        *(void **)(this_00 + 0x78) = pvVar23;
                        if ((ulong)uVar19 == 0) {
                          pvVar35 = pvVar21;
                          pvVar21 = pvVar23;
                        }
                        else {
                          memcpy(pvVar23,pvVar35,(ulong)uVar19 * 0x14);
                          pvVar35 = *(void **)(this_00 + 0x70);
                          pvVar21 = *(void **)(this_00 + 0x78);
                        }
                      }
                      else {
                        pvVar35 = pvVar21;
                      }
                    }
                    uVar19 = *(uint *)(this_00 + 0x5c);
                    uVar28 = *(uint *)(this_00 + 100);
                    uVar24 = (ulong)uVar28;
                    uVar27 = uVar28 - 1;
                    if (uVar28 == 0) {
                      uVar27 = 0;
                    }
                    if (uVar19 < *(uint *)(this_00 + 0x60)) {
                      uVar27 = uVar19;
                    }
                    if (uVar19 >= *(uint *)(this_00 + 0x60)) {
                      pvVar35 = pvVar21;
                    }
                    puVar3 = (undefined8 *)((long)pvVar35 + (ulong)uVar27 * 0x14);
                    uVar22 = puVar3[1];
                    puVar4 = (undefined8 *)((long)pvVar21 + uVar24 * 0x14);
                    *puVar4 = *puVar3;
                    puVar4[1] = uVar22;
                    *(undefined4 *)((long)pvVar21 + uVar24 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar35 + (ulong)uVar27 * 0x14 + 0x10);
                    *(undefined4 *)((long)pvVar21 + uVar24 * 0x14) = 0xffff;
                    uVar27 = *(int *)(this_00 + 0x5c) + 1;
                    *(uint *)(this_00 + 0x5c) = uVar27;
                    uVar28 = *(int *)(this_00 + 100) + 1;
                    *(uint *)(this_00 + 100) = uVar28;
                    uVar19 = uVar31 - 1;
                    uVar41 = uVar31 - 2;
                    uVar31 = uVar19;
                  } while (uVar39 < uVar41);
                }
                uVar22 = hb_buffer_t::move_to(this_00,uVar29 + 1);
                local_200 = uVar19;
                if ((char)uVar22 == '\0') goto LAB_003e43cc;
                hb_buffer_t::merge_out_clusters(this_00,uVar17,*(uint *)(this_00 + 100));
                pLVar38 = pLVar38 + 4;
              } while (-1 < (int)uVar30);
              local_138 = uVar19;
              hb_buffer_t::move_to(this_00,uVar16);
              local_200 = uVar19;
            }
            uVar39 = *(uint *)(this_00 + 0x5c);
            local_1f0 = local_200;
            if (uVar39 == *(uint *)(this_00 + 0x60)) break;
          }
          else {
            if (local_1f0 == 0) {
              uVar16 = *(uint *)(this_00 + 100);
              local_1f0 = 0;
            }
            else {
              uVar16 = *(uint *)(this_00 + 100);
              local_1f0 = local_1f0 - (auStack_134[local_1f0 - 1 & 0x3f] == uVar16);
            }
            local_200 = local_1f0 + 1;
            auStack_134[local_1f0 & 0x3f] = uVar16;
            local_138 = local_200;
            uVar19 = local_200;
            local_1f0 = local_200;
            if ((uVar15 & 0xff3f) != 0) goto LAB_003e39a4;
LAB_003e420f:
            uVar39 = *(uint *)(this_00 + 0x5c);
            if (uVar39 == *(uint *)(this_00 + 0x60)) break;
          }
LAB_003e42a0:
          if (this_00[0x58] == (hb_buffer_t)0x0) break;
          if (((*(byte *)((long)local_178[0] + uVar20 * 4 + (ulong)uVar32 + 2) & 0x40) != 0) &&
             (iVar25 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar25 + -1, 0 < iVar25))
          goto LAB_003e4398;
          if (this_00[0x5a] == (hb_buffer_t)0x0) goto LAB_003e4391;
          pvVar21 = *(void **)(this_00 + 0x78);
          pvVar35 = *(void **)(this_00 + 0x70);
          if ((pvVar21 == pvVar35) && (*(uint *)(this_00 + 100) == uVar39)) goto LAB_003e3780;
          uVar16 = *(uint *)(this_00 + 100) + 1;
          if ((uVar16 == 0) || (uVar16 < *(uint *)(this_00 + 0x68))) {
            if (pvVar21 != pvVar35) goto LAB_003e4360;
LAB_003e430c:
            uVar16 = *(uint *)(this_00 + 100);
            if (uVar16 + 1 <= *(int *)(this_00 + 0x5c) + 1U) goto LAB_003e4356;
            pvVar21 = *(void **)(this_00 + 0x80);
            *(void **)(this_00 + 0x78) = pvVar21;
            goto LAB_003e4329;
          }
          uVar22 = hb_buffer_t::enlarge(this_00,uVar16);
          if ((char)uVar22 != '\0') {
            pvVar35 = *(void **)(this_00 + 0x70);
            pvVar21 = *(void **)(this_00 + 0x78);
            if (pvVar21 == pvVar35) goto LAB_003e430c;
            goto LAB_003e4360;
          }
          iVar25 = iVar18;
          if (this_00[0x58] == (hb_buffer_t)0x0) break;
        } while( true );
      }
    }
  }
LAB_003e448e:
  hb_buffer_t::sync(this_00);
  return;
LAB_003e3780:
  uVar16 = uVar39;
  goto LAB_003e4388;
LAB_003e4356:
  pvVar21 = pvVar35;
  goto LAB_003e4360;
}


