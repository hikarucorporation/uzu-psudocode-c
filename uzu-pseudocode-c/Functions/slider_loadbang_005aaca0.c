// Function : slider_loadbang
// Namespace: 
// Entry    : 005aaca0
// Prototype: undefined slider_loadbang(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005aaca0 - 005aaccb


void slider_loadbang(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if ((param_1 == 0.0) && ((*(byte *)(param_9 + 0x448) & 1) != 0)) {
    uVar1 = (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
    slider_bang(uVar1,(double)CONCAT44(uVar3,uVar2),param_3,param_4,param_5,param_6,param_7,param_8,
                param_9);
    return;
  }
  return;
}


