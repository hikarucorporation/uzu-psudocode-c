// Function : pdcontrol_args
// Namespace: 
// Entry    : 0054ff50
// Prototype: undefined pdcontrol_args(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0054ff50 - 00550056


void pdcontrol_args(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,ulong param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffd8;
  undefined4 local_1c;
  undefined8 local_18;
  
  lVar5 = *(long *)(param_9 + 0x30);
  uVar2 = (uint)param_1;
  if (0 < (int)uVar2) {
    if (uVar2 != 1) {
      param_12 = (ulong)(uVar2 & 0xfffffffe);
      uVar4 = 0;
      do {
        for (; *(long *)(lVar5 + 0xe0) == 0; lVar5 = *(long *)(lVar5 + 0x48)) {
        }
        lVar6 = *(long *)(lVar5 + 0x48);
        if (*(long *)(lVar5 + 0x48) == 0) {
          lVar6 = lVar5;
        }
        lVar5 = *(long *)(lVar6 + 0xe0);
        while (lVar5 == 0) {
          lVar6 = *(long *)(lVar6 + 0x48);
          lVar5 = *(long *)(lVar6 + 0xe0);
        }
        lVar5 = *(long *)(lVar6 + 0x48);
        if (*(long *)(lVar6 + 0x48) == 0) {
          lVar5 = lVar6;
        }
        uVar4 = uVar4 + 2;
      } while (uVar4 != (uVar2 & 0xfffffffe));
    }
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)(lVar5 + 0xe0);
      while (lVar6 == 0) {
        lVar5 = *(long *)(lVar5 + 0x48);
        lVar6 = *(long *)(lVar5 + 0xe0);
      }
      if (*(long *)(lVar5 + 0x48) != 0) {
        lVar5 = *(long *)(lVar5 + 0x48);
      }
    }
  }
  uVar8 = canvas_setcurrent(lVar5);
  puVar7 = &local_18;
  uVar8 = canvas_getargs(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_1c,
                         puVar7,extraout_RDX,param_12,param_13,param_14);
  canvas_unsetcurrent(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5,puVar7,
                      extraout_RDX_00,param_12,param_13,param_14,in_stack_ffffffffffffffd8);
  plVar1 = *(long **)(param_9 + 0x38);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,plVar1,*plVar3 + 0xc0,local_1c,local_18,param_13,param_14);
  return;
}


