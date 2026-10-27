// Function : default_new
// Namespace: 
// Entry    : 00570250
// Prototype: long * default_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00570250 - 005703ff


long * default_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,int *param_11,undefined8 param_12,char *param_13,
                  undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  long lVar11;
  uint uVar12;
  int extraout_XMM0_Da;
  int extraout_XMM0_Da_00;
  int iVar13;
  undefined4 extraout_XMM0_Da_01;
  int extraout_XMM0_Db;
  int extraout_XMM0_Db_00;
  int iVar14;
  undefined4 extraout_XMM0_Db_01;
  
  uVar12 = (uint)param_10;
  plVar6 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,default_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar6[0xc] = param_9;
  if (uVar12 == 0) {
    plVar6[8] = 0;
    plVar6[10] = 0;
    plVar6[0xc] = 0;
    iVar13 = extraout_XMM0_Da;
    iVar14 = extraout_XMM0_Db;
  }
  else {
    if (*param_11 == 2) {
      lVar7 = atom_getsymbol(param_11);
      plVar6[0xc] = lVar7;
      plVar6[0xb] = lVar7;
      uVar12 = uVar12 - 1;
      param_11 = param_11 + 4;
    }
    else {
      plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar7 = *plVar9;
      plVar6[0xc] = lVar7 + 0xc0;
      plVar6[0xb] = lVar7 + 0xc0;
    }
    plVar6[8] = (long)(int)uVar12;
    piVar8 = getbytes((long)(int)uVar12 << 4);
    plVar6[9] = (long)piVar8;
    plVar6[10] = (long)piVar8;
    iVar13 = extraout_XMM0_Da_00;
    iVar14 = extraout_XMM0_Db_00;
    if (0 < (int)uVar12) {
      uVar10 = *(undefined8 *)(param_11 + 2);
      *(undefined8 *)piVar8 = *(undefined8 *)param_11;
      *(undefined8 *)(piVar8 + 2) = uVar10;
      iVar13 = *param_11;
      iVar14 = param_11[1];
      iVar4 = param_11[2];
      iVar5 = param_11[3];
      *piVar8 = iVar13;
      piVar8[1] = iVar14;
      piVar8[2] = iVar4;
      piVar8[3] = iVar5;
      if (uVar12 != 1) {
        param_13 = (char *)((ulong)uVar12 - 1);
        lVar7 = 1;
        if (uVar12 != 2) {
          lVar7 = 1;
          lVar11 = 0;
          do {
            lVar3 = plVar6[10];
            puVar1 = (undefined8 *)((long)param_11 + lVar11 + 0x10);
            uVar10 = puVar1[1];
            puVar2 = (undefined8 *)(plVar6[9] + 0x10 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            puVar1 = (undefined8 *)((long)param_11 + lVar11 + 0x10);
            uVar10 = puVar1[1];
            puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            lVar3 = plVar6[10];
            puVar1 = (undefined8 *)((long)param_11 + lVar11 + 0x20);
            uVar10 = puVar1[1];
            puVar2 = (undefined8 *)(plVar6[9] + 0x20 + lVar11);
            *puVar2 = *puVar1;
            puVar2[1] = uVar10;
            piVar8 = (int *)((long)param_11 + lVar11 + 0x20);
            iVar13 = *piVar8;
            iVar14 = piVar8[1];
            iVar4 = piVar8[2];
            iVar5 = piVar8[3];
            piVar8 = (int *)(lVar3 + 0x20 + lVar11);
            *piVar8 = iVar13;
            piVar8[1] = iVar14;
            piVar8[2] = iVar4;
            piVar8[3] = iVar5;
            lVar11 = lVar11 + 0x20;
            lVar3 = lVar7 - ((ulong)param_13 & 0xfffffffffffffffe);
            lVar7 = lVar7 + 2;
          } while (lVar3 != -1);
        }
        if (((ulong)param_13 & 1) != 0) {
          lVar11 = plVar6[10];
          uVar10 = *(undefined8 *)(param_11 + lVar7 * 4 + 2);
          puVar1 = (undefined8 *)(plVar6[9] + lVar7 * 0x10);
          *puVar1 = *(undefined8 *)(param_11 + lVar7 * 4);
          puVar1[1] = uVar10;
          piVar8 = param_11 + lVar7 * 4;
          iVar13 = *piVar8;
          iVar14 = piVar8[1];
          iVar4 = piVar8[2];
          iVar5 = piVar8[3];
          piVar8 = (int *)(lVar11 + lVar7 * 0x10);
          *piVar8 = iVar13;
          piVar8[1] = iVar14;
          piVar8[2] = iVar4;
          piVar8[3] = iVar5;
        }
      }
    }
  }
  plVar6[6] = default_proxy_class;
  plVar6[7] = (long)plVar6;
  uVar10 = 0;
  inlet_new(CONCAT44(iVar14,iVar13),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            (long)plVar6,(long)(plVar6 + 6),0,0,param_13,param_14);
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar6,*plVar9 + 0xd8,extraout_RDX,uVar10,param_13,
             param_14);
  return plVar6;
}


