// Function : gfxstub_cancel
// Namespace: 
// Entry    : 0054f7f0
// Prototype: undefined gfxstub_cancel(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0054f7f0 - 0054f8cd


void gfxstub_cancel(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                   undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *param2;
  undefined8 extraout_XMM0_Qa;
  char acStack_108 [128];
  undefined1 in_stack_ffffffffffffff78;
  
  if (gfxstub_list != (undefined8 *)0x0) {
    lVar1 = *(long *)(param_9 + 0x10);
    param2 = gfxstub_list;
    do {
      while (param2[2] == lVar1) {
        sprintf(acStack_108 + 0x80,".gfxstub%lx",(ulong)param2);
        puVar2 = gensym(acStack_108 + 0x80);
        pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    0x65470f,"s",*puVar2,param_12,param_13,param_14,in_stack_ffffffffffffff78);
        param2[1] = 0;
        param_12 = &gfxstub_list;
        if (gfxstub_list != param2) {
          puVar2 = gfxstub_list;
          do {
            param_12 = puVar2;
            puVar2 = (undefined8 *)param_12[4];
            if (puVar2 == (undefined8 *)0x0) goto LAB_0054f8b3;
          } while (puVar2 != param2);
          param_12 = param_12 + 4;
        }
        *param_12 = param2[4];
LAB_0054f8b3:
        param2 = gfxstub_list;
        if (gfxstub_list == (undefined8 *)0x0) {
          return;
        }
      }
      param2 = (undefined8 *)param2[4];
    } while (param2 != (undefined8 *)0x0);
  }
  return;
}


