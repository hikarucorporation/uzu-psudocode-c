// Function : apply
// Namespace: AAT:InsertionSubtable_AAT__ObsoleteTypes_
// Entry    : 003e4830
// Prototype: undefined apply(InsertionSubtable<AAT::ObsoleteTypes> * this, long param_1)
// Body     : 003e4830 - 003e5882


/* WARNING: Removing unreachable block (ram,0x003e4f6e) */
/* AAT::InsertionSubtable<AAT::ObsoleteTypes>::apply(AAT::hb_aat_apply_context_t*) const */

void __thiscall
AAT::InsertionSubtable<AAT::ObsoleteTypes>::apply
          (InsertionSubtable<AAT::ObsoleteTypes> *this,long param_1)

{
  hb_buffer_t *phVar1;
  hb_buffer_t *phVar2;
  InsertionSubtable<AAT::ObsoleteTypes> *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  hb_buffer_t hVar6;
  ushort uVar7;
  long lVar8;
  hb_buffer_t *this_00;
  long lVar9;
  pthread_mutex_t *__ptr;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  ushort uVar15;
  int iVar16;
  undefined8 *puVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  ulong uVar26;
  ushort uVar27;
  int iVar28;
  ulong uVar29;
  void *pvVar30;
  hb_buffer_t *phVar31;
  void *pvVar32;
  uint *puVar33;
  uint *puVar34;
  ulong uVar35;
  uint uVar36;
  bool bVar37;
  uint local_e0;
  int local_d4;
  ulong local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 local_3c;
  undefined1 local_3b;
  
  uVar7 = *(ushort *)(this + 8);
  lVar8 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar8 + 0x18) == -1) {
    piVar13 = *(int **)(lVar8 + 0x78);
    if (piVar13 == (int *)0x0) {
      do {
        lVar9 = *(long *)(lVar8 + 0x68);
        piVar13 = &_hb_NullPool;
        if (lVar9 == 0) {
LAB_003e5851:
          if ((uint)piVar13[6] < 6) goto LAB_003e585f;
          goto LAB_003e570f;
        }
        local_78 = local_78 & 0xffffffff00000000;
        local_60 = 0;
        uStack_58 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_50 = 0;
        local_3b = 0;
        local_4c = 0;
        uStack_44 = 0;
        local_3c = 1;
        piVar13 = &_hb_NullPool;
                    /* try { // try from 003e5776 to 003e5792 has its CatchHandler @ 003e588b */
        if ((*(code **)(lVar9 + 0x20) != (code *)0x0) &&
           (piVar13 = (int *)(**(code **)(lVar9 + 0x20))
                                       (lVar9,0x6d617870,*(undefined8 *)(lVar9 + 0x28)),
           piVar13 == (int *)0x0)) {
          piVar13 = &_hb_NullPool;
        }
        piVar13 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)&local_78,piVar13);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_78);
        if (piVar13 == (int *)0x0) {
          piVar13 = &_hb_NullPool;
          LOCK();
          bVar37 = *(long *)(lVar8 + 0x78) == 0;
          if (bVar37) {
            *(long *)(lVar8 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar37 = *(long *)(lVar8 + 0x78) == 0;
          if (bVar37) {
            *(long *)(lVar8 + 0x78) = (long)piVar13;
          }
          UNLOCK();
        }
        if (bVar37) goto LAB_003e5851;
        if (((piVar13 != (int *)0x0) && (piVar13 != &_hb_NullPool)) && (*piVar13 != 0)) {
          LOCK();
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            *piVar13 = -0xdead;
            __ptr = *(pthread_mutex_t **)(piVar13 + 2);
            if (__ptr != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &__ptr[1].__data,__ptr);
              free(__ptr);
              piVar13[2] = 0;
              piVar13[3] = 0;
            }
            if (*(code **)(piVar13 + 10) != (code *)0x0) {
                    /* try { // try from 003e5815 to 003e5816 has its CatchHandler @ 003e5883 */
              (**(code **)(piVar13 + 10))(*(undefined8 *)(piVar13 + 8));
            }
            free(piVar13);
          }
        }
        piVar13 = *(int **)(lVar8 + 0x78);
      } while (piVar13 == (int *)0x0);
    }
    if ((uint)piVar13[6] < 6) {
LAB_003e585f:
      puVar14 = &_hb_NullPool;
    }
    else {
LAB_003e570f:
      puVar14 = *(undefined4 **)(piVar13 + 4);
    }
    uVar15 = *(ushort *)(puVar14 + 1);
    uVar25 = (uint)(ushort)(uVar15 << 8 | uVar15 >> 8);
    if (uVar15 == 0) {
      uVar25 = 0;
    }
    *(uint *)(lVar8 + 0x18) = uVar25;
  }
  uVar15 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar11 = *(ulong *)(this + (ulong)(byte)this[(ulong)uVar15 + 1] * 8 +
                             (ulong)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8
                                            ));
  if (((((uVar11 & 0xff030000) == 0) ||
       (((short)(uVar11 >> 0x30) == -1 && ((uVar11 & 0xffff00000000) == 0xffff00000000)))) &&
      ((int)((uint)(ushort)((ushort)uVar11 << 8 | (ushort)uVar11 >> 8) - (uint)uVar15) /
       (int)(uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) == 0)) &&
     ((((*(ulong *)(param_1 + 0x80) & *(ulong *)(param_1 + 0x98)) == 0 ||
       ((*(ulong *)(param_1 + 0x88) & *(ulong *)(param_1 + 0xa0)) == 0)) ||
      ((*(ulong *)(param_1 + 0xa8) & *(ulong *)(param_1 + 0x90)) == 0)))) {
    return;
  }
  this_00 = *(hb_buffer_t **)(param_1 + 0x20);
  *(undefined2 *)(this_00 + 0x5a) = 1;
  *(undefined4 *)(this_00 + 0x5c) = 0;
  *(undefined4 *)(this_00 + 100) = 0;
  *(undefined8 *)(this_00 + 0x78) = *(undefined8 *)(this_00 + 0x70);
  lVar8 = *(long *)(param_1 + 0x78);
  if ((lVar8 == 0) || (*(uint *)(lVar8 + 4) < 2)) {
    puVar34 = (uint *)0x0;
    *(undefined4 *)(this_00 + 0x5c) = 0;
    hVar6 = this_00[0x58];
  }
  else {
    puVar34 = *(uint **)(lVar8 + 8);
    *(undefined4 *)(this_00 + 0x5c) = 0;
    hVar6 = this_00[0x58];
  }
  if (hVar6 == (hb_buffer_t)0x0) {
LAB_003e5699:
    hb_buffer_t::sync(this_00);
    return;
  }
  uVar11 = (ulong)(ushort)(uVar7 << 8 | uVar7 >> 8);
  phVar1 = this_00 + 0x70;
  phVar2 = this_00 + 0x78;
  uVar36 = 0;
  local_e0 = 0;
  iVar16 = 0;
  uVar25 = *(uint *)(this_00 + 0x60);
  uVar35 = 0;
  iVar28 = 0;
  if (puVar34 == (uint *)0x0) goto LAB_003e4ad0;
