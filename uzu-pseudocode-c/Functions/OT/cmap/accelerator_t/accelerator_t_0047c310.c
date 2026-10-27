// Function : accelerator_t
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047c310
// Prototype: undefined accelerator_t(accelerator_t * this, long param_1)
// Body     : 0047c310 - 0047ccea


/* OT::cmap::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::cmap::accelerator_t::accelerator_t(accelerator_t *this,long param_1)

{
  int iVar1;
  pthread_mutex_t *ppVar2;
  int *piVar3;
  undefined *puVar4;
  accelerator_t *paVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  void *__dest;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  code *pcVar13;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  char *pcVar17;
  char cVar18;
  cmap *pcVar19;
  undefined4 *puVar20;
  short *psVar21;
  uint uVar22;
  long lVar23;
  bool bVar24;
  char local_cb [3];
  uint local_c8 [2];
  cmap *local_c0;
  cmap *pcStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  char local_a0;
  int local_9c;
  int *local_98;
  uint local_90;
  undefined2 local_8c;
  pthread_mutex_t *local_88;
  accelerator_t *local_80;
  long local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined1 local_33;
  
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  local_c8[0] = 0;
  local_9c = 0;
  local_98 = (int *)0x0;
  local_c0 = (cmap *)0x0;
  pcStack_b8 = (cmap *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_90 = 0x10000;
  local_8c = 0;
  uVar16 = *(uint *)(param_1 + 0x18);
  if (uVar16 == 0xffffffff) {
    piVar7 = *(int **)(param_1 + 0x78);
    if (piVar7 == (int *)0x0) {
      do {
        lVar23 = *(long *)(param_1 + 0x68);
        piVar7 = &_hb_NullPool;
        if (lVar23 == 0) {
LAB_0047ccb7:
          uVar16 = piVar7[6];
          goto joined_r0x0047ccc1;
        }
        local_70[0] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_33 = 0;
        local_44 = 0;
        uStack_3c = 0;
        local_34 = 1;
        piVar7 = &_hb_NullPool;
                    /* try { // try from 0047cbdf to 0047cbf9 has its CatchHandler @ 0047ccf5 */
        if ((*(code **)(lVar23 + 0x20) != (code *)0x0) &&
           (piVar7 = (int *)(**(code **)(lVar23 + 0x20))
                                      (lVar23,0x6d617870,*(undefined8 *)(lVar23 + 0x28)),
           piVar7 == (int *)0x0)) {
          piVar7 = &_hb_NullPool;
        }
        piVar7 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar7);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar7 == (int *)0x0) {
          piVar7 = &_hb_NullPool;
          LOCK();
          bVar24 = *(long *)(param_1 + 0x78) == 0;
          if (bVar24) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar24 = *(long *)(param_1 + 0x78) == 0;
          if (bVar24) {
            *(long *)(param_1 + 0x78) = (long)piVar7;
          }
          UNLOCK();
        }
        if (bVar24) goto LAB_0047ccb7;
        if (((piVar7 != (int *)0x0) && (piVar7 != &_hb_NullPool)) && (*piVar7 != 0)) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            *piVar7 = -0xdead;
            local_88 = *(pthread_mutex_t **)(piVar7 + 2);
            if (local_88 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047cc52 to 0047cc56 has its CatchHandler @ 0047ccf3 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &local_88[1].__data,local_88);
              free(local_88);
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0047cc76 to 0047cc77 has its CatchHandler @ 0047cceb */
              (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
            }
            free(piVar7);
          }
        }
        piVar7 = *(int **)(param_1 + 0x78);
      } while (piVar7 == (int *)0x0);
    }
    uVar16 = piVar7[6];
