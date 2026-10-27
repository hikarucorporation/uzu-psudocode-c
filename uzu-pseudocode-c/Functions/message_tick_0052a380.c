// Function : message_tick
// Namespace: 
// Entry    : 0052a380
// Prototype: undefined message_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052a380 - 0052a411


void message_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char local_408 [1008];
  
  uVar1 = glist_isvisible(*(long *)(param_9 + 0x40));
  if (uVar1 != 0) {
    lVar3 = glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,*(long *)(param_9 + 0x40),param_9,extraout_RDX,param_12,param_13,
                            param_14);
    lVar3 = rtext_gettag(lVar3);
    sprintf(local_408,"%sR",lVar3);
    uVar4 = glist_getcanvas(*(long *)(param_9 + 0x40));
    uVar2 = glist_getzoom(*(long *)(param_9 + 0x40));
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs ri",uVar4,"itemconfigure",local_408,"-width",(char)uVar2);
  }
  return;
}


