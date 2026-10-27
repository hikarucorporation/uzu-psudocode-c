// Function : canvas_undo_set_font
// Namespace: 
// Entry    : 0050aa40
// Prototype: undefined canvas_undo_set_font(undefined4 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
// Body     : 0050aa40 - 0050aa6d


void canvas_undo_set_font
               (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = getbytes(0xc);
  *puVar1 = param_3;
  puVar1[1] = param_1;
  puVar1[2] = param_4;
  return;
}