joined_r0x0047ccc1:
    if (uVar16 < 6) {
      puVar9 = &_hb_NullPool;
    }
    else {
      puVar9 = *(undefined4 **)(piVar7 + 4);
    }
    uVar14 = *(ushort *)(puVar9 + 1);
    uVar16 = (uint)(ushort)(uVar14 << 8 | uVar14 >> 8);
    if (uVar14 == 0) {
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar16;
  }
  local_8c = CONCAT11(local_8c._1_1_,1);
  local_90 = uVar16;
  local_80 = this;
  local_78 = param_1;
                    /* try { // try from 0047c39d to 0047c3a6 has its CatchHandler @ 0047cd1c */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar7 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x636d6170,*(undefined8 *)(param_1 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar7;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  puVar4 = PTR_free_00715540;
  local_88 = (pthread_mutex_t *)(local_80 + 0x20);
  local_a0 = '\0';
  local_98 = piVar7;
  while( true ) {
    pcVar19 = *(cmap **)(local_98 + 4);
    uVar16 = local_98[6];
    lVar23 = (ulong)uVar16 * 0x40;
    uVar6 = (uint)lVar23;
    if (uVar6 < 0x4001) {
      uVar6 = 0x4000;
    }
    pcStack_b8 = pcVar19 + uVar16;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar22 = 0x3fffffff;
    if ((int)((ulong)lVar23 >> 0x20) == 0) {
      uVar22 = uVar6;
    }
    local_b0 = CONCAT44(uVar22,uVar16);
    local_9c = 0;
    local_c8[0] = 0;
    uStack_a8 = uStack_a8 & 0xffffffff;
    local_c0 = pcVar19;
    if (pcVar19 == (cmap *)0x0) {
                    /* try { // try from 0047ca82 to 0047ca8b has its CatchHandler @ 0047cd1c */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_c8);
      goto LAB_0047c70a;
    }
                    /* try { // try from 0047c490 to 0047c49a has its CatchHandler @ 0047cd1e */
    uVar8 = cmap::sanitize(pcVar19,(long)local_c8);
    piVar3 = local_98;
    if ((char)uVar8 != '\0') {
      if (local_9c == 0) {
        cVar18 = '\x01';
        goto joined_r0x0047c618;
      }
      local_9c = 0;
                    /* try { // try from 0047c55b to 0047c5a9 has its CatchHandler @ 0047cd1c */
      uVar8 = cmap::sanitize(pcVar19,(long)local_c8);
      piVar3 = local_98;
      if (local_9c == 0) {
        cVar18 = (char)uVar8;
        goto joined_r0x0047c618;
      }
      if ((local_98 != (int *)0x0) && (*local_98 != 0)) {
        LOCK();
        *local_98 = *local_98 + -1;
        UNLOCK();
        if (*local_98 == 0) {
          *local_98 = -0xdead;
          ppVar2 = *(pthread_mutex_t **)(local_98 + 2);
          if (ppVar2 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar2[1].__data,ppVar2);
            free(ppVar2);
            piVar3[2] = 0;
            piVar3[3] = 0;
          }
          if (*(code **)(piVar3 + 10) != (code *)0x0) {
                    /* try { // try from 0047c5c7 to 0047c5c8 has its CatchHandler @ 0047cd04 */
            (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
          }
          free(piVar3);
        }
      }
      local_b0 = local_b0 & 0xffffffff00000000;
      goto LAB_0047c6a8;
    }
    cVar18 = '\0';
    if ((local_9c == 0) || (local_a0 != '\0')) goto joined_r0x0047c618;
    pcVar19 = (cmap *)(ulong)(uint)piVar7[6];
    if (piVar7[1] == 0) break;
    if (pcVar19 == (cmap *)0x0) {
      piVar7[7] = 2;
LAB_0047c400:
      local_c0 = *(cmap **)(piVar7 + 4);
      pcStack_b8 = pcVar19 + (long)local_c0;
      if (local_c0 == (cmap *)0x0) goto LAB_0047c5ff;
    }
    else {
      if (piVar7[7] == 2) goto LAB_0047c400;
      if (piVar7[7] == 3) {
        piVar7[7] = 1;
      }
      __dest = malloc((size_t)pcVar19);
      if (__dest == (void *)0x0) break;
      memcpy(__dest,*(void **)(piVar7 + 4),(size_t)pcVar19);
      if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0047c51f to 0047c520 has its CatchHandler @ 0047cd1e */
        (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
      }
      piVar7[7] = 2;
      *(void **)(piVar7 + 4) = __dest;
      *(void **)(piVar7 + 8) = __dest;
      *(undefined **)(piVar7 + 10) = puVar4;
    }
    local_a0 = '\x01';
  }
  local_c0 = (cmap *)0x0;
  pcStack_b8 = pcVar19;
LAB_0047c5ff:
  cVar18 = '\0';
  piVar3 = local_98;
joined_r0x0047c618:
  if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      *piVar3 = -0xdead;
      ppVar2 = *(pthread_mutex_t **)(piVar3 + 2);
      local_98 = piVar3;
      if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047c644 to 0047c64b has its CatchHandler @ 0047cd1c */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar3[2] = 0;
        piVar3[3] = 0;
      }
      if (*(code **)(piVar3 + 10) != (code *)0x0) {
                    /* try { // try from 0047c66c to 0047c66d has its CatchHandler @ 0047cd0c */
        (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
      }
      free(piVar3);
    }
  }
  local_98 = (int *)0x0;
  local_c0 = (cmap *)0x0;
  pcStack_b8 = (cmap *)0x0;
  local_b0 = local_b0 & 0xffffffff00000000;
  if (cVar18 == '\0') {
LAB_0047c6a8:
    local_98 = (int *)0x0;
    pcStack_b8 = (cmap *)0x0;
    local_c0 = (cmap *)0x0;
    if (*piVar7 != 0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        *piVar7 = -0xdead;
        ppVar2 = *(pthread_mutex_t **)(piVar7 + 2);
        if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047c6d8 to 0047c6df has its CatchHandler @ 0047cd1c */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar2[1].__data,ppVar2);
          free(ppVar2);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0047c6fd to 0047c6fe has its CatchHandler @ 0047cd14 */
          (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        }
        free(piVar7);
      }
    }
    piVar7 = &_hb_NullPool;
  }
  else if (piVar7[1] != 0) {
    piVar7[1] = 0;
  }
