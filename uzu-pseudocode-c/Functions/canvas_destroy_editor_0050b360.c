// Function : canvas_destroy_editor
// Namespace: 
// Entry    : 0050b360
// Prototype: undefined canvas_destroy_editor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 0050b360 - 0050b53a


void canvas_destroy_editor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined *param_14)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  void *pvVar3;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_98 [128];
  
  pvVar3 = (void *)param_9[0x18];
  if (pvVar3 != (void *)0x0) {
    puVar1 = *(undefined8 **)((long)pvVar3 + 0x20);
    pcVar4 = param_14;
    while (puVar1 != (undefined8 *)0x0) {
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)*puVar1,param_11,param_12,param_13,pcVar4);
      pvVar3 = (void *)param_9[0x18];
      param_11 = extraout_RDX;
      puVar1 = *(undefined8 **)((long)pvVar3 + 0x20);
    }
    if ((*(byte *)((long)pvVar3 + 0x88) & 0x20) != 0) {
      *(byte *)((long)pvVar3 + 0x88) = *(byte *)((long)pvVar3 + 0x88) & 0xdf;
      param_13 = local_98;
      sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      pcVar4 = "-fill";
      param_1 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,0,"crs rs",param_9,"itemconfigure",param_13,"-fill",0x51);
      pvVar3 = (void *)param_9[0x18];
      param_11 = extraout_RDX_00;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
    if (*(long **)((long)pvVar3 + 0x28) == (long *)0x0) goto LAB_0050b43e;
    param_1 = rtext_activate(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long **)((long)pvVar3 + 0x28),0);
    param_11 = extraout_RDX_01;
    while( true ) {
      pvVar3 = (void *)param_9[0x18];
LAB_0050b43e:
      if (*(undefined8 **)((long)pvVar3 + 0x18) == (undefined8 *)0x0) break;
      param_1 = rtext_free(*(undefined8 **)((long)pvVar3 + 0x18));
      param_11 = extraout_RDX_02;
    }
    puVar1 = *(undefined8 **)((long)pvVar3 + 0x20);
    pvVar2 = pvVar3;
    while (puVar1 != (undefined8 *)0x0) {
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)*puVar1,param_11,puVar1,param_13,pcVar4);
      pvVar2 = (void *)param_9[0x18];
      param_11 = extraout_RDX_03;
      puVar1 = *(undefined8 **)((long)pvVar2 + 0x20);
    }
    if ((*(byte *)((long)pvVar2 + 0x88) & 0x20) != 0) {
      *(byte *)((long)pvVar2 + 0x88) = *(byte *)((long)pvVar2 + 0x88) & 0xdf;
      sprintf(local_98,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs rs",param_9,"itemconfigure",local_98,"-fill",0x51);
    }
    guiconnect_notarget(DAT_006544a0,*(long **)((long)pvVar3 + 0x58));
    binbuf_free(*(void **)((long)pvVar3 + 0x48));
    binbuf_free(*(void **)((long)pvVar3 + 0x50));
    if (*(double **)((long)pvVar3 + 0x90) != (double *)0x0) {
      clock_free(*(double **)((long)pvVar3 + 0x90));
    }
    freebytes(pvVar3);
    param_9[0x18] = 0;
  }
  return;
}


