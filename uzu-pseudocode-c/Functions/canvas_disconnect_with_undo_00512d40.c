// Function : canvas_disconnect_with_undo
// Namespace: 
// Entry    : 00512d40
// Prototype: undefined canvas_disconnect_with_undo(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00512d40 - 00512daa


void canvas_disconnect_with_undo
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined8 *puVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float local_38;
  float local_28;
  float local_18;
  
  uVar4 = param_3;
  uVar5 = param_4;
  canvas_disconnect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_28 = (float)param_3;
  local_38 = (float)param_4;
  local_18 = (float)param_2;
  iVar2 = (int)param_1;
  iVar3 = (int)local_18;
  puVar1 = getbytes(0x10);
  *puVar1 = CONCAT44(iVar3,iVar2);
  puVar1[1] = CONCAT44((int)local_38,(int)local_28);
  canvas_undo_add(CONCAT44(iVar3,iVar2),CONCAT44(local_18,param_1),uVar4,uVar5,param_5,param_6,
                  param_7,param_8,param_9,2,"disconnect",puVar1,in_R8,in_R9);
  return;
}