LAB_0047c70a:
  paVar5 = local_80;
  *(int **)(local_80 + 0x50) = piVar7;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_c8);
  puVar9 = *(undefined4 **)(paVar5 + 0x50);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = &_hb_NullPool;
  }
  puVar20 = &_hb_NullPool;
  if (3 < (uint)puVar9[6]) {
    puVar20 = *(undefined4 **)(puVar9 + 4);
  }
  local_cb[2] = '\0';
  local_cb[0] = '\0';
  local_cb[1] = '\0';
  local_70[0] = 0x300;
  puVar9 = puVar20 + 1;
  uVar10 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                     ((long)puVar9,
                      (uint)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 |
                                    *(ushort *)((long)puVar20 + 2) >> 8),(ushort *)local_70,local_c8
                     );
  lVar23 = local_78;
  bVar24 = (char)uVar10 != '\0';
  uVar10 = 0;
  if (bVar24) {
    uVar10 = (ulong)local_c8[0];
  }
  puVar11 = &_hb_NullPool;
  if (bVar24) {
    puVar11 = puVar20 + uVar10 * 2 + 1;
  }
  uVar16 = puVar11[1];
  if (uVar16 != 0) {
    puVar9 = (undefined4 *)
             ((long)puVar20 +
             (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                    uVar16 << 0x18));
    pcVar17 = local_cb + 2;
    goto LAB_0047c7a2;
  }
  local_70[0] = 0xa000300;
  uVar10 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                     ((long)puVar9,
                      (uint)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 |
                                    *(ushort *)((long)puVar20 + 2) >> 8),(ushort *)local_70,local_c8
                     );
  bVar24 = (char)uVar10 != '\0';
  uVar10 = 0;
  if (bVar24) {
    uVar10 = (ulong)local_c8[0];
  }
  puVar11 = puVar20 + uVar10 * 2 + 1;
  if (!bVar24) {
    puVar11 = &_hb_NullPool;
  }
  uVar16 = puVar11[1];
  if (uVar16 == 0) {
    local_70[0] = 0x6000000;
    uVar10 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                       ((long)puVar9,
                        (uint)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 |
                                      *(ushort *)((long)puVar20 + 2) >> 8),(ushort *)local_70,
                        local_c8);
    bVar24 = (char)uVar10 != '\0';
    uVar10 = 0;
    if (bVar24) {
      uVar10 = (ulong)local_c8[0];
    }
    puVar11 = puVar20 + uVar10 * 2 + 1;
    if (!bVar24) {
      puVar11 = &_hb_NullPool;
    }
    uVar16 = puVar11[1];
    if (uVar16 != 0) goto LAB_0047c87c;
    local_70[0] = 0x4000000;
    uVar10 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                       ((long)puVar9,
                        (uint)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 |
                                      *(ushort *)((long)puVar20 + 2) >> 8),(ushort *)local_70,
                        local_c8);
    bVar24 = (char)uVar10 != '\0';
    uVar10 = 0;
    if (bVar24) {
      uVar10 = (ulong)local_c8[0];
    }
    puVar9 = puVar20 + uVar10 * 2 + 1;
    if (!bVar24) {
      puVar9 = &_hb_NullPool;
    }
    uVar16 = puVar9[1];
    if (uVar16 != 0) goto LAB_0047c87c;
    puVar11 = (undefined4 *)find_subtable((long)puVar20,3,1);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)find_subtable((long)puVar20,0,3);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)find_subtable((long)puVar20,0,2);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)find_subtable((long)puVar20,0,1);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)find_subtable((long)puVar20,0,0);
            if (puVar11 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)find_subtable((long)puVar20,1,0);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)find_subtable((long)puVar20,1,0xffff);
                puVar11 = &_hb_NullPool;
                if (puVar9 == (undefined4 *)0x0) goto LAB_0047c884;
                pcVar17 = local_cb;
              }
              else {
                local_cb[0] = '\x01';
                pcVar17 = local_cb + 1;
              }
LAB_0047c7a2:
              *pcVar17 = '\x01';
              puVar11 = puVar9;
            }
          }
        }
      }
    }
  }
  else {
LAB_0047c87c:
    puVar11 = (undefined4 *)
              ((long)puVar20 +
              (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18));
  }
