// Function : apply
// Namespace: AAT:ContextualSubtable_AAT__ObsoleteTypes_
// Entry    : 003e2800
// Prototype: undefined apply(ContextualSubtable<AAT::ObsoleteTypes> * this, long param_1)
// Body     : 003e2800 - 003e34a7


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::ContextualSubtable<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*) const */

void __thiscall
AAT::ContextualSubtable<AAT::ObsoleteTypes>::apply
          (ContextualSubtable<AAT::ObsoleteTypes> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  hb_buffer_t hVar3;
  ContextualSubtable<AAT::ObsoleteTypes> CVar4;
  short sVar5;
  short sVar6;
  long lVar7;
  GDEF *this_00;
  hb_buffer_t *this_01;
  pthread_mutex_t *__ptr;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  ushort uVar17;
  ushort uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  ushort uVar22;
  int iVar23;
  void *__src;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  void *__dest;
  ulong uVar28;
  ushort uVar29;
  uint *puVar30;
  bool bVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint local_a8;
  int local_a4;
  uint local_78;
  undefined4 local_70 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined1 local_44 [16];
  undefined1 local_34;
  undefined1 local_33;
  
  lVar7 = *(long *)(param_1 + 0x18);
  this_00 = *(GDEF **)(param_1 + 0x70);
  sVar5 = *(short *)this_00;
  sVar6 = *(short *)(this_00 + 4);
  uVar29 = *(ushort *)(this + 8);
  if (*(int *)(lVar7 + 0x18) == -1) {
    piVar15 = *(int **)(lVar7 + 0x78);
    if (piVar15 == (int *)0x0) {
      do {
        lVar27 = *(long *)(lVar7 + 0x68);
        piVar15 = &_hb_NullPool;
        if (lVar27 == 0) {
LAB_003e346f:
          uVar12 = piVar15[6];
          goto joined_r0x003e3478;
        }
        local_70[0] = 0;
        local_58 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_48 = 0;
        local_33 = 0;
        local_44 = (undefined1  [16])0x0;
        local_34 = 1;
        piVar15 = &_hb_NullPool;
                    /* try { // try from 003e3396 to 003e33b2 has its CatchHandler @ 003e34b0 */
        if ((*(code **)(lVar27 + 0x20) != (code *)0x0) &&
           (piVar15 = (int *)(**(code **)(lVar27 + 0x20))
                                       (lVar27,0x6d617870,*(undefined8 *)(lVar27 + 0x28)),
           piVar15 == (int *)0x0)) {
          piVar15 = &_hb_NullPool;
        }
        piVar15 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)local_70,piVar15);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar15 == (int *)0x0) {
          piVar15 = &_hb_NullPool;
          LOCK();
          bVar32 = *(long *)(lVar7 + 0x78) == 0;
          if (bVar32) {
            *(long *)(lVar7 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar32 = *(long *)(lVar7 + 0x78) == 0;
          if (bVar32) {
            *(long *)(lVar7 + 0x78) = (long)piVar15;
          }
          UNLOCK();
        }
        if (bVar32) goto LAB_003e346f;
        if (((piVar15 != (int *)0x0) && (piVar15 != &_hb_NullPool)) && (*piVar15 != 0)) {
          LOCK();
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            *piVar15 = -0xdead;
            __ptr = *(pthread_mutex_t **)(piVar15 + 2);
            if (__ptr != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &__ptr[1].__data,__ptr);
              free(__ptr);
              piVar15[2] = 0;
              piVar15[3] = 0;
            }
            if (*(code **)(piVar15 + 10) != (code *)0x0) {
                    /* try { // try from 003e3431 to 003e3432 has its CatchHandler @ 003e34a8 */
              (**(code **)(piVar15 + 10))(*(undefined8 *)(piVar15 + 8));
            }
            free(piVar15);
          }
        }
        piVar15 = *(int **)(lVar7 + 0x78);
      } while (piVar15 == (int *)0x0);
    }
    uVar12 = piVar15[6];
