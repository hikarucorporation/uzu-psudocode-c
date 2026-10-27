// Function : initmess_new
// Namespace: 
// Entry    : 0056d600
// Prototype: long * initmess_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0056d600 - 0056d79d


long * initmess_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int *param_11,long param_12,char *param_13,
                   undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  long lVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  uVar9 = (uint)param_10;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,initmess_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar4[7] = 1;
  plVar4[0xb] = param_9;
  if (uVar9 == 0) {
    plVar4[6] = 0;
    plVar4[9] = 0;
    plVar4[0xb] = 0;
  }
  else {
    if (*param_11 == 2) {
      lVar5 = atom_getsymbol(param_11);
      plVar4[0xb] = lVar5;
      plVar4[10] = lVar5;
      uVar9 = uVar9 - 1;
      param_11 = param_11 + 4;
    }
    else {
      plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
      param_12 = *plVar7 + 0xc0;
      plVar4[0xb] = param_12;
      plVar4[10] = param_12;
    }
    plVar4[6] = (long)(int)uVar9;
    puVar6 = getbytes((long)(int)uVar9 << 4);
    plVar4[8] = (long)puVar6;
    plVar4[9] = (long)puVar6;
    if (0 < (int)uVar9) {
      uVar3 = *(undefined8 *)(param_11 + 2);
      *puVar6 = *(undefined8 *)param_11;
      puVar6[1] = uVar3;
      uVar3 = *(undefined8 *)(param_11 + 2);
      *puVar6 = *(undefined8 *)param_11;
      puVar6[1] = uVar3;
      if (uVar9 != 1) {
        param_13 = (char *)((ulong)uVar9 - 1);
        lVar5 = 1;
        if (uVar9 != 2) {
          lVar5 = 1;
          lVar8 = 0;
          do {
            lVar2 = plVar4[9];
            puVar6 = (undefined8 *)((long)param_11 + lVar8 + 0x10);
            uVar3 = puVar6[1];
            puVar1 = (undefined8 *)(plVar4[8] + 0x10 + lVar8);
            *puVar1 = *puVar6;
            puVar1[1] = uVar3;
            puVar6 = (undefined8 *)((long)param_11 + lVar8 + 0x10);
            uVar3 = puVar6[1];
            puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8);
            *puVar1 = *puVar6;
            puVar1[1] = uVar3;
            lVar2 = plVar4[9];
            puVar6 = (undefined8 *)((long)param_11 + lVar8 + 0x20);
            uVar3 = puVar6[1];
            puVar1 = (undefined8 *)(plVar4[8] + 0x20 + lVar8);
            *puVar1 = *puVar6;
            puVar1[1] = uVar3;
            puVar6 = (undefined8 *)((long)param_11 + lVar8 + 0x20);
            uVar3 = puVar6[1];
            puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar8);
            *puVar1 = *puVar6;
            puVar1[1] = uVar3;
            lVar8 = lVar8 + 0x20;
            lVar2 = lVar5 - ((ulong)param_13 & 0xfffffffffffffffe);
            lVar5 = lVar5 + 2;
            param_12 = 1;
          } while (lVar2 != -1);
        }
        if (((ulong)param_13 & 1) != 0) {
          param_12 = plVar4[8];
          lVar8 = plVar4[9];
          uVar3 = *(undefined8 *)(param_11 + lVar5 * 4 + 2);
          puVar6 = (undefined8 *)(param_12 + lVar5 * 0x10);
          *puVar6 = *(undefined8 *)(param_11 + lVar5 * 4);
          puVar6[1] = uVar3;
          uVar3 = *(undefined8 *)(param_11 + lVar5 * 4 + 2);
          puVar6 = (undefined8 *)(lVar8 + lVar5 * 0x10);
          *puVar6 = *(undefined8 *)(param_11 + lVar5 * 4);
          puVar6[1] = uVar3;
        }
      }
    }
  }
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar4,*plVar7 + 0xd8,extraout_RDX,param_12,param_13,param_14);
  return plVar4;
}


