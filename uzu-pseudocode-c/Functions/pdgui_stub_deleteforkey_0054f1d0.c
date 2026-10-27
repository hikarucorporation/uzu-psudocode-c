// Function : pdgui_stub_deleteforkey
// Namespace: 
// Entry    : 0054f1d0
// Prototype: undefined pdgui_stub_deleteforkey(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0054f1d0 - 0054f2ad


void pdgui_stub_deleteforkey
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
               undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 *param2;
  undefined8 *puVar2;
  undefined8 extraout_XMM0_Qa;
  char acStack_108 [128];
  undefined1 in_stack_ffffffffffffff78;
  
  puVar2 = gfxstub_list;
joined_r0x0054f1e8:
  do {
    while( true ) {
      param2 = puVar2;
      if (param2 == (undefined8 *)0x0) {
        return;
      }
      if (param2[2] == param_9) break;
      puVar2 = (undefined8 *)param2[4];
    }
    sprintf(acStack_108 + 0x80,".gfxstub%lx",(ulong)param2);
    puVar2 = gensym(acStack_108 + 0x80);
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65470f,
                "s",*puVar2,param_12,param_13,param_14,in_stack_ffffffffffffff78);
    param2[1] = 0;
    param_12 = &gfxstub_list;
    if (gfxstub_list != param2) {
      puVar1 = gfxstub_list;
      do {
        param_12 = puVar1;
        puVar1 = (undefined8 *)param_12[4];
        puVar2 = gfxstub_list;
        if (puVar1 == (undefined8 *)0x0) goto joined_r0x0054f1e8;
      } while (puVar1 != param2);
      param_12 = param_12 + 4;
    }
    *param_12 = param2[4];
    puVar2 = gfxstub_list;
  } while( true );
}


