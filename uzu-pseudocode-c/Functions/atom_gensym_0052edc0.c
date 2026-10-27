// Function : atom_gensym
// Namespace: 
// Entry    : 0052edc0
// Prototype: undefined8 * atom_gensym(int * param_1)
// Body     : 0052edc0 - 0052ee13


undefined8 * atom_gensym(int *param_1)

{
  undefined8 *puVar1;
  char local_28 [40];
  
  if (*param_1 == 1) {
    sprintf(local_28,"%g",(double)(float)param_1[2]);
    puVar1 = gensym(local_28);
    return puVar1;
  }
  if (*param_1 == 2) {
    return *(undefined8 **)(param_1 + 2);
  }
  builtin_strncpy(local_28,"???",4);
  puVar1 = gensym(local_28);
  return puVar1;
}


