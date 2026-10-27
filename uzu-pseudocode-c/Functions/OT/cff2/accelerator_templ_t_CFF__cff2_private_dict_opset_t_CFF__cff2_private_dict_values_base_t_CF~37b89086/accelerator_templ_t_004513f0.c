// Function : accelerator_templ_t
// Namespace: OT:cff2:accelerator_templ_t_CFF__cff2_private_dict_opset_t_CFF__cff2_private_dict_values_base_t_CF~37b89086
// Entry    : 004513f0
// Prototype: undefined accelerator_templ_t(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>> * this, long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 004513f0 - 00452b28


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2::accelerator_templ_t<CFF::cff2_private_dict_opset_t,
   CFF::cff2_private_dict_values_base_t<CFF::dict_val_t> >::accelerator_templ_t(hb_face_t*) */

void __thiscall
OT::cff2::
accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
::accelerator_templ_t
          (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           *this,long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  parsed_values_t<CFF::op_str_t> *ppVar1;
  uint *puVar2;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar3;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar4;
  char cVar5;
  byte bVar6;
  pthread_mutex_t *ppVar7;
  undefined8 uVar8;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  aVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  void *pvVar15;
  ulong uVar16;
  uint *puVar17;
  char *pcVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined4 *puVar23;
  ushort uVar24;
  uint uVar25;
  int *piVar26;
  ushort *puVar27;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar28;
  char *pcVar29;
  long lVar30;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar31;
  ushort *puVar32;
  uint uVar33;
  undefined4 *puVar34;
  uint *puVar35;
  parsed_values_t<CFF::dict_val_t> *this_00;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined8 local_20a0;
  undefined4 local_2098;
  undefined1 local_2094;
  ulong local_2090;
  undefined4 *local_2088;
  undefined8 uStack_2080;
  undefined8 local_2078;
  double local_2070 [2];
  undefined1 local_2060;
  undefined8 local_205c;
  undefined8 uStack_2054;
  undefined1 local_204c;
  undefined1 local_204b;
  int local_1068;
  char local_1064;
  undefined1 local_1058 [16];
  char local_1048;
  int local_1044;
  double adStack_1040 [514];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  *(undefined4 *)(this + 0x38) = 0x10000;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  if (param_1 == 0) {
    return;
  }
  ppVar1 = (parsed_values_t<CFF::op_str_t> *)(this + 0x48);
  paVar3 = this + 0xa0;
  paVar4 = this + 0xb0;
  *(undefined4 *)ppVar1 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)paVar3 = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  uVar25 = *(uint *)(param_1 + 0x18);
  if (uVar25 == 0xffffffff) {
    piVar14 = *(int **)(param_1 + 0x78);
    if (piVar14 == (int *)0x0) {
      do {
        lVar30 = *(long *)(param_1 + 0x68);
        piVar14 = &_hb_NullPool;
        if (lVar30 == 0) goto LAB_00452952;
        local_2088 = (undefined4 *)((ulong)local_2088 & 0xffffffff00000000);
        local_2070[0] = 0.0;
        local_2070[1] = 0.0;
        uStack_2080 = 0;
        local_2078 = 0;
        local_2060 = 0;
        local_204b = 0;
        local_205c = 0;
        uStack_2054 = 0;
        local_204c = 1;
        piVar14 = &_hb_NullPool;
                    /* try { // try from 00452a3b to 00452a55 has its CatchHandler @ 00452b33 */
        if ((*(code **)(lVar30 + 0x20) != (code *)0x0) &&
           (piVar14 = (int *)(**(code **)(lVar30 + 0x20))
                                       (lVar30,0x6d617870,*(undefined8 *)(lVar30 + 0x28)),
           piVar14 == (int *)0x0)) {
          piVar14 = &_hb_NullPool;
        }
        piVar14 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)&local_2088,piVar14);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_2088);
        if (piVar14 == (int *)0x0) {
          piVar14 = &_hb_NullPool;
          LOCK();
          bVar36 = *(long *)(param_1 + 0x78) == 0;
          if (bVar36) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar36 = *(long *)(param_1 + 0x78) == 0;
          if (bVar36) {
            *(long *)(param_1 + 0x78) = (long)piVar14;
          }
          UNLOCK();
        }
        if (bVar36) goto LAB_00452952;
        if (((piVar14 != (int *)0x0) && (piVar14 != &_hb_NullPool)) && (*piVar14 != 0)) {
          LOCK();
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            *piVar14 = -0xdead;
            ppVar7 = *(pthread_mutex_t **)(piVar14 + 2);
            if (ppVar7 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00452aab to 00452aaf has its CatchHandler @ 00452b31 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar7[1].__data,ppVar7);
              free(ppVar7);
              piVar14[2] = 0;
              piVar14[3] = 0;
            }
            if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 00452ace to 00452acf has its CatchHandler @ 00452b29 */
              (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
            }
            free(piVar14);
          }
        }
        piVar14 = *(int **)(param_1 + 0x78);
      } while (piVar14 == (int *)0x0);
    }