LAB_003e4990:
  iVar16 = iVar28;
  if (uVar36 < uVar25) {
    uVar10 = *(uint *)(*(long *)phVar1 + 8 + uVar35 * 0x14);
    puVar33 = puVar34 + 3;
    puVar22 = puVar34;
    do {
      puVar22 = puVar22 + -3;
      puVar34 = puVar33 + -2;
      puVar33 = puVar33 + -3;
    } while (uVar10 < *puVar34);
    do {
      puVar34 = puVar22 + 3;
      puVar33 = puVar22 + 5;
      puVar22 = puVar34;
    } while (*puVar33 < uVar10);
  }
  if ((*puVar34 & *(uint *)(param_1 + 0xe0)) != 0) goto LAB_003e4ad8;
  if (uVar36 == uVar25) goto LAB_003e5699;
  if (this_00[0x5a] == (hb_buffer_t)0x0) {
    local_d4 = 0;
    goto LAB_003e55e1;
  }
  pvVar30 = *(void **)(this_00 + 0x78);
  pvVar32 = *(void **)(this_00 + 0x70);
  if ((pvVar30 == pvVar32) && (local_d4 = 0, *(uint *)(this_00 + 100) == uVar36)) {
    uVar25 = uVar36;
    goto LAB_003e55d8;
  }
  uVar25 = *(uint *)(this_00 + 100) + 1;
  if ((uVar25 == 0) || (uVar25 < *(uint *)(this_00 + 0x68))) {
    local_d4 = 0;
    if (pvVar30 != pvVar32) goto LAB_003e55b0;
  }
  else {
    uVar12 = hb_buffer_t::enlarge(this_00,uVar25);
    if ((char)uVar12 == '\0') {
      iVar16 = 0;
      if (this_00[0x58] != (hb_buffer_t)0x0) goto LAB_003e55f8;
      goto LAB_003e5699;
    }
    pvVar30 = *(void **)phVar2;
    pvVar32 = *(void **)phVar1;
    local_d4 = 0;
    if (pvVar30 != pvVar32) goto LAB_003e55b0;
  }
  local_d4 = 0;
  uVar25 = *(uint *)(this_00 + 100);
  if (*(int *)(this_00 + 0x5c) + 1U < uVar25 + 1) {
    pvVar30 = *(void **)(this_00 + 0x80);
    *(void **)(this_00 + 0x78) = pvVar30;
    local_d4 = 0;
    goto LAB_003e5584;
  }
  pvVar30 = pvVar32;
