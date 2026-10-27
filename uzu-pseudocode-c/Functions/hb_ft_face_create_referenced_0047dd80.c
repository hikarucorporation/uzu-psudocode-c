// Function : hb_ft_face_create_referenced
// Namespace: 
// Entry    : 0047dd80
// Prototype: undefined4 * hb_ft_face_create_referenced(long param_1)
// Body     : 0047dd80 - 0047e4ac


undefined4 * hb_ft_face_create_referenced(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *__ptr;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  char cVar11;
  int *piVar12;
  OpenTypeFontFile *pOVar13;
  undefined4 local_78 [2];
  OpenTypeFontFile *local_70;
  OpenTypeFontFile *pOStack_68;
  undefined8 local_60;
  ulong uStack_58;
  char local_50;
  int local_4c;
  int *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  
  FT_Reference_Face();
  puVar10 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar10[5] != 0) {
    puVar8 = calloc(1,0x1b8);
    if ((undefined4 *)puVar8 == (undefined4 *)0x0) {
      FT_Done_Face(param_1);
      puVar8 = _hb_Null_hb_face_t;
      pcVar2 = (code *)_hb_Null_hb_face_t._72_8_;
    }
    else {
      *(undefined4 *)puVar8 = 1;
      *(undefined4 *)((long)puVar8 + 4) = 1;
      *(undefined8 *)((long)puVar8 + 8) = 0;
      *(code **)((long)puVar8 + 0x20) = _hb_ft_reference_table;
      *(long *)((long)puVar8 + 0x28) = param_1;
      *(code **)((long)puVar8 + 0x30) = _hb_ft_face_destroy;
      *(undefined4 *)((long)puVar8 + 0x18) = 0xffffffff;
      *(undefined1 **)((long)puVar8 + 0x50) = puVar8;
      *(undefined1 **)((long)puVar8 + 0x68) = puVar8;
      pcVar2 = *(code **)((long)puVar8 + 0x48);
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined8 *)((long)puVar8 + 0x40));
    }
    *(code **)((long)puVar8 + 0x38) = _hb_ft_get_table_tags;
    *(long *)((long)puVar8 + 0x40) = param_1;
    *(undefined8 *)((long)puVar8 + 0x48) = 0;
    goto LAB_0047e333;
  }
  iVar1 = *(int *)(puVar10 + 1);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_0047de8c:
    FT_Done_Face(param_1);
    __ptr = &_hb_NullPool;
  }
  else {
    uVar3 = *puVar10;
    __ptr = calloc(1,0x30);
    if (__ptr == (int *)0x0) goto LAB_0047de8c;
    *__ptr = 1;
    __ptr[1] = 1;
    __ptr[2] = 0;
    __ptr[3] = 0;
    *(undefined8 *)(__ptr + 4) = uVar3;
    __ptr[6] = iVar1;
    __ptr[7] = 1;
    *(long *)(__ptr + 8) = param_1;
    *(code **)(__ptr + 10) = _hb_ft_face_destroy;
  }
  local_38 = *(undefined8 *)(param_1 + 8);
  uStack_58 = 0;
  local_40 = 0x10000;
  local_3c = 0;
  if (*__ptr != 0) {
    LOCK();
    *__ptr = *__ptr + 1;
    UNLOCK();
  }
  if (*__ptr != 0) {
    LOCK();
    *__ptr = *__ptr + 1;
    UNLOCK();
  }
  local_50 = '\0';
  local_48 = __ptr;
