// Function : clone_in_list
// Namespace: 
// Entry    : 00504210
// Prototype: undefined clone_in_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00504210 - 00504308


void clone_in_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                  undefined8 param_14,undefined1 param_15)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  float fVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)param_2 >> 0x20);
  lVar7 = *(long *)(param_9 + 8);
  if (*(int *)(lVar7 + 0x48) == 0) {
    return;
  }
  uVar6 = (uint)param_11;
  if (((int)uVar6 < 1) || (*param_12 != 1)) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar7,
             "clone: no instance number in message",param_11,param_12,param_13,param_14);
    return;
  }
  uVar9 = 0;
  fVar10 = (float)*(int *)(lVar7 + 0x84);
  fVar8 = (float)param_12[2] - fVar10;
  uVar2 = (uint)fVar8;
  uVar3 = (ulong)uVar2;
  if (((int)uVar2 < 0) || (*(int *)(lVar7 + 0x38) <= (int)uVar2)) {
    pd_error((ulong)(uint)fVar8,CONCAT44(uVar11,fVar10),param_3,param_4,param_5,param_6,param_7,
             param_8,lVar7,"clone: instance number %d out of range",
             (ulong)(*(int *)(lVar7 + 0x84) + uVar2),uVar3,param_13,param_14);
    return;
  }
  if ((uVar6 < 2) || (param_12[4] != 2)) {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + uVar3 * 0x10);
    uVar2 = *(uint *)(param_9 + 0x14);
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar4 = (undefined8 *)(*plVar1 + 0xc0);
    uVar6 = uVar6 - 1;
    piVar5 = param_12 + 4;
    fVar8 = extraout_XMM0_Da;
    uVar9 = extraout_XMM0_Db;
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + uVar3 * 0x10);
    uVar2 = *(uint *)(param_9 + 0x14);
    puVar4 = *(undefined8 **)(param_12 + 6);
    uVar6 = uVar6 - 2;
    piVar5 = param_12 + 8;
  }
  obj_sendinlet(CONCAT44(uVar9,fVar8),CONCAT44(uVar11,fVar10),param_3,param_4,param_5,param_6,
                param_7,param_8,lVar7,(ulong)uVar2,puVar4,(ulong)uVar6,piVar5,param_14,param_15);
  return;
}