LAB_003e55b0:
  uVar25 = *(uint *)(this_00 + 0x5c);
  uVar36 = *(uint *)(this_00 + 100);
  *(undefined4 *)((long)pvVar30 + (ulong)uVar36 * 0x14 + 0x10) =
       *(undefined4 *)((long)pvVar32 + (ulong)uVar25 * 0x14 + 0x10);
  puVar17 = (undefined8 *)((long)pvVar32 + (ulong)uVar25 * 0x14);
  uVar12 = puVar17[1];
  puVar5 = (undefined8 *)((long)pvVar30 + (ulong)uVar36 * 0x14);
  *puVar5 = *puVar17;
  puVar5[1] = uVar12;
  uVar36 = *(uint *)(this_00 + 0x5c);
  uVar25 = *(uint *)(this_00 + 100);
LAB_003e55d8:
  *(uint *)(this_00 + 100) = uVar25 + 1;
LAB_003e55e1:
  *(uint *)(this_00 + 0x5c) = uVar36 + 1;
  hVar6 = this_00[0x58];
  iVar16 = local_d4;
joined_r0x003e55f2:
  if (hVar6 == (hb_buffer_t)0x0) goto LAB_003e5699;
LAB_003e55f8:
  uVar36 = *(uint *)(this_00 + 0x5c);
  uVar25 = *(uint *)(this_00 + 0x60);
  uVar35 = (ulong)uVar36;
  iVar28 = iVar16;
  if (puVar34 != (uint *)0x0) goto LAB_003e4990;
LAB_003e4ad0:
  puVar34 = (uint *)0x0;