LAB_0047df41:
  piVar6 = local_48;
  pOVar13 = *(OpenTypeFontFile **)(local_48 + 4);
  local_60._0_4_ = local_48[6];
  lVar5 = (ulong)(uint)local_60 * 0x40;
  uVar7 = (uint)lVar5;
  if (uVar7 < 0x4001) {
    uVar7 = 0x4000;
  }
  pOStack_68 = pOVar13 + (uint)local_60;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  local_60._4_4_ = 0x3fffffff;
  if ((int)((ulong)lVar5 >> 0x20) == 0) {
    local_60._4_4_ = uVar7;
  }
  local_4c = 0;
  local_78[0] = 0;
  uStack_58 = uStack_58 & 0xffffffff;
  piVar12 = __ptr;
  local_70 = pOVar13;
  if (pOVar13 == (OpenTypeFontFile *)0x0) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        *local_48 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(local_48 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047e3a3 to 0047e3aa has its CatchHandler @ 0047e4dd */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 0047e3c8 to 0047e3c9 has its CatchHandler @ 0047e4b5 */
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        }
        free(piVar6);
      }
    }
    local_48 = (int *)0x0;
    local_70 = (OpenTypeFontFile *)0x0;
    pOStack_68 = (OpenTypeFontFile *)0x0;
    local_60 = (ulong)local_60._4_4_ << 0x20;
    goto LAB_0047e228;
  }
                    /* try { // try from 0047dfaf to 0047dfb9 has its CatchHandler @ 0047e4df */
  uVar9 = OT::OpenTypeFontFile::sanitize(pOVar13,(long)local_78);
  if ((char)uVar9 != '\0') {
    if (local_4c == 0) {
      cVar11 = '\x01';
LAB_0047e130:
      if (local_48 == (int *)0x0) goto LAB_0047e196;
      goto LAB_0047e13a;
    }
    local_4c = 0;
                    /* try { // try from 0047e081 to 0047e0ca has its CatchHandler @ 0047e4dd */
    uVar9 = OT::OpenTypeFontFile::sanitize(pOVar13,(long)local_78);
    piVar6 = local_48;
    if (local_4c == 0) {
      cVar11 = (char)uVar9;
      goto joined_r0x0047e36f;
    }
    if ((local_48 != (int *)0x0) && (*local_48 != 0)) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        *local_48 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(local_48 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 0047e0e8 to 0047e0e9 has its CatchHandler @ 0047e4bd */
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        }
        free(piVar6);
      }
    }
    local_60 = (ulong)local_60._4_4_ << 0x20;
    goto LAB_0047e1cd;
  }
  cVar11 = '\0';
  if ((local_4c == 0) || (local_50 != '\0')) goto LAB_0047e130;
  pOVar13 = (OpenTypeFontFile *)(ulong)(uint)__ptr[6];
  if (__ptr[1] != 0) {
    if (pOVar13 == (OpenTypeFontFile *)0x0) {
      __ptr[7] = 2;
LAB_0047df20:
      local_70 = *(OpenTypeFontFile **)(__ptr + 4);
      pOStack_68 = pOVar13 + (long)local_70;
      if (local_70 == (OpenTypeFontFile *)0x0) goto LAB_0047e120;
    }
    else {
      if (__ptr[7] == 2) goto LAB_0047df20;
      if (__ptr[7] == 3) {
        __ptr[7] = 1;
      }
      __dest = malloc((size_t)pOVar13);
      if (__dest == (void *)0x0) goto LAB_0047e112;
      memcpy(__dest,*(void **)(__ptr + 4),(size_t)pOVar13);
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0047e03e to 0047e03f has its CatchHandler @ 0047e4df */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      __ptr[7] = 2;
      *(void **)(__ptr + 4) = __dest;
      *(void **)(__ptr + 8) = __dest;
      *(undefined **)(__ptr + 10) = PTR_free_00715540;
    }
    local_50 = '\x01';
    goto LAB_0047df41;
  }
LAB_0047e112:
  local_70 = (OpenTypeFontFile *)0x0;
  pOStack_68 = pOVar13;
LAB_0047e120:
  cVar11 = '\0';
joined_r0x0047e36f:
  if (local_48 != (int *)0x0) {
LAB_0047e13a:
    piVar6 = local_48;
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        *local_48 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(local_48 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047e164 to 0047e16b has its CatchHandler @ 0047e4dd */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 0047e18c to 0047e18d has its CatchHandler @ 0047e4c5 */
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        }
        free(piVar6);
      }
    }
  }
