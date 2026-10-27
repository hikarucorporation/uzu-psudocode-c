// Function : canvas_undo_set_disconnect
// Namespace: 
// Entry    : 00505700
// Prototype: undefined canvas_undo_set_disconnect(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
// Body     : 00505700 - 00505732


void canvas_undo_set_disconnect
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = getbytes(0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  return;
}