LAB_003e4ad8:
  if (uVar36 < uVar25) {
    uVar10 = *(uint *)(*(long *)phVar1 + uVar35 * 0x14);
    if ((ulong)uVar10 == 0xffff) {
      uVar35 = 2;
    }
    else {
      uVar35 = 1;
      if ((((*(ulong *)(param_1 + 0x98) >> ((ulong)(uVar10 >> 4) & 0x3f) & 1) != 0) &&
          ((*(ulong *)(param_1 + 0xa0) >> ((ulong)uVar10 & 0x3f) & 1) != 0)) &&
         ((*(ulong *)(param_1 + 0xa8) >> ((ulong)(uVar10 >> 9) & 0x3f) & 1) != 0)) {
        uVar21 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
        uVar10 = uVar10 - (ushort)(*(ushort *)(this + uVar21) << 8 | *(ushort *)(this + uVar21) >> 8
                                  );
        if (uVar10 < (ushort)(*(ushort *)(this + uVar21 + 2) << 8 |
                             *(ushort *)(this + uVar21 + 2) >> 8)) {
          uVar35 = (ulong)(byte)this[(ulong)uVar10 + uVar21 + 4];
        }
      }
    }
  }
  else {
    uVar35 = 0;
  }
  uVar7 = *(ushort *)this;
  uVar15 = uVar7 << 8 | uVar7 >> 8;
  uVar20 = (uint)uVar35;
  uVar10 = uVar20;
  if (uVar15 <= uVar20) {
    uVar10 = 1;
  }
  uVar18 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar27 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
  iVar28 = iVar16 * (uint)uVar15;
  uVar21 = (ulong)(byte)this[(ulong)(uVar10 + iVar28) + (ulong)uVar18];
  uVar10 = (uint)uVar15;
  local_d4 = (int)((uint)(ushort)(*(ushort *)(this + uVar21 * 8 + (ulong)uVar27) << 8 |
                                 *(ushort *)(this + uVar21 * 8 + (ulong)uVar27) >> 8) - (uint)uVar18
                  ) / (int)uVar10;
  uVar15 = *(ushort *)(this + uVar21 * 8 + (ulong)uVar27 + 2);
  if (((uVar15 & 0xff03) == 0) ||
     ((*(short *)(this + uVar21 * 8 + (ulong)uVar27 + 4) == -1 &&
      (*(short *)(this + uVar21 * 8 + (ulong)uVar27 + 6) == -1)))) {
    if ((iVar16 != 0) && (((uVar15 & 0x40) == 0 || (local_d4 != 0)))) {
      if (uVar10 <= uVar20) {
        uVar35 = 1;
      }
      uVar35 = (ulong)(byte)this[uVar35 + uVar18];
      if ((((*(ushort *)(this + uVar35 * 8 + (ulong)uVar27 + 2) & 0xff03) != 0) &&
          ((*(short *)(this + uVar35 * 8 + (ulong)uVar27 + 4) != -1 ||
           (*(short *)(this + uVar35 * 8 + (ulong)uVar27 + 6) != -1)))) ||
         ((local_d4 !=
           (int)((uint)(ushort)(*(ushort *)(this + uVar35 * 8 + (ulong)uVar27) << 8 |
                               *(ushort *)(this + uVar35 * 8 + (ulong)uVar27) >> 8) - (uint)uVar18)
           / (int)uVar10 ||
          (((*(ushort *)(this + uVar35 * 8 + (ulong)uVar27 + 2) ^ uVar15) & 0x40) != 0))))
      goto LAB_003e4cf0;
    }
    uVar35 = (ulong)(byte)this[(ulong)((uint)(uVar7 == 0) + iVar28) + (ulong)uVar18];
    if (((*(ushort *)(this + uVar35 * 8 + (ulong)uVar27 + 2) & 0xff03) != 0) &&
       ((*(short *)(this + uVar35 * 8 + (ulong)uVar27 + 4) != -1 ||
        (*(short *)(this + uVar35 * 8 + (ulong)uVar27 + 6) != -1)))) goto LAB_003e4cf0;
  }
  else {
LAB_003e4cf0:
    uVar10 = uVar36;
    if (this_00[0x5a] != (hb_buffer_t)0x0) {
      uVar10 = *(uint *)(this_00 + 100);
    }
    if ((uVar10 != 0) && (uVar36 < uVar25)) {
      hb_buffer_t::_set_glyph_flags(this_00,3,uVar10 - 1,uVar36 + 1,'\x01');
      uVar15 = *(ushort *)(this + uVar21 * 8 + (ulong)uVar27 + 2);
    }
  }
  uVar18 = uVar15 << 8;
  uVar15 = uVar18 | uVar15 >> 8;
  uVar25 = *(uint *)(this_00 + 100);
  uVar7 = *(ushort *)(this + uVar21 * 8 + (ulong)uVar27 + 6);
  if (uVar7 == 0xffff) {
LAB_003e50d9:
    if ((uVar18 & 0x8000) == 0) {
      uVar25 = local_e0;
    }
    uVar7 = *(ushort *)(this + uVar21 * 8 + (ulong)uVar27 + 4);
    local_e0 = uVar25;
    if (uVar7 != 0xffff) {
      uVar25 = uVar15 >> 5 & 0x1f;
      iVar16 = *(int *)(this_00 + 200);
      *(uint *)(this_00 + 200) = iVar16 - uVar25;
      if (0 < (int)(iVar16 - uVar25)) {
        uVar35 = (ulong)(ushort)(uVar7 << 8 | uVar7 >> 8);
        pIVar3 = this + uVar35 * 2 + uVar11;
        if ((((ulong)*(uint *)(param_1 + 0x40) < (ulong)((long)pIVar3 - *(long *)(param_1 + 0x30)))
            || ((uint)(*(int *)(param_1 + 0x38) - (int)pIVar3) < uVar25 * 2)) ||
           (iVar16 = *(int *)(param_1 + 0x44) + uVar25 * -2, *(int *)(param_1 + 0x44) = iVar16,
           iVar16 < 1)) {
          uVar25 = 0;
        }
        iVar16 = *(int *)(this_00 + 100);
        iVar28 = iVar16;
        if (((uVar18 & 0x800) == 0) &&
           (uVar36 = *(uint *)(this_00 + 0x5c), uVar36 < *(uint *)(this_00 + 0x60))) {
          pvVar30 = *(void **)(this_00 + 0x70);
          local_68 = CONCAT44(local_68._4_4_,
                              *(undefined4 *)((long)pvVar30 + (ulong)uVar36 * 0x14 + 0x10));
          puVar4 = (ulong *)((long)pvVar30 + (ulong)uVar36 * 0x14);
          local_78 = *puVar4;
          uStack_70 = puVar4[1];
          uVar36 = iVar16 + 1;
          if ((uVar36 == 0) || (uVar36 < *(uint *)(this_00 + 0x68))) {
            pvVar32 = *(void **)phVar2;
            if (*(void **)phVar2 == pvVar30) {
LAB_003e51cd:
              uVar36 = *(uint *)(this_00 + 100);
              if (*(uint *)(this_00 + 0x5c) < uVar36 + 1) {
                pvVar32 = *(void **)(this_00 + 0x80);
                *(void **)(this_00 + 0x78) = pvVar32;
                if ((ulong)uVar36 != 0) {
                  memcpy(pvVar32,pvVar30,(ulong)uVar36 * 0x14);
                  pvVar32 = *(void **)phVar2;
                }
              }
              else {
                pvVar32 = pvVar30;
              }
            }
          }
          else {
            uVar12 = hb_buffer_t::enlarge(this_00,uVar36);
            if ((char)uVar12 == '\0') goto LAB_003e54b5;
            pvVar30 = *(void **)phVar1;
            pvVar32 = *(void **)phVar2;
            if (pvVar32 == pvVar30) goto LAB_003e51cd;
          }
          uVar36 = *(uint *)(this_00 + 100);
          *(undefined4 *)((long)pvVar32 + (ulong)uVar36 * 0x14 + 0x10) = (undefined4)local_68;
          puVar4 = (ulong *)((long)pvVar32 + (ulong)uVar36 * 0x14);
          *puVar4 = local_78;
          puVar4[1] = uStack_70;
          iVar28 = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 100) = iVar28;
        }
        uVar36 = iVar28 + uVar25;
        if (((uVar36 == 0) || (uVar36 < *(uint *)(this_00 + 0x68))) ||
           (uVar12 = hb_buffer_t::enlarge(this_00,uVar36), (char)uVar12 != '\0')) {
          if ((*(void **)phVar2 == *(void **)phVar1) &&
             (uVar36 = *(uint *)(this_00 + 100), *(uint *)(this_00 + 0x5c) < uVar36 + uVar25)) {
            *(void **)(this_00 + 0x78) = *(void **)(this_00 + 0x80);
            if ((ulong)uVar36 != 0) {
              memcpy(*(void **)(this_00 + 0x80),*(void **)phVar1,(ulong)uVar36 * 0x14);
            }
          }
          uVar36 = *(uint *)(this_00 + 0x5c);
          uVar10 = *(uint *)(this_00 + 0x60);
          phVar31 = phVar1;
          uVar20 = uVar36;
          if (uVar10 <= uVar36) {
            uVar20 = *(int *)(this_00 + 100) - 1;
            if (*(int *)(this_00 + 100) == 0) {
              uVar20 = 0;
            }
            phVar31 = phVar2;
          }
          if (uVar25 != 0) {
            puVar17 = (undefined8 *)((ulong)uVar20 * 0x14 + *(long *)phVar31);
            puVar22 = (uint *)((ulong)*(uint *)(this_00 + 100) * 0x14 + *(long *)(this_00 + 0x78));
            if (uVar25 == 1) {
              uVar35 = 0;
            }
            else {
              lVar8 = uVar35 * 2 + uVar11 + 2;
              uVar35 = 0;
              do {
                puVar22[4] = *(uint *)(puVar17 + 2);
                uVar12 = puVar17[1];
                *(undefined8 *)puVar22 = *puVar17;
                *(undefined8 *)(puVar22 + 2) = uVar12;
                *puVar22 = (uint)(ushort)(*(ushort *)(this + uVar35 * 2 + lVar8 + -2) << 8 |
                                         *(ushort *)(this + uVar35 * 2 + lVar8 + -2) >> 8);
                puVar22[9] = *(uint *)(puVar17 + 2);
                uVar12 = puVar17[1];
                *(undefined8 *)(puVar22 + 5) = *puVar17;
                *(undefined8 *)(puVar22 + 7) = uVar12;
                puVar22[5] = (uint)(ushort)(*(ushort *)(this + uVar35 * 2 + lVar8) << 8 |
                                           *(ushort *)(this + uVar35 * 2 + lVar8) >> 8);
                puVar22 = puVar22 + 10;
                uVar35 = uVar35 + 2;
              } while ((uVar25 & 0xfffffffe) != uVar35);
            }
            if ((uVar25 & 1) != 0) {
              puVar22[4] = *(uint *)(puVar17 + 2);
              uVar12 = puVar17[1];
              *(undefined8 *)puVar22 = *puVar17;
              *(undefined8 *)(puVar22 + 2) = uVar12;
              *puVar22 = (uint)(ushort)(*(ushort *)(pIVar3 + uVar35 * 2) << 8 |
                                       *(ushort *)(pIVar3 + uVar35 * 2) >> 8);
            }
            uVar36 = *(uint *)(this_00 + 0x5c);
            uVar10 = *(uint *)(this_00 + 0x60);
          }
          *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar25;
          *(uint *)(this_00 + 0x5c) = uVar36;
          if (((uVar18 & 0x800) == 0) && (uVar36 < uVar10)) {
            *(uint *)(this_00 + 0x5c) = uVar36 + 1;
          }
          if ((uVar18 & 0x4000) != 0) {
            uVar25 = 0;
          }
          hb_buffer_t::move_to(this_00,iVar16 + uVar25);
        }
      }
    }
  }
  else {
    uVar36 = uVar15 & 0x1f;
    iVar16 = *(int *)(this_00 + 200);
    *(uint *)(this_00 + 200) = iVar16 - uVar36;
    if (0 < (int)(iVar16 - uVar36)) {
      uVar35 = (ulong)(ushort)(uVar7 << 8 | uVar7 >> 8);
      pIVar3 = this + uVar35 * 2 + uVar11;
      if ((((ulong)*(uint *)(param_1 + 0x40) < (ulong)((long)pIVar3 - *(long *)(param_1 + 0x30))) ||
          ((uint)(*(int *)(param_1 + 0x38) - (int)pIVar3) < uVar36 * 2)) ||
         (iVar16 = *(int *)(param_1 + 0x44) + uVar36 * -2, *(int *)(param_1 + 0x44) = iVar16,
         iVar16 < 1)) {
        uVar36 = 0;
      }
      iVar16 = *(int *)(this_00 + 100);
      uVar12 = hb_buffer_t::move_to(this_00,local_e0);
      if ((char)uVar12 != '\0') {
        if (((uVar18 & 0x400) == 0) &&
           (uVar10 = *(uint *)(this_00 + 0x5c), uVar10 < *(uint *)(this_00 + 0x60))) {
          pvVar30 = *(void **)(this_00 + 0x70);
          local_68 = CONCAT44(local_68._4_4_,
                              *(undefined4 *)((long)pvVar30 + (ulong)uVar10 * 0x14 + 0x10));
          puVar4 = (ulong *)((long)pvVar30 + (ulong)uVar10 * 0x14);
          local_78 = *puVar4;
          uStack_70 = puVar4[1];
          uVar10 = *(int *)(this_00 + 100) + 1;
          if ((uVar10 == 0) || (uVar10 < *(uint *)(this_00 + 0x68))) {
            pvVar32 = *(void **)phVar2;
            if (*(void **)phVar2 == pvVar30) {
LAB_003e4e3d:
              uVar10 = *(uint *)(this_00 + 100);
              if (*(uint *)(this_00 + 0x5c) < uVar10 + 1) {
                pvVar32 = *(void **)(this_00 + 0x80);
                *(void **)(this_00 + 0x78) = pvVar32;
                if ((ulong)uVar10 != 0) {
                  memcpy(pvVar32,pvVar30,(ulong)uVar10 * 0x14);
                  pvVar32 = *(void **)phVar2;
                }
              }
              else {
                pvVar32 = pvVar30;
              }
            }
          }
          else {
            uVar12 = hb_buffer_t::enlarge(this_00,uVar10);
            if ((char)uVar12 == '\0') goto LAB_003e54b5;
            pvVar30 = *(void **)phVar1;
            pvVar32 = *(void **)phVar2;
            if (pvVar32 == pvVar30) goto LAB_003e4e3d;
          }
          uVar10 = *(uint *)(this_00 + 100);
          *(undefined4 *)((long)pvVar32 + (ulong)uVar10 * 0x14 + 0x10) = (undefined4)local_68;
          puVar4 = (ulong *)((long)pvVar32 + (ulong)uVar10 * 0x14);
          *puVar4 = local_78;
          puVar4[1] = uStack_70;
          iVar28 = *(int *)(this_00 + 100) + 1;
          *(int *)(this_00 + 100) = iVar28;
        }
        else {
          iVar28 = *(int *)(this_00 + 100);
        }
        uVar10 = iVar28 + uVar36;
        if (((uVar10 == 0) || (uVar10 < *(uint *)(this_00 + 0x68))) ||
           (uVar12 = hb_buffer_t::enlarge(this_00,uVar10), (char)uVar12 != '\0')) {
          if ((*(void **)phVar2 == *(void **)phVar1) &&
             (uVar10 = *(uint *)(this_00 + 100), *(uint *)(this_00 + 0x5c) < uVar10 + uVar36)) {
            *(void **)(this_00 + 0x78) = *(void **)(this_00 + 0x80);
            if ((ulong)uVar10 != 0) {
              memcpy(*(void **)(this_00 + 0x80),*(void **)phVar1,(ulong)uVar10 * 0x14);
            }
          }
          uVar10 = *(uint *)(this_00 + 0x5c);
          uVar20 = *(uint *)(this_00 + 0x60);
          phVar31 = phVar1;
          uVar19 = uVar10;
          if (uVar20 <= uVar10) {
            uVar19 = *(int *)(this_00 + 100) - 1;
            if (*(int *)(this_00 + 100) == 0) {
              uVar19 = 0;
            }
            phVar31 = phVar2;
          }
          if (uVar36 != 0) {
            puVar17 = (undefined8 *)((ulong)uVar19 * 0x14 + *(long *)phVar31);
            puVar22 = (uint *)((ulong)*(uint *)(this_00 + 100) * 0x14 + *(long *)(this_00 + 0x78));
            if (uVar36 == 1) {
              uVar35 = 0;
LAB_003e4fec:
              puVar22[4] = *(uint *)(puVar17 + 2);
              uVar12 = puVar17[1];
              *(undefined8 *)puVar22 = *puVar17;
              *(undefined8 *)(puVar22 + 2) = uVar12;
              *puVar22 = (uint)(ushort)(*(ushort *)(pIVar3 + uVar35 * 2) << 8 |
                                       *(ushort *)(pIVar3 + uVar35 * 2) >> 8);
            }
            else {
              lVar8 = uVar35 * 2 + uVar11 + 2;
              uVar35 = 0;
              do {
                puVar22[4] = *(uint *)(puVar17 + 2);
                uVar12 = puVar17[1];
                *(undefined8 *)puVar22 = *puVar17;
                *(undefined8 *)(puVar22 + 2) = uVar12;
                *puVar22 = (uint)(ushort)(*(ushort *)(this + uVar35 * 2 + lVar8 + -2) << 8 |
                                         *(ushort *)(this + uVar35 * 2 + lVar8 + -2) >> 8);
                puVar22[9] = *(uint *)(puVar17 + 2);
                uVar12 = puVar17[1];
                *(undefined8 *)(puVar22 + 5) = *puVar17;
                *(undefined8 *)(puVar22 + 7) = uVar12;
                puVar22[5] = (uint)(ushort)(*(ushort *)(this + uVar35 * 2 + lVar8) << 8 |
                                           *(ushort *)(this + uVar35 * 2 + lVar8) >> 8);
                puVar22 = puVar22 + 10;
                uVar35 = uVar35 + 2;
              } while ((uVar36 & 0xfffffffe) != uVar35);
              if ((uVar36 & 1) != 0) goto LAB_003e4fec;
            }
            uVar10 = *(uint *)(this_00 + 0x5c);
            *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar36;
            uVar35 = *(ulong *)(param_1 + 0x80);
            uVar29 = *(ulong *)(param_1 + 0x88);
            uVar23 = *(ulong *)(param_1 + 0x90);
            uVar26 = 0;
            do {
              uVar7 = *(ushort *)(pIVar3 + uVar26 * 2);
              uVar24 = uVar7 << 8 | uVar7 >> 8;
              uVar35 = uVar35 | 1L << ((ulong)(uVar24 >> 4) & 0x3f);
              uVar29 = uVar29 | 1L << ((ulong)uVar24 & 0x3f);
              uVar23 = uVar23 | 1L << ((ulong)((uVar7 & 0xff) >> 1) & 0x3f);
              uVar26 = uVar26 + 1;
            } while (uVar36 != uVar26);
            *(ulong *)(param_1 + 0x80) = uVar35;
            *(ulong *)(param_1 + 0x88) = uVar29;
            *(ulong *)(param_1 + 0x90) = uVar23;
            uVar20 = *(uint *)(this_00 + 0x60);
          }
          if (((uVar18 & 0x400) == 0) && (uVar10 < uVar20)) {
            *(uint *)(this_00 + 0x5c) = uVar10 + 1;
          }
          uVar12 = hb_buffer_t::move_to(this_00,iVar16 + uVar36);
          if ((char)uVar12 != '\0') {
            uVar36 = *(int *)(this_00 + 0x5c) + 1U;
            if (*(uint *)(this_00 + 0x60) < *(int *)(this_00 + 0x5c) + 1U) {
              uVar36 = *(uint *)(this_00 + 0x60);
            }
            hb_buffer_t::_set_glyph_flags(this_00,3,local_e0,uVar36,'\x01');
            goto LAB_003e50d9;
          }
        }
      }
    }
  }
