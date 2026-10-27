// Function : canvas_deselectall
// Namespace: 
// Entry    : 00510320
// Prototype: undefined canvas_deselectall(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00510320 - 005103e5


void canvas_deselectall(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  char local_98 [136];
  
  if ((param_9 != (long *)0x0) && (lVar1 = param_9[0x18], lVar1 != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x20);
    while (puVar2 != (undefined8 *)0x0) {
      param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long *)*puVar2,param_11,puVar2,param_13,param_14);
      lVar1 = param_9[0x18];
      param_11 = extraout_RDX;
      puVar2 = *(undefined8 **)(lVar1 + 0x20);
    }
    if ((*(byte *)(lVar1 + 0x88) & 0x20) != 0) {
      *(byte *)(lVar1 + 0x88) = *(byte *)(lVar1 + 0x88) & 0xdf;
      sprintf(local_98,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
      pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs rs",param_9,"itemconfigure",local_98,"-fill",0x51);
    }
  }
  return;
}


