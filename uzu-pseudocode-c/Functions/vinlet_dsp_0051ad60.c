// Function : vinlet_dsp
// Namespace: 
// Entry    : 0051ad60
// Prototype: undefined vinlet_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051ad60 - 0051ae4b


void vinlet_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  undefined *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar8;
  
  if (*(long *)(param_9 + 0x70) != 0) {
    if (*(long *)(param_9 + 0x58) != 0) {
      piVar2 = signal_new((ulong)*(uint *)(*param_10 + 0x10),param_2,param_3,param_4,param_5,param_6
                          ,param_7,param_8,0,1,0,param_12,param_13,param_14);
      *param_10 = (long)piVar2;
      signal_setborrowed(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,piVar2,*(undefined4 **)(param_9 + 0x58),
                         extraout_RDX,param_12,param_13,param_14);
      return;
    }
    uVar8 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_10,(ulong)*(uint *)(param_9 + 0x60),param_11,param_12,param_13,
                               param_14);
    puVar1 = PTR_vinlet_perform_00715670;
    uVar3 = (ulong)*(uint *)(param_9 + 0x60);
    if (0 < (int)*(uint *)(param_9 + 0x60)) {
      lVar7 = 0;
      uVar4 = 0;
      do {
        lVar5 = (long)*(int *)*param_10;
        lVar6 = 0;
        if (uVar4 == (int)uVar3 - 1) {
          lVar6 = lVar5;
        }
        uVar8 = dsp_add(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,5,
                        param_9,(int)uVar4 * lVar5 * 4 + *(long *)((int *)*param_10 + 2),
                        *(long *)(param_9 + 0x70) + lVar7,lVar6,lVar5);
        uVar4 = uVar4 + 1;
        uVar3 = (ulong)*(int *)(param_9 + 0x60);
        lVar7 = lVar7 + 0x48;
      } while ((long)uVar4 < (long)uVar3);
    }
    *(undefined4 *)(param_9 + 0x48) = 0;
  }
  return;
}


