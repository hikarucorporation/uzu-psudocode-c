// Function : my_numbox_draw_update
// Namespace: 
// Entry    : 005a68b0
// Prototype: undefined my_numbox_draw_update(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 005a68b0 - 005a6a5b


void my_numbox_draw_update
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 uVar6;
  char local_a8 [136];
  
  uVar1 = glist_isvisible(param_10);
  if (uVar1 != 0) {
    uVar3 = glist_getcanvas(param_10);
    sprintf(local_a8,"%pNUMBER",(void *)param_9);
    if ((*(byte *)(param_9 + 0x443) & 8) == 0) {
      uVar5 = my_numbox_ftoa(param_9);
      uVar6 = 0xff;
      if ((*(byte *)(param_9 + 0x443) & 1) == 0) {
        uVar6 = (undefined1)*(undefined4 *)(param_9 + 0x44c);
      }
    }
    else {
      if (*(char *)(param_9 + 0x4c4) != '\0') {
        sVar4 = strlen((char *)(param_9 + 0x4c4));
        iVar2 = (int)sVar4;
        *(undefined1 *)(param_9 + 0x4c4 + (long)iVar2) = 0x3e;
        *(undefined1 *)(param_9 + 0x4c4 + (long)(iVar2 + 1)) = 0;
        pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                    "crs rk rs",uVar3,"itemconfigure",local_a8,"-fill",0);
        *(undefined1 *)(param_9 + 0x4c4 + (long)iVar2) = 0;
        return;
      }
      uVar5 = my_numbox_ftoa(param_9);
      uVar6 = 0;
    }
    pdgui_vmess(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rk rs",uVar3,
                "itemconfigure",local_a8,"-fill",uVar6);
    *(undefined1 *)(param_9 + 0x4c4) = 0;
  }
  return;
}


