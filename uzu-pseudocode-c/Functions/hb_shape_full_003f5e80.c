// Function : hb_shape_full
// Namespace: 
// Entry    : 003f5e80
// Prototype: undefined8 hb_shape_full(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, hb_font_t * param_9, hb_buffer_t * param_10, void * param_11, uint param_12)
// Body     : 003f5e80 - 003f73a4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
hb_shape_full(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             hb_font_t *param_9,hb_buffer_t *param_10,void *param_11,uint param_12)

{
  int iVar1;
  pthread_mutex_t *__ptr;
  ulong *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  hb_buffer_t *phVar8;
  undefined8 uVar9;
  int *__ptr_00;
  undefined8 *puVar10;
  hb_buffer_t *phVar11;
  hb_buffer_t *phVar12;
  undefined7 extraout_var;
  ulong uVar13;
  uint *puVar14;
  undefined7 extraout_var_00;
  uint uVar15;
  uint uVar16;
  hb_buffer_t *phVar17;
  ulong *puVar18;
  hb_buffer_t *phVar19;
  ulong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  int *piVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  hb_buffer_t *phVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  hb_buffer_t *phVar34;
  ulong uVar35;
  uint uVar36;
  char *pcVar37;
  undefined8 *puVar38;
  bool bVar39;
  bool bVar40;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar41;
  undefined8 extraout_XMM0_Qa_05;
  ulong uVar42;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 in_stack_fffffffffffffae8;
  undefined1 *local_510;
  uint local_4b8;
  undefined8 local_4b0;
  ulong local_4a8 [2];
  undefined4 local_498;
  hb_buffer_t *local_488 [3];
  uint local_470 [2];
  long local_468;
  long local_460;
  long local_458;
  ulong local_450;
  hb_buffer_t *local_448;
  hb_buffer_t *local_440;
  undefined8 local_438;
  long lStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  hb_buffer_t *local_418;
  uint local_410;
  long local_40c;
  int *local_400;
  
  uVar15 = *(uint *)(param_10 + 0x60);
  if (uVar15 == 0) {
    return 1;
  }
  *(undefined2 *)(param_10 + 0xb8) = 0;
  param_10[0x59] = (hb_buffer_t)0x0;
  *(undefined4 *)(param_10 + 0xc0) = 0;
  uVar5 = (uint)((ulong)uVar15 * 0x40);
  if ((int)((ulong)uVar15 * 0x40 >> 0x20) == 0) {
    uVar36 = 0x4000;
    if (0x4000 < uVar5) {
      uVar36 = uVar5;
    }
    *(uint *)(param_10 + 0xc4) = uVar36;
  }
  uVar5 = (uint)((ulong)uVar15 * 0x400);
  if ((int)((ulong)uVar15 * 0x400 >> 0x20) == 0) {
    uVar15 = 0x4000;
    if (0x4000 < uVar5) {
      uVar15 = uVar5;
    }
    *(uint *)(param_10 + 200) = uVar15;
  }
  if (((byte)param_10[0x18] & 0x20) == 0) {
    phVar8 = (hb_buffer_t *)0x0;
  }
  else {
    phVar8 = calloc(1,0xf0);
    if (phVar8 == (hb_buffer_t *)0x0) {
      phVar8 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
    }
    else {
      *(undefined4 *)phVar8 = 1;
      *(undefined4 *)(phVar8 + 4) = 1;
      *(undefined8 *)(phVar8 + 8) = 0;
      *(undefined8 *)(phVar8 + 0xc4) = 0x1fffffff3fffffff;
      hb_unicode_funcs_destroy((int *)0x0);
      while( true ) {
        piVar25 = static_ucd_funcs;
        static_ucd_funcs = piVar25;
        if (piVar25 != (int *)0x0) break;
        piVar25 = hb_ucd_unicode_funcs_lazy_loader_t::create();
        piVar26 = static_ucd_funcs;
        if (piVar25 == (int *)0x0) {
          piVar25 = &_hb_Null_hb_unicode_funcs_t;
          LOCK();
          if (static_ucd_funcs == (int *)0x0) {
            static_ucd_funcs = &_hb_Null_hb_unicode_funcs_t;
          }
          UNLOCK();
        }
        else {
          LOCK();
          if (static_ucd_funcs == (int *)0x0) {
            static_ucd_funcs = piVar25;
          }
          UNLOCK();
        }
        if (piVar26 == (int *)0x0) break;
        if ((piVar25 != (int *)0x0) && (piVar25 != &_hb_Null_hb_unicode_funcs_t)) {
          hb_unicode_funcs_destroy(piVar25);
        }
      }
      if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
        LOCK();
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      *(int **)(phVar8 + 0x10) = piVar25;
      uVar41 = _UNK_005dd358;
      *(undefined8 *)(phVar8 + 0x18) = _DAT_005dd350;
      *(undefined8 *)(phVar8 + 0x20) = uVar41;
      *(undefined8 *)(phVar8 + 0x28) = 0xffffffff00000000;
      *(undefined4 *)(phVar8 + 0x30) = 0;
      *(undefined1 (*) [16])(phVar8 + 0x38) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(phVar8 + 0x48) = (undefined1  [16])0x0;
      phVar8[0x58] = (hb_buffer_t)0x1;
      *(undefined8 *)(phVar8 + 0x59) = 0;
      *(undefined8 *)(phVar8 + 0x60) = 0;
      *(undefined8 *)(phVar8 + 0x78) = *(undefined8 *)(phVar8 + 0x70);
      *(undefined1 (*) [16])(phVar8 + 0x88) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(phVar8 + 0x98) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(phVar8 + 0xa8) = (undefined1  [16])0x0;
      *(undefined2 *)(phVar8 + 0xb8) = 0;
      *(undefined8 *)(phVar8 + 0xbc) = 1;
    }
    hb_buffer_append(phVar8,(long)param_10,0,0xffffffff);
  }
  piVar25 = *(int **)(param_9 + 0x20);
  phVar19 = param_10 + 0x38;
  lVar27 = *(long *)(param_9 + 0x80);
  uVar15 = *(uint *)(param_9 + 0x78);
  phVar11 = (hb_buffer_t *)(ulong)uVar15;
  puVar38 = *(undefined8 **)(piVar25 + 0x6c);
  if (0 < *piVar25) {
    do {
      piVar26 = (int *)&local_438;
      phVar29 = (hb_buffer_t *)(ulong)param_12;
      uVar9 = hb_shape_plan_key_t::init
                        ((undefined8 *)piVar26,'\0',(long)piVar25,(undefined8 *)phVar19,param_11,
                         param_12,lVar27,uVar15);
      uVar41 = extraout_XMM0_Qa;
      if ((char)uVar9 == '\0') {
        __ptr_00 = &_hb_NullPool;
        goto LAB_003f62f1;
      }
      if (puVar38 != (undefined8 *)0x0) {
        puVar10 = puVar38;
        do {
          __ptr_00 = (int *)*puVar10;
          if (((((__ptr_00[6] == (int)local_438) && (__ptr_00[7] == local_438._4_4_)) &&
               (*(long *)(__ptr_00 + 8) == lStack_430)) &&
              ((*(long *)(__ptr_00 + 10) == CONCAT44(uStack_424,local_428) &&
               (*(long *)(__ptr_00 + 0xc) == CONCAT44(uStack_41c,uStack_420))))) &&
             (__ptr_00[0x10] == local_410)) {
            if (local_410 != 0) {
              lVar33 = *(long *)(__ptr_00 + 0xe);
              lVar30 = 0;
              do {
                if ((*(int *)(lVar33 + lVar30) != *(int *)(local_418 + lVar30)) ||
                   (*(int *)(lVar33 + 4 + lVar30) != *(int *)(local_418 + lVar30 + 4)))
                goto LAB_003f6100;
                if (*(int *)(lVar33 + 8 + lVar30) == 0) {
                  iVar1 = *(int *)(lVar33 + 0xc + lVar30);
                  if (*(int *)(local_418 + lVar30 + 8) != 0) goto joined_r0x003f61e0;
                  if ((*(int *)(local_418 + lVar30 + 0xc) == -1) != (iVar1 == -1))
                  goto LAB_003f6100;
                }
                else if (*(int *)(local_418 + lVar30 + 8) == 0) {
                  iVar1 = *(int *)(local_418 + lVar30 + 0xc);
joined_r0x003f61e0:
                  if (iVar1 == -1) goto LAB_003f6100;
                }
                lVar30 = lVar30 + 0x10;
              } while ((ulong)local_410 * 0x10 != lVar30);
            }
            if ((*(long *)(__ptr_00 + 0x11) == local_40c) &&
               (*(int **)(__ptr_00 + 0x14) == local_400)) {
              piVar26 = local_400;
              phVar29 = local_418;
              if (*__ptr_00 != 0) {
                LOCK();
                *__ptr_00 = *__ptr_00 + 1;
                UNLOCK();
              }
              goto LAB_003f62f1;
            }
          }
LAB_003f6100:
          puVar10 = (undefined8 *)puVar10[1];
        } while (puVar10 != (undefined8 *)0x0);
      }
      phVar29 = phVar11;
      __ptr_00 = hb_shape_plan_create2
                           ((undefined1 *)piVar25,(int *)phVar19,param_11,param_12,lVar27,uVar15);
      piVar26 = (int *)0x1;
      puVar10 = calloc(1,0x10);
      uVar41 = extraout_XMM0_Qa_00;
      if (puVar10 == (undefined8 *)0x0) goto LAB_003f62f1;
      *puVar10 = __ptr_00;
      puVar10[1] = puVar38;
      LOCK();
      bVar39 = puVar38 == *(undefined8 **)(piVar25 + 0x6c);
      if (bVar39) {
        *(undefined8 **)(piVar25 + 0x6c) = puVar10;
      }
      UNLOCK();
      if (bVar39) {
        if (__ptr_00 == (int *)0x0) {
          __ptr_00 = (int *)0x0;
        }
        else if (*__ptr_00 != 0) {
          LOCK();
          *__ptr_00 = *__ptr_00 + 1;
          UNLOCK();
        }
        goto LAB_003f62f1;
      }
      hb_shape_plan_destroy(__ptr_00);
      free(puVar10);
      puVar38 = *(undefined8 **)(piVar25 + 0x6c);
    } while (0 < *piVar25);
  }
  __ptr_00 = hb_shape_plan_create2
                       ((undefined1 *)piVar25,(int *)phVar19,param_11,param_12,lVar27,uVar15);
  piVar26 = piVar25;
  phVar29 = phVar11;
  uVar41 = extraout_XMM0_Qa_01;
LAB_003f62f1:
  if (*(int *)(param_10 + 0x60) == 0) {
LAB_003f635d:
    iVar1 = *(int *)(param_10 + 0x30);
joined_r0x003f648f:
    if (iVar1 == 1) {
      *(undefined4 *)(param_10 + 0x30) = 2;
    }
    uVar9 = 1;
    bVar39 = false;
  }
  else {
    uVar9 = 0;
    bVar39 = true;
    if (0 < *__ptr_00) {
      if (*(code **)(__ptr_00 + 0x14) == _hb_ot_shape) {
        do {
          if (*(long *)(param_9 + 0xb0) != 0) break;
          if (*(long *)(param_9 + 0xa8) == 0) goto LAB_003f7370;
          LOCK();
          bVar40 = *(long *)(param_9 + 0xb0) == 0;
          if (bVar40) {
            *(long *)(param_9 + 0xb0) = 1;
          }
          UNLOCK();
        } while (!bVar40);
        _hb_ot_shape(uVar41,param_2,(long)__ptr_00,param_9,param_10,(long)param_11,
                     (hb_buffer_t *)(ulong)param_12,phVar29);
        iVar1 = *(int *)(param_10 + 0x30);
        uVar41 = extraout_XMM0_Qa_04;
        goto joined_r0x003f648f;
      }
      if (*(code **)(__ptr_00 + 0x14) == _hb_fallback_shape) {
        do {
          if (*(long *)(param_9 + 0xb8) != 0) break;
          if (*(long *)(param_9 + 0xa8) == 0) goto LAB_003f7370;
          LOCK();
          bVar40 = *(long *)(param_9 + 0xb8) == 0;
          if (bVar40) {
            *(long *)(param_9 + 0xb8) = 1;
          }
          UNLOCK();
        } while (!bVar40);
        _hb_fallback_shape(piVar26,param_9,(long)param_10);
        uVar41 = extraout_XMM0_Qa_02;
        goto LAB_003f635d;
      }
    }
  }
  iVar1 = *(int *)(param_10 + 200);
joined_r0x003f737a:
  if (iVar1 < 1) {
    param_10[0x59] = (hb_buffer_t)0x1;
  }
  if ((__ptr_00 != (int *)0x0) && (*__ptr_00 != 0)) {
    LOCK();
    *__ptr_00 = *__ptr_00 + -1;
    UNLOCK();
    if (*__ptr_00 == 0) {
      *__ptr_00 = -0xdead;
      __ptr = *(pthread_mutex_t **)(__ptr_00 + 2);
      if (__ptr != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr[1].__data,__ptr);
        free(__ptr);
        __ptr_00[2] = 0;
        __ptr_00[3] = 0;
      }
      free(*(void **)(__ptr_00 + 0xe));
      __ptr_00[0xe] = 0;
      __ptr_00[0xf] = 0;
      hb_ot_shape_plan_t::~hb_ot_shape_plan_t((hb_ot_shape_plan_t *)(__ptr_00 + 0x18));
      free(__ptr_00);
      uVar41 = extraout_XMM0_Qa_03;
    }
  }
  if (phVar8 == (hb_buffer_t *)0x0) goto LAB_003f641a;
  uVar9 = 0;
  if ((((!bVar39) && (uVar9 = 1, param_10[0x58] != (hb_buffer_t)0x0)) &&
      (param_10[0x59] == (hb_buffer_t)0x0)) && (phVar8[0x58] != (hb_buffer_t)0x0)) {
    uVar28 = (ulong)*(uint *)(param_10 + 0x1c);
    bVar39 = true;
    if (*(uint *)(param_10 + 0x1c) < 2) {
      bVar39 = true;
      if (1 < (ulong)*(uint *)(param_10 + 0x60)) {
        lVar27 = 0;
        uVar15 = *(uint *)(*(long *)(param_10 + 0x70) + 8);
        do {
          uVar5 = *(uint *)(*(long *)(param_10 + 0x70) + 0x1c + lVar27);
          phVar29 = param_10;
          if ((uVar15 != uVar5) &&
             (((*(uint *)(param_10 + 0x38) & 0xfffffffd) == 4) == uVar5 <= uVar15)) {
            bVar39 = false;
            uVar41 = buffer_verify_error(uVar41,param_2,param_3,param_4,param_5,param_6,param_7,
                                         param_8,(long)param_10,param_9,
                                         "buffer verify error: clusters are not monotone.",
                                         (ulong)(*(uint *)(param_10 + 0x38) & 0xfffffffd),uVar28,
                                         param_10,in_stack_fffffffffffffae8);
            uVar28 = (ulong)*(uint *)(param_10 + 0x1c);
            goto LAB_003f6543;
          }
          lVar27 = lVar27 + 0x14;
          uVar15 = uVar5;
        } while ((ulong)*(uint *)(param_10 + 0x60) * 0x14 + -0x14 != lVar27);
        bVar39 = true;
LAB_003f6543:
        if (1 < (uint)uVar28) goto LAB_003f69e4;
      }
      phVar11 = calloc(1,0xf0);
      if (phVar11 == (hb_buffer_t *)0x0) {
        phVar11 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      }
      else {
        *(undefined4 *)phVar11 = 1;
        *(undefined4 *)(phVar11 + 4) = 1;
        *(undefined8 *)(phVar11 + 8) = 0;
        *(undefined8 *)(phVar11 + 0xc4) = 0x1fffffff3fffffff;
        hb_buffer_t::reset(phVar11);
      }
      hb_unicode_funcs_destroy(*(int **)(phVar11 + 0x10));
      piVar25 = *(int **)(param_10 + 0x10);
      if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
        LOCK();
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      *(int **)(phVar11 + 0x10) = piVar25;
      uVar15 = *(uint *)(param_10 + 0x18);
      uVar43 = *(undefined4 *)(param_10 + 0x1c);
      uVar44 = *(undefined4 *)(param_10 + 0x20);
      uVar3 = *(undefined4 *)(param_10 + 0x24);
      *(uint *)(phVar11 + 0x18) = uVar15;
      *(undefined4 *)(phVar11 + 0x1c) = uVar43;
      *(undefined4 *)(phVar11 + 0x20) = uVar44;
      *(undefined4 *)(phVar11 + 0x24) = uVar3;
      *(undefined4 *)(phVar11 + 0x28) = *(undefined4 *)(param_10 + 0x28);
      *(undefined4 *)(phVar11 + 0x2c) = *(undefined4 *)(param_10 + 0x2c);
      if (*(int *)(phVar11 + 4) != 0) {
        *(uint *)(phVar11 + 0x18) = uVar15 & 0xffffffdf;
      }
      phVar17 = phVar11;
      phVar12 = calloc(1,0xf0);
      if (phVar12 == (hb_buffer_t *)0x0) {
        phVar12 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      }
      else {
        *(undefined4 *)phVar12 = 1;
        *(undefined4 *)(phVar12 + 4) = 1;
        *(undefined8 *)(phVar12 + 8) = 0;
        *(undefined8 *)(phVar12 + 0xc4) = 0x1fffffff3fffffff;
        hb_buffer_t::reset(phVar12);
      }
      hb_unicode_funcs_destroy(*(int **)(phVar12 + 0x10));
      puVar14 = *(uint **)(param_10 + 0x10);
      if ((puVar14 != (uint *)0x0) && (phVar17 = (hb_buffer_t *)(ulong)*puVar14, *puVar14 != 0)) {
        LOCK();
        *puVar14 = *puVar14 + 1;
        UNLOCK();
      }
      *(uint **)(phVar12 + 0x10) = puVar14;
      uVar15 = *(uint *)(param_10 + 0x18);
      uVar43 = *(undefined4 *)(param_10 + 0x1c);
      uVar44 = *(undefined4 *)(param_10 + 0x20);
      uVar3 = *(undefined4 *)(param_10 + 0x24);
      *(uint *)(phVar12 + 0x18) = uVar15;
      *(undefined4 *)(phVar12 + 0x1c) = uVar43;
      *(undefined4 *)(phVar12 + 0x20) = uVar44;
      *(undefined4 *)(phVar12 + 0x24) = uVar3;
      *(undefined4 *)(phVar12 + 0x28) = *(undefined4 *)(param_10 + 0x28);
      *(undefined4 *)(phVar12 + 0x2c) = *(undefined4 *)(param_10 + 0x2c);
      if (*(int *)(phVar12 + 4) != 0) {
        *(uint *)(phVar12 + 0x18) = uVar15 & 0xffffffdf;
      }
      phVar29 = (hb_buffer_t *)(ulong)*(uint *)(param_10 + 0x60);
      uVar15 = *(uint *)(phVar8 + 0x60);
      uVar42 = (ulong)uVar15;
      uVar36 = *(uint *)(param_10 + 0x38) & 0xfffffffd;
      uVar5 = uVar15;
      if (uVar36 == 4) {
        uVar5 = 0;
      }
      uVar6 = *(uint *)(param_10 + 0x60) + 1;
      if (1 < uVar6) {
        uVar28 = *(ulong *)(param_10 + 0x70);
        lVar27 = *(long *)(phVar8 + 0x70);
        local_460 = -(ulong)(uVar36 != 4);
        local_440 = phVar11 + 0x88;
        local_468 = lVar27 + 8;
        phVar34 = (hb_buffer_t *)0x1;
        uVar32 = (ulong)uVar5;
        local_458 = lVar27;
        local_450 = uVar28;
        local_448 = phVar29;
        do {
          if (phVar34 < phVar29) {
            uVar7 = *(uint *)(uVar28 + 8 + (long)phVar34 * 0x14);
            phVar17 = (hb_buffer_t *)(ulong)uVar7;
            if (uVar7 != *(uint *)((uVar28 - 0xc) + (long)phVar34 * 0x14)) {
              if ((*(byte *)(uVar28 + 4 + (ulong)(uint)((int)local_460 + (int)phVar34) * 0x14) & 1)
                  == 0) goto LAB_003f6762;
            }
          }
          else {
LAB_003f6762:
            if (phVar34 == phVar29) {
              if (uVar36 == 4) {
                uVar32 = uVar42;
              }
              else {
                uVar5 = 0;
              }
            }
            else if (uVar36 == 4) {
              if ((uint)uVar32 < uVar15) {
                puVar14 = (uint *)(local_468 + uVar32 * 0x14);
                do {
                  if (*(uint *)(uVar28 + 8 + (long)phVar34 * 0x14) <= *puVar14) goto LAB_003f67fd;
                  uVar32 = uVar32 + 1;
                  puVar14 = puVar14 + 5;
                } while (uVar42 != uVar32);
                uVar32 = uVar42;
              }
            }
            else {
              uVar13 = (ulong)uVar5 - 1;
              do {
                if (uVar13 == 0xffffffffffffffff) {
                  uVar5 = 0;
                  goto LAB_003f67fd;
                }
                uVar20 = uVar13 & 0xffffffff;
                uVar13 = uVar13 - 1;
              } while (*(uint *)((uVar28 - 0xc) + (long)phVar34 * 0x14) <=
                       *(uint *)(lVar27 + 8 + uVar20 * 0x14));
              uVar5 = (int)uVar13 + 2;
            }
LAB_003f67fd:
            if (*(int *)(phVar11 + 4) != 0) {
              *(undefined4 *)(phVar11 + 0x30) = 0;
              *(undefined1 (*) [16])(phVar11 + 0x48) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(phVar11 + 0x38) = (undefined1  [16])0x0;
              phVar11[0x58] = (hb_buffer_t)0x1;
              *(undefined8 *)(phVar11 + 0x60) = 0;
              *(undefined8 *)(phVar11 + 0x59) = 0;
              *(undefined8 *)(phVar11 + 0x78) = *(undefined8 *)(phVar11 + 0x70);
              *(undefined1 (*) [16])(local_440 + 0x20) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(local_440 + 0x10) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])local_440 = (undefined1  [16])0x0;
              *(undefined2 *)(local_440 + 0x30) = 0;
              *(undefined8 *)(phVar11 + 0xbc) = 1;
            }
            uVar7 = *(uint *)(phVar11 + 0x18) & 0xfffffffe;
            if (uVar5 == 0) {
              uVar7 = *(uint *)(phVar11 + 0x18);
            }
            uVar31 = (uint)uVar32;
            if (*(int *)(phVar11 + 4) != 0) {
              uVar16 = uVar7 & 0xfffffffd;
              if (uVar15 <= uVar31) {
                uVar16 = uVar7;
              }
              *(uint *)(phVar11 + 0x18) = uVar16;
            }
            uVar41 = hb_buffer_append(phVar11,(long)phVar8,uVar5,uVar31);
            uVar41 = hb_shape_full(uVar41,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,phVar11,param_11,param_12);
            if ((((int)uVar41 == 0) || (phVar11[0x58] != (hb_buffer_t)0x0)) ||
               (phVar11[0x59] != (hb_buffer_t)0x0)) {
              hb_buffer_destroy((int *)phVar12);
              goto LAB_003f69b2;
            }
            phVar17 = (hb_buffer_t *)0xffffffff;
            hb_buffer_append(phVar12,(long)phVar11,0,0xffffffff);
            if (uVar36 == 4) {
              uVar5 = uVar31;
            }
            uVar32 = (ulong)uVar5;
            lVar27 = local_458;
            uVar28 = local_450;
            phVar29 = local_448;
          }
          phVar34 = phVar34 + 1;
        } while (phVar34 != (hb_buffer_t *)(ulong)uVar6);
      }
      if (phVar12[0x58] == (hb_buffer_t)0x0) {
        hb_buffer_destroy((int *)phVar12);
LAB_003f69b2:
        uVar41 = hb_buffer_destroy((int *)phVar11);
      }
      else {
        bVar4 = hb_buffer_diff((long)phVar12,(long)param_10);
        if ((CONCAT71(extraout_var,bVar4) & 0xffffffbf) != 0) {
          buffer_verify_error(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)param_10,param_9,
                              "buffer verify error: unsafe-to-break test failed.",phVar17,uVar28,
                              phVar29,in_stack_fffffffffffffae8);
          if (*(int *)(param_10 + 4) != 0) {
            *(undefined4 *)(param_10 + 0x60) = 0;
            *(undefined4 *)(param_10 + 0x30) = 0;
            *(undefined8 *)(param_10 + 0xb0) = 0;
          }
          bVar39 = false;
          hb_buffer_append(param_10,(long)phVar12,0,0xffffffff);
        }
        hb_buffer_destroy((int *)phVar12);
        uVar41 = hb_buffer_destroy((int *)phVar11);
      }
    }
