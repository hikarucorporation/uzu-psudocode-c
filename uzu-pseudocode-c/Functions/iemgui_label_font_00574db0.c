// Function : iemgui_label_font
// Namespace: 
// Entry    : 00574db0
// Prototype: undefined iemgui_label_font(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, undefined8 param_11, int param_12, long param_13)
// Body     : 00574db0 - 00574f25


void iemgui_label_font(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      void *param_9,long param_10,undefined8 param_11,int param_12,long param_13)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  char local_a8 [128];
  
  glist_getzoom(*(long *)(param_10 + 0x30));
  fVar4 = (float)atom_getfloatarg(0,param_12,param_13);
  if ((int)fVar4 == 2) {
    *(undefined2 *)(param_10 + 0x5c) = 0x73;
    *(undefined4 *)(param_10 + 0x58) = 0x656d6974;
    uVar1 = 2;
  }
  else if ((int)fVar4 == 1) {
    *(undefined8 *)(param_10 + 0x58) = 0x63697465766c6568;
    *(undefined2 *)(param_10 + 0x60) = 0x61;
    uVar1 = 1;
  }
  else {
    strcpy((char *)(param_10 + 0x58),PTR_sys_font_00715cc0);
    uVar1 = 0;
  }
  *(uint *)(param_10 + 0x440) = *(uint *)(param_10 + 0x440) & 0xffffffc0 | uVar1;
  fVar4 = (float)atom_getfloatarg(1,param_12,param_13);
  iVar3 = 4;
  if (4 < (int)fVar4) {
    iVar3 = (int)fVar4;
  }
  *(int *)(param_10 + 0x444) = iVar3;
  uVar1 = glist_isvisible(*(long *)(param_10 + 0x30));
  if (uVar1 != 0) {
    sprintf(local_a8,"%pLABEL",param_9);
    gensym((char *)(param_10 + 0x58));
    gensym(PTR_sys_fontweight_00715e60);
    uVar2 = glist_getcanvas(*(long *)(param_10 + 0x30));
    pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,0,"crs rA",uVar2,"itemconfigure",local_a8,"-font",3);
  }
  return;
}


