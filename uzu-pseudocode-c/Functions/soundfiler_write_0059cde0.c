// Function : soundfiler_write
// Namespace: 
// Entry    : 0059cde0
// Prototype: undefined soundfiler_write(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, undefined8 param_13, undefined8 * param_14)
// Body     : 0059cde0 - 0059cf17


void soundfiler_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 param_10,uint param_11,int *param_12,undefined8 param_13,
                     undefined8 *param_14)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar7;
  undefined4 uVar8;
  int local_a8 [8];
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  float local_60;
  undefined4 local_58;
  float local_50;
  undefined4 local_48;
  float local_40;
  undefined4 local_38;
  float local_30;
  undefined4 local_28;
  undefined8 *local_20;
  
  uVar8 = (undefined4)((ulong)param_2 >> 0x20);
  piVar6 = local_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_78 = 0;
  piVar2 = soundfiler_dowrite(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              *(long *)(param_9 + 0x38),param_11,param_12,local_a8,param_14);
  plVar1 = *(long **)(param_9 + 0x30);
  local_60 = (float)local_a8[4];
  lVar4 = 0;
  if (-1 < local_88) {
    lVar4 = local_88;
  }
  local_68[0] = 1;
  fVar7 = (float)lVar4;
  local_58 = 1;
  local_48 = 1;
  local_40 = (float)local_a8[5];
  local_38 = 1;
  local_30 = (float)local_a8[6];
  local_28 = 2;
  pcVar5 = "b";
  if ((int)uStack_80 == 0) {
    pcVar5 = "l";
  }
  local_50 = fVar7;
  local_20 = gensym(pcVar5);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar8,fVar7),param_3,param_4,
              param_5,param_6,param_7,param_8,plVar1,*plVar3 + 0xc0,5,local_68,(char *)piVar6,
              param_14);
  outlet_float((ulong)(uint)(float)piVar2,CONCAT44(uVar8,fVar7),param_3,param_4,param_5,param_6,
               param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