LAB_003f69e4:
    if ((((byte)param_10[0x18] & 0x40) == 0) || (1 < *(uint *)(param_10 + 0x1c))) {
LAB_003f7148:
      uVar9 = 1;
      if (bVar39) goto LAB_003f6412;
    }
    else {
      phVar11 = calloc(1,0xf0);
      if (phVar11 == (hb_buffer_t *)0x0) {
        phVar11 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      }
      else {
        *(undefined4 *)phVar11 = 1;
        *(undefined4 *)(phVar11 + 4) = 1;
        *(undefined8 *)(phVar11 + 8) = 0;
        *(undefined8 *)(phVar11 + 0xc4) = 0x1fffffff3fffffff;
        hb_buffer_t::reset(phVar11);
      }
      hb_unicode_funcs_destroy(*(int **)(phVar11 + 0x10));
      piVar25 = *(int **)(param_10 + 0x10);
      if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
        LOCK();
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      *(int **)(phVar11 + 0x10) = piVar25;
      uVar41 = *(undefined8 *)(param_10 + 0x20);
      *(undefined8 *)(phVar11 + 0x18) = *(undefined8 *)(param_10 + 0x18);
      *(undefined8 *)(phVar11 + 0x20) = uVar41;
      *(undefined4 *)(phVar11 + 0x28) = *(undefined4 *)(param_10 + 0x28);
      *(undefined4 *)(phVar11 + 0x2c) = *(undefined4 *)(param_10 + 0x2c);
      local_488[0] = phVar11;
      phVar17 = calloc(1,0xf0);
      if (phVar17 == (hb_buffer_t *)0x0) {
        phVar17 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      }
      else {
        *(undefined4 *)phVar17 = 1;
        *(undefined4 *)(phVar17 + 4) = 1;
        *(undefined8 *)(phVar17 + 8) = 0;
        *(undefined8 *)(phVar17 + 0xc4) = 0x1fffffff3fffffff;
        hb_buffer_t::reset(phVar17);
      }
      hb_unicode_funcs_destroy(*(int **)(phVar17 + 0x10));
      piVar25 = *(int **)(param_10 + 0x10);
      if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
        LOCK();
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      *(int **)(phVar17 + 0x10) = piVar25;
      uVar15 = *(uint *)(param_10 + 0x18);
      uVar43 = *(undefined4 *)(param_10 + 0x1c);
      uVar44 = *(undefined4 *)(param_10 + 0x20);
      uVar3 = *(undefined4 *)(param_10 + 0x24);
      *(uint *)(phVar17 + 0x18) = uVar15;
      *(undefined4 *)(phVar17 + 0x1c) = uVar43;
      *(undefined4 *)(phVar17 + 0x20) = uVar44;
      *(undefined4 *)(phVar17 + 0x24) = uVar3;
      *(undefined4 *)(phVar17 + 0x28) = *(undefined4 *)(param_10 + 0x28);
      *(undefined4 *)(phVar17 + 0x2c) = *(undefined4 *)(param_10 + 0x2c);
      if (*(int *)(phVar11 + 4) == 0) {
        iVar1 = *(int *)(phVar17 + 4);
      }
      else {
        *(uint *)(phVar11 + 0x18) = *(uint *)(phVar11 + 0x18) & 0xffffffdf;
        uVar15 = *(uint *)(phVar17 + 0x18);
        iVar1 = *(int *)(phVar17 + 4);
      }
      if (iVar1 != 0) {
        *(uint *)(phVar17 + 0x18) = uVar15 & 0xffffffdf;
      }
      local_488[1] = phVar17;
      phVar11 = calloc(1,0xf0);
      if (phVar11 == (hb_buffer_t *)0x0) {
        phVar11 = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      }
      else {
        *(undefined4 *)phVar11 = 1;
        *(undefined4 *)(phVar11 + 4) = 1;
        *(undefined8 *)(phVar11 + 8) = 0;
        *(undefined8 *)(phVar11 + 0xc4) = 0x1fffffff3fffffff;
        hb_buffer_t::reset(phVar11);
      }
      hb_unicode_funcs_destroy(*(int **)(phVar11 + 0x10));
      phVar12 = local_488[1];
      phVar17 = local_488[0];
      piVar25 = *(int **)(param_10 + 0x10);
      if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
        LOCK();
        *piVar25 = *piVar25 + 1;
        UNLOCK();
      }
      *(int **)(phVar11 + 0x10) = piVar25;
      uVar15 = *(uint *)(param_10 + 0x18);
      uVar43 = *(undefined4 *)(param_10 + 0x1c);
      uVar44 = *(undefined4 *)(param_10 + 0x20);
      uVar3 = *(undefined4 *)(param_10 + 0x24);
      *(uint *)(phVar11 + 0x18) = uVar15;
      *(undefined4 *)(phVar11 + 0x1c) = uVar43;
      *(undefined4 *)(phVar11 + 0x20) = uVar44;
      *(undefined4 *)(phVar11 + 0x24) = uVar3;
      *(undefined4 *)(phVar11 + 0x28) = *(undefined4 *)(param_10 + 0x28);
      *(undefined4 *)(phVar11 + 0x2c) = *(undefined4 *)(param_10 + 0x2c);
      if (*(int *)(phVar11 + 4) != 0) {
        *(uint *)(phVar11 + 0x18) = uVar15 & 0xffffffdf;
      }
      local_438 = *(ulong *)phVar19;
      lStack_430 = *(long *)(param_10 + 0x40);
      uVar43 = *(undefined4 *)(param_10 + 0x48);
      uVar44 = *(undefined4 *)(param_10 + 0x4c);
      uStack_420 = *(undefined4 *)(param_10 + 0x50);
      uStack_41c = *(undefined4 *)(param_10 + 0x54);
      if (*(int *)(local_488[0] + 4) != 0) {
        *(undefined4 *)(local_488[0] + 0x48) = uVar43;
        *(undefined4 *)(local_488[0] + 0x4c) = uVar44;
        *(undefined4 *)(local_488[0] + 0x50) = uStack_420;
        *(undefined4 *)(local_488[0] + 0x54) = uStack_41c;
        *(ulong *)(local_488[0] + 0x38) = local_438;
        *(long *)(local_488[0] + 0x40) = lStack_430;
      }
      if (*(int *)(local_488[1] + 4) != 0) {
        *(undefined4 *)(local_488[1] + 0x48) = uVar43;
        *(undefined4 *)(local_488[1] + 0x4c) = uVar44;
        *(undefined4 *)(local_488[1] + 0x50) = uStack_420;
        *(undefined4 *)(local_488[1] + 0x54) = uStack_41c;
        *(ulong *)(local_488[1] + 0x38) = local_438;
        *(long *)(local_488[1] + 0x40) = lStack_430;
      }
      if (*(int *)(phVar11 + 4) != 0) {
        *(undefined4 *)(phVar11 + 0x48) = uVar43;
        *(undefined4 *)(phVar11 + 0x4c) = uVar44;
        *(undefined4 *)(phVar11 + 0x50) = uStack_420;
        *(undefined4 *)(phVar11 + 0x54) = uStack_41c;
        *(ulong *)(phVar11 + 0x38) = local_438;
        *(long *)(phVar11 + 0x40) = lStack_430;
      }
      uVar15 = *(uint *)(param_10 + 0x60);
      uVar28 = (ulong)uVar15;
      puVar2 = *(ulong **)(param_10 + 0x70);
      uVar5 = *(uint *)(phVar8 + 0x60);
      uVar32 = (ulong)uVar5;
      lVar27 = *(long *)(phVar8 + 0x70);
      local_4b8 = *(uint *)(param_10 + 0x38) & 0xfffffffd;
      uVar42 = local_438;
      if ((*(uint *)(param_10 + 0x38) & 0xfffffffd) != 4) {
        if (1 < uVar15) {
          uVar13 = (ulong)(uVar15 - 1);
          puVar18 = (ulong *)((long)puVar2 + uVar13 * 0x14);
          uVar20 = 0;
          puVar24 = puVar2;
          do {
            uVar13 = uVar13 - 1;
            local_498 = (undefined4)puVar18[2];
            uVar42 = *puVar18;
            local_4a8[1] = puVar18[1];
            local_4a8[0] = uVar42;
            *(int *)(puVar18 + 2) = (int)puVar24[2];
            uVar35 = puVar24[1];
            *puVar18 = *puVar24;
            puVar18[1] = uVar35;
            *(undefined4 *)(puVar24 + 2) = local_498;
            *puVar24 = uVar42;
            puVar24[1] = local_4a8[1];
            uVar20 = uVar20 + 1;
            puVar24 = (ulong *)((long)puVar24 + 0x14);
            puVar18 = (ulong *)((long)puVar18 + -0x14);
          } while (uVar20 < (uVar13 & 0xffffffff));
        }
        if (param_10[0x5b] != (hb_buffer_t)0x0) {
          uVar36 = *(uint *)(param_10 + 0x60);
          if (uVar15 <= *(uint *)(param_10 + 0x60)) {
            uVar36 = uVar15;
          }
          if (1 < uVar36) {
            puVar24 = *(ulong **)(param_10 + 0x80);
            uVar13 = (ulong)(uVar36 - 1);
            puVar18 = (ulong *)((long)puVar24 + uVar13 * 0x14);
            uVar20 = 0;
            do {
              uVar13 = uVar13 - 1;
              local_498 = (undefined4)puVar18[2];
              uVar42 = *puVar18;
              local_4a8[1] = puVar18[1];
              local_4a8[0] = uVar42;
              *(int *)(puVar18 + 2) = (int)puVar24[2];
              uVar35 = puVar24[1];
              *puVar18 = *puVar24;
              puVar18[1] = uVar35;
              *(undefined4 *)(puVar24 + 2) = local_498;
              *puVar24 = uVar42;
              puVar24[1] = local_4a8[1];
              uVar20 = uVar20 + 1;
              puVar24 = (ulong *)((long)puVar24 + 0x14);
              puVar18 = (ulong *)((long)puVar18 + -0x14);
            } while (uVar20 < (uVar13 & 0xffffffff));
          }
        }
      }
      local_428 = uVar43;
      uStack_424 = uVar44;
      if (1 < uVar15 + 1) {
        uVar20 = 0;
        uVar35 = 1;
        uVar13 = 0;
        uVar36 = 0;
        do {
          if ((uVar28 <= uVar35) ||
             ((*(int *)((long)puVar2 + uVar35 * 0x14 + 8) !=
               *(int *)((long)puVar2 + uVar35 * 0x14 + -0xc) &&
              ((*(byte *)((long)puVar2 + uVar35 * 0x14 + 4) & 2) == 0)))) {
            uVar23 = uVar32;
            if (uVar35 != uVar28) {
              if ((uint)uVar13 < uVar5) {
                puVar14 = (uint *)(lVar27 + 8 + uVar13 * 0x14);
                do {
                  uVar23 = uVar13;
                  if (*(uint *)((long)puVar2 + uVar35 * 0x14 + 8) <= *puVar14) goto LAB_003f6d7f;
                  uVar13 = uVar13 + 1;
                  puVar14 = puVar14 + 5;
                } while (uVar32 != uVar13);
                uVar23 = uVar32;
              }
              else {
                uVar23 = uVar13;
              }
            }
LAB_003f6d7f:
            uVar42 = hb_buffer_append(local_488[uVar20],(long)phVar8,uVar36,(uint)uVar23);
            uVar13 = uVar23 & 0xffffffff;
            uVar20 = (ulong)(1 - (int)uVar20);
            uVar36 = (uint)uVar23;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar15 + 1);
      }
      uVar41 = hb_shape_full(uVar42,CONCAT44(uVar44,uVar43),param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,phVar17,param_11,param_12);
      if ((((((int)uVar41 == 0) || (phVar17[0x58] == (hb_buffer_t)0x0)) ||
           (phVar17[0x59] != (hb_buffer_t)0x0)) ||
          ((uVar41 = hb_shape_full(extraout_XMM0_Qa_06,CONCAT44(uVar44,uVar43),param_3,param_4,
                                   param_5,param_6,param_7,param_8,param_9,phVar12,param_11,param_12
                                  ), (int)uVar41 == 0 || (phVar12[0x58] == (hb_buffer_t)0x0)))) ||
         (phVar12[0x59] != (hb_buffer_t)0x0)) {
LAB_003f7129:
        hb_buffer_destroy((int *)phVar11);
        hb_buffer_destroy((int *)phVar17);
        uVar41 = hb_buffer_destroy((int *)phVar12);
        param_2 = CONCAT44(uVar44,uVar43);
        goto LAB_003f7148;
      }
      if (local_4b8 != 4) {
        hb_buffer_reverse((long)phVar17);
        hb_buffer_reverse((long)phVar12);
      }
      local_4b0 = 0;
      uVar15 = *(uint *)(phVar17 + 0x60);
      local_470[0] = uVar15;
      local_4a8[0] = *(ulong *)(phVar17 + 0x70);
      uVar5 = *(uint *)(phVar12 + 0x60);
      local_470[1] = uVar5;
      local_4a8[1] = *(ulong *)(phVar12 + 0x70);
      phVar19 = phVar12;
      if (uVar15 != 0 || uVar5 != 0) {
        uVar6 = 0;
        uVar36 = uVar15;
        do {
          uVar42 = (ulong)uVar6;
          uVar31 = *(uint *)((long)&local_4b0 + uVar42 * 4);
          uVar7 = uVar31 + 1;
          if (uVar7 < uVar36) {
            piVar25 = (int *)(local_4a8[uVar42] + (ulong)uVar7 * 0x14 + 8);
            uVar16 = uVar31;
            do {
              if ((*piVar25 != *(int *)(local_4a8[uVar42] + 8 + (ulong)uVar16 * 0x14)) &&
                 ((*(byte *)(piVar25 + -1) & 2) == 0)) {
                uVar7 = uVar16 + 1;
                break;
              }
              uVar22 = uVar16 + 2;
              piVar25 = piVar25 + 5;
              uVar16 = uVar16 + 1;
              uVar7 = uVar36;
            } while (uVar22 < uVar36);
          }
          phVar19 = (hb_buffer_t *)(ulong)uVar7;
          hb_buffer_append(phVar11,(long)local_488[uVar42],uVar31,uVar7);
          *(uint *)((long)&local_4b0 + uVar42 * 4) = uVar7;
          if ((uVar15 <= (uint)local_4b0) && (uVar5 <= local_4b0._4_4_)) break;
          uVar6 = 1 - uVar6;
          uVar36 = local_470[uVar6];
        } while( true );
      }
      if (local_4b8 != 4) {
        hb_buffer_reverse((long)param_10);
        hb_buffer_reverse((long)phVar11);
      }
      if ((phVar11[0x58] == (hb_buffer_t)0x0) ||
         (bVar4 = hb_buffer_diff((long)phVar11,(long)param_10),
         (CONCAT71(extraout_var_00,bVar4) & 0xffffffbf) == 0)) goto LAB_003f7129;
      buffer_verify_error(extraout_XMM0_Qa_07,CONCAT44(uVar44,uVar43),param_3,param_4,param_5,
                          param_6,param_7,param_8,(long)param_10,param_9,
                          "buffer verify error: unsafe-to-concat test failed.",phVar19,uVar28,
                          phVar29,in_stack_fffffffffffffae8);
      if (*(int *)(param_10 + 4) != 0) {
        *(undefined4 *)(param_10 + 0x60) = 0;
        *(undefined4 *)(param_10 + 0x30) = 0;
        *(undefined8 *)(param_10 + 0xb0) = 0;
      }
      hb_buffer_append(param_10,(long)phVar11,0,0xffffffff);
      hb_buffer_destroy((int *)phVar11);
      hb_buffer_destroy((int *)phVar17);
      uVar41 = hb_buffer_destroy((int *)phVar12);
      param_2 = CONCAT44(uVar44,uVar43);
    }
    uVar15 = *(uint *)(phVar8 + 0x60);
    uVar36 = uVar15 * 10 + 0x10;
    uVar5 = uVar36;
    if ((int)uVar36 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar36 < 1) {
      uVar36 = 0;
      local_510 = (undefined1 *)0x0;
joined_r0x003f7303:
      if ((ulong)uVar15 != 0) {
        lVar27 = *(long *)(phVar8 + 0x70);
        lVar33 = 0;
        puVar21 = local_510;
        do {
          local_438 = CONCAT71(local_438._1_7_,(lVar33 != 0) << 6) | 0x3c;
          uVar6 = snprintf((char *)((long)&local_438 + 1),0x3ff,"U+%04X",*(uint *)(lVar27 + lVar33))
          ;
          uVar42 = (ulong)uVar6;
          if ((int)uVar6 < 0) {
            uVar42 = 0;
          }
          pcVar37 = (char *)((long)&local_438 + 1) + uVar42;
          if ((ulong)(uVar15 - 1) * 0x14 == lVar33) {
            *pcVar37 = '>';
            pcVar37 = (char *)((long)&local_438 + uVar42 + 2);
          }
          uVar42 = (long)pcVar37 - (long)&local_438;
          uVar6 = (uint)uVar42;
          bVar39 = uVar5 < uVar6;
          uVar5 = uVar5 - uVar6;
          uVar41 = extraout_XMM0_Qa_08;
          if (bVar39 || uVar5 == 0) break;
          uVar42 = uVar42 & 0xffffffff;
          if (uVar42 != 0) {
            memcpy(puVar21,&local_438,uVar42);
            uVar41 = extraout_XMM0_Qa_09;
          }
          puVar21[uVar42] = 0;
          puVar21 = puVar21 + uVar42;
          lVar33 = lVar33 + 0x14;
        } while ((ulong)uVar15 * 0x14 != lVar33);
      }
      puVar21 = &DAT_005e2ee7;
      if (local_510 != (undefined1 *)0x0) {
        puVar21 = local_510;
      }
                    /* try { // try from 003f7273 to 003f7290 has its CatchHandler @ 003f73a5 */
      uVar9 = 0;
      buffer_verify_error(uVar41,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,param_9,"buffer verify error: text was: %s.",puVar21,uVar28
                          ,phVar29,in_stack_fffffffffffffae8);
      if (uVar36 == 0) goto LAB_003f6412;
    }
    else {
      uVar36 = 0;
      do {
        uVar36 = uVar36 + (uVar36 >> 1) + 8;
      } while (uVar36 < uVar5);
      local_510 = malloc((ulong)uVar36);
      if (local_510 != (undefined1 *)0x0) {
        memset(local_510,0,(ulong)uVar5);
        *local_510 = 0;
        uVar41 = extraout_XMM0_Qa_10;
        goto joined_r0x003f7303;
      }
      local_510 = (undefined1 *)0x0;
    }
    free(local_510);
    uVar9 = 0;
  }
LAB_003f6412:
  hb_buffer_destroy((int *)phVar8);
LAB_003f641a:
  *(undefined8 *)(param_10 + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(param_10 + 0xb8) = 0;
  return uVar9;
LAB_003f7370:
  uVar9 = 0;
  iVar1 = *(int *)(param_10 + 200);
  goto joined_r0x003f737a;
}


