// Function : glist_checkanddeselectall
// Namespace: 
// Entry    : 005050b0
// Prototype: undefined glist_checkanddeselectall(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 005050b0 - 00505195


void glist_checkanddeselectall
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  char local_98 [136];
  
  if (*param_9 == *(long *)PTR_canvas_class_00715918) {
    for (plVar1 = (long *)param_9[6]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
      param_1 = glist_checkanddeselectall
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
      in_RDX = extraout_RDX;
    }
    lVar2 = param_9[0x18];
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 0x20);
      while (puVar3 != (undefined8 *)0x0) {
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)*puVar3,in_RDX,puVar3,in_R8,in_R9);
        lVar2 = param_9[0x18];
        in_RDX = extraout_RDX_00;
        puVar3 = *(undefined8 **)(lVar2 + 0x20);
      }
      if ((*(byte *)(lVar2 + 0x88) & 0x20) != 0) {
        *(byte *)(lVar2 + 0x88) = *(byte *)(lVar2 + 0x88) & 0xdf;
        sprintf(local_98,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crs rs",param_9,"itemconfigure",local_98,"-fill",0x51);
        return;
      }
    }
  }
  return;
}