LAB_00452952:
    if ((uint)piVar14[6] < 6) {
      puVar23 = &_hb_NullPool;
    }
    else {
      puVar23 = *(undefined4 **)(piVar14 + 4);
    }
    uVar24 = *(ushort *)(puVar23 + 1);
    uVar25 = (uint)(ushort)(uVar24 << 8 | uVar24 >> 8);
    if (uVar24 == 0) {
      uVar25 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar25;
  }
  *(uint *)(this + 0x38) = uVar25;
  this[0x3c] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x1;
                    /* try { // try from 004514e4 to 004514ed has its CatchHandler @ 00452b5e */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar14 = (int *)(**(code **)(param_1 + 0x20))
                                 (param_1,0x43464632,*(undefined8 *)(param_1 + 0x28)),
     piVar14 == (int *)0x0)) {
    piVar14 = &_hb_NullPool;
    iVar13 = _hb_NullPool;
  }
  else {
    iVar13 = *piVar14;
  }
  if (iVar13 != 0) {
    LOCK();
    *piVar14 = *piVar14 + 1;
    UNLOCK();
  }
  *(int **)(this + 0x30) = piVar14;
  aVar9 = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
           )0x0;
  bVar36 = false;
  piVar26 = piVar14;
  while( true ) {
    this[0x28] = aVar9;
    pcVar29 = *(char **)(piVar26 + 4);
    *(char **)(this + 8) = pcVar29;
    uVar25 = piVar26[6];
    lVar30 = (ulong)uVar25 * 0x40;
    uVar11 = (uint)lVar30;
    if (uVar11 < 0x4001) {
      uVar11 = 0x4000;
    }
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    *(char **)(this + 0x10) = pcVar29 + uVar25;
    *(uint *)(this + 0x18) = uVar25;
    uVar12 = 0x3fffffff;
    if ((int)((ulong)lVar30 >> 0x20) == 0) {
      uVar12 = uVar11;
    }
    *(uint *)(this + 0x1c) = uVar12;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x24) = 0;
    if (pcVar29 == (char *)0x0) {
                    /* try { // try from 0045291f to 00452926 has its CatchHandler @ 00452b5e */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)this);
      goto LAB_00451837;
    }
    if (uVar25 < 5) goto LAB_0045174b;
    if (*pcVar29 == '\x02') break;
    if ((*(int *)(this + 0x2c) == 0) ||
       (this[0x28] !=
        (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
         )0x0)) goto LAB_0045174e;
    uVar16 = (ulong)(uint)piVar14[6];
    if (piVar14[1] == 0) {
LAB_0045173d:
      *(undefined8 *)(this + 8) = 0;
      *(ulong *)(this + 0x10) = uVar16;
      goto LAB_0045174b;
    }
    if (uVar16 == 0) {
      piVar14[7] = 2;
LAB_00451530:
      lVar30 = *(long *)(piVar14 + 4);
      *(long *)(this + 8) = lVar30;
      *(ulong *)(this + 0x10) = uVar16 + lVar30;
      if (lVar30 == 0) goto LAB_0045174b;
    }
    else {
      if (piVar14[7] == 2) goto LAB_00451530;
      if (piVar14[7] == 3) {
        piVar14[7] = 1;
      }
      pvVar15 = malloc(uVar16);
      if (pvVar15 == (void *)0x0) goto LAB_0045173d;
      memcpy(pvVar15,*(void **)(piVar14 + 4),uVar16);
      if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 00451653 to 00451654 has its CatchHandler @ 00452b62 */
        (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
        uVar16 = (ulong)(uint)piVar14[6];
      }
      piVar14[7] = 2;
      *(void **)(piVar14 + 4) = pvVar15;
      *(void **)(piVar14 + 8) = pvVar15;
      *(undefined **)(piVar14 + 10) = PTR_free_00715540;
      *(void **)(this + 8) = pvVar15;
      *(ulong *)(this + 0x10) = (long)pvVar15 + uVar16;
    }
    piVar26 = *(int **)(this + 0x30);
    aVar9 = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
             )0x1;
  }
  if (*(int *)(this + 0x2c) == 0) {
    bVar36 = true;
    piVar26 = *(int **)(this + 0x30);
    goto joined_r0x00451d9c;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (pcVar29 + (5 - *(long *)(this + 8)) <= (char *)(ulong)*(uint *)(this + 0x18)) {
    bVar36 = *pcVar29 == '\x02';
    if (*(int *)(this + 0x2c) == 0) goto LAB_0045174e;
    piVar26 = *(int **)(this + 0x30);
    if ((piVar26 != (int *)0x0) && (*piVar26 != 0)) {
      LOCK();
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        *piVar26 = -0xdead;
        ppVar7 = *(pthread_mutex_t **)(piVar26 + 2);
        if (ppVar7 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004516ef to 004516f6 has its CatchHandler @ 00452b5e */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar7[1].__data,ppVar7);
          free(ppVar7);
          piVar26[2] = 0;
          piVar26[3] = 0;
        }
        if (*(code **)(piVar26 + 10) != (code *)0x0) {
                    /* try { // try from 00451714 to 00451715 has its CatchHandler @ 00452b42 */
          (**(code **)(piVar26 + 10))(*(undefined8 *)(piVar26 + 8));
        }
        free(piVar26);
      }
    }
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    goto LAB_004517d9;
  }
LAB_0045174b:
  bVar36 = false;
LAB_0045174e:
  piVar26 = *(int **)(this + 0x30);
