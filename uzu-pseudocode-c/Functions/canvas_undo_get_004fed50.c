// Function : canvas_undo_get
// Namespace: 
// Entry    : 004fed50
// Prototype: undefined8 canvas_undo_get(long param_1)
// Body     : 004fed50 - 004fed5f


undefined8 canvas_undo_get(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xf0);
}


