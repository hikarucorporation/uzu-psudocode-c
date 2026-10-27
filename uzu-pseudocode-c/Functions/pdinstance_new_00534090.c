// Function : pdinstance_new
// Namespace: 
// Entry    : 00534090
// Prototype: undefined8 * pdinstance_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 00534090 - 0053445f


undefined8 *
pdinstance_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,char *param_14)

{
  char *__s2;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *__dest;
  long *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  undefined8 extraout_RDX;
  ulong uVar14;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint *puVar15;
  char *pcVar16;
  long lVar17;
  size_t sVar18;
  long lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar22;
  ulong local_58;
  
  puVar4 = getbytes(0x188);
  puVar5 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  *puVar5 = puVar4;
  s_inter_newpdinstance();
  puVar5 = puVar4;
  pdinstance_init(puVar4);
  uVar21 = sys_lock();
  uVar21 = pd_globallock(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar5,
                         param_10,extraout_RDX,param_12,param_13,param_14);
  puVar15 = (uint *)PTR_pd_ninstances_00715d50;
  puVar1 = PTR_pd_instances_00715a80;
  pvVar6 = resizebytes(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)PTR_pd_instances_00715a80,
                       (long)*(int *)PTR_pd_ninstances_00715d50 << 3,
                       (long)*(int *)PTR_pd_ninstances_00715d50 * 8 + 8);
  uVar21 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  *(void **)puVar1 = pvVar6;
  uVar10 = (ulong)(int)*puVar15;
  *(undefined8 **)((long)pvVar6 + uVar10 * 8) = puVar4;
  for (puVar5 = class_list; iVar3 = (int)uVar10, puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[0x11]) {
    pvVar6 = resizebytes(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (void *)puVar5[4],(long)iVar3 << 3,(long)iVar3 * 8 + 8);
    puVar5[4] = pvVar6;
    pvVar6 = getbytes(0);
    uVar21 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    local_58 = (ulong)(int)*puVar15;
    *(void **)(puVar5[4] + local_58 * 8) = pvVar6;
    if (0 < *(int *)(puVar5 + 5)) {
      lVar17 = 0;
      do {
        plVar7 = (long *)puVar5[4];
        lVar19 = *plVar7;
        __s2 = (char *)**(undefined8 **)(lVar19 + lVar17 * 0x18);
        cVar13 = *__s2;
        if (cVar13 == '\0') {
          sVar18 = 1;
          uVar10 = 0x1505;
        }
        else {
          uVar2 = 0x1505;
          lVar11 = 1;
          do {
            uVar2 = (int)cVar13 + uVar2 * 0x21;
            cVar13 = __s2[lVar11];
            lVar11 = lVar11 + 1;
          } while (cVar13 != '\0');
          uVar10 = (ulong)(uVar2 & 0x3fff);
          sVar18 = (size_t)(int)lVar11;
        }
        uVar21 = *(undefined8 *)(lVar19 + 8 + lVar17 * 0x18);
        pcVar16 = *(char **)(puVar4[5] + uVar10 * 8);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = (char *)(puVar4[5] + uVar10 * 8);
        }
        else {
          do {
            param_13 = pcVar16;
            iVar3 = strcmp(*(char **)param_13,__s2);
            if (iVar3 == 0) {
              uVar20 = extraout_XMM0_Da_01;
              uVar22 = extraout_XMM0_Db_01;
              goto LAB_0053429c;
            }
            pcVar16 = *(char **)(param_13 + 0x10);
          } while (*(char **)(param_13 + 0x10) != (char *)0x0);
          pcVar16 = param_13 + 0x10;
        }
        param_13 = getbytes(0x18);
        __dest = getbytes(sVar18);
        param_13[8] = '\0';
        param_13[9] = '\0';
        param_13[10] = '\0';
        param_13[0xb] = '\0';
        param_13[0xc] = '\0';
        param_13[0xd] = '\0';
        param_13[0xe] = '\0';
        param_13[0xf] = '\0';
        param_13[0x10] = '\0';
        param_13[0x11] = '\0';
        param_13[0x12] = '\0';
        param_13[0x13] = '\0';
        param_13[0x14] = '\0';
        param_13[0x15] = '\0';
        param_13[0x16] = '\0';
        param_13[0x17] = '\0';
        strcpy(__dest,__s2);
        *(char **)param_13 = __dest;
        *(char **)pcVar16 = param_13;
        lVar19 = *(long *)puVar5[4];
        uVar20 = extraout_XMM0_Da_02;
        uVar22 = extraout_XMM0_Db_02;
LAB_0053429c:
        puVar15 = (uint *)PTR_pd_ninstances_00715d50;
        param_14 = (char *)(lVar19 + 0x10 + lVar17 * 0x18);
        uVar21 = class_addmethodtolist
                           (CONCAT44(uVar22,uVar20),param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,puVar5,plVar7 + (int)local_58,(uint)lVar17,uVar21,param_13,
                            param_14,(long)puVar4);
        lVar17 = lVar17 + 1;
        if (*(int *)(puVar5 + 5) <= lVar17) break;
        local_58 = (ulong)*puVar15;
      } while( true );
    }
    uVar10 = (ulong)*puVar15;
  }
  uVar2 = iVar3 + 1;
  *puVar15 = uVar2;
  if (-1 < iVar3) {
    lVar17 = *(long *)PTR_pd_instances_00715a80;
    uVar12 = (ulong)(uVar2 & 7);
    if ((ulong)uVar2 - 1 < 7) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        iVar3 = (int)uVar14;
        *(int *)(*(long *)(lVar17 + uVar14 * 8) + 0x20) = iVar3;
        *(int *)(*(long *)(lVar17 + 8 + uVar14 * 8) + 0x20) = iVar3 + 1;
        *(int *)(*(long *)(lVar17 + 0x10 + uVar14 * 8) + 0x20) = iVar3 + 2;
        *(int *)(*(long *)(lVar17 + 0x18 + uVar14 * 8) + 0x20) = iVar3 + 3;
        *(int *)(*(long *)(lVar17 + 0x20 + uVar14 * 8) + 0x20) = iVar3 + 4;
        *(int *)(*(long *)(lVar17 + 0x28 + uVar14 * 8) + 0x20) = iVar3 + 5;
        *(int *)(*(long *)(lVar17 + 0x30 + uVar14 * 8) + 0x20) = iVar3 + 6;
        *(int *)(*(long *)(lVar17 + 0x38 + uVar14 * 8) + 0x20) = iVar3 + 7;
        uVar14 = uVar14 + 8;
      } while (uVar14 != (uVar2 & 0xfffffff8));
    }
    for (; uVar10 = 0, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(int *)(*(long *)(lVar17 + uVar14 * 8) + 0x20) = (int)uVar14;
      uVar14 = uVar14 + 1;
    }
  }
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar5 = *(undefined8 **)(*(long *)(*plVar7 + 0x28) + 0x1c8c8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(*(long *)(*plVar7 + 0x28) + 0x1c8c8);
  }
  else {
    do {
      puVar8 = puVar5;
      iVar3 = strcmp((char *)*puVar8,"pd");
      uVar21 = extraout_RDX_00;
      uVar20 = extraout_XMM0_Da_03;
      uVar22 = extraout_XMM0_Db_03;
      if (iVar3 == 0) goto LAB_00534429;
      puVar5 = (undefined8 *)puVar8[2];
    } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
    puVar5 = puVar8 + 2;
  }
  puVar8 = getbytes(0x18);
  puVar9 = getbytes(3);
  uVar20 = 0;
  uVar22 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar9 = 0x6470;
  *(undefined1 *)(puVar9 + 1) = 0;
  *puVar8 = puVar9;
  *puVar5 = puVar8;
  uVar21 = extraout_RDX_01;
LAB_00534429:
  uVar21 = pd_bind(CONCAT44(uVar22,uVar20),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   PTR_glob_pdobject_007156d8,(long)puVar8,uVar21,uVar10,param_13,param_14);
  uVar21 = text_template_init(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  garray_init(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pd_globalunlock();
  sys_unlock();
  return puVar4;
}