joined_r0x00451d9c:
  if ((piVar26 != (int *)0x0) && (*piVar26 != 0)) {
    LOCK();
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (*piVar26 == 0) {
      *piVar26 = -0xdead;
      ppVar7 = *(pthread_mutex_t **)(piVar26 + 2);
      if (ppVar7 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00451779 to 00451780 has its CatchHandler @ 00452b5e */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar7[1].__data,ppVar7);
        free(ppVar7);
        piVar26[2] = 0;
        piVar26[3] = 0;
      }
      if (*(code **)(piVar26 + 10) != (code *)0x0) {
                    /* try { // try from 0045179e to 0045179f has its CatchHandler @ 00452b52 */
        (**(code **)(piVar26 + 10))(*(undefined8 *)(piVar26 + 8));
      }
      free(piVar26);
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (bVar36) {
    if (piVar14[1] != 0) {
      piVar14[1] = 0;
    }
  }
  else {
LAB_004517d9:
    if (*piVar14 != 0) {
      LOCK();
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        *piVar14 = -0xdead;
        ppVar7 = *(pthread_mutex_t **)(piVar14 + 2);
        if (ppVar7 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00451805 to 0045180c has its CatchHandler @ 00452b5e */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar7[1].__data,ppVar7);
          free(ppVar7);
          piVar14[2] = 0;
          piVar14[3] = 0;
        }
        if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 0045182a to 0045182b has its CatchHandler @ 00452b4a */
          (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
        }
        free(piVar14);
      }
    }
    piVar14 = &_hb_NullPool;
  }
