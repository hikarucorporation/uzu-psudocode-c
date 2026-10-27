// Function : soundfile_copy
// Namespace: 
// Entry    : 00599d80
// Prototype: undefined soundfile_copy(undefined8 * param_1, undefined8 * param_2)
// Body     : 00599d80 - 00599d9e


void soundfile_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[6] = param_2[6];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


