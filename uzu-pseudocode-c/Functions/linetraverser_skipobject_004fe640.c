// Function : linetraverser_skipobject
// Namespace: 
// Entry    : 004fe640
// Prototype: undefined linetraverser_skipobject(long param_1)
// Body     : 004fe640 - 004fe64e


void linetraverser_skipobject(long param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x10);
  return;
}