LAB_00451837:
  *(int **)(this + 0x40) = piVar14;
  piVar26 = piVar14;
  if (*piVar14 != 0) {
    LOCK();
    *piVar14 = *piVar14 + 1;
    UNLOCK();
    piVar26 = *(int **)(this + 0x40);
  }
  *(int **)(this + 0x30) = piVar14;
  this[0x28] = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                )0x0;
  lVar30 = *(long *)(piVar14 + 4);
  *(long *)(this + 8) = lVar30;
  uVar25 = piVar14[6];
  uVar16 = (ulong)uVar25;
  uVar12 = (uint)(uVar16 * 0x40);
  uVar11 = 0x4000;
  if (0x4000 < uVar12) {
    uVar11 = uVar12;
  }
  if (0x3ffffffe < uVar11) {
    uVar11 = 0x3fffffff;
  }
  *(ulong *)(this + 0x10) = lVar30 + uVar16;
  *(uint *)(this + 0x18) = uVar25;
  uVar25 = 0x3fffffff;
  if ((int)(uVar16 * 0x40 >> 0x20) == 0) {
    uVar25 = uVar11;
  }
  *(uint *)(this + 0x1c) = uVar25;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x24) = 0;
  if (((4 < (uint)piVar26[6]) && (puVar23 = *(undefined4 **)(piVar26 + 4), puVar23 != &_hb_NullPool)
      ) && (puVar34 = (undefined4 *)((ulong)*(byte *)((long)puVar23 + 2) + (long)puVar23),
           (ulong)((long)puVar34 - lVar30) <= uVar16)) {
    uVar24 = *(ushort *)((long)puVar23 + 3) << 8 | *(ushort *)((long)puVar23 + 3) >> 8;
    if (((uint)uVar24 <= (uint)((int)(lVar30 + uVar16) - (int)puVar34)) &&
       (*(uint *)(this + 0x1c) = uVar25 - uVar24,
       uVar25 - uVar24 != 0 && (int)(uint)uVar24 <= (int)uVar25)) {
      memset((void *)((long)&local_2078 + 4),0,0x100c);
      local_2078 = local_2078 & 0xffffffffffffff00;
      uStack_2080 = (ulong)uVar24;
      *(undefined4 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      uVar25 = 0;
      local_2088 = puVar34;
      uVar11 = (uint)uVar24;
      do {
        uVar12 = uVar25 + 1;
        if (uVar11 < uVar12) {
          lVar30 = (ulong)(ushort)(*(ushort *)((long)puVar23 + 3) << 8 |
                                  *(ushort *)((long)puVar23 + 3) >> 8) +
                   (ulong)*(byte *)((long)puVar23 + 2);
          pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if (lVar30 != 0) {
            pCVar31 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)(lVar30 + (long)puVar23);
            pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
            if ((ulong)((long)pCVar31 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) {
                    /* try { // try from 00451bb3 to 00451db4 has its CatchHandler @ 00452b60 */
              uVar16 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize(pCVar31,(long)this);
              pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
              if ((char)uVar16 != '\0') {
                pCVar28 = pCVar31;
              }
            }
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x70) = pCVar28;
          puVar27 = (ushort *)&_hb_NullPool;
          if ((long)*(int *)(this + 0x68) != 0) {
            puVar32 = (ushort *)((long)*(int *)(this + 0x68) + (long)puVar23);
            uVar16 = (ulong)*(uint *)(this + 0x18);
            puVar27 = (ushort *)&_hb_NullPool;
            if ((ulong)((long)puVar32 - *(long *)(this + 8)) <= uVar16) {
              if (((((long)puVar32 - *(long *)(this + 8)) + 10U <= uVar16) &&
                  (puVar27 = puVar32 + 1,
                  (ulong)((long)puVar27 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18))) &&
                 (uVar25 = (uint)(ushort)(*puVar32 << 8 | *puVar32 >> 8),
                 uVar25 <= (uint)(*(int *)(this + 0x10) - (int)puVar27))) {
                uVar25 = *(int *)(this + 0x1c) - uVar25;
                *(uint *)(this + 0x1c) = uVar25;
                if (0 < (int)uVar25) {
                  uVar16 = ItemVariationStore::sanitize
                                     ((short *)puVar27,(long)this,uVar16,(ulong)uVar25,param_4);
                  puVar27 = puVar32;
                  if ((char)uVar16 != '\0') goto LAB_00451c49;
                }
              }
              puVar27 = (ushort *)&_hb_NullPool;
            }
          }
LAB_00451c49:
          *(ushort **)(this + 0x78) = puVar27;
          pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if ((long)*(int *)(this + 0x60) != 0) {
            pCVar31 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)
                      ((long)*(int *)(this + 0x60) + (long)puVar23);
            pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
            if ((ulong)((long)pCVar31 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) {
              uVar16 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize(pCVar31,(long)this);
              pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
              if ((char)uVar16 != '\0') {
                pCVar28 = pCVar31;
              }
            }
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x80) = pCVar28;
          pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if ((long)*(int *)(this + 100) != 0) {
            pCVar31 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)
                      ((long)*(int *)(this + 100) + (long)puVar23);
            pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
            if ((ulong)((long)pCVar31 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) {
              uVar16 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize(pCVar31,(long)this);
              pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
              if ((char)uVar16 != '\0') {
                pCVar28 = pCVar31;
              }
            }
          }
          *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x88) = pCVar28;
          lVar30 = (long)*(int *)(this + 0x6c);
          pcVar29 = (char *)&_hb_NullPool;
          if (lVar30 == 0) goto LAB_00451f83;
          pcVar18 = (char *)((long)puVar23 + lVar30);
          pcVar29 = (char *)&_hb_NullPool;
          if ((ulong)*(uint *)(this + 0x18) < (ulong)((long)pcVar18 - *(long *)(this + 8)))
          goto LAB_00451f83;
          if ((ulong)*(uint *)(this + 0x18) < ((long)pcVar18 - *(long *)(this + 8)) + 2U)
          goto LAB_00451f80;
          uVar25 = *(uint *)pCVar28;
          uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                   uVar25 << 0x18;
          cVar5 = *pcVar18;
          pcVar29 = pcVar18;
          if (cVar5 != '\x04') {
            if (cVar5 == '\x03') {
              uVar10 = CFF::
                       FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::
                       sanitize((FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>
                                 *)(pcVar18 + 1),(long)this,uVar25);
              if ((char)uVar10 != '\0') goto LAB_00451f83;
              goto LAB_00451f80;
            }
            if ((((cVar5 != '\0') ||
                 (pcVar18 = pcVar18 + 1,
                 (ulong)*(uint *)(this + 0x18) < (ulong)((long)pcVar18 - *(long *)(this + 8)))) ||
                ((ulong)*(uint *)(this + 0x18) < (ulong)((long)pcVar18 - *(long *)(this + 8)))) ||
               (((uint)(*(int *)(this + 0x10) - (int)pcVar18) < *(uint *)(this + 0x38) ||
                (iVar13 = *(int *)(this + 0x1c) - *(uint *)(this + 0x38),
                *(int *)(this + 0x1c) = iVar13, iVar13 < 1)))) goto LAB_00451f80;
            goto LAB_00451f83;
          }
          piVar14 = (int *)(pcVar18 + 5);
          if ((ulong)*(uint *)(this + 0x18) < (ulong)((long)piVar14 - *(long *)(this + 8)))
          goto LAB_00451f80;
          puVar2 = (uint *)(pcVar18 + 1);
          uVar11 = *puVar2;
          lVar19 = (ulong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                          uVar11 << 0x18) * 6;
          uVar11 = (uint)lVar19;
          if ((((int)((ulong)lVar19 >> 0x20) != 0) ||
              ((ulong)*(uint *)(this + 0x18) < (ulong)((long)piVar14 - *(long *)(this + 8)))) ||
             (((uint)(*(int *)(this + 0x10) - (int)piVar14) < uVar11 ||
              (iVar13 = *(int *)(this + 0x1c) - uVar11, *(int *)(this + 0x1c) = iVar13, iVar13 < 1))
             )) goto LAB_00451f80;
          uVar11 = *puVar2;
          if (uVar11 == 0) goto LAB_00451ea4;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar16 = 1;
          if (1 < uVar11) {
            uVar16 = (ulong)uVar11;
          }
          lVar19 = 0;
          goto LAB_00451e60;
        }
        uVar33 = (uint)*(byte *)((long)local_2088 + (ulong)uVar25);
        uStack_2080 = CONCAT44(uVar12,(uint)uStack_2080);
        if (*(byte *)((long)local_2088 + (ulong)uVar25) == 0xc) {
          if (uVar25 + 2 <= uVar11) {
            uVar33 = *(byte *)((long)local_2088 + (ulong)uVar12) | 0x100;
            uStack_2080 = CONCAT44(uVar25 + 2,(uint)uStack_2080);
            goto LAB_004519ba;
          }
          uVar33 = 0xffff;
LAB_00451b06:
          CFF::dict_opset_t::process_op(uVar33,(long *)&local_2088);
          if (local_2078._4_4_ == 0) goto LAB_00451aa8;
        }
        else {
LAB_004519ba:
          iVar13 = local_2078._4_4_;
          if (uVar33 < 0x107) {
            if (uVar33 == 0x11) {
              if (iVar13 == 0) {
                local_2078 = CONCAT71(local_2078._1_7_,1);
                _hb_CrapPool = 0;
                iVar13 = 0;
              }
              else {
                iVar13 = (int)local_2070[iVar13 - 1];
              }
              *(int *)(this + 0x60) = iVar13;
            }
            else {
              if (uVar33 != 0x18) goto LAB_00451b06;
              if (iVar13 == 0) {
                local_2078 = CONCAT71(local_2078._1_7_,1);
                _hb_CrapPool = 0;
                iVar13 = 0;
              }
              else {
                iVar13 = (int)local_2070[iVar13 - 1];
              }
              *(int *)(this + 0x68) = iVar13;
            }
          }
          else if (uVar33 == 0x125) {
            if (iVar13 == 0) {
              local_2078 = CONCAT71(local_2078._1_7_,1);
              _hb_CrapPool = 0;
              *(undefined4 *)(this + 0x6c) = 0;
            }
            else {
              *(int *)(this + 0x6c) = (int)local_2070[iVar13 - 1];
            }
          }
          else if (uVar33 == 0x124) {
            if (iVar13 == 0) {
              local_2078 = CONCAT71(local_2078._1_7_,1);
              _hb_CrapPool = 0;
              *(undefined4 *)(this + 100) = 0;
            }
            else {
              *(int *)(this + 100) = (int)local_2070[iVar13 - 1];
            }
          }
          else {
            if (uVar33 != 0x107) goto LAB_00451b06;
            local_1058._0_12_ = ZEXT412(0xffff) << 0x40;
            local_1058._12_4_ = 0;
            CFF::parsed_values_t<CFF::op_str_t>::add_op
                      (ppVar1,0x107,(long *)&local_2088,(undefined8 *)local_1058);
          }
          local_2078 = local_2078 & 0xffffffff;
LAB_00451aa8:
          if ((uStack_2080._4_4_ <= (uint)uStack_2080) && ((char)local_2078 == '\0')) {
            local_1058._0_12_ = ZEXT412(0xffff) << 0x40;
            local_1058._12_4_ = 0;
            CFF::parsed_values_t<CFF::op_str_t>::add_op
                      (ppVar1,uVar33,(long *)&local_2088,(undefined8 *)local_1058);
          }
        }
        if ((uint)uStack_2080 < uStack_2080._4_4_) break;
        uVar25 = uStack_2080._4_4_;
        uVar11 = (uint)uStack_2080;
      } while ((char)local_2078 == '\0');
    }
  }
  goto LAB_00452905;
  while (lVar19 = lVar19 + 6, uVar16 * 6 != lVar19) {
LAB_00451e60:
    if ((((ulong)*(uint *)(this + 0x18) <
          (ulong)((long)puVar23 + ((lVar19 + lVar30 + 0xb) - *(long *)(this + 8)))) ||
        (uVar11 = *(uint *)((long)puVar23 + lVar19 + lVar30 + 5),
        *(uint *)(this + 0x38) <=
        (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18))) ||
       (uVar24 = *(ushort *)((long)puVar23 + lVar19 + lVar30 + 9),
       uVar25 <= (ushort)(uVar24 << 8 | uVar24 >> 8))) goto LAB_00451f80;
  }
