// Function : message_click
// Namespace: 
// Entry    : 0052cdc0
// Prototype: undefined message_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 0052cdc0 - 0052ce80


void message_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,char *param_14)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_3f8 [8];
  undefined4 local_3f0;
  
  uVar1 = glist_isvisible(*(long *)(param_9 + 0x40));
  uVar3 = extraout_XMM0_Qa;
  if (uVar1 != 0) {
    lVar2 = glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,*(long *)(param_9 + 0x40),param_9,extraout_RDX,param_12,param_13,
                            param_14);
    lVar2 = rtext_gettag(lVar2);
    param_13 = local_3f8;
    sprintf(param_13,"%sR",lVar2);
    uVar3 = glist_getcanvas(*(long *)(param_9 + 0x40));
    param_14 = "-width";
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs ri",uVar3,"itemconfigure",param_13,"-width",5);
    uVar3 = clock_delay(DAT_00655910,*(double **)(param_9 + 0x48));
  }
  local_3f8[0] = '\x01';
  local_3f8[1] = '\0';
  local_3f8[2] = '\0';
  local_3f8[3] = '\0';
  local_3f0 = 0;
  binbuf_eval(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(uint **)(param_9 + 0x10),(uint *)(param_9 + 0x30),1,(long)local_3f8,param_13,
              param_14);
  return;
}


