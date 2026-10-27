// Function : clone_setn
// Namespace: 
// Entry    : 005044b0
// Prototype: undefined clone_setn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 005044b0 - 005047ac


void clone_setn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               char *param_10,undefined8 param_11,int *param_12,uint *param_13,uint *param_14)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  uVar4 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar18 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar15 = *(uint *)(param_9 + 0x38);
  uVar12 = (ulong)(int)uVar15;
  if (uVar12 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"clone: no abstraction",extraout_RDX,param_12,(char *)param_13,
             param_14);
    return;
  }
  uVar14 = (uint)(float)param_1;
  if ((int)uVar14 < 1) {
    param_10 = "clone: can\'t resize to zero or negative number; setting to 1";
    uVar18 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,param_9,
                      "clone: can\'t resize to zero or negative number; setting to 1",extraout_RDX,
                      param_12,(char *)param_13,param_14);
    uVar14 = 1;
    uVar8 = extraout_RDX_02;
    if (0 < (int)uVar15) goto LAB_005046b7;
  }
  else {
    uVar8 = extraout_RDX;
    if ((int)uVar14 <= (int)uVar15) {
LAB_005046b7:
      if ((int)uVar14 < (int)uVar15) {
        lVar9 = (ulong)uVar15 - (ulong)uVar14;
        lVar10 = (ulong)uVar14 << 4;
        do {
          lVar16 = *(long *)(param_9 + 0x40);
          canvas_closebang(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           *(long *)(lVar16 + lVar10),param_10,uVar8,param_12,param_13,param_14);
          pd_free(*(long **)(lVar16 + lVar10));
          param_10 = (char *)((long)*(int *)(param_9 + 0x58) * 0x18);
          uVar18 = freebytes(*(void **)(lVar16 + 8 + lVar10));
          lVar10 = lVar10 + 0x10;
          lVar9 = lVar9 + -1;
          uVar8 = extraout_RDX_03;
        } while (lVar9 != 0);
        param_10 = (char *)(uVar12 << 4);
        pvVar6 = resizebytes(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(void **)(param_9 + 0x40),(ulong)param_10,(long)(int)uVar14 << 4);
        uVar18 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        *(void **)(param_9 + 0x40) = pvVar6;
        *(uint *)(param_9 + 0x38) = uVar14;
        uVar8 = extraout_RDX_04;
      }
      goto LAB_00504796;
    }
  }
  do {
    puVar2 = *(undefined4 **)(param_9 + 0x78);
    *puVar2 = 1;
    iVar11 = (int)uVar12;
    puVar2[2] = (float)(*(int *)(param_9 + 0x84) + iVar11);
    puVar3 = *(undefined8 **)(param_9 + 0x68);
    iVar1 = *(int *)(param_9 + 0x70);
    uVar15 = *(byte *)(param_9 + 0x88) & 1;
    param_12 = (int *)((ulong)uVar15 * 0x10 + *(long *)(param_9 + 0x78));
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined8 *)(*plVar5 + 0x58) = 0;
    uVar18 = pd_typedmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long *)PTR_pd_objectmaker_00715510,puVar3
                          ,iVar1 - uVar15,param_12,param_13,param_14);
    plVar7 = *(long **)(*plVar5 + 0x58);
    if (plVar7 == (long *)0x0) {
      uVar18 = pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                        "clone: can\'t create subpatch \'%s\'",*puVar3,param_12,(char *)param_13,
                        param_14);
LAB_0050477e:
      param_10 = "clone: couldn\'t create \'%s\'";
      uVar18 = pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        "clone: couldn\'t create \'%s\'",**(undefined8 **)(param_9 + 0x68),param_12,
                        (char *)param_13,param_14);
      uVar8 = extraout_RDX_05;
      break;
    }
    param_12 = (int *)*plVar7;
    if (param_12 != *(int **)PTR_canvas_class_00715918) {
      pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               "clone: can\'t clone \'%s\' because it\'s not an abstraction",*puVar3,param_12,
               (char *)param_13,param_14);
      plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar18 = pd_free(*(long **)(*plVar7 + 0x58));
      *(undefined8 *)(*plVar7 + 0x58) = 0;
      goto LAB_0050477e;
    }
    *(undefined8 *)(*plVar5 + 0x58) = 0;
    *(byte *)((long)plVar7 + 0xe9) = *(byte *)((long)plVar7 + 0xe9) | 8;
    pcVar13 = (char *)(uVar12 * 0x10);
    uVar12 = uVar12 + 1;
    param_10 = pcVar13;
    pvVar6 = resizebytes(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x40),(ulong)pcVar13,uVar12 * 0x10);
    *(void **)(param_9 + 0x40) = pvVar6;
    *(int *)(param_9 + 0x38) = *(int *)(param_9 + 0x38) + 1;
    *(long **)((long)pvVar6 + (long)pcVar13) = plVar7;
    plVar7 = getbytes((long)*(int *)(param_9 + 0x58) * 0x18);
    lVar10 = *(long *)(param_9 + 0x40);
    *(long **)(pcVar13 + lVar10 + 8) = plVar7;
    uVar8 = extraout_RDX_00;
    uVar17 = extraout_XMM0_Da_01;
    uVar19 = extraout_XMM0_Db_01;
    if (0 < *(int *)(param_9 + 0x58)) {
      lVar9 = 1;
      lVar16 = 0;
      while( true ) {
        *plVar7 = clone_out_class;
        *(int *)(plVar7 + 2) = *(int *)(param_9 + 0x84) + iVar11;
        plVar7[1] = *(long *)(*(long *)(param_9 + 0x60) + lVar16);
        uVar15 = (int)lVar9 - 1;
        param_10 = (char *)(ulong)uVar15;
        param_12 = (int *)0x0;
        obj_connect(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long *)(pcVar13 + lVar10),uVar15,plVar7,0);
        uVar8 = extraout_RDX_01;
        uVar17 = extraout_XMM0_Da_02;
        uVar19 = extraout_XMM0_Db_02;
        if (*(int *)(param_9 + 0x58) <= lVar9) break;
        lVar10 = *(long *)(param_9 + 0x40);
        lVar9 = lVar9 + 1;
        plVar7 = plVar7 + 3;
        lVar16 = lVar16 + 0x10;
      }
    }
    uVar18 = CONCAT44(uVar19,uVar17);
  } while (uVar12 != uVar14);
LAB_00504796:
  canvas_resume_dsp(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar4,
                    param_10,uVar8,param_12,(char *)param_13,param_14);
  return;
}