LAB_0047c884:
  *(undefined4 **)paVar5 = puVar11;
  *(int **)(paVar5 + 8) = &_hb_NullPool;
  puVar9 = *(undefined4 **)(paVar5 + 0x50);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = &_hb_NullPool;
  }
  puVar20 = &_hb_NullPool;
  if (3 < (uint)puVar9[6]) {
    puVar20 = *(undefined4 **)(puVar9 + 4);
  }
  local_70[0] = 0x5000000;
  uVar10 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                     ((long)(puVar20 + 1),
                      (uint)(ushort)(*(ushort *)((long)puVar20 + 2) << 8 |
                                    *(ushort *)((long)puVar20 + 2) >> 8),(ushort *)local_70,local_c8
                     );
  bVar24 = (char)uVar10 != '\0';
  uVar10 = 0;
  if (bVar24) {
    uVar10 = (ulong)local_c8[0];
  }
  puVar9 = &_hb_NullPool;
  if (bVar24) {
    puVar9 = puVar20 + uVar10 * 2 + 1;
  }
  uVar16 = puVar9[1];
  if (((uVar16 != 0) && (puVar20 != (undefined4 *)0x0)) &&
     (psVar21 = (short *)((long)puVar20 +
                         (ulong)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                | uVar16 << 0x18)), *psVar21 == 0xe00)) {
    *(short **)(paVar5 + 8) = psVar21;
  }
  puVar12 = (ushort *)&_hb_NullPool;
  if (*(ushort **)paVar5 != (ushort *)0x0) {
    puVar12 = *(ushort **)paVar5;
  }
  *(ushort **)(paVar5 + 0x18) = puVar12;
  if (local_cb[2] == '\0') {
    if (local_cb[1] != '\0') {
      pcVar13 = get_glyph_from_macroman<OT::CmapSubtable>;
      goto LAB_0047cb11;
    }
    if (local_cb[0] != '\0') {
      pcVar13 = get_glyph_from_ascii<OT::CmapSubtable>;
      goto LAB_0047cb11;
    }
    uVar14 = *puVar12 << 8 | *puVar12 >> 8;
    if (uVar14 == 4) {
      uVar16 = (uint)((ushort)(puVar12[3] << 8 | puVar12[3] >> 8) >> 1);
      *(uint *)(paVar5 + 0x48) = uVar16;
      *(ushort **)(paVar5 + 0x20) = puVar12 + 7;
      uVar10 = (ulong)(uVar16 * 2);
      *(ulong *)(paVar5 + 0x28) = (long)puVar12 + uVar10 + 0x10;
      *(ushort **)(paVar5 + 0x30) = puVar12 + uVar10 + 8;
      lVar23 = (long)(puVar12 + uVar10 + 8) + uVar10;
      *(long *)(paVar5 + 0x38) = lVar23;
      *(ulong *)(paVar5 + 0x40) = lVar23 + uVar10;
      *(uint *)(paVar5 + 0x4c) =
           ((uint)(ushort)(puVar12[1] << 8 | puVar12[1] >> 8) + uVar16 * -8) - 0x10 >> 1;
      *(__pthread_mutex_s **)(paVar5 + 0x18) = &local_88->__data;
      pcVar13 = CmapSubtableFormat4::accelerator_t::get_glyph_func;
      goto LAB_0047cb11;
    }
    if (uVar14 == 0xc) {
      pcVar13 = get_glyph_from<OT::CmapSubtableFormat12>;
      goto LAB_0047cb11;
    }
  }
  else {
    psVar21 = (short *)hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                       ::get((hb_lazy_loader_t<OT::OS2,hb_table_lazy_loader_t<OT::OS2,6u,true>,hb_face_t,6u,hb_blob_t>
                              *)(lVar23 + 0x98));
    sVar15 = 0;
    if (*psVar21 == 0) {
      sVar15 = psVar21[0x1f] << 8;
    }
    if (sVar15 == 0) {
      pcVar13 = get_glyph_from_symbol<OT::CmapSubtable,&OT::_hb_symbol_pua_map>;
      goto LAB_0047cb11;
    }
    if (sVar15 == -0x4d00) {
      pcVar13 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_trad_map(unsigned_int))>;
      goto LAB_0047cb11;
    }
    if (sVar15 == -0x4e00) {
      pcVar13 = get_glyph_from_symbol<OT::CmapSubtable,&(_hb_arabic_pua_simp_map(unsigned_int))>;
      goto LAB_0047cb11;
    }
  }
  pcVar13 = get_glyph_from<OT::CmapSubtable>;
LAB_0047cb11:
  *(code **)(paVar5 + 0x10) = pcVar13;
  return;
}


