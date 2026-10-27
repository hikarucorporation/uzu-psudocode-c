// Function : toggle_nonzero
// Namespace: 
// Entry    : 005ad980
// Prototype: undefined toggle_nonzero(float param_1, long param_2)
// Body     : 005ad980 - 005ad990


void toggle_nonzero(float param_1,long param_2)

{
  if (param_1 != 0.0) {
    *(float *)(param_2 + 0x494) = param_1;
  }
  return;
}


