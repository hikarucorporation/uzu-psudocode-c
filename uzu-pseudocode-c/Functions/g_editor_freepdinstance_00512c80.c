// Function : g_editor_freepdinstance
// Namespace: 
// Entry    : 00512c80
// Prototype: undefined g_editor_freepdinstance(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00512c80 - 00512d38


void g_editor_freepdinstance
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined1 in_AL;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar3 = (undefined8 *)**(undefined8 **)(*plVar2 + 0x48);
  uVar5 = extraout_RDX;
  uVar6 = extraout_XMM0_Qa;
  if ((void *)*puVar3 != (void *)0x0) {
    binbuf_free((void *)*puVar3);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar3 = (undefined8 *)**(undefined8 **)(*plVar2 + 0x48);
    uVar5 = extraout_RDX_00;
    uVar6 = extraout_XMM0_Qa_00;
  }
  lVar4 = puVar3[5];
  if (lVar4 != 0) {
    if ((code *)puVar3[3] == (code *)0x0) {
      bug(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"g_editor_freepdinstance",
          lVar4,uVar5,0,in_R8,in_R9,in_AL);
    }
    else {
      (*(code *)puVar3[3])(puVar3[6],lVar4,0);
    }
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar2;
  pvVar1 = *(void **)(**(long **)(lVar4 + 0x48) + 0x60);
  if (pvVar1 != (void *)0x0) {
    binbuf_free(pvVar1);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar4 = *plVar2;
  }
  freebytes((void *)**(undefined8 **)(lVar4 + 0x48));
  return;
}