LAB_00451ea4:
  if ((*puVar2 == 0) || (*piVar14 != 0)) {
LAB_00451f80:
    pcVar29 = (char *)&_hb_NullPool;
  }
  else {
    uVar25 = *puVar2;
    if (1 < (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18)) {
      puVar17 = (uint *)((long)puVar23 + lVar30 + 0xb);
      uVar16 = 1;
      do {
        uVar22 = (ulong)(uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                        uVar25 << 0x18);
        puVar35 = (uint *)&_hb_NullPool;
        if (uVar16 - 1 < uVar22) {
          puVar35 = (uint *)((long)puVar17 + -6);
          uVar25 = *puVar2;
          uVar22 = (ulong)(uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                          uVar25 << 0x18);
        }
        uVar25 = *puVar35;
        puVar35 = (uint *)&_hb_NullPool;
        if (uVar16 < uVar22) {
          puVar35 = puVar17;
        }
        uVar11 = *puVar35;
        if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
            (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18))
        goto LAB_00451f80;
        uVar16 = uVar16 + 1;
        uVar25 = *puVar2;
        puVar17 = (uint *)((long)puVar17 + 6);
      } while (uVar16 < (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                        uVar25 << 0x18));
    }
    if (uVar25 == 0) {
      pcVar18 = (char *)&_hb_NullPool;
    }
    else {
      pcVar18 = (char *)((long)puVar2 +
                        (ulong)((uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8
                                | uVar25 << 0x18) - 1) * 6 + 4);
    }
    if ((char *)(ulong)*(uint *)(this + 0x18) < pcVar18 + (10 - *(long *)(this + 8)))
    goto LAB_00451f80;
    uVar25 = *puVar2;
    if (uVar25 == 0) {
      pcVar18 = (char *)&_hb_NullPool;
    }
    else {
      pcVar18 = (char *)((long)puVar2 +
                        (ulong)((uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8
                                | uVar25 << 0x18) - 1) * 6 + 4);
    }
    uVar25 = *(uint *)(pcVar18 + 6);
    if ((uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18) !=
        *(uint *)(this + 0x38)) goto LAB_00451f80;
  }