joined_r0x003e3478:
    if (uVar12 < 6) {
      puVar16 = &_hb_NullPool;
    }
    else {
      puVar16 = *(undefined4 **)(piVar15 + 4);
    }
    uVar17 = *(ushort *)(puVar16 + 1);
    uVar12 = (uint)(ushort)(uVar17 << 8 | uVar17 >> 8);
    if (uVar17 == 0) {
      uVar12 = 0;
    }
    *(uint *)(lVar7 + 0x18) = uVar12;
  }
  uVar17 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar25 = *(ulong *)(this + (ulong)(byte)this[(ulong)uVar17 + 1] * 8 +
                             (ulong)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8
                                            ));
  this_01 = *(hb_buffer_t **)(param_1 + 0x20);
  uVar12 = *(uint *)(this_01 + 0x60);
  if ((((*(uint *)(this_01 + 0x5c) != uVar12) &&
       (((short)(uVar25 >> 0x30) != -1 || ((uVar25 & 0xffff00000000) != 0xffff00000000)))) ||
      ((int)((uint)(ushort)((ushort)uVar25 << 8 | (ushort)uVar25 >> 8) - (uint)uVar17) /
       (int)(uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) != 0)) ||
     ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) != 0 &&
       ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) != 0)) &&
      ((*(ulong *)(param_1 + 0xa8) & *(ulong *)(param_1 + 0x90)) != 0)))) {
    lVar7 = *(long *)(param_1 + 0x78);
    if ((lVar7 == 0) || (*(uint *)(lVar7 + 4) < 2)) {
      puVar30 = (uint *)0x0;
      *(undefined4 *)(this_01 + 0x5c) = 0;
      hVar3 = this_01[0x58];
    }
    else {
      puVar30 = *(uint **)(lVar7 + 8);
      *(undefined4 *)(this_01 + 0x5c) = 0;
      hVar3 = this_01[0x58];
    }
    if (hVar3 != (hb_buffer_t)0x0) {
      uVar29 = uVar29 << 8 | uVar29 >> 8;
      uVar36 = 0;
      bVar32 = false;
      local_a8 = 0;
      local_a4 = 0;
      uVar25 = 0;
      if (puVar30 == (uint *)0x0) goto LAB_003e2a70;
LAB_003e2950:
      if (uVar36 < uVar12) {
        uVar9 = *(uint *)(*(long *)(this_01 + 0x70) + 8 + uVar25 * 0x14);
        puVar24 = puVar30 + 3;
        puVar20 = puVar30;
        do {
          puVar20 = puVar20 + -3;
          puVar30 = puVar24 + -2;
          puVar24 = puVar24 + -3;
        } while (uVar9 < *puVar30);
        do {
          puVar30 = puVar20 + 3;
          puVar24 = puVar20 + 5;
          puVar20 = puVar30;
        } while (*puVar24 < uVar9);
      }
      if ((*puVar30 & *(uint *)(param_1 + 0xe0)) != 0) goto LAB_003e2a73;
      if (uVar36 != uVar12) {
        if (this_01[0x5a] == (hb_buffer_t)0x0) {
          iVar10 = 0;
          goto LAB_003e3249;
        }
        __dest = *(void **)(this_01 + 0x78);
        __src = *(void **)(this_01 + 0x70);
        if ((__dest == __src) && (iVar10 = 0, *(uint *)(this_01 + 100) == uVar36)) {
          uVar12 = uVar36;
          goto LAB_003e323e;
        }
        uVar12 = *(uint *)(this_01 + 100) + 1;
        if ((uVar12 == 0) || (uVar12 < *(uint *)(this_01 + 0x68))) {
          iVar10 = 0;
          if (__dest != __src) goto LAB_003e3210;
        }
        else {
          uVar14 = hb_buffer_t::enlarge(this_01,uVar12);
          if ((char)uVar14 == '\0') {
            local_a4 = 0;
            hVar3 = this_01[0x58];
            iVar10 = local_a4;
            goto joined_r0x003e2a65;
          }
          __src = *(void **)(this_01 + 0x70);
          __dest = *(void **)(this_01 + 0x78);
          iVar10 = 0;
          if (__dest != __src) goto LAB_003e3210;
        }
        iVar10 = 0;
        uVar12 = *(uint *)(this_01 + 100);
        if (uVar12 + 1 <= *(int *)(this_01 + 0x5c) + 1U) goto LAB_003e3209;
        __dest = *(void **)(this_01 + 0x80);
        *(void **)(this_01 + 0x78) = __dest;
        iVar10 = 0;
LAB_003e31e5:
        if (uVar12 != 0) {
          memcpy(__dest,__src,(ulong)uVar12 * 0x14);
          __src = *(void **)(this_01 + 0x70);
          __dest = *(void **)(this_01 + 0x78);
        }
LAB_003e3210:
        uVar12 = *(uint *)(this_01 + 0x5c);
        uVar36 = *(uint *)(this_01 + 100);
        *(undefined4 *)((long)__dest + (ulong)uVar36 * 0x14 + 0x10) =
             *(undefined4 *)((long)__src + (ulong)uVar12 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((long)__src + (ulong)uVar12 * 0x14);
        uVar14 = puVar1[1];
        puVar2 = (undefined8 *)((long)__dest + (ulong)uVar36 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar14;
        uVar12 = *(uint *)(this_01 + 0x5c);
        uVar36 = *(uint *)(this_01 + 100);
LAB_003e323e:
        *(uint *)(this_01 + 100) = uVar36 + 1;
LAB_003e3246:
        uVar36 = uVar12;
LAB_003e3249:
        *(uint *)(this_01 + 0x5c) = uVar36 + 1;
        hVar3 = this_01[0x58];
joined_r0x003e2a65:
        local_a4 = iVar10;
        if (hVar3 != (hb_buffer_t)0x0) {
          do {
            uVar36 = *(uint *)(this_01 + 0x5c);
            uVar12 = *(uint *)(this_01 + 0x60);
            uVar25 = (ulong)uVar36;
            if (puVar30 != (uint *)0x0) goto LAB_003e2950;
LAB_003e2a70:
            puVar30 = (uint *)0x0;
LAB_003e2a73:
            if (uVar36 < uVar12) {
              uVar9 = *(uint *)(*(long *)(this_01 + 0x70) + uVar25 * 0x14);
              if ((ulong)uVar9 == 0xffff) {
                uVar25 = 2;
              }
              else {
                uVar25 = 1;
                if ((((*(ulong *)(param_1 + 0x98) >> ((ulong)(uVar9 >> 4) & 0x3f) & 1) != 0) &&
                    ((*(ulong *)(param_1 + 0xa0) >> ((ulong)uVar9 & 0x3f) & 1) != 0)) &&
                   ((*(ulong *)(param_1 + 0xa8) >> ((ulong)(uVar9 >> 9) & 0x3f) & 1) != 0)) {
                  uVar13 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
                  uVar9 = uVar9 - (ushort)(*(ushort *)(this + uVar13) << 8 |
                                          *(ushort *)(this + uVar13) >> 8);
                  if (uVar9 < (ushort)(*(ushort *)(this + uVar13 + 2) << 8 |
                                      *(ushort *)(this + uVar13 + 2) >> 8)) {
                    uVar25 = (ulong)(byte)this[(ulong)uVar9 + uVar13 + 4];
                  }
                }
              }
            }
            else {
              uVar25 = 0;
            }
            uVar17 = *(ushort *)this;
            uVar8 = uVar17 << 8 | uVar17 >> 8;
            uVar39 = (uint)uVar25;
            uVar9 = uVar39;
            if (uVar8 <= uVar39) {
              uVar9 = 1;
            }
            uVar18 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
            uVar22 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
            iVar23 = local_a4 * (uint)uVar8;
            uVar13 = (ulong)(byte)this[(ulong)(uVar9 + iVar23) + (ulong)uVar18];
            uVar9 = (uint)uVar8;
            iVar10 = (int)((uint)(ushort)(*(ushort *)(this + uVar13 * 8 + (ulong)uVar22) << 8 |
                                         *(ushort *)(this + uVar13 * 8 + (ulong)uVar22) >> 8) -
                          (uint)uVar18) / (int)uVar9;
            bVar31 = uVar36 != uVar12;
            if ((!(bVar32 || bVar31)) ||
               ((*(short *)(this + uVar13 * 8 + (ulong)uVar22 + 4) == -1 &&
                (*(short *)(this + uVar13 * 8 + (ulong)uVar22 + 6) == -1)))) {
              if ((local_a4 != 0) &&
                 (((*(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 2) & 0x40) == 0 || (iVar10 != 0)
                  ))) {
                if (uVar39 < uVar9) {
                  CVar4 = this[uVar25 + uVar18];
                }
                else {
                  CVar4 = this[(ulong)uVar18 + 1];
                }
                uVar25 = (ulong)(byte)CVar4;
                if (((bVar32 || bVar31) &&
                    ((*(short *)(this + uVar25 * 8 + (ulong)uVar22 + 4) != -1 ||
                     (*(short *)(this + uVar25 * 8 + (ulong)uVar22 + 6) != -1)))) ||
                   ((iVar10 != (int)((uint)(ushort)(*(ushort *)(this + uVar25 * 8 + (ulong)uVar22)
                                                    << 8 | *(ushort *)
                                                            (this + uVar25 * 8 + (ulong)uVar22) >> 8
                                                   ) - (uint)uVar18) / (int)uVar9 ||
                    (((*(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 2) ^
                      *(ushort *)(this + uVar25 * 8 + (ulong)uVar22 + 2)) & 0x40) != 0))))
                goto LAB_003e2cc0;
              }
              iVar11 = 0;
              if (uVar17 == 0) {
                iVar11 = 1;
                if (!(bVar32 || bVar31)) goto LAB_003e2baa;
LAB_003e2c70:
                if ((*(short *)(this + (ulong)(byte)this[(ulong)(uint)(iVar11 + iVar23) +
                                                         (ulong)uVar18] * 8 + (ulong)uVar22 + 4) !=
                     -1) || (*(short *)(this + (ulong)(byte)this[(ulong)(uint)(iVar11 + iVar23) +
                                                                 (ulong)uVar18] * 8 +
                                               (ulong)uVar22 + 6) != -1)) goto LAB_003e2cc0;
              }
              else {
                if (!(!bVar32 && !bVar31)) goto LAB_003e2c70;
LAB_003e2baa:
                uVar36 = uVar12;
              }
            }
            else {
LAB_003e2cc0:
              uVar9 = uVar36;
              if (this_01[0x5a] != (hb_buffer_t)0x0) {
                uVar9 = *(uint *)(this_01 + 100);
              }
              if ((uVar9 != 0) && (uVar36 < uVar12)) {
                hb_buffer_t::_set_glyph_flags(this_01,3,uVar9 - 1,uVar36 + 1,'\x01');
                uVar36 = *(uint *)(this_01 + 0x5c);
                uVar12 = *(uint *)(this_01 + 0x60);
              }
            }
            if ((uVar36 != uVar12) || (bVar32)) {
              uVar25 = (ulong)local_a8;
              uVar12 = ((uint)(ushort)(*(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 4) << 8 |
                                      *(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 4) >> 8) +
                       *(int *)(*(long *)(this_01 + 0x70) + uVar25 * 0x14)) * 2;
              local_78 = (uint)uVar29;
              if (uVar12 < local_78) {
                uVar12 = 0x3fffffff;
              }
              else {
                uVar12 = uVar12 - local_78 >> 1;
              }
              uVar21 = (ulong)uVar12;
              if ((this + ((uVar21 * 2 + (ulong)uVar29) - *(long *)(param_1 + 0x30)) + 2 <=
                   (ContextualSubtable<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x40)) &&
                 (uVar17 = *(ushort *)(this + uVar21 * 2 + (ulong)uVar29), uVar17 != 0)) {
                uVar12 = *(int *)(this_01 + 0x5c) + 1U;
                if (*(uint *)(this_01 + 0x60) < *(int *)(this_01 + 0x5c) + 1U) {
                  uVar12 = *(uint *)(this_01 + 0x60);
                }
                if (1 < uVar12 - local_a8) {
                  this_01[0xc0] = (hb_buffer_t)((byte)this_01[0xc0] | 0x20);
                  lVar7 = *(long *)(this_01 + 0x70);
                  uVar36 = 0xffffffff;
                  if (uVar12 != local_a8) {
                    if (*(int *)(this_01 + 0x1c) == 2) {
                      if (local_a8 < uVar12) {
                        uVar19 = (ulong)uVar12;
                        uVar28 = uVar19 - uVar25;
                        uVar36 = 0xffffffff;
                        uVar26 = uVar25;
                        if (8 < uVar28) {
                          uVar26 = (ulong)((uint)uVar28 & 7);
                          if (uVar26 == 0) {
                            uVar26 = 8;
                          }
                          lVar27 = (uVar26 + uVar25) - uVar19;
                          puVar20 = (uint *)(lVar7 + uVar25 * 0x14 + 0x94);
                          uVar39 = 0xffffffff;
                          uVar36 = 0xffffffff;
                          uVar9 = 0xffffffff;
                          uVar33 = 0xffffffff;
                          uVar34 = 0xffffffff;
                          uVar38 = 0xffffffff;
                          uVar41 = 0xffffffff;
                          uVar35 = 0xffffffff;
                          do {
                            uVar37 = -(uint)((int)(uVar36 ^ _DAT_006524b0) <
                                            (int)(puVar20[-0x23] ^ _DAT_006524b0));
                            uVar40 = -(uint)((int)(uVar9 ^ _UNK_006524b4) <
                                            (int)(puVar20[-0x1e] ^ _UNK_006524b4));
                            uVar42 = -(uint)((int)(uVar39 ^ _UNK_006524b8) <
                                            (int)(puVar20[-0x19] ^ _UNK_006524b8));
                            uVar43 = -(uint)((int)(uVar33 ^ _UNK_006524bc) <
                                            (int)(puVar20[-0x14] ^ _UNK_006524bc));
                            uVar36 = ~uVar37 & puVar20[-0x23] | uVar36 & uVar37;
                            uVar9 = ~uVar40 & puVar20[-0x1e] | uVar9 & uVar40;
                            uVar39 = ~uVar42 & puVar20[-0x19] | uVar39 & uVar42;
                            uVar33 = ~uVar43 & puVar20[-0x14] | uVar33 & uVar43;
                            uVar37 = -(uint)((int)(uVar38 ^ _DAT_006524b0) <
                                            (int)(puVar20[-0xf] ^ _DAT_006524b0));
                            uVar40 = -(uint)((int)(uVar41 ^ _UNK_006524b4) <
                                            (int)(puVar20[-10] ^ _UNK_006524b4));
                            uVar42 = -(uint)((int)(uVar34 ^ _UNK_006524b8) <
                                            (int)(puVar20[-5] ^ _UNK_006524b8));
                            uVar43 = -(uint)((int)(uVar35 ^ _UNK_006524bc) <
                                            (int)(*puVar20 ^ _UNK_006524bc));
                            uVar38 = ~uVar37 & puVar20[-0xf] | uVar38 & uVar37;
                            uVar41 = ~uVar40 & puVar20[-10] | uVar41 & uVar40;
                            uVar34 = ~uVar42 & puVar20[-5] | uVar34 & uVar42;
                            uVar35 = ~uVar43 & *puVar20 | uVar35 & uVar43;
                            puVar20 = puVar20 + 0x28;
                            lVar27 = lVar27 + 8;
                          } while (lVar27 != 0);
                          uVar26 = uVar25 + (uVar28 - uVar26);
                          uVar37 = -(uint)((int)(uVar36 ^ _DAT_006524b0) <
                                          (int)(uVar38 ^ _DAT_006524b0));
                          uVar40 = -(uint)((int)(uVar9 ^ _UNK_006524b4) <
                                          (int)(uVar41 ^ _UNK_006524b4));
                          uVar42 = -(uint)((int)(uVar39 ^ _UNK_006524b8) <
                                          (int)(uVar34 ^ _UNK_006524b8));
                          uVar43 = -(uint)((int)(uVar33 ^ _UNK_006524bc) <
                                          (int)(uVar35 ^ _UNK_006524bc));
                          uVar38 = ~uVar37 & uVar38 | uVar36 & uVar37;
                          uVar41 = ~uVar40 & uVar41 | uVar9 & uVar40;
                          uVar39 = ~uVar42 & uVar34 | uVar39 & uVar42;
                          uVar33 = ~uVar43 & uVar35 | uVar33 & uVar43;
                          uVar36 = -(uint)((int)(uVar38 ^ _DAT_006524b0) <
                                          (int)(uVar39 ^ _DAT_006524b0));
                          uVar9 = -(uint)((int)(uVar41 ^ _UNK_006524b4) <
                                         (int)(uVar33 ^ _UNK_006524b4));
                          uVar36 = ~uVar36 & uVar39 | uVar38 & uVar36;
                          uVar9 = ~uVar9 & uVar33 | uVar41 & uVar9;
                          uVar39 = -(uint)((int)(uVar36 ^ _DAT_006524b0) <
                                          (int)(uVar9 ^ _DAT_006524b0));
                          uVar36 = ~uVar39 & uVar9 | uVar36 & uVar39;
                        }
                        lVar27 = uVar19 - uVar26;
                        puVar20 = (uint *)(lVar7 + uVar26 * 0x14 + 8);
                        do {
                          if (*puVar20 < uVar36) {
                            uVar36 = *puVar20;
                          }
                          puVar20 = puVar20 + 5;
                          lVar27 = lVar27 + -1;
                        } while (lVar27 != 0);
                      }
                    }
                    else {
                      uVar36 = *(uint *)(lVar7 + 8 + uVar25 * 0x14);
                      uVar9 = *(uint *)(lVar7 + 8 + (ulong)(uVar12 - 1) * 0x14);
                      if (uVar9 < uVar36) {
                        uVar36 = uVar9;
                      }
                    }
                  }
                  hb_buffer_t::_infos_set_glyph_flags(this_01,lVar7,local_a8,uVar12,uVar36,3);
                  uVar17 = *(ushort *)(this + uVar21 * 2 + (ulong)uVar29);
                }
                uVar8 = uVar17 << 8 | uVar17 >> 8;
                lVar7 = *(long *)(this_01 + 0x70);
                *(uint *)(lVar7 + uVar25 * 0x14) = (uint)uVar8;
                *(ulong *)(param_1 + 0x80) =
                     *(ulong *)(param_1 + 0x80) | 1L << ((byte)(uVar8 >> 4) & 0x3f);
                *(ulong *)(param_1 + 0x88) =
                     *(ulong *)(param_1 + 0x88) | 1L << ((byte)(uVar17 >> 8) & 0x3f);
                *(ulong *)(param_1 + 0x90) =
                     *(ulong *)(param_1 + 0x90) | 1L << ((byte)uVar17 >> 1 & 0x3f);
                if (sVar5 == 0x100 && sVar6 != 0) {
                  uVar12 = OT::GDEF::get_glyph_props(this_00,(uint)uVar8);
                  *(short *)(lVar7 + 0xc + uVar25 * 0x14) = (short)uVar12;
                }
              }
              uVar12 = *(int *)(this_01 + 0x60) - 1U;
              if (*(uint *)(this_01 + 0x5c) <= *(int *)(this_01 + 0x60) - 1U) {
                uVar12 = *(uint *)(this_01 + 0x5c);
              }
              uVar25 = (ulong)uVar12;
              uVar12 = ((uint)(ushort)(*(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 6) << 8 |
                                      *(ushort *)(this + uVar13 * 8 + (ulong)uVar22 + 6) >> 8) +
                       *(int *)(*(long *)(this_01 + 0x70) + uVar25 * 0x14)) * 2;
              if (uVar12 < local_78) {
                uVar12 = 0x3fffffff;
              }
              else {
                uVar12 = uVar12 - local_78 >> 1;
              }
              if ((this + (((ulong)uVar12 * 2 + (ulong)uVar29) - *(long *)(param_1 + 0x30)) + 2 <=
                   (ContextualSubtable<AAT::ObsoleteTypes> *)(ulong)*(uint *)(param_1 + 0x40)) &&
                 (uVar17 = *(ushort *)(this + (ulong)uVar12 * 2 + (ulong)uVar29), uVar17 != 0)) {
                uVar8 = uVar17 << 8 | uVar17 >> 8;
                lVar7 = *(long *)(this_01 + 0x70);
                *(uint *)(lVar7 + uVar25 * 0x14) = (uint)uVar8;
                *(ulong *)(param_1 + 0x80) =
                     *(ulong *)(param_1 + 0x80) | 1L << ((byte)(uVar8 >> 4) & 0x3f);
                *(ulong *)(param_1 + 0x88) =
                     *(ulong *)(param_1 + 0x88) | 1L << ((byte)(uVar17 >> 8) & 0x3f);
                *(ulong *)(param_1 + 0x90) =
                     *(ulong *)(param_1 + 0x90) | 1L << ((byte)uVar17 >> 1 & 0x3f);
                if (sVar5 == 0x100 && sVar6 != 0) {
                  uVar12 = OT::GDEF::get_glyph_props(this_00,(uint)uVar8);
                  *(short *)(lVar7 + 0xc + uVar25 * 0x14) = (short)uVar12;
                }
              }
              uVar12 = *(uint *)(this_01 + 0x5c);
              if (((byte)this[uVar13 * 8 + (ulong)uVar22 + 2] & 0x80) != 0) {
                local_a8 = uVar12;
                bVar32 = true;
              }
              if (uVar12 == *(uint *)(this_01 + 0x60)) {
                return;
              }
            }
            else {
              bVar32 = false;
              if (uVar12 == *(uint *)(this_01 + 0x60)) {
                return;
              }
            }
            if (this_01[0x58] == (hb_buffer_t)0x0) {
              return;
            }
            if ((((byte)this[uVar13 * 8 + (ulong)uVar22 + 2] & 0x40) == 0) ||
               (iVar23 = *(int *)(this_01 + 200), *(int *)(this_01 + 200) = iVar23 + -1, iVar23 < 1)
               ) {
              if (this_01[0x5a] != (hb_buffer_t)0x0) {
                __dest = *(void **)(this_01 + 0x78);
                __src = *(void **)(this_01 + 0x70);
                if ((__dest == __src) && (*(uint *)(this_01 + 100) == uVar12)) {
                  uVar36 = uVar12;
                  goto LAB_003e323e;
                }
                uVar12 = *(uint *)(this_01 + 100) + 1;
                if ((uVar12 == 0) || (uVar12 < *(uint *)(this_01 + 0x68))) {
                  if (__dest != __src) goto LAB_003e3210;
                }
                else {
                  uVar14 = hb_buffer_t::enlarge(this_01,uVar12);
                  if ((char)uVar14 == '\0') {
                    hVar3 = this_01[0x58];
                    goto joined_r0x003e32ce;
                  }
                  __src = *(void **)(this_01 + 0x70);
                  __dest = *(void **)(this_01 + 0x78);
                  if (__dest != __src) goto LAB_003e3210;
                }
                uVar12 = *(uint *)(this_01 + 100);
                if (uVar12 + 1 <= *(int *)(this_01 + 0x5c) + 1U) goto LAB_003e3209;
                __dest = *(void **)(this_01 + 0x80);
                *(void **)(this_01 + 0x78) = __dest;
                goto LAB_003e31e5;
              }
              goto LAB_003e3246;
            }
            hVar3 = this_01[0x58];
joined_r0x003e32ce:
            local_a4 = iVar10;
            if (hVar3 == (hb_buffer_t)0x0) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
LAB_003e3209:
  __dest = __src;
  goto LAB_003e3210;
}


