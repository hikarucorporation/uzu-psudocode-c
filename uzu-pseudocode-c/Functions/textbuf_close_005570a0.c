// Function : textbuf_close
// Namespace: 
// Entry    : 005570a0
// Prototype: undefined textbuf_close(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005570a0 - 005570dd


void textbuf_close(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 unaff_BL;
  
  if (*(long *)(param_9 + 0x40) != 0) {
    pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x65a1ef,"^",param_9
                ,param_12,param_13,param_14,unaff_BL);
    guiconnect_notarget(DAT_006544a0,*(long **)(param_9 + 0x40));
    *(undefined8 *)(param_9 + 0x40) = 0;
  }
  return;
}


