// Function : libpd_set_symbol
// Namespace: 
// Entry    : 004d72f0
// Prototype: undefined libpd_set_symbol(undefined4 * param_1, char * param_2)
// Body     : 004d72f0 - 004d7307


void libpd_set_symbol(undefined4 *param_1,char *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 2;
  puVar1 = gensym(param_2);
  *(undefined8 **)(param_1 + 2) = puVar1;
  return;
}