LAB_0047e196:
  local_48 = (int *)0x0;
  local_70 = (OpenTypeFontFile *)0x0;
  pOStack_68 = (OpenTypeFontFile *)0x0;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if (cVar11 == '\0') {
LAB_0047e1cd:
    local_48 = (int *)0x0;
    pOStack_68 = (OpenTypeFontFile *)0x0;
    local_70 = (OpenTypeFontFile *)0x0;
    piVar12 = &_hb_NullPool;
    if (*__ptr != 0) {
      LOCK();
      *__ptr = *__ptr + -1;
      UNLOCK();
      if (*__ptr == 0) {
        *__ptr = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(__ptr + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0047e1f9 to 0047e200 has its CatchHandler @ 0047e4dd */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          __ptr[2] = 0;
          __ptr[3] = 0;
        }
        if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0047e21e to 0047e21f has its CatchHandler @ 0047e4cd */
          (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
        }
        free(__ptr);
      }
    }
  }
  else if (__ptr[1] != 0) {
    __ptr[1] = 0;
  }
LAB_0047e228:
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_78);
  puVar10 = calloc(1,0x10);
  uVar3 = local_38;
  if (puVar10 == (undefined8 *)0x0) {
    puVar8 = _hb_Null_hb_face_t;
    if (*piVar12 != 0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        *piVar12 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(piVar12 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar12[2] = 0;
          piVar12[3] = 0;
        }
        if (*(code **)(piVar12 + 10) != (code *)0x0) {
                    /* try { // try from 0047e47a to 0047e47b has its CatchHandler @ 0047e4ad */
          (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
        }
        free(piVar12);
      }
    }
  }
  else {
    *puVar10 = piVar12;
    *(short *)(puVar10 + 1) = (short)local_38;
    puVar8 = calloc(1,0x1b8);
    if ((undefined4 *)puVar8 == (undefined4 *)0x0) {
      _hb_face_for_data_closure_destroy(puVar10);
      puVar8 = _hb_Null_hb_face_t;
      pcVar2 = (code *)_hb_Null_hb_face_t._72_8_;
    }
    else {
      *(undefined4 *)puVar8 = 1;
      *(undefined4 *)((long)puVar8 + 4) = 1;
      *(undefined8 *)((long)puVar8 + 8) = 0;
      *(code **)((long)puVar8 + 0x20) = _hb_face_for_data_reference_table;
      *(undefined8 **)((long)puVar8 + 0x28) = puVar10;
      *(code **)((long)puVar8 + 0x30) = _hb_face_for_data_closure_destroy;
      *(undefined4 *)((long)puVar8 + 0x18) = 0xffffffff;
      *(undefined1 **)((long)puVar8 + 0x50) = puVar8;
      *(undefined1 **)((long)puVar8 + 0x68) = puVar8;
      pcVar2 = *(code **)((long)puVar8 + 0x48);
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined8 *)((long)puVar8 + 0x40));
    }
    *(code **)((long)puVar8 + 0x38) = _hb_face_for_data_get_table_tags;
    *(undefined8 **)((long)puVar8 + 0x40) = puVar10;
    *(undefined8 *)((long)puVar8 + 0x48) = 0;
    *(int *)((long)puVar8 + 0x10) = (int)uVar3;
  }
  if (*__ptr != 0) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      ppVar4 = *(pthread_mutex_t **)(__ptr + 2);
      if (ppVar4 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar4[1].__data,ppVar4);
        free(ppVar4);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0047e329 to 0047e32a has its CatchHandler @ 0047e4d5 */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
LAB_0047e333:
  if (*(int *)((long)puVar8 + 4) != 0) {
    *(int *)((long)puVar8 + 0x10) = (int)*(undefined8 *)(param_1 + 8);
  }
  if (*(int *)((long)puVar8 + 4) != 0) {
    *(uint *)((long)puVar8 + 0x14) = (uint)*(ushort *)(param_1 + 0x88);
  }
  return (undefined4 *)puVar8;
}


