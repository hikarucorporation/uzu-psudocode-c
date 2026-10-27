// Function : canvas_create_editor
// Namespace: 
// Entry    : 0050b2a0
// Prototype: undefined canvas_create_editor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0050b2a0 - 0050b356


void canvas_create_editor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_48 [48];
  
  if (*(long *)(param_9 + 0xc0) == 0) {
    pvVar1 = getbytes(0xa0);
    puVar2 = binbuf_new();
    *(undefined4 **)((long)pvVar1 + 0x48) = puVar2;
    puVar2 = binbuf_new();
    *(undefined4 **)((long)pvVar1 + 0x50) = puVar2;
    *(long *)((long)pvVar1 + 0x60) = param_9;
    sprintf(acStack_48,".x%lx",param_9);
    puVar3 = gensym(acStack_48);
    plVar4 = guiconnect_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,param_9,(long)puVar3,extraout_RDX,param_12,param_13,param_14);
    *(long **)((long)pvVar1 + 0x58) = plVar4;
    *(undefined8 *)((long)pvVar1 + 0x90) = 0;
    *(void **)(param_9 + 0xc0) = pvVar1;
    for (plVar4 = *(long **)(param_9 + 0x30); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      plVar5 = pd_checkobject(plVar4);
      if (plVar5 != (long *)0x0) {
        rtext_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)plVar5,extraout_RDX_00,param_12,param_13,param_14);
      }
    }
  }
  return;
}