LAB_00451f83:
  *(char **)(this + 0x90) = pcVar29;
  if (((*(uint **)(this + 0x80) == (uint *)&_hb_NullPool) ||
      (*(undefined4 **)(this + 0x70) == &_hb_NullPool)) ||
     (*(uint **)(this + 0x88) == (uint *)&_hb_NullPool)) goto LAB_00452905;
  uVar25 = **(uint **)(this + 0x80);
  uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
  *(uint *)(this + 0xc0) = uVar25;
  if (uVar25 != *(uint *)(this + 0x38)) goto LAB_00452905;
  uVar25 = **(uint **)(this + 0x88);
  uVar11 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
  *(uint *)(this + 0x98) = uVar11;
  uVar25 = 0;
  if (-1 < (int)uVar11) {
    uVar25 = uVar11;
  }
  uVar11 = *(uint *)(this + 0xb0);
  if ((int)uVar11 < 0) goto LAB_00452905;
  if (uVar11 < uVar25) {
    uVar12 = uVar11;
    do {
      uVar12 = uVar12 + (uVar12 >> 1) + 8;
    } while (uVar12 < uVar25);
    if (0x5555555 < uVar12) {
LAB_00452b1b:
      *(uint *)paVar4 = ~uVar11;
      goto LAB_00452905;
    }
    pvVar15 = hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>::
              realloc_vector<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,(void*)0>
                        ((long)paVar4,uVar12);
    if ((uVar12 == 0) || (pvVar15 != (void *)0x0)) {
      *(void **)(this + 0xb8) = pvVar15;
      *(uint *)(this + 0xb0) = uVar12;
    }
    else {
      uVar11 = *(uint *)paVar4;
      if (uVar11 < uVar12) goto LAB_00452b1b;
    }
  }
  uVar11 = *(uint *)(this + 0xb4);
  uVar16 = (ulong)uVar11;
  if (uVar11 < uVar25) {
    do {
      lVar30 = *(long *)(this + 0xb8);
      lVar19 = uVar16 * 0x30;
      puVar21 = (undefined8 *)(lVar30 + 0x20 + lVar19);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21 = (undefined8 *)(lVar30 + 0x10 + lVar19);
      *puVar21 = 0;
      puVar21[1] = 0;
      *(undefined8 *)(lVar30 + lVar19) = 0;
      ((undefined8 *)(lVar30 + lVar19))[1] = 0;
      uVar11 = *(int *)(this + 0xb4) + 1;
      uVar16 = (ulong)uVar11;
      *(uint *)(this + 0xb4) = uVar11;
    } while (uVar11 < uVar25);
  }
  else if ((uVar25 < uVar11) && (uVar11 != uVar25)) {
    piVar14 = (int *)(*(long *)(this + 0xb8) + uVar16 * 0x30 + -0x28);
    iVar13 = uVar25 - uVar11;
    do {
      if (*piVar14 != 0) {
        piVar14[1] = 0;
        free(*(void **)(piVar14 + 2));
      }
      piVar14[0] = 0;
      piVar14[1] = 0;
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14 = piVar14 + -0xc;
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0);
  }
  *(uint *)(this + 0xb4) = uVar25;
  if (*(int *)(this + 0x98) == 0) {
    return;
  }
  uVar16 = 0;
  while( true ) {
                    /* try { // try from 004520d8 to 004520de has its CatchHandler @ 00452b5c */
    auVar37 = CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
                        (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this + 0x88),(uint)uVar16);
    if ((((ulong)*(uint *)(this + 0x18) < (ulong)(auVar37._0_8_ - *(long *)(this + 8))) ||
        ((uint)(*(int *)(this + 0x10) - auVar37._0_4_) < auVar37._8_4_)) ||
       (iVar13 = *(int *)(this + 0x1c) - auVar37._8_4_, *(int *)(this + 0x1c) = iVar13, iVar13 < 1))
    goto LAB_00452905;
    memset(&local_1044,0,0x100c);
    local_1048 = '\0';
    local_1058._0_12_ = auVar37._0_12_;
    local_1058._12_4_ = 0;
    uVar25 = *(uint *)(this + 0xa0);
    uVar11 = *(int *)(this + 0xa4) + 1;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
    if ((int)uVar25 < 0) break;
    if (uVar25 < uVar11) {
      uVar12 = uVar25;
      do {
        uVar12 = uVar12 + (uVar12 >> 1) + 8;
      } while (uVar12 < uVar11);
      if (0x6666666 < uVar12) {
LAB_004528e0:
        *(uint *)paVar3 = ~uVar25;
        break;
      }
      pvVar15 = hb_vector_t<CFF::cff2_font_dict_values_t,false>::
                realloc_vector<CFF::cff2_font_dict_values_t,(void*)0>((long)paVar3,uVar12);
      if ((uVar12 == 0) || (pvVar15 != (void *)0x0)) {
        *(void **)(this + 0xa8) = pvVar15;
        *(uint *)(this + 0xa0) = uVar12;
      }
      else {
        uVar25 = *(uint *)paVar3;
        if (uVar25 < uVar12) goto LAB_004528e0;
      }
    }
    uVar25 = *(uint *)(this + 0xa4);
    uVar22 = (ulong)uVar25;
    if (uVar25 < uVar11) {
      do {
        lVar30 = *(long *)(this + 0xa8);
        puVar21 = (undefined8 *)(lVar30 + 0x10 + uVar22 * 0x28);
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21 = (undefined8 *)(lVar30 + uVar22 * 0x28);
        *puVar21 = 0;
        puVar21[1] = 0;
        *(undefined8 *)(lVar30 + 0x20 + uVar22 * 0x28) = 0;
        uVar25 = *(int *)(this + 0xa4) + 1;
        uVar22 = (ulong)uVar25;
        *(uint *)(this + 0xa4) = uVar25;
      } while (uVar25 < uVar11);
    }
    else if ((uVar11 < uVar25) && (uVar25 != uVar11)) {
      piVar14 = (int *)(*(long *)(this + 0xa8) + uVar22 * 0x28 + -0x20);
      iVar13 = uVar11 - uVar25;
      do {
        if (*piVar14 != 0) {
          piVar14[1] = 0;
          free(*(void **)(piVar14 + 2));
        }
        piVar14[0] = 0;
        piVar14[1] = 0;
        piVar14[2] = 0;
        piVar14[3] = 0;
        piVar14 = piVar14 + -10;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0);
    }
    *(uint *)(this + 0xa4) = uVar11;
    lVar30 = *(long *)(this + 0xa8);
    uVar22 = (ulong)(uVar11 - 1);
    ppVar1 = (parsed_values_t<CFF::op_str_t> *)(lVar30 + uVar22 * 0x28);
    DAT_0071cd90 = 0;
    _DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cda0 = 0;
    if (ppVar1 == (parsed_values_t<CFF::op_str_t> *)&_hb_CrapPool) goto LAB_00452905;
    *(undefined4 *)ppVar1 = 0;
    lVar19 = lVar30 + uVar22 * 0x28;
    piVar14 = (int *)(lVar19 + 0x18);
    puVar21 = (undefined8 *)(lVar30 + 0x14 + uVar22 * 0x28);
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21 = (undefined8 *)(lVar30 + 8 + uVar22 * 0x28);
    *puVar21 = 0;
    puVar21[1] = 0;
    uVar25 = local_1058._8_4_;
    uVar11 = local_1058._12_4_;
    while( true ) {
      uVar12 = uVar11 + 1;
      if (uVar25 < uVar12) break;
      uVar8 = local_1058._0_8_;
      bVar6 = *(byte *)(local_1058._0_8_ + (ulong)uVar11);
      uVar33 = (uint)bVar6;
      local_1058._12_4_ = uVar12;
      if (bVar6 == 0xc) {
        if (uVar25 < uVar11 + 2) {
          uVar33 = 0xffff;
        }
        else {
          uVar33 = *(byte *)(uVar8 + (ulong)uVar12) | 0x100;
          local_1058._12_4_ = uVar11 + 2;
        }
LAB_00452360:
        CFF::dict_opset_t::process_op(uVar33,(long *)local_1058);
        if (local_1044 == 0) {
          uVar25 = local_1058._8_4_;
          uVar12 = local_1058._12_4_;
          goto LAB_00452382;
        }
      }
      else {
        if (bVar6 != 0x12) goto LAB_00452360;
        if (local_1044 == 0) {
          *piVar14 = 0;
LAB_004523e0:
          _hb_CrapPool = 0;
LAB_00452414:
          local_1048 = '\x01';
          iVar13 = 0;
        }
        else {
          if ((int)adStack_1040[local_1044 - 1U] < 0) {
            local_1048 = '\x01';
            *piVar14 = 0;
          }
          else {
            *piVar14 = (int)adStack_1040[local_1044 - 1U];
          }
          if (local_1044 - 1U == 0) goto LAB_004523e0;
          iVar13 = (int)adStack_1040[local_1044 - 2];
          if (iVar13 < 0) goto LAB_00452414;
        }
        *(int *)(lVar19 + 0x1c) = iVar13;
        local_1044 = 0;
        uVar33 = 0x12;
LAB_00452382:
        if ((uVar12 <= uVar25) && (local_1048 == '\0')) {
          local_2088 = (undefined4 *)0x0;
          uStack_2080 = 0xffff;
          CFF::parsed_values_t<CFF::op_str_t>::add_op(ppVar1,uVar33,(long *)local_1058,&local_2088);
        }
      }
      if ((uint)local_1058._8_4_ < (uint)local_1058._12_4_) goto LAB_00452905;
      uVar25 = local_1058._8_4_;
      uVar11 = local_1058._12_4_;
      if (local_1048 != '\0') goto LAB_00452905;
    }
    puVar34 = &_hb_NullPool;
    if ((long)*piVar14 != 0) {
      puVar20 = (undefined4 *)((long)*piVar14 + (long)puVar23);
      puVar34 = &_hb_NullPool;
      if ((ulong)((long)puVar20 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) {
        puVar34 = &_hb_NullPool;
        if (*(uint *)(lVar19 + 0x1c) <= (uint)(*(int *)(this + 0x10) - (int)puVar20)) {
          iVar13 = *(int *)(this + 0x1c) - *(uint *)(lVar19 + 0x1c);
          *(int *)(this + 0x1c) = iVar13;
          puVar34 = &_hb_NullPool;
          if (0 < iVar13) {
            puVar34 = puVar20;
          }
        }
      }
    }
    if (puVar34 == &_hb_NullPool) goto LAB_00452905;
    uVar25 = *(uint *)(lVar19 + 0x1c);
    memset((void *)((long)&local_2078 + 4),0,0x100c);
    local_2078 = local_2078 & 0xffffffffffffff00;
    uStack_2080 = (ulong)uVar25;
    uVar22 = uStack_2080;
    local_1068 = 0;
    local_1064 = '\0';
    if (uVar16 < *(uint *)(this + 0xb4)) {
      puVar21 = (undefined8 *)(uVar16 * 0x30 + *(long *)(this + 0xb8));
    }
    else {
      DAT_0071cda0 = 0;
      _DAT_0071cda8 = 0;
      DAT_0071cd90 = 0;
      _DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      puVar21 = &_hb_CrapPool;
    }
    *(undefined4 *)puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *(undefined4 *)(puVar21 + 3) = 0;
    puVar21[4] = &_hb_NullPool;
    *(undefined4 *)(puVar21 + 5) = 0;
    if (uVar16 < *(uint *)(this + 0xb4)) {
      this_00 = (parsed_values_t<CFF::dict_val_t> *)(uVar16 * 0x30 + *(long *)(this + 0xb8));
    }
    else {
      DAT_0071cda0 = 0;
      _DAT_0071cda8 = 0;
      DAT_0071cd90 = 0;
      _DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      this_00 = (parsed_values_t<CFF::dict_val_t> *)&_hb_CrapPool;
    }
    *(undefined4 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
    *(int **)(this_00 + 0x20) = &_hb_NullPool;
    *(undefined4 *)(this_00 + 0x28) = 0;
    uStack_2080._4_4_ = 0;
    uVar11 = uStack_2080._4_4_;
    local_2090 = (ulong)uVar25;
    local_2088 = puVar34;
    uStack_2080 = uVar22;
    while (uVar12 = uVar11 + 1, uVar12 <= uVar25) {
      uVar33 = (uint)*(byte *)((long)local_2088 + (ulong)uVar11);
      uStack_2080 = CONCAT44(uVar12,(uint)uStack_2080);
      if (*(byte *)((long)local_2088 + (ulong)uVar11) == 0xc) {
        uVar11 = uVar11 + 2;
        if (uVar11 <= uVar25) {
          uVar33 = *(byte *)((long)local_2088 + (ulong)uVar12) | 0x100;
          uStack_2080 = CONCAT44(uVar11,(uint)uStack_2080);
          uVar12 = uVar11;
          goto LAB_004525b2;
        }
        uVar33 = 0xffff;
switchD_004525de_caseD_c:
        local_2094 = 0;
        local_2098 = 0xffff;
        local_20a0 = 0;
        CFF::dict_opset_t::process_op(uVar33,(long *)&local_2088);
        if (local_2078._4_4_ == 0) {
          if ((uint)uStack_2080 < uStack_2080._4_4_) goto LAB_00452642;
          goto LAB_00452629;
        }
      }
      else {
LAB_004525b2:
        local_20a0 = 0;
        local_2098 = 0xffff;
        local_2094 = 0;
        iVar13 = local_2078._4_4_;
        switch(uVar33) {
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          break;
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x14:
        case 0x15:
          goto switchD_004525de_caseD_c;
        case 0x13:
          if (iVar13 == 0) {
            local_2078 = CONCAT71(local_2078._1_7_,1);
            _hb_CrapPool = 0;
            *(undefined4 *)(this_00 + 0x18) = 0;
          }
          else {
            *(int *)(this_00 + 0x18) = (int)local_2070[iVar13 - 1];
          }
          break;
        case 0x16:
          if (local_1064 == '\0') {
            if (iVar13 == 0) {
              _hb_CrapPool = 0;
            }
            else {
              local_1068 = (int)local_2070[iVar13 - 1];
              if (-1 < local_1068) goto LAB_00452694;
            }
            local_2078 = CONCAT71(local_2078._1_7_,1);
            local_1068 = 0;
          }
LAB_00452694:
          local_1064 = '\x01';
          *(int *)(this_00 + 0x28) = local_1068;
          break;
        case 0x17:
          goto switchD_004525de_caseD_17;
        default:
          if ((9 < uVar33 - 0x109) || ((799U >> (uVar33 - 0x109 & 0x1f) & 1) == 0))
          goto switchD_004525de_caseD_c;
        }
        local_2078 = local_2078 & 0xffffffff;
switchD_004525de_caseD_17:
        if (uVar12 <= uVar25) {
LAB_00452629:
          if ((char)local_2078 == '\0') {
            CFF::parsed_values_t<CFF::dict_val_t>::add_op
                      (this_00,uVar33,(long *)&local_2088,&local_20a0);
          }
        }
      }
LAB_00452642:
      if ((uint)uStack_2080 < uStack_2080._4_4_) goto LAB_00452905;
      uVar25 = (uint)uStack_2080;
      uVar11 = uStack_2080._4_4_;
      if ((char)local_2078 != '\0') goto LAB_00452905;
    }
    puVar20 = &_hb_NullPool;
    if (local_2090 != 0) {
      puVar20 = puVar34;
    }
    if (uVar16 < *(uint *)(this + 0xb4)) {
      lVar30 = (long)*(int *)(*(long *)(this + 0xb8) + 0x18 + uVar16 * 0x30);
      pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
      if (lVar30 != 0) {
        pCVar31 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)((long)puVar20 + lVar30);
        pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
        if ((ulong)((long)pCVar31 - *(long *)(this + 8)) <= (ulong)*(uint *)(this + 0x18)) {
                    /* try { // try from 00452790 to 0045279a has its CatchHandler @ 00452b5a */
          uVar22 = CFFIndex<OT::IntType<unsigned_int,4u>>::sanitize(pCVar31,(long)this);
          pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
          if ((char)uVar22 != '\0') {
            pCVar28 = pCVar31;
          }
        }
      }
      if (*(uint *)(this + 0xb4) <= uVar16) goto LAB_004528ad;
LAB_004527c1:
      puVar21 = (undefined8 *)(uVar16 * 0x30 + *(long *)(this + 0xb8));
    }
    else {
      DAT_0071cda0 = 0;
      _DAT_0071cda8 = 0;
      DAT_0071cd90 = 0;
      _DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      pCVar28 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)&_hb_NullPool;
      if (uVar16 < *(uint *)(this + 0xb4)) goto LAB_004527c1;
LAB_004528ad:
      DAT_0071cda0 = 0;
      _DAT_0071cda8 = 0;
      DAT_0071cd90 = 0;
      _DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      puVar21 = &_hb_CrapPool;
    }
    puVar21[4] = pCVar28;
    uVar16 = uVar16 + 1;
    if (*(uint *)(this + 0x98) <= uVar16) {
      return;
    }
  }
  DAT_0071cd90 = 0;
  _DAT_0071cd98 = 0;
  _hb_CrapPool = 0;
  _DAT_0071cd88 = 0;
  DAT_0071cda0 = 0;
LAB_00452905:
                    /* try { // try from 00452905 to 0045290c has its CatchHandler @ 00452b60 */
  _fini(this);
  return;
}


