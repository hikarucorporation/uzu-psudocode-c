// Function : array_rangeop_getrange
// Namespace: 
// Entry    : 0054b360
// Prototype: undefined8 array_rangeop_getrange(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, int * param_11, int * param_12, int * param_13, undefined8 param_14)
// Body     : 0054b360 - 0054b455


undefined8
array_rangeop_getrange
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long *param_10,int *param_11,int *param_12,int *param_13,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long extraout_RAX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db_00;
  int local_48;
  int local_44;
  char local_40 [8];
  long local_38;
  
  piVar3 = (int *)array_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,param_9,&local_38,param_11,param_12,(char *)param_13,
                                      param_14);
  if (piVar3 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                                param_5,param_6,param_7,param_8,*(long *)(piVar3 + 4));
    pcVar6 = local_40;
    uVar7 = template_find_field(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                extraout_RAX,*(long *)(param_9 + 0x70),&local_44,&local_48,pcVar6,
                                param_14);
    if (((int)uVar7 == 0) || (local_48 != 0)) {
      uVar7 = 0;
      pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"can\'t find field %s in struct %s",
               **(undefined8 **)(param_9 + 0x70),**(undefined8 **)(piVar3 + 4),pcVar6,param_14);
    }
    else {
      iVar2 = (int)*(float *)(param_9 + 0x68);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (*piVar3 < iVar2) {
        iVar2 = *piVar3;
      }
      iVar1 = piVar3[1];
      if (0.0 <= *(float *)(param_9 + 0x6c)) {
        iVar5 = (int)*(float *)(param_9 + 0x6c);
        iVar4 = *piVar3 - iVar2;
        if (iVar2 + iVar5 <= *piVar3) {
          iVar4 = iVar5;
        }
      }
      else {
        iVar4 = *piVar3 - iVar2;
      }
      *param_10 = (long)(iVar2 * iVar1) + (long)local_44 + *(long *)(piVar3 + 2);
      *param_11 = iVar4;
      *param_12 = iVar1;
      *param_13 = iVar2;
      uVar7 = 1;
    }
  }
  return uVar7;
}


