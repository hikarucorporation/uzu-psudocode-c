// Function : iemgui_size
// Namespace: 
// Entry    : 00574f30
// Prototype: undefined iemgui_size(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 00574f30 - 00574f7f


void iemgui_size(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = glist_isvisible(*(long *)(param_10 + 0x30));
  if (uVar1 == 0) {
    return;
  }
  (**(code **)(param_10 + 0x38))(param_9,*(undefined8 *)(param_10 + 0x30),5);
  uVar2 = (**(code **)(param_10 + 0x38))(param_9,*(undefined8 *)(param_10 + 0x30),6);
  canvas_fixlinesfor(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long *)(param_10 + 0x30),param_9);
  return;
}


