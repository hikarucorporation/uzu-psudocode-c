// Function : canvas_undo_set_connect
// Namespace: 
// Entry    : 005056c0
// Prototype: undefined canvas_undo_set_connect(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
// Body     : 005056c0 - 005056f2


void canvas_undo_set_connect
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


