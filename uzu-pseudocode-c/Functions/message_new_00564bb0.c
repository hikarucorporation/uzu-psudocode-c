// Function : message_new
// Namespace: 
// Entry    : 00564bb0
// Prototype: long * message_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00564bb0 - 00564d45


long * message_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,int *param_11,undefined8 param_12,char *param_13,
                  undefined8 param_14)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long extraout_RAX;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  long lVar12;
  uint uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_02;
  int iVar15;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_02;
  int iVar18;
  undefined4 extraout_XMM0_Db_03;
  
  uVar13 = (uint)param_10;
  plVar7 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,message_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar7[9] = 1;
  plVar7[0xc] = param_9;
  uVar16 = canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8);
  plVar7[0xd] = extraout_RAX;
  if (uVar13 == 0) {
    plVar7[8] = 0;
    plVar7[10] = 0;
    plVar7[0xc] = 0;
  }
  else {
    if (*param_11 == 2) {
      lVar8 = atom_getsymbol(param_11);
      plVar7[0xc] = lVar8;
      plVar7[0xb] = lVar8;
      uVar13 = uVar13 - 1;
      param_11 = param_11 + 4;
      uVar14 = extraout_XMM0_Da_00;
      uVar17 = extraout_XMM0_Db_00;
    }
    else {
      plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar8 = *plVar10;
      plVar7[0xc] = lVar8 + 0xc0;
      plVar7[0xb] = lVar8 + 0xc0;
      uVar14 = extraout_XMM0_Da_01;
      uVar17 = extraout_XMM0_Db_01;
    }
    piVar9 = resizebytes(CONCAT44(uVar17,uVar14),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,(void *)plVar7[10],plVar7[8] << 4,(long)(int)uVar13 << 4);
    uVar16 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    plVar7[10] = (long)piVar9;
    plVar7[8] = (long)(int)uVar13;
    if (0 < (int)uVar13) {
      iVar15 = *param_11;
      iVar18 = param_11[1];
      uVar16 = *(undefined8 *)param_11;
      iVar5 = param_11[2];
      iVar6 = param_11[3];
      *piVar9 = iVar15;
      piVar9[1] = iVar18;
      piVar9[2] = iVar5;
      piVar9[3] = iVar6;
      if (uVar13 != 1) {
        lVar8 = 1;
        if (uVar13 != 2) {
          lVar8 = 1;
          lVar12 = 0;
          do {
            puVar3 = (undefined8 *)((long)param_11 + lVar12 + 0x10);
            uVar16 = puVar3[1];
            puVar4 = (undefined8 *)(plVar7[10] + 0x10 + lVar12);
            *puVar4 = *puVar3;
            puVar4[1] = uVar16;
            piVar9 = (int *)((long)param_11 + lVar12 + 0x20);
            iVar15 = *piVar9;
            iVar18 = piVar9[1];
            iVar5 = piVar9[2];
            iVar6 = piVar9[3];
            piVar9 = (int *)(plVar7[10] + 0x20 + lVar12);
            *piVar9 = iVar15;
            piVar9[1] = iVar18;
            piVar9[2] = iVar5;
            piVar9[3] = iVar6;
            lVar12 = lVar12 + 0x20;
            lVar1 = lVar8 - ((ulong)uVar13 - 1 & 0xfffffffffffffffe);
            lVar8 = lVar8 + 2;
          } while (lVar1 != -1);
        }
        uVar16 = CONCAT44(iVar18,iVar15);
        if (((ulong)uVar13 - 1 & 1) != 0) {
          piVar9 = param_11 + lVar8 * 4;
          iVar15 = piVar9[1];
          uVar16 = *(undefined8 *)piVar9;
          iVar18 = piVar9[2];
          iVar5 = piVar9[3];
          piVar2 = (int *)(plVar7[10] + lVar8 * 0x10);
          *piVar2 = *piVar9;
          piVar2[1] = iVar15;
          piVar2[2] = iVar18;
          piVar2[3] = iVar5;
        }
      }
    }
  }
  plVar7[6] = message_proxy_class;
  plVar7[7] = (long)plVar7;
  uVar11 = 0;
  inlet_new(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar7,
            (long)(plVar7 + 6),0,0,param_13,param_14);
  plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar7,*plVar10 + 0xd8,extraout_RDX,uVar11,param_13,
             param_14);
  return plVar7;
}


