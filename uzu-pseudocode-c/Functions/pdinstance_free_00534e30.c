// Function : pdinstance_free
// Namespace: 
// Entry    : 00534e30
// Prototype: undefined pdinstance_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00534e30 - 0053531c


void pdinstance_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *__s;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 extraout_RDX;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  ppuVar17 = &PTR_007159b0;
  plVar7 = (long *)__tls_get_addr();
  *plVar7 = param_9;
  uVar21 = sys_lock();
  uVar21 = pd_globallock(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ppuVar17,
                         param_10,extraout_RDX,param_12,param_13,param_14);
  iVar14 = *(int *)(param_9 + 0x20);
  uVar18 = (ulong)iVar14;
  puVar3 = *(undefined4 **)(param_9 + 0x38);
  canvas_suspend_dsp(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar7 = *(long **)(param_9 + 0x10);
  uVar21 = extraout_XMM0_Qa;
  while (plVar7 != (long *)0x0) {
    uVar21 = pd_free(plVar7);
    plVar7 = *(long **)(param_9 + 0x10);
  }
  while (puVar4 = PTR_pd_ninstances_00715d50, *(long **)(param_9 + 0x18) != (long *)0x0) {
    uVar21 = pd_free(*(long **)(param_9 + 0x18));
  }
  uVar19 = ~uVar18;
  for (lVar20 = class_list; lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x88)) {
    lVar9 = *(long *)(lVar20 + 0x20);
    pvVar8 = *(void **)(lVar9 + uVar18 * 8);
    if (pvVar8 != (void *)0x0) {
      uVar21 = freebytes(pvVar8);
      lVar9 = *(long *)(lVar20 + 0x20);
    }
    *(undefined8 *)(lVar9 + uVar18 * 8) = 0;
    iVar2 = *(int *)puVar4;
    iVar6 = iVar2 + -1;
    uVar15 = (ulong)iVar6;
    if (iVar14 < iVar6) {
      uVar12 = (ulong)(uint)(iVar6 - iVar14) & 3;
      uVar13 = uVar18;
      if ((iVar6 - iVar14 & 3U) != 0) {
        uVar16 = uVar18;
        do {
          uVar13 = uVar16 + 1;
          *(undefined8 *)(*(long *)(lVar20 + 0x20) + uVar16 * 8) =
               *(undefined8 *)(*(long *)(lVar20 + 0x20) + 8 + uVar16 * 8);
          uVar12 = uVar12 - 1;
          uVar16 = uVar13;
        } while (uVar12 != 0);
      }
      if (2 < uVar15 + uVar19) {
        do {
          *(undefined8 *)(*(long *)(lVar20 + 0x20) + uVar13 * 8) =
               *(undefined8 *)(*(long *)(lVar20 + 0x20) + 8 + uVar13 * 8);
          *(undefined8 *)(*(long *)(lVar20 + 0x20) + 8 + uVar13 * 8) =
               *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x10 + uVar13 * 8);
          *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x10 + uVar13 * 8) =
               *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x18 + uVar13 * 8);
          *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x18 + uVar13 * 8) =
               *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x20 + uVar13 * 8);
          uVar13 = uVar13 + 4;
        } while (uVar15 != uVar13);
      }
    }
    pvVar8 = resizebytes(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(lVar20 + 0x20),(long)iVar2 << 3,uVar15 << 3);
    *(void **)(lVar20 + 0x20) = pvVar8;
    uVar21 = extraout_XMM0_Qa_00;
  }
  pvVar8 = *(void **)(param_9 + 0x28);
  lVar20 = 0;
  do {
    puVar11 = *(undefined8 **)((long)pvVar8 + lVar20 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)((long)pvVar8 + lVar20 * 8);
      do {
        *puVar10 = puVar11[2];
        if (((((puVar11 != (undefined8 *)(param_9 + 0x60)) &&
              (puVar11 != (undefined8 *)(param_9 + 0x78))) &&
             (puVar11 != (undefined8 *)(param_9 + 0x90))) &&
            ((((puVar11 != (undefined8 *)(param_9 + 0xa8) &&
               (puVar11 != (undefined8 *)(param_9 + 0xc0))) &&
              ((puVar11 != (undefined8 *)(param_9 + 0xd8) &&
               ((puVar11 != (undefined8 *)(param_9 + 0xf0) &&
                (puVar11 != (undefined8 *)(param_9 + 0x108))))))) &&
             (puVar11 != (undefined8 *)(param_9 + 0x120))))) &&
           (((puVar11 != (undefined8 *)(param_9 + 0x138) &&
             (puVar11 != (undefined8 *)(param_9 + 0x150))) &&
            (puVar11 != (undefined8 *)(param_9 + 0x168))))) {
          __s = (char *)*puVar11;
          strlen(__s);
          freebytes(__s);
          freebytes(puVar11);
        }
        pvVar8 = *(void **)(param_9 + 0x28);
        puVar10 = (undefined8 *)((long)pvVar8 + lVar20 * 8);
        puVar11 = *(undefined8 **)((long)pvVar8 + lVar20 * 8);
      } while (puVar11 != (undefined8 *)0x0);
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x4000);
  freebytes(pvVar8);
  uVar21 = x_midi_freepdinstance();
  g_canvas_freepdinstance(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  d_ugen_freepdinstance();
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar21 = freebytes(*(void **)(*plVar7 + 0x50));
  puVar5 = PTR_pd_ninstances_00715d50;
  puVar4 = PTR_pd_instances_00715a80;
  iVar2 = *(int *)PTR_pd_ninstances_00715d50;
  iVar6 = iVar2 + -1;
  if (iVar14 < iVar6) {
    uVar13 = (ulong)(uint)(iVar6 - iVar14) & 3;
    uVar15 = uVar18;
    plVar7 = (long *)PTR_pd_instances_00715a80;
    if ((iVar6 - iVar14 & 3U) != 0) {
      do {
        uVar15 = uVar18 + 1;
        *(undefined8 *)(*(long *)puVar4 + uVar18 * 8) =
             *(undefined8 *)(*(long *)puVar4 + 8 + uVar18 * 8);
        uVar13 = uVar13 - 1;
        uVar18 = uVar15;
        plVar7 = (long *)PTR_pd_instances_00715a80;
      } while (uVar13 != 0);
    }
    PTR_pd_instances_00715a80 = (undefined *)plVar7;
    if (2 < uVar19 + (long)iVar6) {
      do {
        *(undefined8 *)(*plVar7 + uVar15 * 8) = *(undefined8 *)(*plVar7 + 8 + uVar15 * 8);
        *(undefined8 *)(*plVar7 + 8 + uVar15 * 8) = *(undefined8 *)(*plVar7 + 0x10 + uVar15 * 8);
        *(undefined8 *)(*plVar7 + 0x10 + uVar15 * 8) = *(undefined8 *)(*plVar7 + 0x18 + uVar15 * 8);
        *(undefined8 *)(*plVar7 + 0x18 + uVar15 * 8) = *(undefined8 *)(*plVar7 + 0x20 + uVar15 * 8);
        uVar15 = uVar15 + 4;
      } while ((long)iVar6 != uVar15);
    }
  }
  puVar4 = PTR_pd_instances_00715a80;
  pvVar8 = resizebytes(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)PTR_pd_instances_00715a80,(long)iVar2 << 3,(long)iVar6 << 3);
  *(void **)puVar4 = pvVar8;
  iVar14 = *(int *)puVar5;
  uVar1 = iVar14 - 1;
  *(uint *)puVar5 = uVar1;
  if (1 < iVar14) {
    uVar18 = (ulong)(uVar1 & 7);
    if ((ulong)uVar1 - 1 < 7) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        iVar14 = (int)uVar19;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8) + 0x20) = iVar14;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 8) + 0x20) = iVar14 + 1;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x10) + 0x20) = iVar14 + 2;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x18) + 0x20) = iVar14 + 3;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x20) + 0x20) = iVar14 + 4;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x28) + 0x20) = iVar14 + 5;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x30) + 0x20) = iVar14 + 6;
        *(int *)(*(long *)((long)pvVar8 + uVar19 * 8 + 0x38) + 0x20) = iVar14 + 7;
        uVar19 = uVar19 + 8;
      } while (uVar19 != (uVar1 & 0xfffffff8));
    }
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(int *)(*(long *)((long)pvVar8 + uVar19 * 8) + 0x20) = (int)uVar19;
      uVar19 = uVar19 + 1;
    }
  }
  pd_globalunlock();
  sys_unlock();
  puVar4 = PTR_pd_maininstance_00715748;
  puVar11 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  *puVar11 = puVar4;
  s_inter_free(puVar3);
  return;
}