LAB_003e54b5:
  uVar36 = *(uint *)(this_00 + 0x5c);
  if ((uVar36 == *(uint *)(this_00 + 0x60)) || (this_00[0x58] == (hb_buffer_t)0x0))
  goto LAB_003e5699;
  if ((((byte)this[uVar21 * 8 + (ulong)uVar27 + 2] & 0x40) != 0) &&
     (iVar16 = *(int *)(this_00 + 200), *(int *)(this_00 + 200) = iVar16 + -1, 0 < iVar16)) {
LAB_003e54ef:
    hVar6 = this_00[0x58];
    iVar16 = local_d4;
    goto joined_r0x003e55f2;
  }
  if (this_00[0x5a] == (hb_buffer_t)0x0) goto LAB_003e55e1;
  pvVar30 = *(void **)(this_00 + 0x78);
  pvVar32 = *(void **)(this_00 + 0x70);
  if ((pvVar30 == pvVar32) && (*(uint *)(this_00 + 100) == uVar36)) {
    uVar25 = uVar36;
    goto LAB_003e55d8;
  }
  uVar25 = *(uint *)(this_00 + 100) + 1;
  if ((uVar25 == 0) || (uVar25 < *(uint *)(this_00 + 0x68))) {
    if (pvVar30 == pvVar32) {
LAB_003e5563:
      uVar25 = *(uint *)(this_00 + 100);
      if (*(int *)(this_00 + 0x5c) + 1U < uVar25 + 1) {
        pvVar30 = *(void **)(this_00 + 0x80);
        *(void **)(this_00 + 0x78) = pvVar30;
LAB_003e5584:
        if (uVar25 != 0) {
          memcpy(pvVar30,pvVar32,(ulong)uVar25 * 0x14);
          pvVar32 = *(void **)phVar1;
          pvVar30 = *(void **)phVar2;
        }
        goto LAB_003e55b0;
      }
      pvVar30 = pvVar32;
    }
  }
  else {
    uVar12 = hb_buffer_t::enlarge(this_00,uVar25);
    if ((char)uVar12 == '\0') goto LAB_003e54ef;
    pvVar30 = *(void **)phVar2;
    pvVar32 = *(void **)phVar1;
    if (pvVar30 == pvVar32) goto LAB_003e5563;
  }
  goto LAB_003e55b0;
}


