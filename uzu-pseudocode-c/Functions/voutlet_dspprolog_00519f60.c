// Function : voutlet_dspprolog
// Namespace: 
// Entry    : 00519f60
// Prototype: undefined voutlet_dspprolog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int param_11, undefined8 param_12, char * param_13, undefined8 param_14, int param_15, int param_16, int param_17, int param_18)
// Body     : 00519f60 - 0051a0b4


void voutlet_dspprolog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long param_10,int param_11,undefined8 param_12,char *param_13,
                      undefined8 param_14,int param_15,int param_16,int param_17,int param_18)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *__s;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db_01;
  
  if (*(long *)(param_9 + 0x68) != 0) {
    *(byte *)(param_9 + 0x70) = *(byte *)(param_9 + 0x70) & 0xfe | (param_17 == 0 && param_18 != 0);
    if (param_10 == 0) {
      *(undefined8 *)(param_9 + 0x58) = 0;
    }
    else {
      iVar1 = outlet_getsignalindex(*(long **)(param_9 + 0x38));
      plVar4 = (long *)((long)iVar1 * 8 + param_10);
      *(long **)(param_9 + 0x58) = plVar4;
      if (param_18 == 0 && param_17 == 0) {
        uVar7 = *(undefined4 *)(*plVar4 + 0x18);
        *(byte *)(param_9 + 0x70) = *(byte *)(param_9 + 0x70) | 2;
        piVar3 = signal_new((ulong)*(uint *)(*plVar4 + 0x10),param_2,param_3,param_4,param_5,param_6
                            ,param_7,param_8,0,1,0,plVar4,param_13,param_14);
        **(undefined8 **)(param_9 + 0x58) = piVar3;
        plVar4 = *(long **)(param_9 + 0x58);
        *(undefined4 *)(*plVar4 + 0x18) = uVar7;
        uVar7 = extraout_XMM0_Da_00;
        uVar8 = extraout_XMM0_Db_00;
      }
      else {
        *(byte *)(param_9 + 0x70) = *(byte *)(param_9 + 0x70) & 0xfd;
        uVar7 = extraout_XMM0_Da;
        uVar8 = extraout_XMM0_Db;
      }
      if (param_17 != 0) {
        iVar1 = (param_16 * *(int *)*plVar4) / param_15;
        if (iVar1 < param_11) {
          iVar1 = param_11;
        }
        iVar2 = *(int *)(param_9 + 0x40);
        if (iVar1 != iVar2) {
          if (0 < *(int *)(param_9 + 0x60)) {
            lVar6 = 1;
            lVar5 = 0;
            while( true ) {
              __s = resizebytes(CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,*(void **)(*(long *)(param_9 + 0x68) + lVar5),
                                (long)iVar2 << 2,(long)iVar1 << 2);
              *(void **)(*(long *)(param_9 + 0x68) + lVar5) = __s;
              memset(__s,0,(long)iVar1 << 2);
              if (*(int *)(param_9 + 0x60) <= lVar6) break;
              iVar2 = *(int *)(param_9 + 0x40);
              lVar5 = lVar5 + 0x48;
              lVar6 = lVar6 + 1;
              uVar7 = extraout_XMM0_Da_01;
              uVar8 = extraout_XMM0_Db_01;
            }
          }
          *(int *)(param_9 + 0x40) = iVar1;
        }
      }
    }
  }
  return;
}


