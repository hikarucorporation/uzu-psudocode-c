// Function : glist_selectall
// Namespace: 
// Entry    : 00505260
// Prototype: undefined glist_selectall(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00505260 - 005053ac


void glist_selectall(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qa;
  char local_a8 [136];
  
  lVar1 = param_9[0x18];
  if (lVar1 != 0) {
    puVar4 = *(undefined8 **)(lVar1 + 0x20);
    while (puVar4 != (undefined8 *)0x0) {
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)*puVar4,param_11,puVar4,param_13,param_14);
      lVar1 = param_9[0x18];
      param_11 = extraout_RDX;
      puVar4 = *(undefined8 **)(lVar1 + 0x20);
    }
    if ((*(byte *)(lVar1 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar1 + 0x88) = *(byte *)(lVar1 + 0x88) & 0xdf;
      sprintf(local_a8,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs rs",param_9,"itemconfigure",local_a8,"-fill",0x51);
    }
    if (param_9[6] != 0) {
      puVar2 = getbytes(0x10);
      plVar3 = (long *)param_9[6];
      *(undefined8 **)(param_9[0x18] + 0x20) = puVar2;
      *puVar2 = plVar3;
      gobj_select(plVar3,(long)param_9);
      plVar3 = (long *)plVar3[1];
      puVar4 = puVar2;
      if (plVar3 != (long *)0x0) {
        do {
          puVar2 = getbytes(0x10);
          puVar4[1] = puVar2;
          *puVar2 = plVar3;
          gobj_select(plVar3,(long)param_9);
          plVar3 = (long *)plVar3[1];
          puVar4 = puVar2;
        } while (plVar3 != (long *)0x0);
      }
      puVar2[1] = 0;
    }
  }
  return;
}


