// Function : linetraverser_start
// Namespace: 
// Entry    : 004fe320
// Prototype: undefined linetraverser_start(undefined8 * param_1, undefined8 param_2)
// Body     : 004fe320 - 004fe341


void linetraverser_start(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}


