// Function : fielddesc_setfloat_var
// Namespace: 
// Entry    : 00528830
// Prototype: undefined fielddesc_setfloat_var(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined2 * param_9, undefined8 * param_10)
// Body     : 00528830 - 00528a0a


void fielddesc_setfloat_var
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined2 *param_9,undefined8 *param_10)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *__s;
  undefined8 *puVar4;
  char *pcVar5;
  size_t __n;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar8;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  char local_418 [1000];
  
  *param_9 = 0x101;
  pcVar5 = (char *)*param_10;
  pcVar3 = strchr(pcVar5,0x28);
  if (((pcVar3 == (char *)0x0) || (__s = strchr(pcVar5,0x29), __s == (char *)0x0)) || (__s < pcVar3)
     ) {
    *(undefined8 **)(param_9 + 4) = param_10;
    *(undefined8 *)(param_9 + 8) = 0;
    *(undefined8 *)(param_9 + 0xc) = 0;
    *(undefined4 *)(param_9 + 0x10) = 0;
    return;
  }
  iVar1 = (int)pcVar3 - (int)pcVar5;
  __n = 0x3e3;
  if (iVar1 < 0x3e3) {
    __n = (long)iVar1;
  }
  strncpy(local_418,pcVar5,__n);
  local_418[__n] = '\0';
  puVar4 = gensym(local_418);
  *(undefined8 **)(param_9 + 4) = puVar4;
  uVar2 = __isoc99_sscanf(pcVar3,"(%lf:%lf)(%lf:%lf)(%lf)",&local_430,&local_438,&local_440,
                          &local_448,&local_450);
  fStack_420 = (float)local_440;
  fStack_41c = (float)local_448;
  uVar8 = CONCAT44(fStack_41c,fStack_420);
  local_428 = (float)local_430;
  fStack_424 = (float)local_438;
  *(float *)(param_9 + 8) = local_428;
  *(float *)(param_9 + 10) = fStack_424;
  *(float *)(param_9 + 0xc) = fStack_420;
  *(float *)(param_9 + 0xe) = fStack_41c;
  uVar7 = (undefined4)((ulong)local_450 >> 0x20);
  fVar6 = (float)local_450;
  *(float *)(param_9 + 0x10) = fVar6;
  if ((1 < (int)uVar2) && (uVar2 != 3)) {
    if (uVar2 < 4) {
      pcVar5 = strchr(__s,0x28);
      fVar6 = extraout_XMM0_Da;
      uVar7 = extraout_XMM0_Db;
      if (pcVar5 != (char *)0x0) goto LAB_0052899c;
    }
    else if (uVar2 != 4) {
      return;
    }
    pcVar5 = strchr(__s,0x28);
    if ((pcVar5 == (char *)0x0) ||
       (pcVar5 = strchr(pcVar5 + 1,0x28), fVar6 = extraout_XMM0_Da_00, uVar7 = extraout_XMM0_Db_00,
       pcVar5 == (char *)0x0)) {
      if (uVar2 == 2) {
        *(undefined4 *)(param_9 + 0x10) = 0;
        *(float *)(param_9 + 0xc) = local_428;
        *(float *)(param_9 + 0xe) = fStack_424;
        return;
      }
      if (uVar2 == 4) {
        *(undefined4 *)(param_9 + 0x10) = 0;
        return;
      }
      return;
    }
  }
LAB_0052899c:
  post(CONCAT44(uVar7,fVar6),uVar8,param_3,param_4,param_5,param_6,param_7,param_8,"parse error: %s"
      );
  *(undefined8 *)(param_9 + 8) = 0;
  *(undefined8 *)(param_9 + 0xc) = 0;
  *(undefined4 *)(param_9 + 0x10) = 0;
  return;
}


