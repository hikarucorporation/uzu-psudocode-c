// Function : gensym
// Namespace: 
// Entry    : 0015b950
// Prototype: undefined8 * gensym(char * param_1)
// Body     : 0015b950 - 0015b955


undefined8 * gensym(char *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_gensym_007164a8)();
  return puVar1;
}


